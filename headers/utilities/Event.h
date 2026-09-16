#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Cn::Engine {
class Event {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Event@Engine@Cn@@UEAA@XZ
    virtual ~Event();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Event@Engine@Cn@@CAX_NPEAPEAV123@@Z
    static void Create(bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PoolCreateAutomatic@Event@Engine@Cn@@CAXPEAPEAVProcessItem@23@@Z
    static void PoolCreateAutomatic(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PoolCreateManual@Event@Engine@Cn@@CAXPEAPEAVProcessItem@23@@Z
    static void PoolCreateManual(WindissectOpaque * *);
};
} // namespace Cn::Engine
