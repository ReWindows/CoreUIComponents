#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 15 member(s).
class IRemoteRotationManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceOrientationForced@IRemoteRotationManager@@QEAAX_N@Z
    void SetDeviceOrientationForced(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForcedOrientation@IRemoteRotationManager@@QEAAXUOrientations@Rotation@CoreUI@Microsoft@@@Z
    void SetForcedOrientation(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockScreenVisible@IRemoteRotationManager@@QEAAX_N@Z
    void SetLockScreenVisible(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLockedOrientation@IRemoteRotationManager@@QEAAXUOrientations@Rotation@CoreUI@Microsoft@@@Z
    void SetLockedOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_CurrentOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientationLocked@IRemoteRotationManager@@QEAA_NXZ
    bool get_CurrentOrientationLocked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSupportedOrientations@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_DefaultSupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceOrientation@IRemoteRotationManager@@QEAA?AUDeviceOrientation@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_DeviceOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceOrientationForced@IRemoteRotationManager@@QEAA_NXZ
    bool get_DeviceOrientationForced();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForcedOrientation@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_ForcedOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardOrientation@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_KeyboardOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastLandscapeOrientation@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_LastLandscapeOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockedOrientation@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_LockedOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockscreenVisible@IRemoteRotationManager@@QEAA_NXZ
    bool get_LockscreenVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskSupportedOrientations@IRemoteRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_TaskSupportedOrientations();
};
