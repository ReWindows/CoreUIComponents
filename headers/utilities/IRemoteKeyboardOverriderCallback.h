#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteKeyboardOverriderCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectKeyEvent@IRemoteKeyboardOverriderCallback@@QEAAXGG@Z
    void InjectKeyEvent(unsigned short, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyProcessed@IRemoteKeyboardOverriderCallback@@QEAAX_N@Z
    void OnKeyProcessed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverriderState@IRemoteKeyboardOverriderCallback@@QEAAX_N@Z
    void SetOverriderState(bool);
};
