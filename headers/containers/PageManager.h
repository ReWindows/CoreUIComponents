#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 63 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class PageManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceSubstate@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void AdvanceSubstate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionInstance@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void CloseSessionInstance(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteNavigationTaskOperation@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool ExecuteNavigationTaskOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteOwnerOperation@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool ExecuteOwnerOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutePageNavOperation@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool ExecutePageNavOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__CloseComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__CloseComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__ConnectDehydratedPage@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportPage@2345@@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__ConnectDehydratedPage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__HideComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__HideComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__IsChildTask@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__IsChildTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__LaunchChildTask@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@7@IUAnimationType@345@2@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__LaunchChildTask(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__LaunchSession@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@7@I0@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__LaunchSession@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@7@I0UAnimationType@345@2_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateAwayComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateAwayComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateBack@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_NAEA_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateBack(bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateBackToTargetPage@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportPage@2345@@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateBackToTargetPage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateToComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateToPage@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportPage@2345@@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__NavigateToPage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__PauseComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__PauseComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__PrepareToCloseComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__PrepareToCloseComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__ReportChildTaskLaunch@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__ReportChildTaskLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__ResumeComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__ResumeComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__SetShellDataRoutingInfo@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__SetShellDataRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__ShowComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__ShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_CallerSecurityID@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_CallerSecurityID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_DestinationPageName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAXXZ
    void * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_DestinationPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_DisplayName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_FirstLayoutComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_FirstLayoutComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_IsClosing@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_IsClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_PauseOnLock@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_PauseOnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_ResumeOnPowerOn@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_ResumeOnPowerOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_SessionDisplayName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_SessionDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_SessionInstanceName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_SessionInstanceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_ShouldWaitForFirstLayoutComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_ShouldWaitForFirstLayoutComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_ShouldWaitForLayoutComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_ShouldWaitForLayoutComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAXXZ
    void * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskStateFileMappingName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskStateFileMappingName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskStateFileMappingSize@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskStateFileMappingSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskURI@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAPEAXXZ
    void * Microsoft__CoreUI__Navigation__Client__IExportPageManager__get_TaskURI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_CloseOnBack@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_CloseOnBack(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_DisplayName@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_DisplayName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_FirstLayoutComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_FirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_PauseOnLock@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_PauseOnLock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_ResumeOnPowerOn@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_ResumeOnPowerOn(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_ShouldWaitForFirstLayoutComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_ShouldWaitForFirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_ShouldWaitForLayoutComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManager__set_ShouldWaitForLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__ICallbackTaskOwner__ConnectionComplete@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__ICallbackTaskOwner__ConnectionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__ICallbackTaskOwner__ProcessActivationData@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUActivationReason@345@PEAVString@System@@UIntPtr@8@I@Z
    void Microsoft__CoreUI__Navigation__ICallbackTaskOwner__ProcessActivationData(WindissectOpaque, WindissectOpaque *, WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__ICallbackTaskOwner__PropertyChanged@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void Microsoft__CoreUI__Navigation__ICallbackTaskOwner__PropertyChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@PageManager@Client@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUIntPtr@System@@I@Z
    void RequestClose(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeTask@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ResumeTask();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskExecutionState@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUPageManager__TaskExecutionState@2345@@Z
    void SetTaskExecutionState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyHandled@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@_N@Z
    void SystemKeyHandled(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskOwnerNotificationWorker@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUPageManager__State@2345@@Z
    void TaskOwnerNotificationWorker(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNavigationIsAllowed@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ValidateNavigationIsAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStateForCallback@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUPageManager__State@2345@UPageManager__Substate@2345@@Z
    void ValidateStateForCallback(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTaskExecutionStateForCallback@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUPageManager__State@2345@UPageManager__TaskExecutionState@2345@@Z
    void ValidateTaskExecutionStateForCallback(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@MessagingInterop@45@UTaskInstanceId@345@PEAVString@System@@_NPEAVICallbackPageManagerOwner@2345@@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque, WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentState@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUPageManager__State@2345@@Z
    void set_CurrentState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentSubstate@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAXUPageManager__Substate@2345@@Z
    void set_CurrentSubstate(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_IsParentTask@PageManager@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_IsParentTask(bool);
};
} // namespace Microsoft::CoreUI::Navigation::Client
