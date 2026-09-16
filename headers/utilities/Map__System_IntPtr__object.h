#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
class Map__System_IntPtr__object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEntry@Map__System_IntPtr__object@@QEAAHUIntPtr@System@@@Z
    int FindEntry(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Map__System_IntPtr__object@@QEAAXH@Z
    void Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Map__System_IntPtr__object@@QEAA_NUIntPtr@System@@PEAVObject@3@_N@Z
    bool Insert(WindissectOpaque, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyEquals@Map__System_IntPtr__object@@QEAA_NUIntPtr@System@@0@Z
    bool KeyEquals(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Map__System_IntPtr__object@@QEAA_NUIntPtr@System@@@Z
    bool Remove(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Map__System_IntPtr__object@@QEAAXXZ
    void Resize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@Map__System_IntPtr__object@@QEAAPEAVObject@System@@UIntPtr@3@@Z
    WindissectOpaque * get_Item(WindissectOpaque);
};
