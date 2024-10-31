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

#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_tracing_stub.h"
#include "google/cloud/internal/async_read_write_stream_tracing.h"
#include "google/cloud/internal/async_streaming_read_rpc_tracing.h"
#include "google/cloud/internal/async_streaming_write_rpc_tracing.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/internal/streaming_read_rpc_tracing.h"
#include "google/cloud/internal/streaming_write_rpc_tracing.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GoldenKitchenSinkTracingStub::GoldenKitchenSinkTracingStub(
    std::shared_ptr<GoldenKitchenSinkStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse> GoldenKitchenSinkTracingStub::GenerateAccessToken(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "GenerateAccessToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GenerateAccessToken(context, options, request));
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse> GoldenKitchenSinkTracingStub::GenerateIdToken(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "GenerateIdToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GenerateIdToken(context, options, request));
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse> GoldenKitchenSinkTracingStub::WriteLogEntries(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "WriteLogEntries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->WriteLogEntries(context, options, request));
}

StatusOr<google::test::admin::database::v1::ListLogsResponse> GoldenKitchenSinkTracingStub::ListLogs(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListLogsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "ListLogs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLogs(context, options, request));
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse> GoldenKitchenSinkTracingStub::ListServiceAccountKeys(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "ListServiceAccountKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListServiceAccountKeys(context, options, request));
}

Status GoldenKitchenSinkTracingStub::DoNothing(
    grpc::ClientContext& context,
    Options const& options,
    google::protobuf::Empty const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "DoNothing");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DoNothing(context, options, request));
}

Status GoldenKitchenSinkTracingStub::Deprecated2(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "Deprecated2");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->Deprecated2(context, options, request));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<google::test::admin::database::v1::Response>>
GoldenKitchenSinkTracingStub::StreamingRead(
    std::shared_ptr<grpc::ClientContext> context,
    Options const& options,
    google::test::admin::database::v1::Request const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "StreamingRead");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->StreamingRead(context, options, request);
  return std::make_unique<internal::StreamingReadRpcTracing<google::test::admin::database::v1::Response>>(
      std::move(context), std::move(stream), std::move(span));
}

std::unique_ptr<internal::StreamingWriteRpc<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>
GoldenKitchenSinkTracingStub::StreamingWrite(
    std::shared_ptr<grpc::ClientContext> context,
    Options const& options) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "StreamingWrite");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->StreamingWrite(context, options);
  return std::make_unique<
      internal::StreamingWriteRpcTracing<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>(
      std::move(context), std::move(stream), std::move(span));
}

std::unique_ptr<AsyncStreamingReadWriteRpc<
    google::test::admin::database::v1::Request,
    google::test::admin::database::v1::Response>>
GoldenKitchenSinkTracingStub::AsyncStreamingReadWrite(
    CompletionQueue const& cq, std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "StreamingReadWrite");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncStreamingReadWrite(cq, context, std::move(options));
  return std::make_unique<internal::AsyncStreamingReadWriteRpcTracing<
      google::test::admin::database::v1::Request,
      google::test::admin::database::v1::Response>>(
      std::move(context), std::move(stream), std::move(span));
}

Status GoldenKitchenSinkTracingStub::ExplicitRouting1(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "ExplicitRouting1");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ExplicitRouting1(context, options, request));
}

Status GoldenKitchenSinkTracingStub::ExplicitRouting2(
    grpc::ClientContext& context,
    Options const& options,
    google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "ExplicitRouting2");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ExplicitRouting2(context, options, request));
}

StatusOr<google::cloud::location::Location> GoldenKitchenSinkTracingStub::GetLocation(
    grpc::ClientContext& context,
    Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

std::unique_ptr<internal::AsyncStreamingReadRpc<google::test::admin::database::v1::Response>>
GoldenKitchenSinkTracingStub::AsyncStreamingRead(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::test::admin::database::v1::Request const& request) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "StreamingRead");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncStreamingRead(
      cq, context, std::move(options), request);
  return std::make_unique<
      internal::AsyncStreamingReadRpcTracing<google::test::admin::database::v1::Response>>(
      std::move(context), std::move(stream), std::move(span));
}

std::unique_ptr<
    internal::AsyncStreamingWriteRpc<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>
GoldenKitchenSinkTracingStub::AsyncStreamingWrite(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  auto span = internal::MakeSpanGrpc("google.test.admin.database.v1.GoldenKitchenSink", "StreamingWrite");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto stream = child_->AsyncStreamingWrite(cq, context, std::move(options));
  return std::make_unique<
      internal::AsyncStreamingWriteRpcTracing<google::test::admin::database::v1::Request, google::test::admin::database::v1::Response>>(
      std::move(context), std::move(stream), std::move(span));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<GoldenKitchenSinkStub> MakeGoldenKitchenSinkTracingStub(
    std::shared_ptr<GoldenKitchenSinkStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<GoldenKitchenSinkTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
