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
// source: google/cloud/vmmigration/v1/vmmigration.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_MOCKS_MOCK_VM_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_MOCKS_MOCK_VM_MIGRATION_CONNECTION_H

#include "google/cloud/vmmigration/v1/vm_migration_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace vmmigration_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VmMigrationConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VmMigrationClient`. To do so,
 * construct an object of type `VmMigrationClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockVmMigrationConnection : public vmmigration_v1::VmMigrationConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::vmmigration::v1::Source>),
              ListSources,
              (google::cloud::vmmigration::v1::ListSourcesRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vmmigration::v1::Source>, GetSource,
              (google::cloud::vmmigration::v1::GetSourceRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateSource(Matcher<google::cloud::vmmigration::v1::CreateSourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Source>>, CreateSource,
      (google::cloud::vmmigration::v1::CreateSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateSource(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateSource,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateSource(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::Source>>,
              CreateSource, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateSource(Matcher<google::cloud::vmmigration::v1::UpdateSourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Source>>, UpdateSource,
      (google::cloud::vmmigration::v1::UpdateSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateSource(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateSource,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::UpdateSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateSource(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::Source>>,
              UpdateSource, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteSource(Matcher<google::cloud::vmmigration::v1::DeleteSourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteSource,
      (google::cloud::vmmigration::v1::DeleteSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteSource(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteSource,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::DeleteSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteSource(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteSource, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::FetchInventoryResponse>,
      FetchInventory,
      (google::cloud::vmmigration::v1::FetchInventoryRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::vmmigration::v1::UtilizationReport>),
      ListUtilizationReports,
      (google::cloud::vmmigration::v1::ListUtilizationReportsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::UtilizationReport>,
      GetUtilizationReport,
      (google::cloud::vmmigration::v1::GetUtilizationReportRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateUtilizationReport(Matcher<google::cloud::vmmigration::v1::CreateUtilizationReportRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>,
      CreateUtilizationReport,
      (google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateUtilizationReport(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateUtilizationReport,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateUtilizationReportRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateUtilizationReport(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::UtilizationReport>>,
      CreateUtilizationReport,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteUtilizationReport(Matcher<google::cloud::vmmigration::v1::DeleteUtilizationReportRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteUtilizationReport,
      (google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteUtilizationReport(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteUtilizationReport,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::DeleteUtilizationReportRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteUtilizationReport(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteUtilizationReport,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::vmmigration::v1::DatacenterConnector>),
      ListDatacenterConnectors,
      (google::cloud::vmmigration::v1::ListDatacenterConnectorsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>,
      GetDatacenterConnector,
      (google::cloud::vmmigration::v1::GetDatacenterConnectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDatacenterConnector(Matcher<google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>,
      CreateDatacenterConnector,
      (google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateDatacenterConnector(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateDatacenterConnector,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateDatacenterConnectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateDatacenterConnector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::DatacenterConnector>>,
      CreateDatacenterConnector,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDatacenterConnector(Matcher<google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteDatacenterConnector,
      (google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteDatacenterConnector(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteDatacenterConnector,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::DeleteDatacenterConnectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteDatacenterConnector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteDatacenterConnector,
      (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpgradeAppliance(Matcher<google::cloud::vmmigration::v1::UpgradeApplianceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>,
      UpgradeAppliance,
      (google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpgradeAppliance(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpgradeAppliance,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::UpgradeApplianceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpgradeAppliance(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::UpgradeApplianceResponse>>,
      UpgradeAppliance, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateMigratingVm(Matcher<google::cloud::vmmigration::v1::CreateMigratingVmRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>,
      CreateMigratingVm,
      (google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateMigratingVm(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateMigratingVm,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateMigratingVm(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>,
              CreateMigratingVm,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::vmmigration::v1::MigratingVm>),
              ListMigratingVms,
              (google::cloud::vmmigration::v1::ListMigratingVmsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::MigratingVm>, GetMigratingVm,
      (google::cloud::vmmigration::v1::GetMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateMigratingVm(Matcher<google::cloud::vmmigration::v1::UpdateMigratingVmRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>,
      UpdateMigratingVm,
      (google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateMigratingVm(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateMigratingVm,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::UpdateMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateMigratingVm(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::MigratingVm>>,
              UpdateMigratingVm,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteMigratingVm(Matcher<google::cloud::vmmigration::v1::DeleteMigratingVmRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteMigratingVm,
      (google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteMigratingVm(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteMigratingVm,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::DeleteMigratingVmRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteMigratingVm(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteMigratingVm, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StartMigration(Matcher<google::cloud::vmmigration::v1::StartMigrationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>,
      StartMigration,
      (google::cloud::vmmigration::v1::StartMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StartMigration(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, StartMigration,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::StartMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, StartMigration(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::StartMigrationResponse>>,
      StartMigration, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ResumeMigration(Matcher<google::cloud::vmmigration::v1::ResumeMigrationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>,
      ResumeMigration,
      (google::cloud::vmmigration::v1::ResumeMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ResumeMigration(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ResumeMigration,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::ResumeMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ResumeMigration(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::ResumeMigrationResponse>>,
      ResumeMigration, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PauseMigration(Matcher<google::cloud::vmmigration::v1::PauseMigrationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>,
      PauseMigration,
      (google::cloud::vmmigration::v1::PauseMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PauseMigration(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, PauseMigration,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::PauseMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, PauseMigration(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::PauseMigrationResponse>>,
      PauseMigration, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// FinalizeMigration(Matcher<google::cloud::vmmigration::v1::FinalizeMigrationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>,
      FinalizeMigration,
      (google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, FinalizeMigration(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, FinalizeMigration,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::FinalizeMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// FinalizeMigration(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::FinalizeMigrationResponse>>,
      FinalizeMigration, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCloneJob(Matcher<google::cloud::vmmigration::v1::CreateCloneJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>,
      CreateCloneJob,
      (google::cloud::vmmigration::v1::CreateCloneJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCloneJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCloneJob,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateCloneJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateCloneJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::CloneJob>>,
              CreateCloneJob, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CancelCloneJob(Matcher<google::cloud::vmmigration::v1::CancelCloneJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>,
      CancelCloneJob,
      (google::cloud::vmmigration::v1::CancelCloneJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CancelCloneJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CancelCloneJob,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CancelCloneJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CancelCloneJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CancelCloneJobResponse>>,
      CancelCloneJob, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::vmmigration::v1::CloneJob>),
              ListCloneJobs,
              (google::cloud::vmmigration::v1::ListCloneJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::CloneJob>, GetCloneJob,
      (google::cloud::vmmigration::v1::GetCloneJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCutoverJob(Matcher<google::cloud::vmmigration::v1::CreateCutoverJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>,
      CreateCutoverJob,
      (google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCutoverJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateCutoverJob,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateCutoverJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateCutoverJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::CutoverJob>>,
              CreateCutoverJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CancelCutoverJob(Matcher<google::cloud::vmmigration::v1::CancelCutoverJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>,
      CancelCutoverJob,
      (google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CancelCutoverJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CancelCutoverJob,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CancelCutoverJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CancelCutoverJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::CancelCutoverJobResponse>>,
      CancelCutoverJob, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::vmmigration::v1::CutoverJob>),
              ListCutoverJobs,
              (google::cloud::vmmigration::v1::ListCutoverJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::CutoverJob>, GetCutoverJob,
      (google::cloud::vmmigration::v1::GetCutoverJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::vmmigration::v1::Group>), ListGroups,
              (google::cloud::vmmigration::v1::ListGroupsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vmmigration::v1::Group>, GetGroup,
              (google::cloud::vmmigration::v1::GetGroupRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateGroup(Matcher<google::cloud::vmmigration::v1::CreateGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Group>>, CreateGroup,
      (google::cloud::vmmigration::v1::CreateGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateGroup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateGroup,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::CreateGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateGroup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::Group>>,
              CreateGroup, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateGroup(Matcher<google::cloud::vmmigration::v1::UpdateGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::Group>>, UpdateGroup,
      (google::cloud::vmmigration::v1::UpdateGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateGroup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateGroup,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::UpdateGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateGroup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::Group>>,
              UpdateGroup, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteGroup(Matcher<google::cloud::vmmigration::v1::DeleteGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteGroup,
      (google::cloud::vmmigration::v1::DeleteGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteGroup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteGroup,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::DeleteGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteGroup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteGroup, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddGroupMigration(Matcher<google::cloud::vmmigration::v1::AddGroupMigrationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>,
      AddGroupMigration,
      (google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AddGroupMigration(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, AddGroupMigration,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::AddGroupMigrationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddGroupMigration(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::vmmigration::v1::AddGroupMigrationResponse>>,
      AddGroupMigration, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveGroupMigration(Matcher<google::cloud::vmmigration::v1::RemoveGroupMigrationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>,
      RemoveGroupMigration,
      (google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RemoveGroupMigration(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RemoveGroupMigration,
      (NoAwaitTag,
       google::cloud::vmmigration::v1::RemoveGroupMigrationRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveGroupMigration(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::vmmigration::v1::RemoveGroupMigrationResponse>>,
      RemoveGroupMigration, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::vmmigration::v1::TargetProject>),
      ListTargetProjects,
      (google::cloud::vmmigration::v1::ListTargetProjectsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vmmigration::v1::TargetProject>, GetTargetProject,
      (google::cloud::vmmigration::v1::GetTargetProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateTargetProject(Matcher<google::cloud::vmmigration::v1::CreateTargetProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>,
              CreateTargetProject,
              (google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateTargetProject(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateTargetProject,
              (NoAwaitTag,
               google::cloud::vmmigration::v1::CreateTargetProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateTargetProject(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>,
              CreateTargetProject,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateTargetProject(Matcher<google::cloud::vmmigration::v1::UpdateTargetProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>,
              UpdateTargetProject,
              (google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateTargetProject(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateTargetProject,
              (NoAwaitTag,
               google::cloud::vmmigration::v1::UpdateTargetProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateTargetProject(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vmmigration::v1::TargetProject>>,
              UpdateTargetProject,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteTargetProject(Matcher<google::cloud::vmmigration::v1::DeleteTargetProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteTargetProject,
      (google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteTargetProject(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteTargetProject,
              (NoAwaitTag,
               google::cloud::vmmigration::v1::DeleteTargetProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteTargetProject(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vmmigration::v1::OperationMetadata>>,
      DeleteTargetProject, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::vmmigration::v1::ReplicationCycle>),
      ListReplicationCycles,
      (google::cloud::vmmigration::v1::ListReplicationCyclesRequest request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::vmmigration::v1::ReplicationCycle>,
              GetReplicationCycle,
              (google::cloud::vmmigration::v1::GetReplicationCycleRequest const&
                   request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vmmigration_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VMMIGRATION_V1_MOCKS_MOCK_VM_MIGRATION_CONNECTION_H
