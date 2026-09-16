#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace System {
class Boolean {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@Boolean@System@@QEAAHPEAVObject@2@@Z
    int CompareTo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@Boolean@System@@QEAAH_N@Z
    int CompareTo(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Boolean@System@@QEAA_NPEAVObject@2@@Z
    bool Equals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Boolean@System@@QEAAPEAVString@2@XZ
    WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParse@Boolean@System@@SA_NPEAVString@2@AEA_N@Z
    static bool TryParse(WindissectOpaque *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FalseString@Boolean@System@@SAPEAVString@2@XZ
    static WindissectOpaque * get_FalseString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrueString@Boolean@System@@SAPEAVString@2@XZ
    static WindissectOpaque * get_TrueString();
};
} // namespace System
