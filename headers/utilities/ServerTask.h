#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 133 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ServerTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortPendingModernActivations@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void AbortPendingModernActivations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ActivateComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateViewComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void ActivateViewComplete(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActivation@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionManagerActivationLevel@345@UDirection@345@UAnimationType@345@UAnimationFlags@345@@Z
    void BeginActivation(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginClose@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@UAnimationFlags@345@_N@Z
    void BeginClose(WindissectOpaque, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeactivation@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@UAnimationFlags@345@@Z
    void BeginDeactivation(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPresentView@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void BeginPresentView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAllTimeouts@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void CancelAllTimeouts(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPendingModernActivations@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void CancelPendingModernActivations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTaskWaitableTimer@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAIUWin32Handle@MessagingInterop@45@@Z
    unsigned int CancelTaskWaitableTimer(::Microsoft::CoreUI::MessagingInterop::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeApplicationUser@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void ChangeApplicationUser(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeResourceSet@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVByte_1D@7@@Z
    void ChangeResourceSet(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeShutdownImportance@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUShutdownImportance@345@@Z
    void ChangeShutdownImportance(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckTimeout@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void CheckTimeout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBufferedResumeActivationsTimerExpiredHandler@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUWaitStatus@MessagingInterop@45@UWin32Handle@745@@Z
    void ClearBufferedResumeActivationsTimerExpiredHandler(::Microsoft::CoreUI::MessagingInterop::WaitStatus, ::Microsoft::CoreUI::MessagingInterop::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientOperationComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@H@Z
    void ClientOperationComplete(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandle@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAXAEAUWin32Handle@MessagingInterop@45@@Z
    static void CloseHandle(::Microsoft::CoreUI::MessagingInterop::Win32Handle &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTaskTimerExpiredHandler@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUWaitStatus@MessagingInterop@45@UWin32Handle@745@@Z
    void CloseTaskTimerExpiredHandler(::Microsoft::CoreUI::MessagingInterop::WaitStatus, ::Microsoft::CoreUI::MessagingInterop::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectNavigationTask@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVIRemoteTask@2345@PEAVServerWindow@2345@URoutingInfo@MessagingInterop@45@_N@Z
    void ConnectNavigationTask(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructContextBufferForActivateView@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAI_KV?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int ConstructContextBufferForActivateView(uint64_t, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructContextBufferForSwitch@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAIIII_KV?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int ConstructContextBufferForSwitch(unsigned int, unsigned int, unsigned int, uint64_t, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructContextBufferForTerminateForRelaunch@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAIV?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int ConstructContextBufferForTerminateForRelaunch(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructContextBufferForTryShowAsStandlone@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAIIIIII_KV?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int ConstructContextBufferForTryShowAsStandlone(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, uint64_t, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@PEAVSession@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@ULaunchFlags@345@PEAVString@System@@PEAV12345@V?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    static WindissectOpaque Create(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFileMappingW@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUWin32Handle@MessagingInterop@45@PEAVString@System@@IU6745@@Z
    static ::Microsoft::CoreUI::MessagingInterop::Win32Handle CreateFileMappingW(WindissectOpaque *, unsigned int, ::Microsoft::CoreUI::MessagingInterop::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskWaitableTimer@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAIAEAUWin32Handle@MessagingInterop@45@@Z
    unsigned int CreateTaskWaitableTimer(::Microsoft::CoreUI::MessagingInterop::Win32Handle &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@PEAVSession@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@UViewInstanceId@345@UTaskType@345@PEAVString@System@@55PEAV12345@_KV?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    static WindissectOpaque CreateView(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, uint64_t, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeactivateComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferProcessState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeferProcessState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyTask@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UDestroyTaskFlags@2345@@Z
    void DestroyTask(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectTaskInternal@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DisconnectTaskInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPresentView@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void EndPresentView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUServerTaskState@345@@Z
    void EnterState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtensionMapChanged@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationMap__MapOperation@2345@PEAVString@System@@PEAVObject@8@@Z
    void ExtensionMapChanged(WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingViews@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVArrayList@Collections@System@@_KPEAVString@8@UHostId@345@PEAVNotificationList@2345@@Z
    WindissectOpaque * FindMatchingViews(uint64_t, WindissectOpaque *, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationInfoFromContextBuffer@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAIPEAVByte_1D@System@@AEAIV?$ParamRef@VString@System@@@Cn@@AEA_K@Z
    static unsigned int GetActivationInfoFromContextBuffer(WindissectOpaque *, unsigned int &, WindissectOpaque, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChamberInfo@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAIUGuid@System@@V?$ParamRef@VString@System@@@Cn@@AEAUWin32Handle@MessagingInterop@45@@Z
    static unsigned int GetChamberInfo(WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::Win32Handle &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChamberInfoFromAumid@ServerTask@Server@Navigation@CoreUI@Microsoft@@SAIPEAVString@System@@V?$ParamRef@VString@System@@@Cn@@AEAUWin32Handle@MessagingInterop@45@@Z
    static unsigned int GetChamberInfoFromAumid(WindissectOpaque *, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::Win32Handle &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredLaunchViewSize@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUCuiSize@2345@PEAVString@System@@@Z
    static WindissectOpaque GetPreferredLaunchViewSize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBufferedActivationData@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUActivationState@2345@@Z
    bool HasBufferedActivationData(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void HideComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTaskStateFileMapping@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void InitializeTaskStateFileMapping(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateModernActivation@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@PEAVSession@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@UTaskInstanceId@345@PEAVString@System@@UGuid@System@@UHostId@345@4ULaunchFlags@345@4PEAV12345@_K9PEAVByte_1D@System@@V?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    static WindissectOpaque InitiateModernActivation(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCancelledOrAborted@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsCancelledOrAborted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConditionMet@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUTaskStateTransitions__Condition@2345@@Z
    bool IsConditionMet(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModernExecutionTask@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsModernExecutionTask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNonEmAwareTaskHostBeingDebugged@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsNonEmAwareTaskHostBeingDebugged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskBeingDebugged@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsTaskBeingDebugged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidActiveTargetState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUServerTaskState@345@@Z
    bool IsValidActiveTargetState(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidHostProcess@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NI@Z
    bool IsValidHostProcess(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidTargetState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUServerTaskState@345@@Z
    bool IsValidTargetState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@0ULaunchFlags@345@_NUAnimationType@345@3V?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    int LaunchChildTask(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTaskComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void LaunchChildTaskComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchLegacyApplication@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@UTaskInstanceId@345@PEAVSession@2345@PEAV12345@PEAVString@System@@ULaunchFlags@345@@Z
    static WindissectOpaque LaunchLegacyApplication(WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchModernApplication@ServerTask@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@PEAVSession@2345@PEAV12345@PEAVString@System@@2ULaunchFlags@345@@Z
    static WindissectOpaque LaunchModernApplication(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSessionComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void LaunchSessionComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__ICallbackMessageProxyListener__OnDisconnected@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportMessageProxy@45@@Z
    void Microsoft__CoreUI__ICallbackMessageProxyListener__OnDisconnected(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAwayComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NavigateAwayComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NavigateToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ServerTask@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskCompleted@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void OnTaskCompleted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskPaused@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void OnTaskPaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskRunning@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void OnTaskRunning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskRunningEx@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTASKRUNNING_OPTIONS@2345@@Z
    void OnTaskRunningEx(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskStateChangeFailed@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTASK_INSTANCE_STATE@2345@H@Z
    void OnTaskStateChangeFailed(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreProcessState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void PreProcessState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStateWorker@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ProcessStateWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyToNavigate@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ReadyToNavigate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecoverState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUServerTaskState@345@@Z
    bool RecoverState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@_N1@Z
    void RequestClose(WindissectOpaque *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHide@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUHideOptions@345@@Z
    void RequestHide(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNavigateBack@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RequestNavigateBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendActivationData@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUActivationReason@345@PEAVString@System@@1@Z
    void SendActivationData(WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCloseRequestedToClient@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void SendCloseRequestedToClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSystemKeyToClient@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void SendSystemKeyToClient();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationData@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUActivationReason@345@PEAVString@System@@1@Z
    void SetActivationData(WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUServerTaskState@345@@Z
    void SetCurrentState(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationLevel@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUServerTaskState@345@@Z
    void SetNavigationLevel(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessId@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void SetProcessId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReadyToPresent@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_NUServerTaskState@345@1@Z
    void SetReadyToPresent(bool, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRunning@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void SetRunning(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUServerTaskState@345@@Z
    bool SetTargetState(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerWindow@2345@@Z
    void SetWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellTimeoutExpiredHandler@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void ShellTimeoutExpiredHandler(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCloseTaskTimer@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void StartCloseTaskTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNavigationTimeout@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@UTimeoutInfo__TimeoutModifierType@345@@Z
    void StartNavigationTimeout(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShellNavigationTimeout@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@UTimeoutInfo__TimeoutModifierType@345@@Z
    void StartShellNavigationTimeout(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopNavigationTimeout@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void StopNavigationTimeout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopShellNavigationTimeout@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void StopShellNavigationTimeout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchView@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0I_K@Z
    void SwitchView(WindissectOpaque, WindissectOpaque, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyHandled@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@_N1@Z
    void SystemKeyHandled(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyHandledInternal@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@_N1@Z
    void SystemKeyHandledInternal(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetryResumeTimerExpiredHandler@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUWaitStatus@MessagingInterop@45@UWin32Handle@745@@Z
    void TelemetryResumeTimerExpiredHandler(::Microsoft::CoreUI::MessagingInterop::WaitStatus, ::Microsoft::CoreUI::MessagingInterop::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeoutExpiredHandler@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void TimeoutExpiredHandler(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConsolidate@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void TryConsolidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFirstBufferedActivationData@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NUActivationState@2345@V?$ParamRef@VActivationData@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    bool TryGetFirstBufferedActivationData(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveBufferedActivationData@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NV?$ParamRef@VActivationData@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    bool TryRemoveBufferedActivationData(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void TrySetTopMost(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneView@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0IIUAppWindowShowOptions@345@_K@Z
    void TryShowAsStandaloneView(WindissectOpaque, WindissectOpaque, unsigned int, unsigned int, WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewMode@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@IPEAVByte_1D@System@@@Z
    void TryShowAsViewMode(WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAConnect@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NPEAVString@System@@@Z
    bool UIAConnect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationOwner@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void UpdateAnimationOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContextCustomResourceSetType@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@XZ
    WindissectOpaque UpdateContextCustomResourceSetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetState@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void UpdateTargetState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@PEAVString@System@@3UGuid@System@@UHostId@345@3_K6@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeInstance@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void _InitializeInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DehydrationPolicy@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTASKDEHYDRATIONELIGIBILITY@2345@XZ
    WindissectOpaque get_DehydrationPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBackgroundLifecycleView@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsBackgroundLifecycleView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsChildTask@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsChildTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Active@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Active(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ApplicationMultiviewActivationPolicy@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_ApplicationMultiviewActivationPolicy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ApplicationUser@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void set_ApplicationUser(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Bounds@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewBounds@2345@@Z
    void set_Bounds(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Completed@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Completed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Consolidated@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewConsolidatedState@345@@Z
    void set_Consolidated(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentOrientation@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUOrientations@Rotation@45@@Z
    void set_CurrentOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Dehydrated@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Dehydrated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DisplayName@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_DisplayName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ExperienceId@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_ExperienceId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_FirstLayoutComplete@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_FirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_FullScreen@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_FullScreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_IsMainView@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_IsMainView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_LoadingScreenBackgroundColor@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void set_LoadingScreenBackgroundColor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_LoadingScreenFileName@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_LoadingScreenFileName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_PauseOnLock@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_PauseOnLock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ShellDataRoutingInfo@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void set_ShellDataRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_SplashScreenRect@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiRect@2345@@Z
    void set_SplashScreenRect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_TaskType@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskType@345@@Z
    void set_TaskType(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Visible@ServerTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Visible(bool);
};
} // namespace Microsoft::CoreUI::Navigation::Server
