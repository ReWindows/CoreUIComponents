#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 106 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class SessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelShutdown@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void CancelShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActivationTask@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@0@Z
    void ChangeActivationTask(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckShellValidationErrorAndGetHR@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVSession@2345@UError@345@@Z
    int CheckShellValidationErrorAndGetHR(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@USessionManagerType@2345@UCloseSessionOption@345@@Z
    void CloseSession(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionInstance@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVString@System@@@Z
    void CloseSessionInstance(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionInternal@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@UDirection@345@UAnimationType@345@UCloseSessionOption@345@@Z
    void CloseSessionInternal(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionInternalWithoutNotification@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@UDirection@345@UAnimationType@345@UCloseSessionOption@345@@Z
    void CloseSessionInternalWithoutNotification(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionWithPriority@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVNotificationList@2345@@Z
    void CloseSessionWithPriority(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteClosingTasksForUser@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void CompleteClosingTasksForUser(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectNavigationTask@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVIRemoteTask@2345@UTaskInstanceId@345@UWindowInstanceId@345@URoutingInfo@MessagingInterop@45@_N@Z
    void ConnectNavigationTask(WindissectOpaque *, WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructContextBufferForTransitionAnimations@SessionManager@Server@Navigation@CoreUI@Microsoft@@SAIIIV?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int ConstructContextBufferForTransitionAnimations(unsigned int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@UTaskType@345@@Z
    void CreateView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferChildLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVString@System@@1ULaunchFlags@345@PEAVServerTask@2345@_NUAnimationType@345@5@Z
    void DeferChildLaunch(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, bool, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferDoDeferredLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeferDoDeferredLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferEnsureDefaultSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionLayer@2345@UAnimationType@345@@Z
    void DeferEnsureDefaultSession(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferExitRestrictedModeNavigation@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUAnimationType@345@_N@Z
    void DeferExitRestrictedModeNavigation(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferModernChildLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@UTaskInstanceId@345@PEAVString@System@@2ULaunchFlags@345@PEAVServerTask@2345@_KPEAVByte_1D@9@_N@Z
    void DeferModernChildLaunch(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, uint64_t, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferModernSessionLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@PEAVString@System@@1PEAVServerTask@2345@_N@Z
    void DeferModernSessionLaunch(WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferResumeModernApplicationAndNavigateToView@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void DeferResumeModernApplicationAndNavigateToView(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferSessionLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionLayer@2345@PEAVString@System@@11PEAVServerTask@2345@_NUAnimationType@345@4@Z
    void DeferSessionLaunch(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverlayMode@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DisableOverlayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDeferredLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DoDeferredLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDeferredResumeModernApplicationAndNavigateToView@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@@Z
    void DoDeferredResumeModernApplicationAndNavigateToView(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoExitRestrictedModeNavigation@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@0@Z
    void DoExitRestrictedModeNavigation(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPendingModernSessionLaunchedEvent@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void DoPendingModernSessionLaunchedEvent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAumidMatchPackage@SessionManager@Server@Navigation@CoreUI@Microsoft@@SAHPEAVString@System@@0AEA_N@Z
    static int DoesAumidMatchPackage(WindissectOpaque *, WindissectOpaque *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverlayMode@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void EnableOverlayMode(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceSessionLimits@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void EnforceSessionLimits(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceTaskLimit@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void EnforceTaskLimit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDefaultSessionWorker@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@0@Z
    void EnsureDefaultSessionWorker(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterRestrictedMode@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXURestrictedModeMask@345@URestrictedModeFlags@345@PEAVString@System@@H@Z
    void EnterRestrictedMode(WindissectOpaque, WindissectOpaque, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRestrictedMode@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUAnimationType@345@_N1@Z
    void ExitRestrictedMode(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingPendingSessionLaunchedEvent@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSessionManager__PendingSessionLaunchedEvent@2345@USessionInstanceId@345@@Z
    WindissectOpaque * FindExistingPendingSessionLaunchedEvent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVString@System@@00UHostId@345@USessionInstanceId@345@_N@Z
    WindissectOpaque * FindExistingSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstNonCBESession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVNotificationList@2345@H@Z
    WindissectOpaque * FindFirstNonCBESession(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOrCreateSessionByActivationPolicy@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVSessionLayer@2345@PEAVTaskUri@345@PEAVString@System@@PEAVServerTask@2345@ULaunchFlags@345@V?$ParamRef@VSession@Server@Navigation@CoreUI@Microsoft@@@Cn@@AEAUActivationReason@345@V?$ParamRef@VString@System@@@Cn@@@Z
    WindissectOpaque FindOrCreateSessionByActivationPolicy(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSessionByIds@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVNotificationList@2345@PEAVString@System@@UHostId@345@_N@Z
    WindissectOpaque * FindSessionByIds(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSessionByInstanceName@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVNotificationList@2345@PEAVString@System@@@Z
    WindissectOpaque * FindSessionByInstanceName(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSessionBySessionInstanceId@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVNotificationList@2345@USessionInstanceId@345@@Z
    WindissectOpaque * FindSessionBySessionInstanceId(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSessionByUri@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVNotificationList@2345@PEAVString@System@@@Z
    WindissectOpaque * FindSessionByUri(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTaskByInstanceId@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UTaskInstanceId@345@@Z
    WindissectOpaque * FindTaskByInstanceId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTaskByInstanceId@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@PEAVNotificationList@2345@UTaskInstanceId@345@@Z
    WindissectOpaque * FindTaskByInstanceId(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTaskByPackageFullName@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@PEAVNotificationList@2345@PEAVString@System@@@Z
    WindissectOpaque * FindTaskByPackageFullName(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTaskByPackageFullName@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@PEAVString@System@@@Z
    WindissectOpaque * FindTaskByPackageFullName(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentSessionForSystemKey@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@USystemKey@345@@Z
    WindissectOpaque * GetCurrentSessionForSystemKey(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTaskById@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UTaskInstanceId@345@@Z
    WindissectOpaque * GetCurrentTaskById(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictedLayer@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSessionLayer@2345@XZ
    WindissectOpaque * GetRestrictedLayer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionStatus@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUSessionManager__SessionStatus@2345@PEAVSession@2345@@Z
    WindissectOpaque GetSessionStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateModernSessionActivation@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHUTaskInstanceId@345@PEAVString@System@@UGuid@8@UHostId@345@1ULaunchFlags@345@1PEAVServerTask@2345@_K6PEAVByte_1D@8@_N@Z
    int InitiateModernSessionActivation(WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateModernSessionActivation@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHUTaskInstanceId@345@PEAVString@System@@UGuid@8@UHostId@345@1ULaunchFlags@345@1PEAVServerTask@2345@_K6PEAVByte_1D@8@_NAEAUActivationReason@345@@Z
    int InitiateModernSessionActivation(WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque *, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateModernSessionActivation@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHUTaskInstanceId@345@PEAVString@System@@1ULaunchFlags@345@1PEAVServerTask@2345@_KPEAVByte_1D@8@_N@Z
    int InitiateModernSessionActivation(WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateUserLogoff@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void InitiateUserLogoff(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultSessionUri@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NPEAVString@System@@@Z
    bool IsDefaultSessionUri(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchingSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NPEAVSession@2345@PEAVString@System@@0@Z
    bool IsMatchingSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchDefaultSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionLayer@2345@PEAVString@System@@UAnimationType@345@2@Z
    void LaunchDefaultSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSessionInternal@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVSessionLayer@2345@PEAVString@System@@11ULaunchFlags@345@PEAVServerTask@2345@_NUAnimationType@345@5USessionLaunchRequestType@2345@AEAH@Z
    WindissectOpaque * LaunchSessionInternal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToDefaultSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UAnimationType@345@1@Z
    void NavigateToDefaultSession(WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@USessionInstanceId@345@@Z
    void NavigateToSession(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInitiateModernActivationCompleted@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@IH@Z
    void NotifyInitiateModernActivationCompleted(WindissectOpaque, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLegacySessionLaunched@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@PEAVSession@2345@ULaunchFlags@345@_NUError@345@@Z
    void NotifyLegacySessionLaunched(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyModernSessionLaunched@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVServerTask@2345@UTaskInstanceId@345@PEAVSession@2345@ULaunchFlags@345@_NUError@345@@Z
    int NotifyModernSessionLaunched(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySessionClosed@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void NotifySessionClosed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskPaused@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void NotifyTaskPaused(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskRunning@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void NotifyTaskRunning(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeferredLaunchTimerExpired@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void OnDeferredLaunchTimerExpired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@SessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModernResourceAcquisition@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@H@Z
    void OnModernResourceAcquisition(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdownCompleted@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void OnShutdownCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserLogoffCompleted@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void OnUserLogoffCompleted(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshVisibleWindow@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RefreshVisibleWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeactivatedSessionFromBackstack@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void RemoveDeactivatedSessionFromBackstack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSessionFromBackstackInternal@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVNotificationList@2345@@Z
    void RemoveSessionFromBackstackInternal(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNavigateBackFromSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void RequestNavigateBackFromSession(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestUnlockForLaunch@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RequestUnlockForLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeApplication@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@AEAUTaskInstanceId@345@@Z
    void ResumeApplication(WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeModernApplication@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVSession@2345@UTaskInstanceId@345@PEAVSessionLayer@2345@PEAVByte_1D@System@@@Z
    WindissectOpaque ResumeModernApplication(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundTaskInstanceId@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UApplicationLayer@345@@Z
    void SetForegroundTaskInstanceId(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellLaunchSession@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVSession@2345@PEAVString@System@@00UAnimationType@345@1USessionLaunchRequestType@2345@AEAH@Z
    WindissectOpaque * ShellLaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendApplication@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@AEAUTaskInstanceId@345@@Z
    void SuspendApplication(WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyHandled@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@USystemKey@345@_N2@Z
    void SystemKeyHandled(WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActivationLevel@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void UpdateActivationLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDehydrationEligibilityInternal@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@UTASKDEHYDRATIONELIGIBILITY@2345@@Z
    void UpdateDehydrationEligibilityInternal(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLoadingScreenProperties@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@PEAVString@System@@I@Z
    void UpdateLoadingScreenProperties(WindissectOpaque, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSessionLaunchRequest@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVSessionLayer@2345@PEAVServerTask@2345@USessionLaunchRequestType@2345@@Z
    WindissectOpaque ValidateSessionLaunchRequest(WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVWindowManager@2345@PEAVPortManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeInstance@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void _InitializeInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HideVisibleTask@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__VisualVisibleTaskEventHandler@2345@@Z
    void add_HideVisibleTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__PropertyChangedEventHandler@2345@@Z
    void add_PropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SessionClosed@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__SessionClosedEventHandler@2345@@Z
    void add_SessionClosed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SessionLaunched@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__SessionLaunchedEventHandler@2345@@Z
    void add_SessionLaunched(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShowVisibleTask@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__VisualVisibleTaskEventHandler@2345@@Z
    void add_ShowVisibleTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShutdownComplete@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVAction@System@@@Z
    void add_ShutdownComplete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UnlockRequested@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVAction@System@@@Z
    void add_UnlockRequested(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDefaultNavigationUsed@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsDefaultNavigationUsed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverlayDefaultSessionAUMID@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_OverlayDefaultSessionAUMID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedDefaultSessionUri@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_RestrictedDefaultSessionUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HideVisibleTask@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__VisualVisibleTaskEventHandler@2345@@Z
    void remove_HideVisibleTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SessionClosed@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__SessionClosedEventHandler@2345@@Z
    void remove_SessionClosed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SessionLaunched@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__SessionLaunchedEventHandler@2345@@Z
    void remove_SessionLaunched(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShowVisibleTask@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager__VisualVisibleTaskEventHandler@2345@@Z
    void remove_ShowVisibleTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShutdownComplete@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVAction@System@@@Z
    void remove_ShutdownComplete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_RestrictedModeActive@SessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_RestrictedModeActive(bool);
};
} // namespace Microsoft::CoreUI::Navigation::Server
