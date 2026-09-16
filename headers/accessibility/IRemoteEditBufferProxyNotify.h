#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
class IRemoteEditBufferProxyNotify {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompositionTerminated@IRemoteEditBufferProxyNotify@@QEAAX_K@Z
    void NotifyCompositionTerminated(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFocusEnter@IRemoteEditBufferProxyNotify@@QEAAX_K@Z
    void NotifyFocusEnter(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFocusLeave@IRemoteEditBufferProxyNotify@@QEAAX_K@Z
    void NotifyFocusLeave(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySelectionChange@IRemoteEditBufferProxyNotify@@QEAAX_KHH@Z
    void NotifySelectionChange(uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTextChange@IRemoteEditBufferProxyNotify@@QEAAX_KHHHHH@Z
    void NotifyTextChange(uint64_t, int, int, int, int, int);
};
