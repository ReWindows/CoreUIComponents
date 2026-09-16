#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteViewHitTestRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestViewHitTest@IRemoteViewHitTestRequest@@QEAAXUViewHitTestInfo@@PEAVIRemoteViewHitTestRequestClient@@@Z
    void RequestViewHitTest(ViewHitTestInfo, IRemoteViewHitTestRequestClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestViewHitTestSync@IRemoteViewHitTestRequest@@QEAAXUViewHitTestInfo@@AEAUViewInstanceId@Navigation@CoreUI@Microsoft@@@Z
    void RequestViewHitTestSync(ViewHitTestInfo, WindissectOpaque &);
};
