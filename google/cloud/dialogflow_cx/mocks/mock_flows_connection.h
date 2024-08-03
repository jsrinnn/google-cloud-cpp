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
// source: google/cloud/dialogflow/cx/v3/flow.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_FLOWS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_FLOWS_CONNECTION_H

#include "google/cloud/dialogflow_cx/flows_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_cx_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `FlowsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `FlowsClient`. To do so,
 * construct an object of type `FlowsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockFlowsConnection : public dialogflow_cx::FlowsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::Flow>, CreateFlow,
      (google::cloud::dialogflow::cx::v3::CreateFlowRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteFlow,
      (google::cloud::dialogflow::cx::v3::DeleteFlowRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::dialogflow::cx::v3::Flow>), ListFlows,
              (google::cloud::dialogflow::cx::v3::ListFlowsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::Flow>, GetFlow,
      (google::cloud::dialogflow::cx::v3::GetFlowRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::Flow>, UpdateFlow,
      (google::cloud::dialogflow::cx::v3::UpdateFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// TrainFlow(Matcher<google::cloud::dialogflow::cx::v3::TrainFlowRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::protobuf::Struct>>, TrainFlow,
      (google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, TrainFlow(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, TrainFlow,
      (NoAwaitTag,
       google::cloud::dialogflow::cx::v3::TrainFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, TrainFlow(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::protobuf::Struct>>, TrainFlow,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>,
      ValidateFlow,
      (google::cloud::dialogflow::cx::v3::ValidateFlowRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::cx::v3::FlowValidationResult>,
      GetFlowValidationResult,
      (google::cloud::dialogflow::cx::v3::GetFlowValidationResultRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportFlow(Matcher<google::cloud::dialogflow::cx::v3::ImportFlowRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>,
      ImportFlow,
      (google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ImportFlow(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ImportFlow,
      (NoAwaitTag,
       google::cloud::dialogflow::cx::v3::ImportFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ImportFlow(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::cx::v3::ImportFlowResponse>>,
      ImportFlow, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ExportFlow(Matcher<google::cloud::dialogflow::cx::v3::ExportFlowRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>,
      ExportFlow,
      (google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ExportFlow(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ExportFlow,
      (NoAwaitTag,
       google::cloud::dialogflow::cx::v3::ExportFlowRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ExportFlow(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::cx::v3::ExportFlowResponse>>,
      ExportFlow, (google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_MOCKS_MOCK_FLOWS_CONNECTION_H
