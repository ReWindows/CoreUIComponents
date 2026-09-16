#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteTextInputDelegationClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelegationSourcePIDInvalidated@IRemoteTextInputDelegationClient@@QEAAXI@Z
    void OnDelegationSourcePIDInvalidated(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@IRemoteTextInputDelegationClient@@QEAAXURemoteTextInputDelegationClientKeyEventArgs@@@Z
    void OnKeyEvent(RemoteTextInputDelegationClientKeyEventArgs);
};
