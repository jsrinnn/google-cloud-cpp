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
// source: google/cloud/dialogflow/cx/v3/generator.proto

#include "google/cloud/dialogflow_cx/generators_connection.h"
#include "google/cloud/dialogflow_cx/generators_options.h"
#include "google/cloud/dialogflow_cx/internal/generators_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/generators_option_defaults.h"
#include "google/cloud/dialogflow_cx/internal/generators_stub_factory.h"
#include "google/cloud/dialogflow_cx/internal/generators_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GeneratorsConnection::~GeneratorsConnection() = default;

StreamRange<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsConnection::ListGenerators(
    google::cloud::dialogflow::cx::v3::
        ListGeneratorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Generator>>();
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsConnection::GetGenerator(
    google::cloud::dialogflow::cx::v3::GetGeneratorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsConnection::CreateGenerator(
    google::cloud::dialogflow::cx::v3::CreateGeneratorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsConnection::UpdateGenerator(
    google::cloud::dialogflow::cx::v3::UpdateGeneratorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status GeneratorsConnection::DeleteGenerator(
    google::cloud::dialogflow::cx::v3::DeleteGeneratorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<GeneratorsConnection> MakeGeneratorsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 GeneratorsPolicyOptionList>(options, __func__);
  options = dialogflow_cx_internal::GeneratorsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_cx_internal::CreateDefaultGeneratorsStub(
      std::move(auth), options);
  return dialogflow_cx_internal::MakeGeneratorsTracingConnection(
      std::make_shared<dialogflow_cx_internal::GeneratorsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
