#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteKeyInjection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectKeyDown@IRemoteKeyInjection@@QEAAXIG@Z
    void InjectKeyDown(unsigned int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectKeyUp@IRemoteKeyInjection@@QEAAXIG@Z
    void InjectKeyUp(unsigned int, unsigned short);
};
