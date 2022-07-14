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
// source: google/cloud/batch/v1/batch.proto

#include "google/cloud/batch/internal/batch_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/batch/v1/batch.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace batch_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BatchServiceMetadata::BatchServiceMetadata(
    std::shared_ptr<BatchServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::batch::v1::Job> BatchServiceMetadata::CreateJob(
    grpc::ClientContext& context,
    google::cloud::batch::v1::CreateJobRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateJob(context, request);
}

StatusOr<google::cloud::batch::v1::Job> BatchServiceMetadata::GetJob(
    grpc::ClientContext& context,
    google::cloud::batch::v1::GetJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetJob(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BatchServiceMetadata::AsyncDeleteJob(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::batch::v1::DeleteJobRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteJob(cq, std::move(context), request);
}

StatusOr<google::cloud::batch::v1::ListJobsResponse>
BatchServiceMetadata::ListJobs(
    grpc::ClientContext& context,
    google::cloud::batch::v1::ListJobsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListJobs(context, request);
}

StatusOr<google::cloud::batch::v1::Task> BatchServiceMetadata::GetTask(
    grpc::ClientContext& context,
    google::cloud::batch::v1::GetTaskRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetTask(context, request);
}

StatusOr<google::cloud::batch::v1::ListTasksResponse>
BatchServiceMetadata::ListTasks(
    grpc::ClientContext& context,
    google::cloud::batch::v1::ListTasksRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListTasks(context, request);
}

future<StatusOr<google::longrunning::Operation>>
BatchServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> BatchServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void BatchServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void BatchServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch_internal
}  // namespace cloud
}  // namespace google
