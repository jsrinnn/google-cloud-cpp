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
// source: google/cloud/resourcemanager/v3/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_PROJECTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_PROJECTS_CONNECTION_H

#include "google/cloud/resourcemanager/v3/projects_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace resourcemanager_v3_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ProjectsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ProjectsClient`. To do so,
 * construct an object of type `ProjectsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockProjectsConnection : public resourcemanager_v3::ProjectsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::resourcemanager::v3::Project>, GetProject,
      (google::cloud::resourcemanager::v3::GetProjectRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::resourcemanager::v3::Project>),
              ListProjects,
              (google::cloud::resourcemanager::v3::ListProjectsRequest request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::resourcemanager::v3::Project>),
      SearchProjects,
      (google::cloud::resourcemanager::v3::SearchProjectsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateProject(Matcher<google::cloud::resourcemanager::v3::CreateProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
      CreateProject,
      (google::cloud::resourcemanager::v3::CreateProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateProject(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateProject,
      (NoAwaitTag,
       google::cloud::resourcemanager::v3::CreateProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateProject(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
              CreateProject, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateProject(Matcher<google::cloud::resourcemanager::v3::UpdateProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
      UpdateProject,
      (google::cloud::resourcemanager::v3::UpdateProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateProject(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpdateProject,
      (NoAwaitTag,
       google::cloud::resourcemanager::v3::UpdateProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateProject(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
              UpdateProject, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// MoveProject(Matcher<google::cloud::resourcemanager::v3::MoveProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
      MoveProject,
      (google::cloud::resourcemanager::v3::MoveProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, MoveProject(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, MoveProject,
      (NoAwaitTag,
       google::cloud::resourcemanager::v3::MoveProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, MoveProject(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
              MoveProject, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteProject(Matcher<google::cloud::resourcemanager::v3::DeleteProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
      DeleteProject,
      (google::cloud::resourcemanager::v3::DeleteProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteProject(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteProject,
      (NoAwaitTag,
       google::cloud::resourcemanager::v3::DeleteProjectRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteProject(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
              DeleteProject, (google::longrunning::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UndeleteProject(Matcher<google::cloud::resourcemanager::v3::UndeleteProjectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
              UndeleteProject,
              (google::cloud::resourcemanager::v3::UndeleteProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UndeleteProject(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UndeleteProject,
              (NoAwaitTag,
               google::cloud::resourcemanager::v3::UndeleteProjectRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UndeleteProject(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::resourcemanager::v3::Project>>,
              UndeleteProject,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_MOCKS_MOCK_PROJECTS_CONNECTION_H
