#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
class IRemotePhoneRotationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockToDeviceOrientation@IRemotePhoneRotationManager@@QEAAXUDeviceOrientation@Rotation@CoreUI@Microsoft@@@Z
    void LockToDeviceOrientation(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentDeviceOrientation@IRemotePhoneRotationManager@@QEAAXUDeviceOrientation@Rotation@CoreUI@Microsoft@@@Z
    void SetCurrentDeviceOrientation(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentOrientationLocked@IRemotePhoneRotationManager@@QEAAX_N@Z
    void SetCurrentOrientationLocked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDeviceOrientation@IRemotePhoneRotationManager@@QEAA?AUDeviceOrientation@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_CurrentDeviceOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientationLocked@IRemotePhoneRotationManager@@QEAA_NXZ
    bool get_CurrentOrientationLocked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentUIOrientation@IRemotePhoneRotationManager@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_CurrentUIOrientation();
};
