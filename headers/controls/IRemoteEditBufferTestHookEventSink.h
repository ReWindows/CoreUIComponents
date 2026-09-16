#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteEditBufferTestHookEventSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidatesChanged@IRemoteEditBufferTestHookEventSink@@QEAAXPEAVString@System@@@Z
    void OnCandidatesChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditAction@IRemoteEditBufferTestHookEventSink@@QEAAXUEditBufferEvent@@PEAVString@System@@1@Z
    void OnEditAction(EditBufferEvent, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientAction@IRemoteEditBufferTestHookEventSink@@QEAAXPEAVString@System@@0@Z
    void OnEditClientAction(WindissectOpaque *, WindissectOpaque *);
};
