#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace System {
class Delegate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@Delegate@System@@SAPEAV12@PEAV12@0@Z
    static WindissectOpaque * Combine(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Delegate@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvocationList@Delegate@System@@UEAAPEAVDelegate_1D@2@XZ
    virtual WindissectOpaque * GetInvocationList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSimpleEquals@Delegate@System@@QEAA_NPEAV12@@Z
    bool InternalSimpleEquals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Delegate@System@@SAPEAV12@PEAV12@0@Z
    static WindissectOpaque * Remove(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Equality@Delegate@System@@SA_NPEAV12@0@Z
    static bool op_Equality(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@Delegate@System@@SA_NPEAV12@0@Z
    static bool op_Inequality(WindissectOpaque *, WindissectOpaque *);
};
} // namespace System
