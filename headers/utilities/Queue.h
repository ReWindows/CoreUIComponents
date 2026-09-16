#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 12 member(s).
namespace System::Collections {
class Queue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Queue@Collections@System@@UEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@Queue@Collections@System@@UEAA_NPEAVObject@3@@Z
    virtual bool Contains(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@Queue@Collections@System@@QEAAXPEAVArray@3@H@Z
    void CopyTo(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dequeue@Queue@Collections@System@@UEAAPEAVObject@3@XZ
    virtual WindissectOpaque * Dequeue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enqueue@Queue@Collections@System@@UEAAXPEAVObject@3@@Z
    virtual void Enqueue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Peek@Queue@Collections@System@@UEAAPEAVObject@3@XZ
    virtual WindissectOpaque * Peek();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCapacity@Queue@Collections@System@@QEAAXH@Z
    void SetCapacity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToArray@Queue@Collections@System@@UEAAPEAVObject_1D@3@XZ
    virtual WindissectOpaque * ToArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimToSize@Queue@Collections@System@@UEAAXXZ
    virtual void TrimToSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@Queue@Collections@System@@QEAAXHM@Z
    void _Construct(int, float);
};
} // namespace System::Collections
