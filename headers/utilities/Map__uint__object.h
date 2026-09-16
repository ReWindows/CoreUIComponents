#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
class Map__uint__object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Map__uint__object@@QEAAXIPEAVObject@System@@@Z
    void Add(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEntry@Map__uint__object@@QEAAHI@Z
    int FindEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Map__uint__object@@QEAAXH@Z
    void Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Map__uint__object@@QEAA_NIPEAVObject@System@@_N@Z
    bool Insert(unsigned int, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Map__uint__object@@QEAA_NI@Z
    bool Remove(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Map__uint__object@@QEAAXXZ
    void Resize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValue@Map__uint__object@@QEAA_NIV?$ParamRef@VObject@System@@@Cn@@@Z
    bool TryGetValue(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@Map__uint__object@@QEAAPEAVObject@System@@I@Z
    WindissectOpaque * get_Item(unsigned int);
};
