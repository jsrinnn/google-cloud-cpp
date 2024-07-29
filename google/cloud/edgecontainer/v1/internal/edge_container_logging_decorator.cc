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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/edgecontainer/v1/service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeContainerLogging::EdgeContainerLogging(
    std::shared_ptr<EdgeContainerStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse>
EdgeContainerLogging::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListClustersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::ListClustersRequest const&
                 request) {
        return child_->ListClusters(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerLogging::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
        return child_->GetCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::CreateClusterRequest const&
                 request) {
        return child_->AsyncCreateCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::CreateClusterRequest const&
                 request) {
        return child_->CreateCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::UpdateClusterRequest const&
                 request) {
        return child_->AsyncUpdateCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::UpdateClusterRequest const&
                 request) {
        return child_->UpdateCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncUpgradeCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::UpgradeClusterRequest const&
                 request) {
        return child_->AsyncUpgradeCluster(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::UpgradeCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::UpgradeClusterRequest const&
                 request) {
        return child_->UpgradeCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::DeleteClusterRequest const&
                 request) {
        return child_->AsyncDeleteCluster(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::DeleteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::DeleteClusterRequest const&
                 request) {
        return child_->DeleteCluster(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerLogging::GenerateAccessToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
                 request) {
        return child_->GenerateAccessToken(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateOfflineCredentialResponse>
EdgeContainerLogging::GenerateOfflineCredential(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GenerateOfflineCredentialRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::
                 GenerateOfflineCredentialRequest const& request) {
        return child_->GenerateOfflineCredential(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
EdgeContainerLogging::ListNodePools(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListNodePoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::ListNodePoolsRequest const&
                 request) {
        return child_->ListNodePools(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerLogging::GetNodePool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
        return child_->GetNodePool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncCreateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::CreateNodePoolRequest const&
                 request) {
        return child_->AsyncCreateNodePool(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::CreateNodePool(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::CreateNodePoolRequest const&
                 request) {
        return child_->CreateNodePool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncUpdateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&
                 request) {
        return child_->AsyncUpdateNodePool(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::UpdateNodePool(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::UpdateNodePoolRequest const&
                 request) {
        return child_->UpdateNodePool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncDeleteNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
                 request) {
        return child_->AsyncDeleteNodePool(cq, std::move(context),
                                           std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> EdgeContainerLogging::DeleteNodePool(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::DeleteNodePoolRequest const&
                 request) {
        return child_->DeleteNodePool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse>
EdgeContainerLogging::ListMachines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListMachinesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::ListMachinesRequest const&
                 request) {
        return child_->ListMachines(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerLogging::GetMachine(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
        return child_->GetMachine(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
EdgeContainerLogging::ListVpnConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
                 request) {
        return child_->ListVpnConnections(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerLogging::GetVpnConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::GetVpnConnectionRequest const&
                 request) {
        return child_->GetVpnConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncCreateVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
                 request) {
        return child_->AsyncCreateVpnConnection(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
EdgeContainerLogging::CreateVpnConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
                 request) {
        return child_->CreateVpnConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncDeleteVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
                 request) {
        return child_->AsyncDeleteVpnConnection(cq, std::move(context),
                                                std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
EdgeContainerLogging::DeleteVpnConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
                 request) {
        return child_->DeleteVpnConnection(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::edgecontainer::v1::ServerConfig>
EdgeContainerLogging::GetServerConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetServerConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::edgecontainer::v1::GetServerConfigRequest const&
                 request) {
        return child_->GetServerConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerLogging::AsyncGetOperation(
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

future<Status> EdgeContainerLogging::AsyncCancelOperation(
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
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
