#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 12 member(s).
class Map__string__object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Map__string__object@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsKey@Map__string__object@@QEAA_NPEAVString@System@@@Z
    bool ContainsKey(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEntry@Map__string__object@@QEAAHPEAVString@System@@@Z
    int FindEntry(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyHashCode@Map__string__object@@QEAAHPEAVString@System@@@Z
    int GetKeyHashCode(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Map__string__object@@QEAAXH@Z
    void Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Map__string__object@@QEAA_NPEAVString@System@@PEAVObject@3@_N@Z
    bool Insert(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Map__string__object@@QEAA_NPEAVString@System@@@Z
    bool Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Map__string__object@@QEAAXXZ
    void Resize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValue@Map__string__object@@QEAA_NPEAVString@System@@V?$ParamRef@VObject@System@@@Cn@@@Z
    bool TryGetValue(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@Map__string__object@@QEAAPEAVObject@System@@PEAVString@3@@Z
    WindissectOpaque * get_Item(WindissectOpaque *);
};
