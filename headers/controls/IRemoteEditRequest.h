#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
class IRemoteEditRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCharAtEndOfBuffer@IRemoteEditRequest@@QEAAXH@Z
    void RequestCharAtEndOfBuffer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCharFollowingWord@IRemoteEditRequest@@QEAAXHH@Z
    void RequestCharFollowingWord(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClearTag@IRemoteEditRequest@@QEAAXH@Z
    void RequestClearTag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestFirstWord@IRemoteEditRequest@@QEAAXXZ
    void RequestFirstWord();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNextWord@IRemoteEditRequest@@QEAAXXZ
    void RequestNextWord();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTagWordIfAppropriate@IRemoteEditRequest@@QEAAXPEAVString@System@@HH@Z
    void RequestTagWordIfAppropriate(WindissectOpaque *, int, int);
};
