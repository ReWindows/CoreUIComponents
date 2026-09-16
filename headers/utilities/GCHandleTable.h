#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Cn::Engine {
class GCHandleTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@GCHandleTable@Engine@Cn@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalHandlesShutdown@GCHandleTable@Engine@Cn@@QEAAXXZ
    void GlobalHandlesShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalHandleFree@GCHandleTable@Engine@Cn@@QEAAXI@Z
    void LocalHandleFree(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalAllocateGroup@GCHandleTable@Engine@Cn@@AEAAXXZ
    void GlobalAllocateGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalGetEntry@GCHandleTable@Engine@Cn@@AEAAPEAUGCHandleGlobalEntry@23@UGCHandleEntryID@23@@Z
    WindissectOpaque * GlobalGetEntry(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupFindWithFreeSpace@GCHandleTable@Engine@Cn@@CAXPEAPEAUGroup@123@HPEAH0@Z
    static void GroupFindWithFreeSpace(WindissectOpaque * *, int, int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupInitialize@GCHandleTable@Engine@Cn@@CAXPEAUGroup@123@HH@Z
    static void GroupInitialize(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalValidateValue@GCHandleTable@Engine@Cn@@AEAAXIPEAPEAUGCHandleLocalEntry@23@PEAUGCHandleEntryID@23@@Z
    void LocalValidateValue(unsigned int, WindissectOpaque * *, WindissectOpaque *);
};
} // namespace Cn::Engine
