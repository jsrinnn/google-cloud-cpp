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
// source: google/datastore/v1/datastore.proto

#include "google/cloud/datastore/v1/internal/datastore_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/datastore/v1/datastore.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastoreLogging::DatastoreLogging(std::shared_ptr<DatastoreStub> child,
                                   TracingOptions tracing_options,
                                   std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::datastore::v1::LookupResponse> DatastoreLogging::Lookup(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::LookupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::LookupRequest const& request) {
        return child_->Lookup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::RunQueryResponse> DatastoreLogging::RunQuery(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::RunQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::RunQueryRequest const& request) {
        return child_->RunQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::RunAggregationQueryResponse>
DatastoreLogging::RunAggregationQuery(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::RunAggregationQueryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::RunAggregationQueryRequest const& request) {
        return child_->RunAggregationQuery(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::BeginTransactionResponse>
DatastoreLogging::BeginTransaction(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::BeginTransactionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::BeginTransactionRequest const& request) {
        return child_->BeginTransaction(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::CommitResponse> DatastoreLogging::Commit(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::CommitRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::CommitRequest const& request) {
        return child_->Commit(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::RollbackResponse> DatastoreLogging::Rollback(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::RollbackRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::RollbackRequest const& request) {
        return child_->Rollback(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::AllocateIdsResponse>
DatastoreLogging::AllocateIds(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::AllocateIdsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::AllocateIdsRequest const& request) {
        return child_->AllocateIds(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::datastore::v1::ReserveIdsResponse>
DatastoreLogging::ReserveIds(
    grpc::ClientContext& context, Options const& options,
    google::datastore::v1::ReserveIdsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::datastore::v1::ReserveIdsRequest const& request) {
        return child_->ReserveIds(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_v1_internal
}  // namespace cloud
}  // namespace google
