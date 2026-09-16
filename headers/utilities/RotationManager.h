#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
namespace Microsoft::CoreUI::Rotation::Server {
class RotationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferEnsureOrientationService@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXXZ
    void DeferEnsureOrientationService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOrientationService@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXXZ
    void EnsureOrientationService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceOrientationChanged@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUDeviceOrientation@345@@Z
    void OnDeviceOrientationChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RotationManager@Server@Rotation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOrientationService@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAHXZ
    int StartOrientationService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopOrientationService@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAHXZ
    int StopOrientationService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Test_SetDeviceOrientation@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUDeviceOrientation@345@@Z
    void Test_SetDeviceOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVSessionManager@2Navigation@45@PEAVPortManager@2Navigation@45@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentOrientation@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUOrientations@345@@Z
    void set_CurrentOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentOrientationLocked@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_CurrentOrientationLocked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DeviceOrientation@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUDeviceOrientation@345@@Z
    void set_DeviceOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_LastLandscapeOrientation@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUOrientations@345@@Z
    void set_LastLandscapeOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_LockedOrientation@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUOrientations@345@@Z
    void set_LockedOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_TaskSupportedOrientations@RotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUOrientations@345@@Z
    void set_TaskSupportedOrientations(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Rotation::Server
