#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteViewHitTest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterViewHitTestClient@IRemoteViewHitTest@@QEAAXPEAVIRemoteViewHitTestClient@@@Z
    void RegisterViewHitTestClient(IRemoteViewHitTestClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivationDeclined@IRemoteViewHitTest@@QEAAXI@Z
    void ViewActivationDeclined(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewActivationStart@IRemoteViewHitTest@@QEAAXUViewInstanceId@Navigation@CoreUI@Microsoft@@I@Z
    void ViewActivationStart(WindissectOpaque, unsigned int);
};
