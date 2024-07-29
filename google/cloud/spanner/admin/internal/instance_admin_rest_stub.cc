// Copyright 2021 Google LLC
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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#include "google/cloud/spanner/admin/internal/instance_admin_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/longrunning/operations.pb.h>
#include <google/spanner/admin/instance/v1/spanner_instance_admin.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultInstanceAdminRestStub::DefaultInstanceAdminRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<rest_internal::LongrunningEndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultInstanceAdminRestStub::DefaultInstanceAdminRestStub(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations, Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}

StatusOr<google::spanner::admin::instance::v1::ListInstanceConfigsResponse>
DefaultInstanceAdminRestStub::ListInstanceConfigs(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::ListInstanceConfigsRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::instance::v1::ListInstanceConfigsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instanceConfigs"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
DefaultInstanceAdminRestStub::GetInstanceConfig(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::instance::v1::InstanceConfig>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncCreateInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "instanceConfigs")));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultInstanceAdminRestStub::CreateInstanceConfig(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
        request) {
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instanceConfigs"));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncUpdateInstanceConfig(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.instance_config().name())));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultInstanceAdminRestStub::UpdateInstanceConfig(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
        request) {
  return rest_internal::Patch<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.instance_config().name()));
}

Status DefaultInstanceAdminRestStub::DeleteInstanceConfig(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
        request) {
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("etag", request.etag()),
           std::make_pair("validate_only",
                          (request.validate_only() ? "1" : "0"))}));
}

StatusOr<
    google::spanner::admin::instance::v1::ListInstanceConfigOperationsResponse>
DefaultInstanceAdminRestStub::ListInstanceConfigOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::
        ListInstanceConfigOperationsRequest const& request) {
  return rest_internal::Get<google::spanner::admin::instance::v1::
                                ListInstanceConfigOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instanceConfigOperations"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::spanner::admin::instance::v1::ListInstancesResponse>
DefaultInstanceAdminRestStub::ListInstances(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::ListInstancesRequest const& request) {
  return rest_internal::Get<
      google::spanner::admin::instance::v1::ListInstancesResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instances"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token()),
           std::make_pair("filter", request.filter())}));
}

StatusOr<google::spanner::admin::instance::v1::ListInstancePartitionsResponse>
DefaultInstanceAdminRestStub::ListInstancePartitions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::ListInstancePartitionsRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::instance::v1::ListInstancePartitionsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instancePartitions"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

StatusOr<google::spanner::admin::instance::v1::Instance>
DefaultInstanceAdminRestStub::GetInstance(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::GetInstanceRequest const& request) {
  return rest_internal::Get<google::spanner::admin::instance::v1::Instance>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncCreateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "instances")));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultInstanceAdminRestStub::CreateInstance(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::CreateInstanceRequest const&
        request) {
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instances"));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncUpdateInstance(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.instance().name())));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultInstanceAdminRestStub::UpdateInstance(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::UpdateInstanceRequest const&
        request) {
  return rest_internal::Patch<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.instance().name()));
}

Status DefaultInstanceAdminRestStub::DeleteInstance(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::DeleteInstanceRequest const&
        request) {
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

StatusOr<google::iam::v1::Policy> DefaultInstanceAdminRestStub::SetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":setIamPolicy"));
}

StatusOr<google::iam::v1::Policy> DefaultInstanceAdminRestStub::GetIamPolicy(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return rest_internal::Post<google::iam::v1::Policy>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":getIamPolicy"));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultInstanceAdminRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return rest_internal::Post<google::iam::v1::TestIamPermissionsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.resource(), ":testIamPermissions"));
}

StatusOr<google::spanner::admin::instance::v1::InstancePartition>
DefaultInstanceAdminRestStub::GetInstancePartition(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::GetInstancePartitionRequest const&
        request) {
  return rest_internal::Get<
      google::spanner::admin::instance::v1::InstancePartition>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncCreateInstancePartition(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Post<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.parent(), "/", "instancePartitions")));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultInstanceAdminRestStub::CreateInstancePartition(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::CreateInstancePartitionRequest const&
        request) {
  return rest_internal::Post<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instancePartitions"));
}

Status DefaultInstanceAdminRestStub::DeleteInstancePartition(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::DeleteInstancePartitionRequest const&
        request) {
  return rest_internal::Delete<google::cloud::rest_internal::EmptyResponseType>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.name()),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("etag", request.etag())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncUpdateInstancePartition(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto service, auto request, auto rest_context, auto options) {
        p.set_value(rest_internal::Patch<google::longrunning::Operation>(
            *service, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.instance_partition().name())));
      },
      std::move(p),
      service_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

StatusOr<google::longrunning::Operation>
DefaultInstanceAdminRestStub::UpdateInstancePartition(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::UpdateInstancePartitionRequest const&
        request) {
  return rest_internal::Patch<google::longrunning::Operation>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.instance_partition().name()));
}

StatusOr<google::spanner::admin::instance::v1::
             ListInstancePartitionOperationsResponse>
DefaultInstanceAdminRestStub::ListInstancePartitionOperations(
    google::cloud::rest_internal::RestContext& rest_context,
    Options const& options,
    google::spanner::admin::instance::v1::
        ListInstancePartitionOperationsRequest const& request) {
  return rest_internal::Get<google::spanner::admin::instance::v1::
                                ListInstancePartitionOperationsResponse>(
      *service_, rest_context, request, false,
      absl::StrCat("/", rest_internal::DetermineApiVersion("v1", options), "/",
                   request.parent(), "/", "instancePartitionOperations"),
      rest_internal::TrimEmptyQueryParameters(
          {std::make_pair("filter", request.filter()),
           std::make_pair("page_size", std::to_string(request.page_size())),
           std::make_pair("page_token", request.page_token())}));
}

future<StatusOr<google::longrunning::Operation>>
DefaultInstanceAdminRestStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Get<google::longrunning::Operation>(
            *operations, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.name())));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get();
  });
}

future<Status> DefaultInstanceAdminRestStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{
      [](auto p, auto operations, auto request, auto rest_context,
         auto options) {
        p.set_value(rest_internal::Post<google::protobuf::Empty>(
            *operations, *rest_context, request, false,
            absl::StrCat("/",
                         rest_internal::DetermineApiVersion("v1", *options),
                         "/", request.name(), ":cancel")));
      },
      std::move(p),
      operations_,
      request,
      std::move(rest_context),
      std::move(options)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable { t.join(); });
    return f.get().status();
  });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
