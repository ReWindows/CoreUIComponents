#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteCoreInputViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryViewVisibilityChangingResponse@IRemoteCoreInputViewManager@@QEAAXI_N@Z
    void OnPrimaryViewVisibilityChangingResponse(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXYFocusTransferredToActiveView@IRemoteCoreInputViewManager@@QEAAX_N@Z
    void OnXYFocusTransferredToActiveView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTransferXYFocusToPrimaryView@IRemoteCoreInputViewManager@@QEAAXMMMMI@Z
    void TryTransferXYFocusToPrimaryView(float, float, float, float, unsigned int);
};
