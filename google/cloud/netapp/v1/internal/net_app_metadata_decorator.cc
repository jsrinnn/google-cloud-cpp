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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#include "google/cloud/netapp/v1/internal/net_app_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/netapp/v1/cloud_netapp_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetAppMetadata::NetAppMetadata(
    std::shared_ptr<NetAppStub> child,
    std::multimap<std::string, std::string> fixed_metadata)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::netapp::v1::ListStoragePoolsResponse>
NetAppMetadata::ListStoragePools(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListStoragePoolsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListStoragePools(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncCreateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::CreateStoragePoolRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateStoragePool(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::StoragePool> NetAppMetadata::GetStoragePool(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetStoragePoolRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetStoragePool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncUpdateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::UpdateStoragePoolRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("storage_pool.name=",
                           internal::UrlEncode(request.storage_pool().name())));
  return child_->AsyncUpdateStoragePool(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncDeleteStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::DeleteStoragePoolRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteStoragePool(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::ListVolumesResponse>
NetAppMetadata::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListVolumesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListVolumes(context, request);
}

StatusOr<google::cloud::netapp::v1::Volume> NetAppMetadata::GetVolume(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetVolumeRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetVolume(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncCreateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::CreateVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateVolume(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::UpdateVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("volume.name=",
                           internal::UrlEncode(request.volume().name())));
  return child_->AsyncUpdateVolume(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncDeleteVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::DeleteVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteVolume(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncRevertVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::RevertVolumeRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRevertVolume(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::ListSnapshotsResponse>
NetAppMetadata::ListSnapshots(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListSnapshotsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSnapshots(context, request);
}

StatusOr<google::cloud::netapp::v1::Snapshot> NetAppMetadata::GetSnapshot(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetSnapshotRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSnapshot(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncCreateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::CreateSnapshotRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateSnapshot(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncDeleteSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::DeleteSnapshotRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteSnapshot(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncUpdateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::UpdateSnapshotRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("snapshot.name=",
                           internal::UrlEncode(request.snapshot().name())));
  return child_->AsyncUpdateSnapshot(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::ListActiveDirectoriesResponse>
NetAppMetadata::ListActiveDirectories(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListActiveDirectoriesRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListActiveDirectories(context, request);
}

StatusOr<google::cloud::netapp::v1::ActiveDirectory>
NetAppMetadata::GetActiveDirectory(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetActiveDirectoryRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetActiveDirectory(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncCreateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateActiveDirectory(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncUpdateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request) {
  SetMetadata(
      *context,
      absl::StrCat("active_directory.name=",
                   internal::UrlEncode(request.active_directory().name())));
  return child_->AsyncUpdateActiveDirectory(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncDeleteActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteActiveDirectory(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::ListKmsConfigsResponse>
NetAppMetadata::ListKmsConfigs(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListKmsConfigsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListKmsConfigs(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncCreateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::CreateKmsConfigRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateKmsConfig(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::KmsConfig> NetAppMetadata::GetKmsConfig(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetKmsConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetKmsConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncUpdateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::UpdateKmsConfigRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("kms_config.name=",
                           internal::UrlEncode(request.kms_config().name())));
  return child_->AsyncUpdateKmsConfig(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncEncryptVolumes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::EncryptVolumesRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncEncryptVolumes(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
NetAppMetadata::VerifyKmsConfig(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::VerifyKmsConfigRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->VerifyKmsConfig(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncDeleteKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::DeleteKmsConfigRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteKmsConfig(cq, std::move(context), request);
}

StatusOr<google::cloud::netapp::v1::ListReplicationsResponse>
NetAppMetadata::ListReplications(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::ListReplicationsRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListReplications(context, request);
}

StatusOr<google::cloud::netapp::v1::Replication> NetAppMetadata::GetReplication(
    grpc::ClientContext& context,
    google::cloud::netapp::v1::GetReplicationRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetReplication(context, request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncCreateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::CreateReplicationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateReplication(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncDeleteReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::DeleteReplicationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteReplication(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncUpdateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::UpdateReplicationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("replication.name=",
                           internal::UrlEncode(request.replication().name())));
  return child_->AsyncUpdateReplication(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncStopReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::StopReplicationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStopReplication(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncResumeReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::ResumeReplicationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncResumeReplication(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncReverseReplicationDirection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
        request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncReverseReplicationDirection(cq, std::move(context),
                                                  request);
}

future<StatusOr<google::longrunning::Operation>>
NetAppMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> NetAppMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void NetAppMetadata::SetMetadata(grpc::ClientContext& context,
                                 std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void NetAppMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
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
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google
