// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/language/v1/language_service.proto

#include "google/cloud/language/v1/internal/language_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/language/v1/language_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace language_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceLogging::LanguageServiceLogging(
    std::shared_ptr<LanguageServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
LanguageServiceLogging::AnalyzeSentiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
        return child_->AnalyzeSentiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
LanguageServiceLogging::AnalyzeEntities(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
        return child_->AnalyzeEntities(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
LanguageServiceLogging::AnalyzeEntitySentiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v1::AnalyzeEntitySentimentRequest const&
                 request) {
        return child_->AnalyzeEntitySentiment(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse>
LanguageServiceLogging::AnalyzeSyntax(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
        return child_->AnalyzeSyntax(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v1::ClassifyTextResponse>
LanguageServiceLogging::ClassifyText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::ClassifyTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v1::ClassifyTextRequest const& request) {
        return child_->ClassifyText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v1::ModerateTextResponse>
LanguageServiceLogging::ModerateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::ModerateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v1::ModerateTextRequest const& request) {
        return child_->ModerateText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::language::v1::AnnotateTextResponse>
LanguageServiceLogging::AnnotateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnnotateTextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::language::v1::AnnotateTextRequest const& request) {
        return child_->AnnotateText(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_internal
}  // namespace cloud
}  // namespace google
