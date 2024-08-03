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
// source: google/cloud/migrationcenter/v1/migrationcenter.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_MOCKS_MOCK_MIGRATION_CENTER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_MOCKS_MOCK_MIGRATION_CENTER_CONNECTION_H

#include "google/cloud/migrationcenter/v1/migration_center_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace migrationcenter_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `MigrationCenterConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `MigrationCenterClient`. To do so,
 * construct an object of type `MigrationCenterClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockMigrationCenterConnection
    : public migrationcenter_v1::MigrationCenterConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::migrationcenter::v1::Asset>),
              ListAssets,
              (google::cloud::migrationcenter::v1::ListAssetsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::Asset>, GetAsset,
      (google::cloud::migrationcenter::v1::GetAssetRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::Asset>, UpdateAsset,
      (google::cloud::migrationcenter::v1::UpdateAssetRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::BatchUpdateAssetsResponse>,
      BatchUpdateAssets,
      (google::cloud::migrationcenter::v1::BatchUpdateAssetsRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteAsset,
      (google::cloud::migrationcenter::v1::DeleteAssetRequest const& request),
      (override));

  MOCK_METHOD(
      Status, BatchDeleteAssets,
      (google::cloud::migrationcenter::v1::BatchDeleteAssetsRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::ReportAssetFramesResponse>,
      ReportAssetFrames,
      (google::cloud::migrationcenter::v1::ReportAssetFramesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::migrationcenter::v1::AggregateAssetsValuesResponse>,
      AggregateAssetsValues,
      (google::cloud::migrationcenter::v1::AggregateAssetsValuesRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateImportJob(Matcher<google::cloud::migrationcenter::v1::CreateImportJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>,
              CreateImportJob,
              (google::cloud::migrationcenter::v1::CreateImportJobRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateImportJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateImportJob,
              (NoAwaitTag,
               google::cloud::migrationcenter::v1::CreateImportJobRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateImportJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>,
              CreateImportJob,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::migrationcenter::v1::ImportJob>),
      ListImportJobs,
      (google::cloud::migrationcenter::v1::ListImportJobsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::ImportJob>, GetImportJob,
      (google::cloud::migrationcenter::v1::GetImportJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteImportJob(Matcher<google::cloud::migrationcenter::v1::DeleteImportJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteImportJob,
      (google::cloud::migrationcenter::v1::DeleteImportJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteImportJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteImportJob,
              (NoAwaitTag,
               google::cloud::migrationcenter::v1::DeleteImportJobRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteImportJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteImportJob, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateImportJob(Matcher<google::cloud::migrationcenter::v1::UpdateImportJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>,
              UpdateImportJob,
              (google::cloud::migrationcenter::v1::UpdateImportJobRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateImportJob(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateImportJob,
              (NoAwaitTag,
               google::cloud::migrationcenter::v1::UpdateImportJobRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateImportJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::ImportJob>>,
              UpdateImportJob,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ValidateImportJob(Matcher<google::cloud::migrationcenter::v1::ValidateImportJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      ValidateImportJob,
      (google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ValidateImportJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ValidateImportJob,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::ValidateImportJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ValidateImportJob(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      ValidateImportJob, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RunImportJob(Matcher<google::cloud::migrationcenter::v1::RunImportJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      RunImportJob,
      (google::cloud::migrationcenter::v1::RunImportJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RunImportJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RunImportJob,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::RunImportJobRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RunImportJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      RunImportJob, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>,
      GetImportDataFile,
      (google::cloud::migrationcenter::v1::GetImportDataFileRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::migrationcenter::v1::ImportDataFile>),
      ListImportDataFiles,
      (google::cloud::migrationcenter::v1::ListImportDataFilesRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateImportDataFile(Matcher<google::cloud::migrationcenter::v1::CreateImportDataFileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>>,
      CreateImportDataFile,
      (google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateImportDataFile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateImportDataFile,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::CreateImportDataFileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateImportDataFile(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::ImportDataFile>>,
      CreateImportDataFile, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteImportDataFile(Matcher<google::cloud::migrationcenter::v1::DeleteImportDataFileRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteImportDataFile,
      (google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteImportDataFile(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteImportDataFile,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::DeleteImportDataFileRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteImportDataFile(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteImportDataFile, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::migrationcenter::v1::Group>),
              ListGroups,
              (google::cloud::migrationcenter::v1::ListGroupsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::Group>, GetGroup,
      (google::cloud::migrationcenter::v1::GetGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateGroup(Matcher<google::cloud::migrationcenter::v1::CreateGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Group>>, CreateGroup,
      (google::cloud::migrationcenter::v1::CreateGroupRequest const& request),
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
       google::cloud::migrationcenter::v1::CreateGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateGroup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Group>>,
              CreateGroup, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateGroup(Matcher<google::cloud::migrationcenter::v1::UpdateGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Group>>, UpdateGroup,
      (google::cloud::migrationcenter::v1::UpdateGroupRequest const& request),
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
       google::cloud::migrationcenter::v1::UpdateGroupRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateGroup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Group>>,
              UpdateGroup, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteGroup(Matcher<google::cloud::migrationcenter::v1::DeleteGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteGroup,
      (google::cloud::migrationcenter::v1::DeleteGroupRequest const& request),
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
       google::cloud::migrationcenter::v1::DeleteGroupRequest const& request),
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
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteGroup, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddAssetsToGroup(Matcher<google::cloud::migrationcenter::v1::AddAssetsToGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Group>>,
      AddAssetsToGroup,
      (google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AddAssetsToGroup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, AddAssetsToGroup,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::AddAssetsToGroupRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, AddAssetsToGroup(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Group>>,
              AddAssetsToGroup,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveAssetsFromGroup(Matcher<google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Group>>,
      RemoveAssetsFromGroup,
      (google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RemoveAssetsFromGroup(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RemoveAssetsFromGroup,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::RemoveAssetsFromGroupRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveAssetsFromGroup(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Group>>,
              RemoveAssetsFromGroup,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::migrationcenter::v1::ErrorFrame>),
      ListErrorFrames,
      (google::cloud::migrationcenter::v1::ListErrorFramesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::ErrorFrame>, GetErrorFrame,
      (google::cloud::migrationcenter::v1::GetErrorFrameRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::migrationcenter::v1::Source>),
              ListSources,
              (google::cloud::migrationcenter::v1::ListSourcesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::Source>, GetSource,
      (google::cloud::migrationcenter::v1::GetSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateSource(Matcher<google::cloud::migrationcenter::v1::CreateSourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Source>>,
      CreateSource,
      (google::cloud::migrationcenter::v1::CreateSourceRequest const& request),
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
       google::cloud::migrationcenter::v1::CreateSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateSource(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Source>>,
              CreateSource, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateSource(Matcher<google::cloud::migrationcenter::v1::UpdateSourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Source>>,
      UpdateSource,
      (google::cloud::migrationcenter::v1::UpdateSourceRequest const& request),
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
       google::cloud::migrationcenter::v1::UpdateSourceRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateSource(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Source>>,
              UpdateSource, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteSource(Matcher<google::cloud::migrationcenter::v1::DeleteSourceRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteSource,
      (google::cloud::migrationcenter::v1::DeleteSourceRequest const& request),
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
       google::cloud::migrationcenter::v1::DeleteSourceRequest const& request),
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
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteSource, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::migrationcenter::v1::PreferenceSet>),
      ListPreferenceSets,
      (google::cloud::migrationcenter::v1::ListPreferenceSetsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>,
      GetPreferenceSet,
      (google::cloud::migrationcenter::v1::GetPreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePreferenceSet(Matcher<google::cloud::migrationcenter::v1::CreatePreferenceSetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>,
      CreatePreferenceSet,
      (google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreatePreferenceSet(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreatePreferenceSet,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::CreatePreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreatePreferenceSet(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>,
      CreatePreferenceSet, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdatePreferenceSet(Matcher<google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>,
      UpdatePreferenceSet,
      (google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdatePreferenceSet(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdatePreferenceSet,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::UpdatePreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdatePreferenceSet(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::PreferenceSet>>,
      UpdatePreferenceSet, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePreferenceSet(Matcher<google::cloud::migrationcenter::v1::DeletePreferenceSetRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeletePreferenceSet,
      (google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeletePreferenceSet(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeletePreferenceSet,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::DeletePreferenceSetRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeletePreferenceSet(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeletePreferenceSet, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::Settings>, GetSettings,
      (google::cloud::migrationcenter::v1::GetSettingsRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateSettings(Matcher<google::cloud::migrationcenter::v1::UpdateSettingsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Settings>>,
              UpdateSettings,
              (google::cloud::migrationcenter::v1::UpdateSettingsRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateSettings(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateSettings,
              (NoAwaitTag,
               google::cloud::migrationcenter::v1::UpdateSettingsRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateSettings(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Settings>>,
              UpdateSettings, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateReportConfig(Matcher<google::cloud::migrationcenter::v1::CreateReportConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::ReportConfig>>,
      CreateReportConfig,
      (google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateReportConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateReportConfig,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::CreateReportConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateReportConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::ReportConfig>>,
      CreateReportConfig, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::migrationcenter::v1::ReportConfig>,
              GetReportConfig,
              (google::cloud::migrationcenter::v1::GetReportConfigRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::migrationcenter::v1::ReportConfig>),
      ListReportConfigs,
      (google::cloud::migrationcenter::v1::ListReportConfigsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteReportConfig(Matcher<google::cloud::migrationcenter::v1::DeleteReportConfigRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteReportConfig,
      (google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteReportConfig(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteReportConfig,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::DeleteReportConfigRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteReportConfig(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteReportConfig, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateReport(Matcher<google::cloud::migrationcenter::v1::CreateReportRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::Report>>,
      CreateReport,
      (google::cloud::migrationcenter::v1::CreateReportRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateReport(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateReport,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::CreateReportRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateReport(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::migrationcenter::v1::Report>>,
              CreateReport, (google::longrunning::Operation const& operation),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::migrationcenter::v1::Report>, GetReport,
      (google::cloud::migrationcenter::v1::GetReportRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::migrationcenter::v1::Report>),
              ListReports,
              (google::cloud::migrationcenter::v1::ListReportsRequest request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteReport(Matcher<google::cloud::migrationcenter::v1::DeleteReportRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteReport,
      (google::cloud::migrationcenter::v1::DeleteReportRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteReport(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteReport,
      (NoAwaitTag,
       google::cloud::migrationcenter::v1::DeleteReportRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteReport(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::migrationcenter::v1::OperationMetadata>>,
      DeleteReport, (google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace migrationcenter_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MIGRATIONCENTER_V1_MOCKS_MOCK_MIGRATION_CENTER_CONNECTION_H
