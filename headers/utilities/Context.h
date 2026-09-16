#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 18 member(s).
namespace Cn {
class Context {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AuxAllocateNL@Context@Cn@@SAHXZ
    static int AuxAllocateNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCurrent@Context@Cn@@SAPEAV12@PEAV12@@Z
    static ::Cn::Context * EnsureCurrent(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_GetThreadContextOrNullAndLock@Context@Cn@@SAPEAV12@XZ
    static ::Cn::Context * NoContext_GetThreadContextOrNullAndLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnhandledExternalExceptionNL@Context@Cn@@QEAAXPEBU_EXCEPTION_POINTERS@@@Z
    void NotifyUnhandledExternalExceptionNL(_EXCEPTION_POINTERS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeContext@Context@Cn@@SAXPEAV12@@Z
    static void UninitializeContext(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeType@Context@Cn@@SAXUShutdownKind@Process@2@@Z
    static void UninitializeType(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContextNL@Context@Cn@@CAXPEAV12@@Z
    static void AddContextNL(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@Context@Cn@@CAPEAV12@XZ
    static ::Cn::Context * Allocate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Context@Cn@@AEAA@XZ
    Context();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStage1@Context@Cn@@AEAAX_N@Z
    void CreateStage1(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Context@Cn@@AEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeThreadParameter@Context@Cn@@AEAAXXZ
    void FreeThreadParameter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeContext@Context@Cn@@CAPEAV12@_N0@Z
    static ::Cn::Context * InitializeContext(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroy@Context@Cn@@EEAAXXZ
    virtual void NotifyDestroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentContext@Context@Cn@@CAXPEAV12@@Z
    static void SetCurrentContext(::Cn::Context *);
};
} // namespace Cn
