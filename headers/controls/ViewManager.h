#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 47 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPresentView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@_N@Z
    void BeginPresentView(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActiveWindow@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_NUViewManagerType@2345@@Z
    void ChangeActiveWindow(WindissectOpaque, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeApplicationUser@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@_K@Z
    void ChangeApplicationUser(WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisibleWindow@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_NUViewManagerType@2345@@Z
    void ChangeVisibleWindow(WindissectOpaque, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientOperationComplete@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0PEAVByte_1D@System@@H@Z
    void ClientOperationComplete(WindissectOpaque, WindissectOpaque, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseBasicView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@@Z
    void CloseBasicView(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequested@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@I@Z
    void CloseRequested(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVString@System@@00UViewActivationFlags@345@0PEAVServerTask@2345@V?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    WindissectOpaque CreateNewView(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UViewInstanceId@345@PEAVString@System@@UGuid@9@UHostId@345@11_K4UViewActivationFlags@345@PEAVServerTask@2345@V?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    WindissectOpaque CreateView(WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UViewInstanceId@345@UTaskType@345@@Z
    WindissectOpaque CreateView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableApplicationMultiviewActivationPolicy@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void EnableApplicationMultiviewActivationPolicy(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPresentView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@_N@Z
    void EndPresentView(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndUpdateMatchingViews@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UGuid@7@_K2PEAVNotificationList@2345@@Z
    void FindAndUpdateMatchingViews(WindissectOpaque *, WindissectOpaque, uint64_t, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindExistingTask@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@PEAVString@System@@UHostId@345@_N@Z
    WindissectOpaque * FindExistingTask(WindissectOpaque *, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTaskByInstanceId@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UViewInstanceId@345@@Z
    WindissectOpaque * FindTaskByInstanceId(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentProcessSequence@ViewManager@Server@Navigation@CoreUI@Microsoft@@SA_KXZ
    static uint64_t GetCurrentProcessSequence();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateModernSessionActivation@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAHUTaskInstanceId@345@PEAVString@System@@UGuid@8@UHostId@345@1UViewActivationFlags@345@1PEAVServerTask@2345@_K6PEAVByte_1D@8@_N@Z
    int InitiateModernSessionActivation(WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToTaskInternal@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@UServerTaskState@345@UDirection@345@UAnimationType@345@UActivationReason@345@PEAVString@System@@5@Z
    void NavigateToTaskInternal(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@UViewNavigationLevel@345@UDirection@345@UAnimationType@345@@Z
    void NavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCloseRequestedComplete@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@_N@Z
    void NotifyCloseRequestedComplete(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNavigateAwayFromView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UViewNavigationLevel@345@@Z
    void NotifyNavigateAwayFromView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRequestBeginPresentView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@_N@Z
    void NotifyRequestBeginPresentView(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRequestEndPresentView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@_N@Z
    void NotifyRequestEndPresentView(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRequestNavigateToView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@0ULaunchFlags@345@_KPEAVByte_1D@System@@@Z
    void NotifyRequestNavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySystemKeyPressedComplete@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@USystemKey@345@_N2@Z
    void NotifySystemKeyPressedComplete(WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskCompleted@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void NotifyTaskCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessActiveWindowWorker@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void ProcessActiveWindowWorker(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessVisibleWindowWorker@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void ProcessVisibleWindowWorker(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecomputeEngagementTelemetryFlags@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void RecomputeEngagementTelemetryFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceNavigateToView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0UViewNavigationLevel@345@UDirection@345@UAnimationType@345@@Z
    void ReplaceNavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeAndNavigateToView@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0UViewNavigationLevel@345@UDirection@345@UAnimationType@345@@Z
    void ResumeAndNavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerCurrentTasksChanged@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void SessionManagerCurrentTasksChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerPropertyChanged@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionManager__Property@2345@@Z
    void SessionManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerSessionsChanged@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void SessionManagerSessionsChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerVisibleTasksChanged@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void SessionManagerVisibleTasksChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionTasksChanged@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void SessionTasksChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@USystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAConnect@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@PEAVString@System@@@Z
    void UIAConnect(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContextForActivation@ViewManager@Server@Navigation@CoreUI@Microsoft@@SAIPEAVByte_1D@System@@PEAVString@7@0V?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int UpdateContextForActivation(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContextForRequestNavigateToView@ViewManager@Server@Navigation@CoreUI@Microsoft@@SAIPEAVByte_1D@System@@_K_NV?$ParamRef@VByte_1D@System@@@Cn@@@Z
    static unsigned int UpdateContextForRequestNavigateToView(WindissectOpaque *, uint64_t, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateViewLimit@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@_N@Z
    WindissectOpaque ValidateViewLimit(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVWindowManager@2345@PEAVPortManager@2345@PEAVSessionManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ServerWindowCreated@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVViewManager__ServerWindowCreatedEventHandler@2345@@Z
    void add_ServerWindowCreated(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ShellConnected@ViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_ShellConnected(bool);
};
} // namespace Microsoft::CoreUI::Navigation::Server
