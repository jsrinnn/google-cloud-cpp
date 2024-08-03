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
// source: google/cloud/vision/v1/product_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_MOCKS_MOCK_PRODUCT_SEARCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_MOCKS_MOCK_PRODUCT_SEARCH_CONNECTION_H

#include "google/cloud/vision/v1/product_search_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace vision_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ProductSearchConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ProductSearchClient`. To do so,
 * construct an object of type `ProductSearchClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockProductSearchConnection : public vision_v1::ProductSearchConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vision::v1::ProductSet>, CreateProductSet,
      (google::cloud::vision::v1::CreateProductSetRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::vision::v1::ProductSet>),
              ListProductSets,
              (google::cloud::vision::v1::ListProductSetsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vision::v1::ProductSet>, GetProductSet,
              (google::cloud::vision::v1::GetProductSetRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vision::v1::ProductSet>, UpdateProductSet,
      (google::cloud::vision::v1::UpdateProductSetRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteProductSet,
      (google::cloud::vision::v1::DeleteProductSetRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::vision::v1::Product>, CreateProduct,
              (google::cloud::vision::v1::CreateProductRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::vision::v1::Product>), ListProducts,
              (google::cloud::vision::v1::ListProductsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vision::v1::Product>, GetProduct,
              (google::cloud::vision::v1::GetProductRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::vision::v1::Product>, UpdateProduct,
              (google::cloud::vision::v1::UpdateProductRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteProduct,
              (google::cloud::vision::v1::DeleteProductRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vision::v1::ReferenceImage>, CreateReferenceImage,
      (google::cloud::vision::v1::CreateReferenceImageRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteReferenceImage,
      (google::cloud::vision::v1::DeleteReferenceImageRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::vision::v1::ReferenceImage>),
              ListReferenceImages,
              (google::cloud::vision::v1::ListReferenceImagesRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::vision::v1::ReferenceImage>, GetReferenceImage,
      (google::cloud::vision::v1::GetReferenceImageRequest const& request),
      (override));

  MOCK_METHOD(
      Status, AddProductToProductSet,
      (google::cloud::vision::v1::AddProductToProductSetRequest const& request),
      (override));

  MOCK_METHOD(
      Status, RemoveProductFromProductSet,
      (google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::vision::v1::Product>),
      ListProductsInProductSet,
      (google::cloud::vision::v1::ListProductsInProductSetRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportProductSets(Matcher<google::cloud::vision::v1::ImportProductSetsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>,
      ImportProductSets,
      (google::cloud::vision::v1::ImportProductSetsRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ImportProductSets(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, ImportProductSets,
      (NoAwaitTag,
       google::cloud::vision::v1::ImportProductSetsRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ImportProductSets(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>,
      ImportProductSets, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PurgeProducts(Matcher<google::cloud::vision::v1::PurgeProductsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>,
      PurgeProducts,
      (google::cloud::vision::v1::PurgeProductsRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PurgeProducts(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, PurgeProducts,
              (NoAwaitTag,
               google::cloud::vision::v1::PurgeProductsRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, PurgeProducts(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>,
      PurgeProducts, (google::longrunning::Operation const& operation),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_MOCKS_MOCK_PRODUCT_SEARCH_CONNECTION_H
