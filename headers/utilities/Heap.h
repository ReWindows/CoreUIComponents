#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace Cn::Engine {
class Heap {
public:
    class HeapEntryCache;
    class ObjectSet;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHeapEntry@Heap@Engine@Cn@@QEAAPEAUHeapEntry@123@XZ
    WindissectOpaque * AllocateHeapEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateObject@Heap@Engine@Cn@@QEAAPEAX_K@Z
    void * AllocateObject(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateObjectNoZero@Heap@Engine@Cn@@QEAAPEAX_K@Z
    void * AllocateObjectNoZero(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@Heap@Engine@Cn@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeMisc@Heap@Engine@Cn@@QEAAXPEAX@Z
    void FreeMisc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_ProcessFree@Heap@Engine@Cn@@SAXPEAX@Z
    static void NoContext_ProcessFree(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReallocate@Heap@Engine@Cn@@SAPEAXUAllocType@23@PEAX_K@Z
    static void * ProcessReallocate(WindissectOpaque, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHeapEntry@Heap@Engine@Cn@@QEAAXPEAUHeapEntry@123@@Z
    void ReleaseHeapEntry(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocateMisc@Heap@Engine@Cn@@AEAAPEAXUAllocType@23@_K_N@Z
    void * _AllocateMisc(WindissectOpaque, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FullCollect@Heap@Engine@Cn@@AEAAXXZ
    void _FullCollect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessAllocate@Heap@Engine@Cn@@CAPEAXUAllocType@23@_K_N2@Z
    static void * _ProcessAllocate(WindissectOpaque, uint64_t, bool, bool);
};
} // namespace Cn::Engine
