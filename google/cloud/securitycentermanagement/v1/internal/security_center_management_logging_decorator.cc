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
// source:
// google/cloud/securitycentermanagement/v1/security_center_management.proto

#include "google/cloud/securitycentermanagement/v1/internal/security_center_management_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycentermanagement/v1/security_center_management.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace securitycentermanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterManagementLogging::SecurityCenterManagementLogging(
    std::shared_ptr<SecurityCenterManagementStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterManagementLogging::
    ListEffectiveSecurityHealthAnalyticsCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
                request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
                     request) {
        return child_->ListEffectiveSecurityHealthAnalyticsCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterManagementLogging::
    GetEffectiveSecurityHealthAnalyticsCustomModule(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                     request) {
        return child_->GetEffectiveSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterManagementLogging::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycentermanagement::v1::
              ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
        return child_->ListSecurityHealthAnalyticsCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterManagementLogging::
    ListDescendantSecurityHealthAnalyticsCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
                request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycentermanagement::v1::
              ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
                  request) {
        return child_->ListDescendantSecurityHealthAnalyticsCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
SecurityCenterManagementLogging::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->GetSecurityHealthAnalyticsCustomModule(context, options,
                                                              request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
SecurityCenterManagementLogging::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycentermanagement::v1::
              CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->CreateSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
SecurityCenterManagementLogging::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycentermanagement::v1::
              UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->UpdateSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status
SecurityCenterManagementLogging::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycentermanagement::v1::
              DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->DeleteSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
SecurityCenterManagementLogging::SimulateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 SimulateSecurityHealthAnalyticsCustomModuleRequest const&
                     request) {
        return child_->SimulateSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEffectiveEventThreatDetectionCustomModulesResponse>
SecurityCenterManagementLogging::ListEffectiveEventThreatDetectionCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListEffectiveEventThreatDetectionCustomModulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 ListEffectiveEventThreatDetectionCustomModulesRequest const&
                     request) {
        return child_->ListEffectiveEventThreatDetectionCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EffectiveEventThreatDetectionCustomModule>
SecurityCenterManagementLogging::GetEffectiveEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetEffectiveEventThreatDetectionCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 GetEffectiveEventThreatDetectionCustomModuleRequest const&
                     request) {
        return child_->GetEffectiveEventThreatDetectionCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEventThreatDetectionCustomModulesResponse>
SecurityCenterManagementLogging::ListEventThreatDetectionCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListEventThreatDetectionCustomModulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 ListEventThreatDetectionCustomModulesRequest const& request) {
        return child_->ListEventThreatDetectionCustomModules(context, options,
                                                             request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListDescendantEventThreatDetectionCustomModulesResponse>
SecurityCenterManagementLogging::
    ListDescendantEventThreatDetectionCustomModules(
        grpc::ClientContext& context, Options const& options,
        google::cloud::securitycentermanagement::v1::
            ListDescendantEventThreatDetectionCustomModulesRequest const&
                request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 ListDescendantEventThreatDetectionCustomModulesRequest const&
                     request) {
        return child_->ListDescendantEventThreatDetectionCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
SecurityCenterManagementLogging::GetEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetEventThreatDetectionCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 GetEventThreatDetectionCustomModuleRequest const& request) {
        return child_->GetEventThreatDetectionCustomModule(context, options,
                                                           request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
SecurityCenterManagementLogging::CreateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        CreateEventThreatDetectionCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 CreateEventThreatDetectionCustomModuleRequest const& request) {
        return child_->CreateEventThreatDetectionCustomModule(context, options,
                                                              request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
SecurityCenterManagementLogging::UpdateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        UpdateEventThreatDetectionCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 UpdateEventThreatDetectionCustomModuleRequest const& request) {
        return child_->UpdateEventThreatDetectionCustomModule(context, options,
                                                              request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SecurityCenterManagementLogging::DeleteEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        DeleteEventThreatDetectionCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 DeleteEventThreatDetectionCustomModuleRequest const& request) {
        return child_->DeleteEventThreatDetectionCustomModule(context, options,
                                                              request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ValidateEventThreatDetectionCustomModuleResponse>
SecurityCenterManagementLogging::ValidateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ValidateEventThreatDetectionCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycentermanagement::v1::
              ValidateEventThreatDetectionCustomModuleRequest const& request) {
        return child_->ValidateEventThreatDetectionCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::SecurityCenterService>
SecurityCenterManagementLogging::GetSecurityCenterService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        GetSecurityCenterServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 GetSecurityCenterServiceRequest const& request) {
        return child_->GetSecurityCenterService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListSecurityCenterServicesResponse>
SecurityCenterManagementLogging::ListSecurityCenterServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        ListSecurityCenterServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 ListSecurityCenterServicesRequest const& request) {
        return child_->ListSecurityCenterServices(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycentermanagement::v1::SecurityCenterService>
SecurityCenterManagementLogging::UpdateSecurityCenterService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycentermanagement::v1::
        UpdateSecurityCenterServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycentermanagement::v1::
                 UpdateSecurityCenterServiceRequest const& request) {
        return child_->UpdateSecurityCenterService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycentermanagement_v1_internal
}  // namespace cloud
}  // namespace google
