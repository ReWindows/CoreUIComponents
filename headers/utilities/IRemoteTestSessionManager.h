#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 57 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteTestSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelShutdown@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void CancelShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeBackstackSize@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeBackstackSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeDefaultSessionUri@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeDefaultSessionUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeDisplayObscured@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeDisplayObscured(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeLockVisible@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeLockVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMRUListSize@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeMRUListSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMonitorOn@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeMonitorOn(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOrphanListSize@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeOrphanListSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOverlayMaximized@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeOverlayMaximized(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void CloseSession(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@UCloseSessionOption@345@@Z
    void CloseSession(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverlayMode@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DisableOverlayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverlayMode@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void EnableOverlayMode(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterRestrictedMode@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXURestrictedModeMask@345@URestrictedModeFlags@345@PEAVString@System@@H@Z
    void EnterRestrictedMode(WindissectOpaque, WindissectOpaque, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRestrictedMode@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUAnimationType@345@_N1@Z
    void ExitRestrictedMode(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRestrictedMode@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUAnimationType@345@_N@Z
    void ExitRestrictedMode(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@AEAH@Z
    void LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToDefaultSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void NavigateToDefaultSession(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@USessionInstanceId@345@@Z
    void NavigateToSession(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeactivatedSessionFromBackstack@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void RemoveDeactivatedSessionFromBackstack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationLevel@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUSessionManagerActivationLevel@345@XZ
    WindissectOpaque get_ActivationLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackstackSize@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_BackstackSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClosingSessions@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_ClosingSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentLockTask@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOverlayTask@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestSession@2345@XZ
    WindissectOpaque * get_CurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentWindow@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_CurrentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DebugMultiplier@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_DebugMultiplier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSessionUri@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DefaultSessionUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayObscured@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_DisplayObscured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstPartyAnimationTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_FirstPartyAnimationTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstPartyQuickSwitchingTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_FirstPartyQuickSwitchingTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstPartySystemKeyPressedTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_FirstPartySystemKeyPressedTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstPartyTargetStateTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_FirstPartyTargetStateTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockVisible@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_LockVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MRUListSize@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_MRUListSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MRUSessions@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_MRUSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonitorOn@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_MonitorOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrphanListSize@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_OrphanListSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrphanSessions@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_OrphanSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverlayMaximized@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_OverlayMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverlaySessions@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_OverlaySessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedDefaultSessionUri@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_RestrictedDefaultSessionUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedModeActive@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_RestrictedModeActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedSessions@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_RestrictedSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sessions@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Sessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThirdPartyQuickSwitchingTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_ThirdPartyQuickSwitchingTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThirdPartySystemKeyPressedTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_ThirdPartySystemKeyPressedTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThirdPartyTargetStateTimeout@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_ThirdPartyTargetStateTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleLockTask@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleOverlayTask@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleSession@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestSession@2345@XZ
    WindissectOpaque * get_VisibleSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleWindow@IRemoteTestSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_VisibleWindow();
};
} // namespace Microsoft::CoreUI::Navigation::Server
