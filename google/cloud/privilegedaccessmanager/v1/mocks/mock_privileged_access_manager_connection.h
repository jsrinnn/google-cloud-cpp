// Copyright 2024 Google LLC
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
// source: google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_MOCKS_MOCK_PRIVILEGED_ACCESS_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_MOCKS_MOCK_PRIVILEGED_ACCESS_MANAGER_CONNECTION_H

#include "google/cloud/privilegedaccessmanager/v1/privileged_access_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace privilegedaccessmanager_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `PrivilegedAccessManagerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `PrivilegedAccessManagerClient`. To
 * do so, construct an object of type `PrivilegedAccessManagerClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockPrivilegedAccessManagerConnection
    : public privilegedaccessmanager_v1::PrivilegedAccessManagerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::privilegedaccessmanager::v1::
                           CheckOnboardingStatusResponse>,
              CheckOnboardingStatus,
              (google::cloud::privilegedaccessmanager::v1::
                   CheckOnboardingStatusRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::privilegedaccessmanager::v1::Entitlement>),
      ListEntitlements,
      (google::cloud::privilegedaccessmanager::v1::ListEntitlementsRequest
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::privilegedaccessmanager::v1::Entitlement>),
      SearchEntitlements,
      (google::cloud::privilegedaccessmanager::v1::SearchEntitlementsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>,
      GetEntitlement,
      (google::cloud::privilegedaccessmanager::v1::GetEntitlementRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateEntitlement(Matcher<google::cloud::privilegedaccessmanager::v1::CreateEntitlementRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>,
      CreateEntitlement,
      (google::cloud::privilegedaccessmanager::v1::
           CreateEntitlementRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateEntitlement(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateEntitlement,
              (NoAwaitTag, google::cloud::privilegedaccessmanager::v1::
                               CreateEntitlementRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateEntitlement(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>,
      CreateEntitlement, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteEntitlement(Matcher<google::cloud::privilegedaccessmanager::v1::DeleteEntitlementRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>,
      DeleteEntitlement,
      (google::cloud::privilegedaccessmanager::v1::
           DeleteEntitlementRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteEntitlement(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteEntitlement,
              (NoAwaitTag, google::cloud::privilegedaccessmanager::v1::
                               DeleteEntitlementRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteEntitlement(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>,
      DeleteEntitlement, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateEntitlement(Matcher<google::cloud::privilegedaccessmanager::v1::UpdateEntitlementRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>,
      UpdateEntitlement,
      (google::cloud::privilegedaccessmanager::v1::
           UpdateEntitlementRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateEntitlement(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateEntitlement,
              (NoAwaitTag, google::cloud::privilegedaccessmanager::v1::
                               UpdateEntitlementRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateEntitlement(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>,
      UpdateEntitlement, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::privilegedaccessmanager::v1::Grant>),
      ListGrants,
      (google::cloud::privilegedaccessmanager::v1::ListGrantsRequest request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::privilegedaccessmanager::v1::Grant>),
      SearchGrants,
      (google::cloud::privilegedaccessmanager::v1::SearchGrantsRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>, GetGrant,
      (google::cloud::privilegedaccessmanager::v1::GetGrantRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>, CreateGrant,
      (google::cloud::privilegedaccessmanager::v1::CreateGrantRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>, ApproveGrant,
      (google::cloud::privilegedaccessmanager::v1::ApproveGrantRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>, DenyGrant,
      (google::cloud::privilegedaccessmanager::v1::DenyGrantRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RevokeGrant(Matcher<google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>>,
      RevokeGrant,
      (google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RevokeGrant(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, RevokeGrant,
      (NoAwaitTag,
       google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, RevokeGrant(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>>,
      RevokeGrant, (google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privilegedaccessmanager_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_MOCKS_MOCK_PRIVILEGED_ACCESS_MANAGER_CONNECTION_H
