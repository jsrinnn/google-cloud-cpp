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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/internal/publisher_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublisherLogging::PublisherLogging(std::shared_ptr<PublisherStub> child,
                                   TracingOptions tracing_options,
                                   std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::pubsub::v1::Topic> PublisherLogging::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::Topic const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::Topic const& request) {
        return child_->CreateTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Topic> PublisherLogging::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::UpdateTopicRequest const& request) {
        return child_->UpdateTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::PublishResponse> PublisherLogging::Publish(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::PublishRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::PublishRequest const& request) {
        return child_->Publish(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Topic> PublisherLogging::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::GetTopicRequest const& request) {
        return child_->GetTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::ListTopicsResponse> PublisherLogging::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ListTopicsRequest const& request) {
        return child_->ListTopics(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::ListTopicSubscriptionsResponse>
PublisherLogging::ListTopicSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicSubscriptionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ListTopicSubscriptionsRequest const& request) {
        return child_->ListTopicSubscriptions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::ListTopicSnapshotsResponse>
PublisherLogging::ListTopicSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
        return child_->ListTopicSnapshots(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status PublisherLogging::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteTopicRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DeleteTopicRequest const& request) {
        return child_->DeleteTopic(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
PublisherLogging::DetachSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DetachSubscriptionRequest const& request) {
        return child_->DetachSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::pubsub::v1::PublishResponse>>
PublisherLogging::AsyncPublish(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::pubsub::v1::PublishRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::pubsub::v1::PublishRequest const& request) {
        return child_->AsyncPublish(cq, std::move(context), std::move(options),
                                    request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
