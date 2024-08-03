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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_MOCKS_MOCK_VPC_ACCESS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_MOCKS_MOCK_VPC_ACCESS_CONNECTION_H

#include "google/cloud/vpcaccess/v1/vpc_access_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace vpcaccess_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `VpcAccessServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `VpcAccessServiceClient`. To do so,
 * construct an object of type `VpcAccessServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockVpcAccessServiceConnection
    : public vpcaccess_v1::VpcAccessServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConnector(Matcher<google::cloud::vpcaccess::v1::CreateConnectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vpcaccess::v1::Connector>>,
      CreateConnector,
      (google::cloud::vpcaccess::v1::CreateConnectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConnector(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConnector,
      (NoAwaitTag,
       google::cloud::vpcaccess::v1::CreateConnectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateConnector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vpcaccess::v1::Connector>>,
              CreateConnector,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vpcaccess::v1::Connector>, GetConnector,
      (google::cloud::vpcaccess::v1::GetConnectorRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::vpcaccess::v1::Connector>),
              ListConnectors,
              (google::cloud::vpcaccess::v1::ListConnectorsRequest request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConnector(Matcher<google::cloud::vpcaccess::v1::DeleteConnectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>,
      DeleteConnector,
      (google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConnector(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConnector,
      (NoAwaitTag,
       google::cloud::vpcaccess::v1::DeleteConnectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteConnector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>,
              DeleteConnector,
              (google::longrunning::Operation const& operation), (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VPCACCESS_V1_MOCKS_MOCK_VPC_ACCESS_CONNECTION_H
