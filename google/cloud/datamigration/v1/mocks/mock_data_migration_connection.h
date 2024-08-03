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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_MOCKS_MOCK_DATA_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_MOCKS_MOCK_DATA_MIGRATION_CONNECTION_H

#include "google/cloud/datamigration/v1/data_migration_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace datamigration_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DataMigrationServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DataMigrationServiceClient`. To do
 * so, construct an object of type `DataMigrationServiceClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDataMigrationServiceConnection
    : public datamigration_v1::DataMigrationServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::clouddms::v1::MigrationJob>),
              ListMigrationJobs,
              (google::cloud::clouddms::v1::ListMigrationJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::MigrationJob>, GetMigrationJob,
      (google::cloud::clouddms::v1::GetMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateMigrationJob(Matcher<google::cloud::clouddms::v1::CreateMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      CreateMigrationJob,
      (google::cloud::clouddms::v1::CreateMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::CreateMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              CreateMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateMigrationJob(Matcher<google::cloud::clouddms::v1::UpdateMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      UpdateMigrationJob,
      (google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              UpdateMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteMigrationJob(Matcher<google::cloud::clouddms::v1::DeleteMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
      DeleteMigrationJob,
      (google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
              DeleteMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StartMigrationJob(Matcher<google::cloud::clouddms::v1::StartMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      StartMigrationJob,
      (google::cloud::clouddms::v1::StartMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StartMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, StartMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::StartMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StartMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              StartMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StopMigrationJob(Matcher<google::cloud::clouddms::v1::StopMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      StopMigrationJob,
      (google::cloud::clouddms::v1::StopMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StopMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, StopMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::StopMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, StopMigrationJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              StopMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ResumeMigrationJob(Matcher<google::cloud::clouddms::v1::ResumeMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      ResumeMigrationJob,
      (google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ResumeMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ResumeMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ResumeMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              ResumeMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PromoteMigrationJob(Matcher<google::cloud::clouddms::v1::PromoteMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      PromoteMigrationJob,
      (google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PromoteMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, PromoteMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PromoteMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              PromoteMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// VerifyMigrationJob(Matcher<google::cloud::clouddms::v1::VerifyMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      VerifyMigrationJob,
      (google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, VerifyMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, VerifyMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// VerifyMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              VerifyMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RestartMigrationJob(Matcher<google::cloud::clouddms::v1::RestartMigrationJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
      RestartMigrationJob,
      (google::cloud::clouddms::v1::RestartMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RestartMigrationJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RestartMigrationJob,
      (NoAwaitTag,
       google::cloud::clouddms::v1::RestartMigrationJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RestartMigrationJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>,
              RestartMigrationJob,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::SshScript>, GenerateSshScript,
      (google::cloud::clouddms::v1::GenerateSshScriptRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::clouddms::v1::TcpProxyScript>,
              GenerateTcpProxyScript,
              (google::cloud::clouddms::v1::GenerateTcpProxyScriptRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::clouddms::v1::ConnectionProfile>),
      ListConnectionProfiles,
      (google::cloud::clouddms::v1::ListConnectionProfilesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::ConnectionProfile>,
      GetConnectionProfile,
      (google::cloud::clouddms::v1::GetConnectionProfileRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnectionProfile(Matcher<google::cloud::clouddms::v1::CreateConnectionProfileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>,
      CreateConnectionProfile,
      (google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConnectionProfile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConnectionProfile,
      (NoAwaitTag,
       google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnectionProfile(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>,
              CreateConnectionProfile,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConnectionProfile(Matcher<google::cloud::clouddms::v1::UpdateConnectionProfileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>,
      UpdateConnectionProfile,
      (google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateConnectionProfile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateConnectionProfile,
      (NoAwaitTag,
       google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConnectionProfile(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>,
              UpdateConnectionProfile,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnectionProfile(Matcher<google::cloud::clouddms::v1::DeleteConnectionProfileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
      DeleteConnectionProfile,
      (google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConnectionProfile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConnectionProfile,
      (NoAwaitTag,
       google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnectionProfile(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
              DeleteConnectionProfile,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePrivateConnection(Matcher<google::cloud::clouddms::v1::CreatePrivateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>,
      CreatePrivateConnection,
      (google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreatePrivateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreatePrivateConnection,
      (NoAwaitTag,
       google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePrivateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>,
              CreatePrivateConnection,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::PrivateConnection>,
      GetPrivateConnection,
      (google::cloud::clouddms::v1::GetPrivateConnectionRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::clouddms::v1::PrivateConnection>),
      ListPrivateConnections,
      (google::cloud::clouddms::v1::ListPrivateConnectionsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePrivateConnection(Matcher<google::cloud::clouddms::v1::DeletePrivateConnectionRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
      DeletePrivateConnection,
      (google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeletePrivateConnection(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeletePrivateConnection,
      (NoAwaitTag,
       google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePrivateConnection(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
              DeletePrivateConnection,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>,
              GetConversionWorkspace,
              (google::cloud::clouddms::v1::GetConversionWorkspaceRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>),
      ListConversionWorkspaces,
      (google::cloud::clouddms::v1::ListConversionWorkspacesRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConversionWorkspace(Matcher<google::cloud::clouddms::v1::CreateConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      CreateConversionWorkspace,
      (google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      CreateConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConversionWorkspace(Matcher<google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      UpdateConversionWorkspace,
      (google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      UpdateConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConversionWorkspace(Matcher<google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
      DeleteConversionWorkspace,
      (google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>,
              DeleteConversionWorkspace,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::MappingRule>, CreateMappingRule,
      (google::cloud::clouddms::v1::CreateMappingRuleRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteMappingRule,
      (google::cloud::clouddms::v1::DeleteMappingRuleRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::clouddms::v1::MappingRule>),
              ListMappingRules,
              (google::cloud::clouddms::v1::ListMappingRulesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::MappingRule>, GetMappingRule,
      (google::cloud::clouddms::v1::GetMappingRuleRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SeedConversionWorkspace(Matcher<google::cloud::clouddms::v1::SeedConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      SeedConversionWorkspace,
      (google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SeedConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, SeedConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SeedConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      SeedConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportMappingRules(Matcher<google::cloud::clouddms::v1::ImportMappingRulesRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      ImportMappingRules,
      (google::cloud::clouddms::v1::ImportMappingRulesRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ImportMappingRules(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ImportMappingRules,
      (NoAwaitTag,
       google::cloud::clouddms::v1::ImportMappingRulesRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportMappingRules(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      ImportMappingRules, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ConvertConversionWorkspace(Matcher<google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      ConvertConversionWorkspace,
      (google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ConvertConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ConvertConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ConvertConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      ConvertConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CommitConversionWorkspace(Matcher<google::cloud::clouddms::v1::CommitConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      CommitConversionWorkspace,
      (google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CommitConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CommitConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CommitConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      CommitConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RollbackConversionWorkspace(Matcher<google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      RollbackConversionWorkspace,
      (google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RollbackConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RollbackConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RollbackConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      RollbackConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ApplyConversionWorkspace(Matcher<google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      ApplyConversionWorkspace,
      (google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ApplyConversionWorkspace(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ApplyConversionWorkspace,
      (NoAwaitTag,
       google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ApplyConversionWorkspace(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>,
      ApplyConversionWorkspace,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::clouddms::v1::DatabaseEntity>),
      DescribeDatabaseEntities,
      (google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::clouddms::v1::SearchBackgroundJobsResponse>,
      SearchBackgroundJobs,
      (google::cloud::clouddms::v1::SearchBackgroundJobsRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::clouddms::v1::
                           DescribeConversionWorkspaceRevisionsResponse>,
              DescribeConversionWorkspaceRevisions,
              (google::cloud::clouddms::v1::
                   DescribeConversionWorkspaceRevisionsRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<std::string>), FetchStaticIps,
              (google::cloud::clouddms::v1::FetchStaticIpsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_MOCKS_MOCK_DATA_MIGRATION_CONNECTION_H
