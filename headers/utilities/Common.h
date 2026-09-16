#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Rotation {
class Common {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreTaskSupportedOrientationsValid@Common@Rotation@CoreUI@Microsoft@@SA_NUOrientations@234@@Z
    static bool AreTaskSupportedOrientationsValid(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupportedOrientations@Common@Rotation@CoreUI@Microsoft@@SA_NUOrientations@234@00@Z
    static bool CheckSupportedOrientations(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDesiredOrientation@Common@Rotation@CoreUI@Microsoft@@SA?AUOrientations@234@PEAVIRemoteRotationManager@@U5234@_N@Z
    static WindissectOpaque ComputeDesiredOrientation(IRemoteRotationManager *, WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSingleOrientation@Common@Rotation@CoreUI@Microsoft@@SA_NUOrientations@234@@Z
    static bool IsSingleOrientation(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Rotation
