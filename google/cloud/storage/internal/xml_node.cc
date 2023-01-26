// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/xml_node.h"
#include "google/cloud/storage/internal/xml_parser_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_replace_quiet.h"
#include "google/cloud/internal/make_status.h"
#include "absl/strings/ascii.h"
#include <iterator>
#include <regex>
#include <stack>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {

bool IsSpace(char c) {
  return absl::ascii_isspace(static_cast<unsigned char>(c));
}

std::string StripTrailingSpaces(absl::string_view str) {
  return std::string(absl::StripTrailingAsciiWhitespace(str));
}

std::string EscapeTagName(absl::string_view tag_name) {
  return absl::StrReplaceAll(tag_name, {{"&", "&amp;"},
                                        {"<", "&lt;"},
                                        {">", "&gt;"},
                                        {"\"", "&quot;"},
                                        {"'", "&apos;"}});
}

std::string UnescapeTagName(absl::string_view tag_name) {
  return absl::StrReplaceAll(tag_name, {{"&amp;", "&"},
                                        {"&lt;", "<"},
                                        {"&gt;", ">"},
                                        {"&quot;", "\""},
                                        {"&apos;", "'"}});
}

std::string EscapeTextContent(absl::string_view text_content) {
  return absl::StrReplaceAll(text_content,
                             {{"&", "&amp;"}, {"<", "&lt;"}, {">", "&gt;"}});
}

std::string UnescapeTextContent(absl::string_view text_content) {
  return absl::StrReplaceAll(text_content,
                             {{"&amp;", "&"}, {"&lt;", "<"}, {"&gt;", ">"}});
}

enum class ParseState {
  kInit,
  kStartTag,
  kReadingTag,
  kReadingText,
  kReadingAttr,
  kEndTag,
  kBeginClosingTag,
  kReadingClosingTag,
};

class XmlParser {
 public:
  explicit XmlParser(absl::string_view content, Options const& options)
      : content_(content), options_(options) {}

  StatusOr<std::shared_ptr<XmlNode>> Parse() {
    auto res = SkipXmlDeclaration();
    if (!res.ok()) return res;
    for (; i_ < content_.length(); ++i_) {
      auto result = MainLoop();
      if (!result.ok()) return result;
    }
    return root_;
  }

 private:
  Status SkipXmlDeclaration();

  Status MainLoop();
  Status HandleLt();
  Status HandleStartTag(char c);
  Status HandleReadingTag(char c);
  Status HandleReadingAttr(char c);
  void HandleEndTag(char c);
  Status HandleBeginClosingTag(char c);
  Status HandleReadingClosingTag(char c);

  Status CheckLimits();

  StatusOr<std::shared_ptr<XmlNode>> AppendTagNode(std::string tag_name);
  StatusOr<std::shared_ptr<XmlNode>> AppendTextNode(std::string text_content);

  absl::string_view content_;
  Options const& options_;
  std::size_t i_ = 0;
  std::size_t node_count_ = 0;
  std::shared_ptr<XmlNode> root_ = XmlNode::CreateRoot();
  std::shared_ptr<XmlNode> current_parent_ = root_;
  std::string tag_name_;
  std::string text_content_;
  std::string close_tag_;
  std::stack<std::shared_ptr<XmlNode>> parent_history_;
  ParseState state_ = ParseState::kInit;
};

Status XmlParser::SkipXmlDeclaration() {
  // Skip the XML declaration.
  constexpr static absl::string_view kXmlDeclStart = "<?xml";
  constexpr static absl::string_view kXmlDeclEnd = "?>";
  auto xml_decl_start_pos = content_.find(kXmlDeclStart);
  if (xml_decl_start_pos == std::string::npos) {
    // Just allow XML without declaration.
    return Status();
  }
  auto xml_decl_end_pos =
      content_.find(kXmlDeclEnd, xml_decl_start_pos + kXmlDeclStart.size());
  if (xml_decl_end_pos == std::string::npos) {
    return internal::InvalidArgumentError("XML declaration doesn't end",
                                          GCP_ERROR_INFO());
  }
  i_ = xml_decl_end_pos + kXmlDeclEnd.size();
  return Status();
}

Status XmlParser::MainLoop() {
  auto c = content_[i_];
  if (c == '<') {
    auto result = HandleLt();
    if (!result.ok()) return result;
  } else if (state_ == ParseState::kStartTag) {
    auto result = HandleStartTag(c);
    if (!result.ok()) return result;
  } else if (state_ == ParseState::kReadingTag) {
    auto result = HandleReadingTag(c);
    if (!result.ok()) return result;
  } else if (state_ == ParseState::kReadingAttr) {
    auto result = HandleReadingAttr(c);
    if (!result.ok()) return result;
  } else if (state_ == ParseState::kEndTag) {
    HandleEndTag(c);
  } else if (state_ == ParseState::kReadingText) {
    // Append the character until we see the next '<'.
    text_content_ += c;
  } else if (state_ == ParseState::kBeginClosingTag) {
    auto result = HandleBeginClosingTag(c);
    if (!result.ok()) return result;
  } else if (state_ == ParseState::kReadingClosingTag) {
    auto result = HandleReadingClosingTag(c);
    if (!result.ok()) return result;
  }
  return Status();
}

Status XmlParser::HandleLt() {
  if (state_ == ParseState::kReadingText) {
    // The parser was reading text part. Add a text node to the current
    // parent if the limits allow.
    auto text_node =
        AppendTextNode(UnescapeTextContent(StripTrailingSpaces(text_content_)));
    if (!text_node) return std::move(text_node).status();
  }
  state_ = ParseState::kStartTag;
  return Status();
}

Status XmlParser::HandleStartTag(char c) {
  if (c == '/') {
    state_ = ParseState::kBeginClosingTag;
  } else if (!IsSpace(c)) {
    state_ = ParseState::kReadingTag;
    tag_name_ = c;
  }
  return Status();
}

Status XmlParser::HandleReadingTag(char c) {
  if (IsSpace(c)) {
    state_ = ParseState::kReadingAttr;
  } else if (c == '>') {
    // The tag ends. We create a new tag node and set it as the current
    // parent. It will increase both the node_count_ and the depth.
    auto tag_node = AppendTagNode(UnescapeTagName(tag_name_));
    if (!tag_node) return std::move(tag_node).status();
    parent_history_.push(std::move(current_parent_));
    current_parent_ = std::move(*tag_node);
    state_ = ParseState::kEndTag;
  } else if (c == '/') {
    // This is a tag with this form <TAG/>. Read ahead to the next '>'.
    auto close_tag_pos = content_.find('>', i_ + 1);
    if (close_tag_pos == std::string::npos) {
      return internal::InvalidArgumentError("The tag never closes.",
                                            GCP_ERROR_INFO());
    }
    i_ = close_tag_pos + 1;
    auto tag_node = AppendTagNode(UnescapeTagName(tag_name_));
    if (!tag_node) return std::move(tag_node).status();
    state_ = ParseState::kEndTag;
  } else {
    tag_name_ += c;
  }
  return Status();
}

Status XmlParser::HandleReadingAttr(char c) {
  // We don't need the attributes at all. We ignore them.
  if (c == '>') {
    auto tag_node = AppendTagNode(UnescapeTagName(tag_name_));
    if (!tag_node) return std::move(tag_node).status();
    parent_history_.push(std::move(current_parent_));
    current_parent_ = std::move(*tag_node);
    state_ = ParseState::kEndTag;
  }
  return Status();
}

void XmlParser::HandleEndTag(char c) {
  if (IsSpace(c)) {
    // Left trim text content.
    return;
  }
  // A text part starts.
  text_content_ = c;
  state_ = ParseState::kReadingText;
}

Status XmlParser::HandleBeginClosingTag(char c) {
  if (IsSpace(c)) {
    // Left trim tag names.
    return Status();
  }
  close_tag_ = c;
  state_ = ParseState::kReadingClosingTag;
  if (c == '>') {
    // "</>" is invalid.
    return internal::InvalidArgumentError("Invalid tag '</>' found",
                                          GCP_ERROR_INFO());
  }
  return Status();
}

Status XmlParser::HandleReadingClosingTag(char c) {
  if (IsSpace(c)) {
    return Status();
  }
  if (c == '>') {
    auto close_tag = UnescapeTagName(StripTrailingSpaces(close_tag_));
    if (current_parent_->GetTagName() != close_tag) {
      // Mismatched close tag.
      return internal::InvalidArgumentError(
          absl::StrCat("Mismatched close tag found, starttag: '",
                       current_parent_->GetTagName(), "' and the endtag: '",
                       close_tag, "'."),
          GCP_ERROR_INFO());
    }
    // The current tag ends. Set the current marker to the previous parent.
    current_parent_ = std::move(parent_history_.top());
    parent_history_.pop();
    state_ = ParseState::kEndTag;
  } else {
    close_tag_ += c;
  }
  return Status();
}

Status XmlParser::CheckLimits() {
  if (node_count_ == options_.get<XmlParserMaxNodeCount>()) {
    return internal::InvalidArgumentError(
        absl::StrCat("Exceeding max node count of ",
                     options_.get<XmlParserMaxNodeCount>()),
        GCP_ERROR_INFO());
  }
  if (parent_history_.size() == options_.get<XmlParserMaxNodeDepth>()) {
    return internal::InvalidArgumentError(
        absl::StrCat("Exceeding max node depth of ",
                     options_.get<XmlParserMaxNodeDepth>()),
        GCP_ERROR_INFO());
  }
  return Status();
}

StatusOr<std::shared_ptr<XmlNode>> XmlParser::AppendTagNode(
    std::string tag_name) {
  auto res = CheckLimits();
  if (!res.ok()) return res;
  auto ret = current_parent_->AppendTagNode(std::move(tag_name));
  ++node_count_;
  return ret;
}

StatusOr<std::shared_ptr<XmlNode>> XmlParser::AppendTextNode(
    std::string text_content) {
  auto res = CheckLimits();
  if (!res.ok()) return res;
  auto ret = current_parent_->AppendTextNode(std::move(text_content));
  ++node_count_;
  return ret;
}

}  // namespace

StatusOr<std::shared_ptr<XmlNode>> XmlNode::Parse(absl::string_view content,
                                                  Options options) {
  internal::CheckExpectedOptions<XmlParserOptionsList>(options, __func__);
  options = XmlParserDefaultOptions(std::move(options));

  // Check size first.
  if (content.size() > options.get<XmlParserMaxSourceSize>()) {
    return internal::InvalidArgumentError(
        absl::StrCat("The source size ", content.size(),
                     " exceeds the max size of ",
                     options.get<XmlParserMaxSourceSize>()),
        GCP_ERROR_INFO());
  }

  // Remove unnecessary bits.
  static auto* unnecessary_re = new std::regex{
      absl::StrCat("(",
                   R"(<!DOCTYPE[^>[]*(\[[^\]]*\])?>)",  // DTD(DOCTYPE)
                   "|",
                   R"(<!\[CDATA\[[\s\S]*?\]\]>)",  // CDATA
                   "|",
                   R"(<!--[\s\S]*?-->)",  // XML comments
                   ")"),
      std::regex::icase | std::regex::nosubs | std::regex::optimize};
  std::string trimmed;
  std::regex_replace(std::back_inserter(trimmed), content.begin(),
                     content.end(), *unnecessary_re, "");

  return XmlParser(trimmed, options).Parse();
}

std::shared_ptr<XmlNode> XmlNode::CompleteMultipartUpload(
    std::map<std::size_t, std::string> const& parts) {
  auto root = CreateRoot();
  auto target_node = root->AppendTagNode("CompleteMultipartUpload");
  for (auto const& p : parts) {
    auto part_tag = target_node->AppendTagNode("Part");
    part_tag->AppendTagNode("PartNumber")
        ->AppendTextNode(std::to_string(p.first));
    part_tag->AppendTagNode("ETag")->AppendTextNode(
        EscapeTextContent(p.second));
  }
  return root;
}

std::string XmlNode::GetConcatenatedText() const {
  // For non-tag element, just returns the text content.
  if (!text_content_.empty()) return text_content_;

  std::string ret;
  std::stack<std::shared_ptr<XmlNode const>> stack;
  stack.push(shared_from_this());
  while (!stack.empty()) {
    auto const cur = stack.top();
    stack.pop();
    ret += cur->text_content_;
    // Push onto the stack in reverse order.
    for (auto it = cur->children_.rbegin(); it != cur->children_.rend(); ++it) {
      stack.push(*it);
    }
  }
  return ret;
}

std::vector<std::shared_ptr<XmlNode const>> XmlNode::GetChildren() const {
  return {children_.begin(), children_.end()};
}

std::vector<std::shared_ptr<XmlNode const>> XmlNode::GetChildren(
    std::string const& tag_name) const {
  std::vector<std::shared_ptr<XmlNode const>> ret;
  for (auto const& child : children_) {
    if (child->tag_name_ == tag_name) ret.push_back(child);
  }
  return ret;
}

std::string XmlNode::ToString(int indent_width,  // NOLINT(misc-no-recursion)
                              int indent_level) const {
  auto const separator = std::string(indent_width == 0 ? "" : "\n");
  auto const indentation = std::string(indent_width * indent_level, ' ');
  if (!tag_name_.empty()) ++indent_level;

  auto ret = [&] {
    if (!tag_name_.empty()) {
      return absl::StrCat(indentation, "<", EscapeTagName(tag_name_), ">",
                          separator);
    }
    if (!text_content_.empty()) {
      return absl::StrCat(indentation, EscapeTextContent(text_content_),
                          separator);
    }
    return std::string{};
  }();

  for (auto const& child : children_) {
    absl::StrAppend(&ret, child->ToString(indent_width, indent_level));
  }
  if (!tag_name_.empty()) {
    absl::StrAppend(&ret, indentation, "</", EscapeTagName(tag_name_), ">",
                    separator);
  }
  return ret;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
