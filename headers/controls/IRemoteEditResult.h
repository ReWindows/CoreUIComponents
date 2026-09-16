#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
class IRemoteEditResult {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnCharAtEndOfBuffer@IRemoteEditResult@@QEAAXPEAVString@System@@HI@Z
    void ReturnCharAtEndOfBuffer(WindissectOpaque *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnCharFollowingWord@IRemoteEditResult@@QEAAXPEAVString@System@@HI@Z
    void ReturnCharFollowingWord(WindissectOpaque *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnFirstWord@IRemoteEditResult@@QEAAXPEAVString@System@@HHHI@Z
    void ReturnFirstWord(WindissectOpaque *, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnNextWord@IRemoteEditResult@@QEAAXPEAVString@System@@HHHI@Z
    void ReturnNextWord(WindissectOpaque *, int, int, int, unsigned int);
};
