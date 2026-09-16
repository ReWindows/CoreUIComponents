#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Rotation::Server {
class TestRotationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteTestRotationManager__SetCurrentDeviceOrientation@TestRotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUDeviceOrientation@345@@Z
    void IRemoteTestRotationManager__SetCurrentDeviceOrientation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteTestRotationManager__SetDefaultSupportedOrientations@TestRotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUOrientations@345@@Z
    void IRemoteTestRotationManager__SetDefaultSupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteTestRotationManager__SetTaskSupportedOrientations@TestRotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXUOrientations@345@@Z
    void IRemoteTestRotationManager__SetTaskSupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@TestRotationManager@Server@Rotation@CoreUI@Microsoft@@QEAAXPEAVRotationManager@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2Navigation@45@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Rotation::Server
