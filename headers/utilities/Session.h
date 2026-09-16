#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 34 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class Session {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActivation@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionManagerActivationLevel@345@UDirection@345@UAnimationType@345@@Z
    void BeginActivation(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginClose@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@UCloseSessionOption@345@@Z
    void BeginClose(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeactivation@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@@Z
    void BeginDeactivation(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginIdling@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@@Z
    void BeginIdling(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginObscure@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@@Z
    void BeginObscure(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActive@Session@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeActive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCurrent@Session@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeCurrent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisible@Session@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTaskInternal@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@PEAVString@System@@UActivationReason@345@_N3@Z
    void CloseTaskInternal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Session@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@PEAVSessionManager@2345@PEAVSessionLayer@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@PEAVString@System@@44UACTIVATION_POLICY@2345@4PEAVServerTask@2345@ULaunchFlags@345@PEAV12345@V?$ParamRef@VSession@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    static WindissectOpaque Create(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@Session@Server@Navigation@CoreUI@Microsoft@@SA?AUError@345@PEAVSessionManager@2345@PEAVSessionLayer@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@UViewInstanceId@345@UTaskType@345@V?$ParamRef@VSession@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    static WindissectOpaque CreateView(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectivePageTransitions@Session@Server@Navigation@CoreUI@Microsoft@@SAXUAnimationType@345@000AEAU6345@1@Z
    static void GetEffectivePageTransitions(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMatchingToNextTransition@Session@Server@Navigation@CoreUI@Microsoft@@SA?AUAnimationType@345@U6345@@Z
    static WindissectOpaque GetMatchingToNextTransition(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@Session@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@0ULaunchFlags@345@PEAVServerTask@2345@_NUAnimationType@345@4V?$ParamRef@VServerTask@Server@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    int LaunchChildTask(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchModernChildTask@Session@Server@Navigation@CoreUI@Microsoft@@QEAAHUTaskInstanceId@345@PEAVString@System@@1ULaunchFlags@345@1PEAVServerTask@2345@_KPEAVByte_1D@8@_N@Z
    int LaunchModernChildTask(WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyActiveChanged@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@_N@Z
    void NotifyActiveChanged(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadyToHide@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void NotifyReadyToHide(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadyToShow@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void NotifyReadyToShow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTaskClosed@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void NotifyTaskClosed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Session@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCloseTask@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@PEAVString@System@@_N2@Z
    void RequestCloseTask(WindissectOpaque *, WindissectOpaque *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNavigateToViewComplete@Session@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVServerTask@2345@UViewNavigationLevel@345@UDirection@345@UAnimationType@345@U6345@@Z
    WindissectOpaque RequestNavigateToViewComplete(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveTask@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void SetActiveTask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTask@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void SetCurrentTask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleTask@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void SetVisibleTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateChildTaskLaunchRequest@Session@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVServerTask@2345@_N@Z
    WindissectOpaque ValidateChildTaskLaunchRequest(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager@2345@PEAVSessionLayer@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@PEAVString@System@@44UGuid@System@@UHostId@345@44UACTIVATION_POLICY@2345@4@Z
    void _Construct(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession__PropertyChangedEventHandler@2345@@Z
    void add_PropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession__PropertyChangedEventHandler@2345@@Z
    void remove_PropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentPageName@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_CurrentPageName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DisplayName@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_DisplayName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_SessionLayer@Session@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionLayer@2345@@Z
    void set_SessionLayer(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
