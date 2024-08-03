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
// source: google/cloud/compute/interconnects/v1/interconnects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECTS_V1_MOCKS_MOCK_INTERCONNECTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECTS_V1_MOCKS_MOCK_INTERCONNECTS_CONNECTION_H

#include "google/cloud/compute/interconnects/v1/interconnects_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_interconnects_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `InterconnectsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `InterconnectsClient`. To do so,
 * construct an object of type `InterconnectsClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockInterconnectsConnection
    : public compute_interconnects_v1::InterconnectsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteInterconnect(Matcher<google::cloud::cpp::compute::interconnects::v1::DeleteInterconnectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInterconnect,
              (google::cloud::cpp::compute::interconnects::v1::
                   DeleteInterconnectRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteInterconnect(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteInterconnect,
              (NoAwaitTag, google::cloud::cpp::compute::interconnects::v1::
                               DeleteInterconnectRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteInterconnect(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteInterconnect,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Interconnect>,
              GetInterconnect,
              (google::cloud::cpp::compute::interconnects::v1::
                   GetInterconnectRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::cpp::compute::v1::InterconnectsGetDiagnosticsResponse>,
      GetDiagnostics,
      (google::cloud::cpp::compute::interconnects::v1::
           GetDiagnosticsRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::
                           InterconnectsGetMacsecConfigResponse>,
              GetMacsecConfig,
              (google::cloud::cpp::compute::interconnects::v1::
                   GetMacsecConfigRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertInterconnect(Matcher<google::cloud::cpp::compute::interconnects::v1::InsertInterconnectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInterconnect,
              (google::cloud::cpp::compute::interconnects::v1::
                   InsertInterconnectRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, InsertInterconnect(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertInterconnect,
              (NoAwaitTag, google::cloud::cpp::compute::interconnects::v1::
                               InsertInterconnectRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertInterconnect(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertInterconnect,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::cpp::compute::v1::Interconnect>),
      ListInterconnects,
      (google::cloud::cpp::compute::interconnects::v1::ListInterconnectsRequest
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchInterconnect(Matcher<google::cloud::cpp::compute::interconnects::v1::PatchInterconnectRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInterconnect,
              (google::cloud::cpp::compute::interconnects::v1::
                   PatchInterconnectRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchInterconnect(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchInterconnect,
              (NoAwaitTag, google::cloud::cpp::compute::interconnects::v1::
                               PatchInterconnectRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchInterconnect(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchInterconnect,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetLabels(Matcher<google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::cpp::compute::v1::Operation>>, SetLabels,
      (google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SetLabels(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::cloud::cpp::compute::v1::Operation>, SetLabels,
      (NoAwaitTag,
       google::cloud::cpp::compute::interconnects::v1::SetLabelsRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetLabels(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnects_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECTS_V1_MOCKS_MOCK_INTERCONNECTS_CONNECTION_H
