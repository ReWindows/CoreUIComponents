#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 34 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class SessionLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionInternal@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVSession@2345@UAnimationType@345@@Z
    virtual void CloseSessionInternal(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoDeferredResumeModernApplicationAndNavigateToView@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVServerTask@2345@UServerTaskState@345@UDirection@345@UAnimationType@345@PEAVString@System@@5IUError@345@@Z
    void DoDeferredResumeModernApplicationAndNavigateToView(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDefaultSessionUri@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVString@System@@PEAV67@@Z
    virtual WindissectOpaque * FormatDefaultSessionUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToSessionInternal@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@UActivationReason@345@UDirection@345@2UAnimationType@345@3PEAVString@System@@4@Z
    void NavigateToSessionInternal(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToTaskInternal@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@UServerTaskState@345@UDirection@345@UAnimationType@345@UActivationReason@345@PEAVString@System@@5@Z
    void NavigateToTaskInternal(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToTopSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXUAnimationType@345@0@Z
    virtual void NavigateToTopSession(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToView@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVServerTask@2345@UViewNavigationLevel@345@UDirection@345@UAnimationType@345@UError@345@_N@Z
    void NavigateToView(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToViewInternal@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVServerTask@2345@UServerTaskState@345@UDirection@345@UAnimationType@345@UActivationReason@345@PEAVString@System@@6UError@345@@Z
    void NavigateToViewInternal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadyToHide@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void NotifyReadyToHide(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadyToShow@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void NotifyReadyToShow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySessionCurrentTaskChanged@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@PEAVServerTask@2345@@Z
    void NotifySessionCurrentTaskChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationLevel@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionManagerActivationLevel@345@@Z
    void SetActivationLevel(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void SetActiveSession(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveTask@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVServerTask@2345@PEAVServerWindow@2345@_N@Z
    virtual void SetActiveTask(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveWindow@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerWindow@2345@@Z
    void SetActiveWindow(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void SetCurrentSession(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTask@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void SetCurrentTask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentWindow@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerWindow@2345@@Z
    void SetCurrentWindow(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@@Z
    void SetVisibleSession(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleTask@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVServerTask@2345@PEAVServerWindow@2345@_N@Z
    virtual void SetVisibleTask(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleWindow@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerWindow@2345@@Z
    void SetVisibleWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@_N@Z
    void UpdateCurrentSession(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentTask@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@_N@Z
    void UpdateCurrentTask(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibleSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSession@2345@_N@Z
    void UpdateVisibleSession(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibleTask@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVServerTask@2345@PEAVServerWindow@2345@_N2@Z
    virtual void UpdateVisibleTask(WindissectOpaque *, WindissectOpaque *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager@2345@UApplicationLayer@345@@Z
    void _Construct(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PropertyChanged@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionLayer__PropertyChangedEventHandler@2345@@Z
    void add_PropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVSession@2345@XZ
    virtual WindissectOpaque * get_DefaultSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSessionList@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVNotificationList@2345@XZ
    WindissectOpaque * get_DefaultSessionList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSessionUri@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVString@System@@XZ
    virtual WindissectOpaque * get_DefaultSessionUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PropertyChanged@SessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionLayer__PropertyChangedEventHandler@2345@@Z
    void remove_PropertyChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DefaultSession@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVSession@2345@@Z
    virtual void set_DefaultSession(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DefaultSessionUri@SessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVString@System@@@Z
    virtual void set_DefaultSessionUri(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
