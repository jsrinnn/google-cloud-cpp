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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/internal/config_service_v2_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/logging/v2/logging_config.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigServiceV2Logging::ConfigServiceV2Logging(
    std::shared_ptr<ConfigServiceV2Stub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::logging::v2::ListBucketsResponse>
ConfigServiceV2Logging::ListBuckets(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListBucketsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::ListBucketsRequest const& request) {
        return child_->ListBuckets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Logging::GetBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetBucketRequest const& request) {
        return child_->GetBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Logging::AsyncCreateBucketAsync(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::CreateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::logging::v2::CreateBucketRequest const& request) {
        return child_->AsyncCreateBucketAsync(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
ConfigServiceV2Logging::CreateBucketAsync(
    grpc::ClientContext& context, Options options,
    google::logging::v2::CreateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateBucketRequest const& request) {
        return child_->CreateBucketAsync(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Logging::AsyncUpdateBucketAsync(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::UpdateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::logging::v2::UpdateBucketRequest const& request) {
        return child_->AsyncUpdateBucketAsync(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
ConfigServiceV2Logging::UpdateBucketAsync(
    grpc::ClientContext& context, Options options,
    google::logging::v2::UpdateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateBucketRequest const& request) {
        return child_->UpdateBucketAsync(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Logging::CreateBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateBucketRequest const& request) {
        return child_->CreateBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Logging::UpdateBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateBucketRequest const& request) {
        return child_->UpdateBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ConfigServiceV2Logging::DeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::DeleteBucketRequest const& request) {
        return child_->DeleteBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ConfigServiceV2Logging::UndeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UndeleteBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UndeleteBucketRequest const& request) {
        return child_->UndeleteBucket(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::ListViewsResponse>
ConfigServiceV2Logging::ListViews(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListViewsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::ListViewsRequest const& request) {
        return child_->ListViews(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Logging::GetView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetViewRequest const& request) {
        return child_->GetView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Logging::CreateView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateViewRequest const& request) {
        return child_->CreateView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Logging::UpdateView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateViewRequest const& request) {
        return child_->UpdateView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ConfigServiceV2Logging::DeleteView(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::DeleteViewRequest const& request) {
        return child_->DeleteView(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::ListSinksResponse>
ConfigServiceV2Logging::ListSinks(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListSinksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::ListSinksRequest const& request) {
        return child_->ListSinks(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Logging::GetSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetSinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetSinkRequest const& request) {
        return child_->GetSink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Logging::CreateSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateSinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateSinkRequest const& request) {
        return child_->CreateSink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Logging::UpdateSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateSinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateSinkRequest const& request) {
        return child_->UpdateSink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ConfigServiceV2Logging::DeleteSink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteSinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::DeleteSinkRequest const& request) {
        return child_->DeleteSink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Logging::AsyncCreateLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::CreateLinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::logging::v2::CreateLinkRequest const& request) {
        return child_->AsyncCreateLink(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> ConfigServiceV2Logging::CreateLink(
    grpc::ClientContext& context, Options options,
    google::logging::v2::CreateLinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateLinkRequest const& request) {
        return child_->CreateLink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Logging::AsyncDeleteLink(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::DeleteLinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::logging::v2::DeleteLinkRequest const& request) {
        return child_->AsyncDeleteLink(cq, std::move(context),
                                       std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> ConfigServiceV2Logging::DeleteLink(
    grpc::ClientContext& context, Options options,
    google::logging::v2::DeleteLinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::DeleteLinkRequest const& request) {
        return child_->DeleteLink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::ListLinksResponse>
ConfigServiceV2Logging::ListLinks(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListLinksRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::ListLinksRequest const& request) {
        return child_->ListLinks(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::Link> ConfigServiceV2Logging::GetLink(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetLinkRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetLinkRequest const& request) {
        return child_->GetLink(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::ListExclusionsResponse>
ConfigServiceV2Logging::ListExclusions(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListExclusionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::ListExclusionsRequest const& request) {
        return child_->ListExclusions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Logging::GetExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetExclusionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetExclusionRequest const& request) {
        return child_->GetExclusion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Logging::CreateExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateExclusionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CreateExclusionRequest const& request) {
        return child_->CreateExclusion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Logging::UpdateExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateExclusionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateExclusionRequest const& request) {
        return child_->UpdateExclusion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ConfigServiceV2Logging::DeleteExclusion(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteExclusionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::DeleteExclusionRequest const& request) {
        return child_->DeleteExclusion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2Logging::GetCmekSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetCmekSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetCmekSettingsRequest const& request) {
        return child_->GetCmekSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2Logging::UpdateCmekSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateCmekSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateCmekSettingsRequest const& request) {
        return child_->UpdateCmekSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::Settings> ConfigServiceV2Logging::GetSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::GetSettingsRequest const& request) {
        return child_->GetSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::logging::v2::Settings> ConfigServiceV2Logging::UpdateSettings(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateSettingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::UpdateSettingsRequest const& request) {
        return child_->UpdateSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Logging::AsyncCopyLogEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::logging::v2::CopyLogEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::logging::v2::CopyLogEntriesRequest const& request) {
        return child_->AsyncCopyLogEntries(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> ConfigServiceV2Logging::CopyLogEntries(
    grpc::ClientContext& context, Options options,
    google::logging::v2::CopyLogEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::logging::v2::CopyLogEntriesRequest const& request) {
        return child_->CopyLogEntries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConfigServiceV2Logging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> ConfigServiceV2Logging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
