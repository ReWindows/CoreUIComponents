#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteHotKeyCallBack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHotKeyAllKeysUp@IRemoteHotKeyCallBack@@QEAAXIII_K0@Z
    void OnHotKeyAllKeysUp(unsigned int, unsigned int, unsigned int, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHotKeyDetected@IRemoteHotKeyCallBack@@QEAAXIII_K0@Z
    void OnHotKeyDetected(unsigned int, unsigned int, unsigned int, uint64_t, uint64_t);
};
