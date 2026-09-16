#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace System {
class Guid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HexsToChars@Guid@System@@SAHPEAVChar_1D@2@HHH@Z
    static int HexsToChars(WindissectOpaque *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Guid@System@@QEAAPEAVString@2@XZ
    WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Guid@System@@QEAAPEAVString@2@PEAV32@PEAVIFormatProvider@2@@Z
    WindissectOpaque * ToString(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Equality@Guid@System@@SA_NU12@0@Z
    static bool op_Equality(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@Guid@System@@SA_NU12@0@Z
    static bool op_Inequality(WindissectOpaque, WindissectOpaque);
};
} // namespace System
