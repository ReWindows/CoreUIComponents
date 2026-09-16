#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
class IRemoteTabTipAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInPrivateModeChanged@IRemoteTabTipAdapter@@QEAAX_N@Z
    void OnInPrivateModeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoContextInputScopeChanged@IRemoteTabTipAdapter@@QEAAXI@Z
    void OnNoContextInputScopeChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemotePolicyIsReady@IRemoteTabTipAdapter@@QEAAXXZ
    void OnRemotePolicyIsReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellRequestedHide@IRemoteTabTipAdapter@@QEAAXXZ
    void OnShellRequestedHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellRequestedShow@IRemoteTabTipAdapter@@QEAAXII@Z
    void OnShellRequestedShow(unsigned int, unsigned int);
};
