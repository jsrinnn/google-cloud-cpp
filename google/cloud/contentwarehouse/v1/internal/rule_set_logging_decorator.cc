// Copyright 2023 Google LLC
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
// source: google/cloud/contentwarehouse/v1/ruleset_service.proto

#include "google/cloud/contentwarehouse/v1/internal/rule_set_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contentwarehouse/v1/ruleset_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RuleSetServiceLogging::RuleSetServiceLogging(
    std::shared_ptr<RuleSetServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceLogging::CreateRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateRuleSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::CreateRuleSetRequest const&
                 request) {
        return child_->CreateRuleSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceLogging::GetRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::GetRuleSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::GetRuleSetRequest const&
                 request) {
        return child_->GetRuleSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::RuleSet>
RuleSetServiceLogging::UpdateRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::UpdateRuleSetRequest const&
                 request) {
        return child_->UpdateRuleSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status RuleSetServiceLogging::DeleteRuleSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::DeleteRuleSetRequest const&
                 request) {
        return child_->DeleteRuleSet(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contentwarehouse::v1::ListRuleSetsResponse>
RuleSetServiceLogging::ListRuleSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListRuleSetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::contentwarehouse::v1::ListRuleSetsRequest const&
                 request) {
        return child_->ListRuleSets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
