#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 48 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteShellSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeBackstackSize@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeBackstackSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeDefaultSessionUri@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeDefaultSessionUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeDisplayObscured@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeDisplayObscured(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeLockVisible@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeLockVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMRUListSize@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeMRUListSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMonitorOn@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeMonitorOn(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOrphanListSize@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeOrphanListSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOverlayMaximized@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeOverlayMaximized(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@UCloseSessionOption@345@@Z
    void CloseSession(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverlayMode@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DisableOverlayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverlayMode@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void EnableOverlayMode(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterRestrictedMode@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXURestrictedModeMask@345@URestrictedModeFlags@345@PEAVString@System@@H@Z
    void EnterRestrictedMode(WindissectOpaque, WindissectOpaque, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRestrictedMode@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUAnimationType@345@_N@Z
    void ExitRestrictedMode(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@1AEAH@Z
    void LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToDefaultSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void NavigateToDefaultSession(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToDefaultSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UAnimationType@345@1@Z
    void NavigateToDefaultSession(WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@USessionInstanceId@345@@Z
    void NavigateToSession(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshVisibleWindow@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RefreshVisibleWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCriticalThread@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RegisterCriticalThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeactivatedSessionFromBackstack@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void RemoveDeactivatedSessionFromBackstack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackstackSize@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_BackstackSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClosingSessions@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_ClosingSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentLockTask@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOverlayTask@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellSession@2345@XZ
    WindissectOpaque * get_CurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentWindow@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_CurrentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSessionUri@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DefaultSessionUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayObscured@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_DisplayObscured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockVisible@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_LockVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MRUListSize@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_MRUListSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MRUSessions@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_MRUSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MonitorOn@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_MonitorOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrphanListSize@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHXZ
    int get_OrphanListSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrphanSessions@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_OrphanSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverlayMaximized@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_OverlayMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverlaySessions@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_OverlaySessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedDefaultSessionUri@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_RestrictedDefaultSessionUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedModeActive@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_RestrictedModeActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestrictedSessions@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_RestrictedSessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sessions@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Sessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleLockTask@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleOverlayTask@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleSession@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellSession@2345@XZ
    WindissectOpaque * get_VisibleSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleWindow@IRemoteShellSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_VisibleWindow();
};
} // namespace Microsoft::CoreUI::Navigation::Server
