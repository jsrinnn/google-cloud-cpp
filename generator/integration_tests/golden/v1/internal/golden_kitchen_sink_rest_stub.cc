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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultGoldenKitchenSinkRestStub::DefaultGoldenKitchenSinkRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultGoldenKitchenSinkRestStub::DefaultGoldenKitchenSinkRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    Options options)
    : service_(std::move(service)),
      options_(std::move(options)) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
DefaultGoldenKitchenSinkRestStub::GenerateAccessToken(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  return rest_internal::Post<google::test::admin::database::v1::GenerateAccessTokenResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", request.name(), ":generateAccessToken"));
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
DefaultGoldenKitchenSinkRestStub::GenerateIdToken(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  return rest_internal::Post<google::test::admin::database::v1::GenerateIdTokenResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", "token", ":generate"));
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
DefaultGoldenKitchenSinkRestStub::WriteLogEntries(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  return rest_internal::Post<google::test::admin::database::v1::WriteLogEntriesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", "entries", ":write"));
}

StatusOr<google::test::admin::database::v1::ListLogsResponse>
DefaultGoldenKitchenSinkRestStub::ListLogs(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::ListLogsRequest const& request) {
  return rest_internal::Get<google::test::admin::database::v1::ListLogsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", request.parent(), "/", "logs"),
      rest_internal::TrimEmptyQueryParameters({std::make_pair("page_size", std::to_string(request.page_size())),
        std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
DefaultGoldenKitchenSinkRestStub::ListServiceAccountKeys(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  return rest_internal::Get<google::test::admin::database::v1::ListServiceAccountKeysResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", request.name(), "/", "keys"));
}

Status DefaultGoldenKitchenSinkRestStub::DoNothing(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::protobuf::Empty const& request) {
  return rest_internal::Post<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", "doNothing"));
}

Status DefaultGoldenKitchenSinkRestStub::ExplicitRouting1(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  return rest_internal::Post<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", request.table_name(), ":explicitRouting1"));
}

Status DefaultGoldenKitchenSinkRestStub::ExplicitRouting2(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  return rest_internal::Post<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/", request.table_name(), ":explicitRouting2"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
