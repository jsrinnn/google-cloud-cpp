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
// source: google/cloud/certificatemanager/v1/certificate_manager.proto

#include "google/cloud/certificatemanager/v1/internal/certificate_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/certificatemanager/v1/certificate_manager.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace certificatemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CertificateManagerLogging::CertificateManagerLogging(
    std::shared_ptr<CertificateManagerStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::certificatemanager::v1::ListCertificatesResponse>
CertificateManagerLogging::ListCertificates(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListCertificatesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::ListCertificatesRequest const&
              request) {
        return child_->ListCertificates(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::Certificate>
CertificateManagerLogging::GetCertificate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::GetCertificateRequest const&
                 request) {
        return child_->GetCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncCreateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::certificatemanager::v1::CreateCertificateRequest const&
              request) {
        return child_->AsyncCreateCertificate(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::CreateCertificate(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::CreateCertificateRequest const&
              request) {
        return child_->CreateCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncUpdateCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
              request) {
        return child_->AsyncUpdateCertificate(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::UpdateCertificate(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::UpdateCertificateRequest const&
              request) {
        return child_->UpdateCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncDeleteCertificate(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
              request) {
        return child_->AsyncDeleteCertificate(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::DeleteCertificate(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::DeleteCertificateRequest const&
              request) {
        return child_->DeleteCertificate(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::ListCertificateMapsResponse>
CertificateManagerLogging::ListCertificateMaps(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListCertificateMapsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 ListCertificateMapsRequest const& request) {
        return child_->ListCertificateMaps(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMap>
CertificateManagerLogging::GetCertificateMap(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::GetCertificateMapRequest const&
              request) {
        return child_->GetCertificateMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncCreateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 CreateCertificateMapRequest const& request) {
        return child_->AsyncCreateCertificateMap(cq, std::move(context),
                                                 std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::CreateCertificateMap(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 CreateCertificateMapRequest const& request) {
        return child_->CreateCertificateMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncUpdateCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 UpdateCertificateMapRequest const& request) {
        return child_->AsyncUpdateCertificateMap(cq, std::move(context),
                                                 std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::UpdateCertificateMap(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 UpdateCertificateMapRequest const& request) {
        return child_->UpdateCertificateMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncDeleteCertificateMap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateMapRequest const& request) {
        return child_->AsyncDeleteCertificateMap(cq, std::move(context),
                                                 std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::DeleteCertificateMap(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteCertificateMapRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateMapRequest const& request) {
        return child_->DeleteCertificateMap(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::certificatemanager::v1::ListCertificateMapEntriesResponse>
CertificateManagerLogging::ListCertificateMapEntries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::
        ListCertificateMapEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 ListCertificateMapEntriesRequest const& request) {
        return child_->ListCertificateMapEntries(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateMapEntry>
CertificateManagerLogging::GetCertificateMapEntry(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetCertificateMapEntryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 GetCertificateMapEntryRequest const& request) {
        return child_->GetCertificateMapEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncCreateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 CreateCertificateMapEntryRequest const& request) {
        return child_->AsyncCreateCertificateMapEntry(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::CreateCertificateMapEntry(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        CreateCertificateMapEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 CreateCertificateMapEntryRequest const& request) {
        return child_->CreateCertificateMapEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncUpdateCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 UpdateCertificateMapEntryRequest const& request) {
        return child_->AsyncUpdateCertificateMapEntry(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::UpdateCertificateMapEntry(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        UpdateCertificateMapEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 UpdateCertificateMapEntryRequest const& request) {
        return child_->UpdateCertificateMapEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncDeleteCertificateMapEntry(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateMapEntryRequest const& request) {
        return child_->AsyncDeleteCertificateMapEntry(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::DeleteCertificateMapEntry(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateMapEntryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateMapEntryRequest const& request) {
        return child_->DeleteCertificateMapEntry(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::ListDnsAuthorizationsResponse>
CertificateManagerLogging::ListDnsAuthorizations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListDnsAuthorizationsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 ListDnsAuthorizationsRequest const& request) {
        return child_->ListDnsAuthorizations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::DnsAuthorization>
CertificateManagerLogging::GetDnsAuthorization(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 GetDnsAuthorizationRequest const& request) {
        return child_->GetDnsAuthorization(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncCreateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 CreateDnsAuthorizationRequest const& request) {
        return child_->AsyncCreateDnsAuthorization(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::CreateDnsAuthorization(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 CreateDnsAuthorizationRequest const& request) {
        return child_->CreateDnsAuthorization(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncUpdateDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 UpdateDnsAuthorizationRequest const& request) {
        return child_->AsyncUpdateDnsAuthorization(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::UpdateDnsAuthorization(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 UpdateDnsAuthorizationRequest const& request) {
        return child_->UpdateDnsAuthorization(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncDeleteDnsAuthorization(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 DeleteDnsAuthorizationRequest const& request) {
        return child_->AsyncDeleteDnsAuthorization(cq, std::move(context),
                                                   std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::DeleteDnsAuthorization(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteDnsAuthorizationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 DeleteDnsAuthorizationRequest const& request) {
        return child_->DeleteDnsAuthorization(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::
             ListCertificateIssuanceConfigsResponse>
CertificateManagerLogging::ListCertificateIssuanceConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::
        ListCertificateIssuanceConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 ListCertificateIssuanceConfigsRequest const& request) {
        return child_->ListCertificateIssuanceConfigs(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::CertificateIssuanceConfig>
CertificateManagerLogging::GetCertificateIssuanceConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::
        GetCertificateIssuanceConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 GetCertificateIssuanceConfigRequest const& request) {
        return child_->GetCertificateIssuanceConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncCreateCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 CreateCertificateIssuanceConfigRequest const& request) {
        return child_->AsyncCreateCertificateIssuanceConfig(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::CreateCertificateIssuanceConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        CreateCertificateIssuanceConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 CreateCertificateIssuanceConfigRequest const& request) {
        return child_->CreateCertificateIssuanceConfig(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncDeleteCertificateIssuanceConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateIssuanceConfigRequest const& request) {
        return child_->AsyncDeleteCertificateIssuanceConfig(
            cq, std::move(context), std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::DeleteCertificateIssuanceConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::
        DeleteCertificateIssuanceConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::
                 DeleteCertificateIssuanceConfigRequest const& request) {
        return child_->DeleteCertificateIssuanceConfig(context, options,
                                                       request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::ListTrustConfigsResponse>
CertificateManagerLogging::ListTrustConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::ListTrustConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::ListTrustConfigsRequest const&
              request) {
        return child_->ListTrustConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::certificatemanager::v1::TrustConfig>
CertificateManagerLogging::GetTrustConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::certificatemanager::v1::GetTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::certificatemanager::v1::GetTrustConfigRequest const&
                 request) {
        return child_->GetTrustConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncCreateTrustConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
              request) {
        return child_->AsyncCreateTrustConfig(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::CreateTrustConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::CreateTrustConfigRequest const&
              request) {
        return child_->CreateTrustConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncUpdateTrustConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
              request) {
        return child_->AsyncUpdateTrustConfig(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::UpdateTrustConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::UpdateTrustConfigRequest const&
              request) {
        return child_->UpdateTrustConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncDeleteTrustConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
              request) {
        return child_->AsyncDeleteTrustConfig(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation>
CertificateManagerLogging::DeleteTrustConfig(
    grpc::ClientContext& context, Options options,
    google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::certificatemanager::v1::DeleteTrustConfigRequest const&
              request) {
        return child_->DeleteTrustConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
CertificateManagerLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> CertificateManagerLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace certificatemanager_v1_internal
}  // namespace cloud
}  // namespace google
