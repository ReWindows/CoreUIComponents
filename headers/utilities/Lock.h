#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Cn::Engine {
class Lock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Lock@Engine@Cn@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@Lock@Engine@Cn@@QEAAXXZ
    void Enter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@Lock@Engine@Cn@@QEAAXXZ
    void Leave();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Lock@Engine@Cn@@UEAA@XZ
    virtual ~Lock();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Lock@Engine@Cn@@CAXULockPriority@23@_NPEAPEAV123@@Z
    static void Create(WindissectOpaque, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResource@Lock@Engine@Cn@@AEAAXXZ
    void CreateResource();
};
} // namespace Cn::Engine
