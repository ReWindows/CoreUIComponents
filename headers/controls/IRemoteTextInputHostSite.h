#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteTextInputHostSite {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComponentWindowActivated@IRemoteTextInputHostSite@@QEAAX_N@Z
    void OnComponentWindowActivated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusDeparting@IRemoteTextInputHostSite@@QEAAXUNavigateFocusInfo@@@Z
    void OnFocusDeparting(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateFocusComplete@IRemoteTextInputHostSite@@QEAAXUNavigateFocusCompleteInfo@@@Z
    void OnNavigateFocusComplete(NavigateFocusCompleteInfo);
};
