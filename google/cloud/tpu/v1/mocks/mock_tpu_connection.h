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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_MOCKS_MOCK_TPU_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_MOCKS_MOCK_TPU_CONNECTION_H

#include "google/cloud/tpu/v1/tpu_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace tpu_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TpuConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TpuClient`. To do so,
 * construct an object of type `TpuClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTpuConnection : public tpu_v1::TpuConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD((StreamRange<google::cloud::tpu::v1::Node>), ListNodes,
              (google::cloud::tpu::v1::ListNodesRequest request), (override));

  MOCK_METHOD(StatusOr<google::cloud::tpu::v1::Node>, GetNode,
              (google::cloud::tpu::v1::GetNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateNode(Matcher<google::cloud::tpu::v1::CreateNodeRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, CreateNode,
              (google::cloud::tpu::v1::CreateNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateNode(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateNode,
              (NoAwaitTag,
               google::cloud::tpu::v1::CreateNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateNode(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, CreateNode,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNode(Matcher<google::cloud::tpu::v1::DeleteNodeRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, DeleteNode,
              (google::cloud::tpu::v1::DeleteNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteNode(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteNode,
              (NoAwaitTag,
               google::cloud::tpu::v1::DeleteNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteNode(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, DeleteNode,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ReimageNode(Matcher<google::cloud::tpu::v1::ReimageNodeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, ReimageNode,
              (google::cloud::tpu::v1::ReimageNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ReimageNode(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ReimageNode,
              (NoAwaitTag,
               google::cloud::tpu::v1::ReimageNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ReimageNode(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, ReimageNode,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StopNode(Matcher<google::cloud::tpu::v1::StopNodeRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, StopNode,
              (google::cloud::tpu::v1::StopNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StopNode(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StopNode,
              (NoAwaitTag,
               google::cloud::tpu::v1::StopNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, StopNode(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, StopNode,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StartNode(Matcher<google::cloud::tpu::v1::StartNodeRequest const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, StartNode,
              (google::cloud::tpu::v1::StartNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StartNode(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StartNode,
              (NoAwaitTag,
               google::cloud::tpu::v1::StartNodeRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, StartNode(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::tpu::v1::Node>>, StartNode,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::tpu::v1::TensorFlowVersion>),
              ListTensorFlowVersions,
              (google::cloud::tpu::v1::ListTensorFlowVersionsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::tpu::v1::TensorFlowVersion>, GetTensorFlowVersion,
      (google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::tpu::v1::AcceleratorType>),
              ListAcceleratorTypes,
              (google::cloud::tpu::v1::ListAcceleratorTypesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::tpu::v1::AcceleratorType>, GetAcceleratorType,
      (google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_MOCKS_MOCK_TPU_CONNECTION_H
