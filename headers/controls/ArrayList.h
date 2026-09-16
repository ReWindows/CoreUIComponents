#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace System::Collections {
class ArrayList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@ArrayList@Collections@System@@QEAAHPEAVObject@3@@Z
    int Add(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIndex@ArrayList@Collections@System@@QEAAXH@Z
    void CheckIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@ArrayList@Collections@System@@QEAA_NPEAVObject@3@@Z
    bool Contains(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@ArrayList@Collections@System@@QEAAXH@Z
    void EnsureCapacity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@ArrayList@Collections@System@@QEAAXHPEAVObject@3@@Z
    void Insert(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ArrayList@Collections@System@@QEAAXPEAVObject@3@@Z
    void Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ArrayList@Collections@System@@QEAAXH@Z
    void RemoveAt(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@ArrayList@Collections@System@@QEAAPEAVObject@3@H@Z
    WindissectOpaque * get_Item(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Item@ArrayList@Collections@System@@QEAAXHPEAVObject@3@@Z
    void set_Item(int, WindissectOpaque *);
};
} // namespace System::Collections
