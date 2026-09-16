#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IShellButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterListenerForShellButton@IShellButton@@QEAAXUShellButton@@PEAVIShellButtonHandler@@@Z
    void RegisterListenerForShellButton(ShellButton, IShellButtonHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterListenerForShellButton@IShellButton@@QEAAXUShellButton@@@Z
    void UnregisterListenerForShellButton(ShellButton);
};
