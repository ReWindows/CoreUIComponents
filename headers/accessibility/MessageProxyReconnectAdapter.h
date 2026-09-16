#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Input {
class MessageProxyReconnectAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptPullProxy@MessageProxyReconnectAdapter@Input@CoreUI@Microsoft@@QEAAXXZ
    void AttemptPullProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageProxyReconnectAdapter@Input@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@Input@CoreUI@Microsoft@@QEAAXXZ
    void StartConnectionRetryTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeoutDisabledInRegistry@MessageProxyReconnectAdapter@Input@CoreUI@Microsoft@@QEAA_NXZ
    bool TimeoutDisabledInRegistry();
};
} // namespace Microsoft::CoreUI::Input
