#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 31 member(s).
namespace Microsoft::CoreUI::TraceLogging {
class TelemetryTrace {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientRemoteTask_Callback_OnMessageFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXI@Z
    static void ClientRemoteTask_Callback_OnMessageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_AbortTaskFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_AbortTaskFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_ActivationPrerequisitePhaseFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_ActivationPrerequisitePhaseFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_CancelTaskFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_CancelTaskFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_LaunchTaskFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_LaunchTaskFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_OnTaskStateChangeFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIII@Z
    static void ForegroundTaskManager_OnTaskStateChangeFailed(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_PauseTaskFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_PauseTaskFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_ResourcePending@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXI@Z
    static void ForegroundTaskManager_ResourcePending(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_ResumePrerequisitePhaseFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_ResumePrerequisitePhaseFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundTaskManager_ResumeTaskFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ForegroundTaskManager_ResumeTaskFailed(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerTask_ClearBufferedResumeActivationsTimeoutExpired@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIIII@Z
    static void NavigationServerTask_ClearBufferedResumeActivationsTimeoutExpired(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerTask_CloseTaskTimeoutExpired@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIIII@Z
    static void NavigationServerTask_CloseTaskTimeoutExpired(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerTask_NavigationTimeoutExpired@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIIII@Z
    static void NavigationServerTask_NavigationTimeoutExpired(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerTask_ShellNavigationTimeoutExpired@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIIII@Z
    static void NavigationServerTask_ShellNavigationTimeoutExpired(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerTask_TelemetryResumeTimeoutExpired@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIIII@Z
    static void NavigationServerTask_TelemetryResumeTimeoutExpired(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerWindow_RegisterWindowHandleWithDxcoreFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIII@Z
    static void NavigationServerWindow_RegisterWindowHandleWithDxcoreFailed(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationTask_OnDisconnected@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void NavigationTask_OnDisconnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationWindow_OnDisconnected@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void NavigationWindow_OnDisconnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivator_Activate@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXI_K00PEAVString@System@@@Z
    static void ViewActivator_Activate(unsigned int, uint64_t, uint64_t, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivator_ActivateCompleted@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII_KI@Z
    static void ViewActivator_ActivateCompleted(unsigned int, unsigned int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivator_ActivateFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXI_K00PEAVString@System@@@Z
    static void ViewActivator_ActivateFailed(unsigned int, uint64_t, uint64_t, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_InitiateShutdown@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXXZ
    static void ViewManager_InitiateShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_InitiateUserLogoff@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAX_K@Z
    static void ViewManager_InitiateUserLogoff(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_NavigateAwayFromView@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ViewManager_NavigateAwayFromView(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_NavigateToView@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXII@Z
    static void ViewManager_NavigateToView(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_NavigateToViewFailed@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIII@Z
    static void ViewManager_NavigateToViewFailed(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_ReplaceAndNavigateToView@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIII@Z
    static void ViewManager_ReplaceAndNavigateToView(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_RequestNavigateToView@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIII_K@Z
    static void ViewManager_RequestNavigateToView(unsigned int, unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_ResumeAndNavigateToView@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXIII@Z
    static void ViewManager_ResumeAndNavigateToView(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_ViewAdded@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXI_K0PEAVString@System@@@Z
    static void ViewManager_ViewAdded(unsigned int, uint64_t, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManager_ViewRemoved@TelemetryTrace@TraceLogging@CoreUI@Microsoft@@SAXI_K0PEAVString@System@@@Z
    static void ViewManager_ViewRemoved(unsigned int, uint64_t, uint64_t, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::TraceLogging
