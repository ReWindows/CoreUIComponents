#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace System {
class Type {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FromTypeID@Type@System@@SA?AU12@G@Z
    static WindissectOpaque _FromTypeID(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullName@Type@System@@QEAAPEAVString@2@XZ
    WindissectOpaque * get_FullName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Type@System@@QEAAPEAVString@2@XZ
    WindissectOpaque * get_Name();
};
} // namespace System
