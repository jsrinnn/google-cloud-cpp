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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_NET_APP_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_NET_APP_CONNECTION_H

#include "google/cloud/netapp/v1/internal/net_app_retry_traits.h"
#include "google/cloud/netapp/v1/net_app_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/netapp/v1/cloud_netapp_service.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace netapp_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `NetAppConnection`.
class NetAppRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<NetAppRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `NetAppConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetAppLimitedErrorCountRetryPolicy : public NetAppRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit NetAppLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  NetAppLimitedErrorCountRetryPolicy(
      NetAppLimitedErrorCountRetryPolicy&& rhs) noexcept
      : NetAppLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  NetAppLimitedErrorCountRetryPolicy(
      NetAppLimitedErrorCountRetryPolicy const& rhs) noexcept
      : NetAppLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetAppRetryPolicy> clone() const override {
    return std::make_unique<NetAppLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetAppRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      netapp_v1_internal::NetAppRetryTraits>
      impl_;
};

/**
 * A retry policy for `NetAppConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class NetAppLimitedTimeRetryPolicy : public NetAppRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit NetAppLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  NetAppLimitedTimeRetryPolicy(NetAppLimitedTimeRetryPolicy&& rhs) noexcept
      : NetAppLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  NetAppLimitedTimeRetryPolicy(NetAppLimitedTimeRetryPolicy const& rhs) noexcept
      : NetAppLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<NetAppRetryPolicy> clone() const override {
    return std::make_unique<NetAppLimitedTimeRetryPolicy>(maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = NetAppRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      netapp_v1_internal::NetAppRetryTraits>
      impl_;
};

/**
 * The `NetAppConnection` object for `NetAppClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `NetAppClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `NetAppClient`.
 *
 * To create a concrete instance, see `MakeNetAppConnection()`.
 *
 * For mocking, see `netapp_v1_mocks::MockNetAppConnection`.
 */
class NetAppConnection {
 public:
  virtual ~NetAppConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::netapp::v1::StoragePool> ListStoragePools(
      google::cloud::netapp::v1::ListStoragePoolsRequest request);

  virtual future<StatusOr<google::cloud::netapp::v1::StoragePool>>
  CreateStoragePool(
      google::cloud::netapp::v1::CreateStoragePoolRequest const& request);

  virtual StatusOr<google::cloud::netapp::v1::StoragePool> GetStoragePool(
      google::cloud::netapp::v1::GetStoragePoolRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::StoragePool>>
  UpdateStoragePool(
      google::cloud::netapp::v1::UpdateStoragePoolRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteStoragePool(
      google::cloud::netapp::v1::DeleteStoragePoolRequest const& request);

  virtual StreamRange<google::cloud::netapp::v1::Volume> ListVolumes(
      google::cloud::netapp::v1::ListVolumesRequest request);

  virtual StatusOr<google::cloud::netapp::v1::Volume> GetVolume(
      google::cloud::netapp::v1::GetVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Volume>> CreateVolume(
      google::cloud::netapp::v1::CreateVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Volume>> UpdateVolume(
      google::cloud::netapp::v1::UpdateVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteVolume(google::cloud::netapp::v1::DeleteVolumeRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Volume>> RevertVolume(
      google::cloud::netapp::v1::RevertVolumeRequest const& request);

  virtual StreamRange<google::cloud::netapp::v1::Snapshot> ListSnapshots(
      google::cloud::netapp::v1::ListSnapshotsRequest request);

  virtual StatusOr<google::cloud::netapp::v1::Snapshot> GetSnapshot(
      google::cloud::netapp::v1::GetSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Snapshot>> CreateSnapshot(
      google::cloud::netapp::v1::CreateSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteSnapshot(
      google::cloud::netapp::v1::DeleteSnapshotRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Snapshot>> UpdateSnapshot(
      google::cloud::netapp::v1::UpdateSnapshotRequest const& request);

  virtual StreamRange<google::cloud::netapp::v1::ActiveDirectory>
  ListActiveDirectories(
      google::cloud::netapp::v1::ListActiveDirectoriesRequest request);

  virtual StatusOr<google::cloud::netapp::v1::ActiveDirectory>
  GetActiveDirectory(
      google::cloud::netapp::v1::GetActiveDirectoryRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
  CreateActiveDirectory(
      google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::ActiveDirectory>>
  UpdateActiveDirectory(
      google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteActiveDirectory(
      google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request);

  virtual StreamRange<google::cloud::netapp::v1::KmsConfig> ListKmsConfigs(
      google::cloud::netapp::v1::ListKmsConfigsRequest request);

  virtual future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
  CreateKmsConfig(
      google::cloud::netapp::v1::CreateKmsConfigRequest const& request);

  virtual StatusOr<google::cloud::netapp::v1::KmsConfig> GetKmsConfig(
      google::cloud::netapp::v1::GetKmsConfigRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::KmsConfig>>
  UpdateKmsConfig(
      google::cloud::netapp::v1::UpdateKmsConfigRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::KmsConfig>> EncryptVolumes(
      google::cloud::netapp::v1::EncryptVolumesRequest const& request);

  virtual StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
  VerifyKmsConfig(
      google::cloud::netapp::v1::VerifyKmsConfigRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteKmsConfig(
      google::cloud::netapp::v1::DeleteKmsConfigRequest const& request);

  virtual StreamRange<google::cloud::netapp::v1::Replication> ListReplications(
      google::cloud::netapp::v1::ListReplicationsRequest request);

  virtual StatusOr<google::cloud::netapp::v1::Replication> GetReplication(
      google::cloud::netapp::v1::GetReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Replication>>
  CreateReplication(
      google::cloud::netapp::v1::CreateReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::OperationMetadata>>
  DeleteReplication(
      google::cloud::netapp::v1::DeleteReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Replication>>
  UpdateReplication(
      google::cloud::netapp::v1::UpdateReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Replication>>
  StopReplication(
      google::cloud::netapp::v1::StopReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Replication>>
  ResumeReplication(
      google::cloud::netapp::v1::ResumeReplicationRequest const& request);

  virtual future<StatusOr<google::cloud::netapp::v1::Replication>>
  ReverseReplicationDirection(
      google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
          request);
};

/**
 * A factory function to construct an object of type `NetAppConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of NetAppClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `NetAppConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::netapp_v1::NetAppPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `NetAppConnection` created by
 * this function.
 */
std::shared_ptr<NetAppConnection> MakeNetAppConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETAPP_V1_NET_APP_CONNECTION_H
