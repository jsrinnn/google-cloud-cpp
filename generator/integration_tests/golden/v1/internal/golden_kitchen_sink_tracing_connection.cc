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

#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GoldenKitchenSinkTracingConnection::GoldenKitchenSinkTracingConnection(
    std::shared_ptr<golden_v1::GoldenKitchenSinkConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
GoldenKitchenSinkTracingConnection::GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::GenerateAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateAccessToken(request));
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
GoldenKitchenSinkTracingConnection::GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::GenerateIdToken");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateIdToken(request));
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
GoldenKitchenSinkTracingConnection::WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::WriteLogEntries");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->WriteLogEntries(request));
}

StreamRange<std::string>
GoldenKitchenSinkTracingConnection::ListLogs(google::test::admin::database::v1::ListLogsRequest request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::ListLogs");
  internal::OTelScope scope(span);
  auto sr = child_->ListLogs(std::move(request));
  return internal::MakeTracedStreamRange<std::string>(
        std::move(span), std::move(sr));
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
GoldenKitchenSinkTracingConnection::ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::ListServiceAccountKeys");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ListServiceAccountKeys(request));
}

Status
GoldenKitchenSinkTracingConnection::DoNothing(google::protobuf::Empty const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::DoNothing");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DoNothing(request));
}

Status
GoldenKitchenSinkTracingConnection::Deprecated2(google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::Deprecated2");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Deprecated2(request));
}

StreamRange<google::test::admin::database::v1::Response>
GoldenKitchenSinkTracingConnection::StreamingRead(google::test::admin::database::v1::Request const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::StreamingRead");
  internal::OTelScope scope(span);
  auto sr = child_->StreamingRead(request);
  return internal::MakeTracedStreamRange<google::test::admin::database::v1::Response>(
        std::move(span), std::move(sr));
}
std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::test::admin::database::v1::Request,
    google::test::admin::database::v1::Response>>
GoldenKitchenSinkTracingConnection::AsyncStreamingReadWrite() {
  return child_->AsyncStreamingReadWrite();
}

Status
GoldenKitchenSinkTracingConnection::ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::ExplicitRouting1");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExplicitRouting1(request));
}

Status
GoldenKitchenSinkTracingConnection::ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::ExplicitRouting2");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExplicitRouting2(request));
}

StatusOr<google::cloud::location::Location>
GoldenKitchenSinkTracingConnection::GetLocation(google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan("golden_v1::GoldenKitchenSinkConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<golden_v1::GoldenKitchenSinkConnection>
MakeGoldenKitchenSinkTracingConnection(
    std::shared_ptr<golden_v1::GoldenKitchenSinkConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<GoldenKitchenSinkTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
