#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Cn::Engine {
class Number {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseI32@Number@Engine@Cn@@SA?AUParseState@123@PEAVString@System@@UNumberStyles@Globalization@6@PEAVIFormatProvider@6@_NPEAH@Z
    static WindissectOpaque ParseI32(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, bool, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseIntegralWorker@Number@Engine@Cn@@CA?AUParseState@123@PEAVString@System@@UNumberStyles@Globalization@6@PEAVIFormatProvider@6@_N3_K4PEA_KPEA_N@Z
    static WindissectOpaque ParseIntegralWorker(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, bool, bool, uint64_t, uint64_t, uint64_t *, bool *);
};
} // namespace Cn::Engine
