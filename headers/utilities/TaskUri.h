#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation {
class TaskUri {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUriProtocol@TaskUri@Navigation@CoreUI@Microsoft@@SA?AUUriProtocol@234@PEAVString@System@@@Z
    static WindissectOpaque GetUriProtocol(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HexToInt@TaskUri@Navigation@CoreUI@Microsoft@@SAH_W@Z
    static int HexToInt(wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@TaskUri@Navigation@CoreUI@Microsoft@@SAPEAV1234@PEAVString@System@@@Z
    static WindissectOpaque * Parse(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseGuidString@TaskUri@Navigation@CoreUI@Microsoft@@SA_NPEAVString@System@@AEAUGuid@6@@Z
    static bool ParseGuidString(WindissectOpaque *, WindissectOpaque &);
};
} // namespace Microsoft::CoreUI::Navigation
