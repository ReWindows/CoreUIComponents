#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace System::Collections {
class IEnumerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@IEnumerator@Collections@System@@QEAA_NXZ
    bool MoveNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@IEnumerator@Collections@System@@QEAAPEAVObject@3@XZ
    WindissectOpaque * get_Current();
};
} // namespace System::Collections
