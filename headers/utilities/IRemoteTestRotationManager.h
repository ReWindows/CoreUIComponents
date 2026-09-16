#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
class IRemoteTestRotationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLastLandscapeOrientation@IRemoteTestRotationManager@@QEAAXXZ
    void ResetLastLandscapeOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentDeviceOrientation@IRemoteTestRotationManager@@QEAAXUDeviceOrientation@Rotation@CoreUI@Microsoft@@@Z
    void SetCurrentDeviceOrientation(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentOrientationLocked@IRemoteTestRotationManager@@QEAAX_N@Z
    void SetCurrentOrientationLocked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSupportedOrientations@IRemoteTestRotationManager@@QEAAXUOrientations@Rotation@CoreUI@Microsoft@@@Z
    void SetDefaultSupportedOrientations(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceOrientationServicePause@IRemoteTestRotationManager@@QEAAX_N@Z
    void SetForceOrientationServicePause(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskSupportedOrientations@IRemoteTestRotationManager@@QEAAXUOrientations@Rotation@CoreUI@Microsoft@@@Z
    void SetTaskSupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDeviceOrientation@IRemoteTestRotationManager@@QEAA?AUDeviceOrientation@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_CurrentDeviceOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceOrientationServicePause@IRemoteTestRotationManager@@QEAA_NXZ
    bool get_ForceOrientationServicePause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOrientationServiceRunning@IRemoteTestRotationManager@@QEAA_NXZ
    bool get_IsOrientationServiceRunning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskSupportedOrientations@IRemoteTestRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_TaskSupportedOrientations();
};
