#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteDictationUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDictationError@IRemoteDictationUI@@QEAAXUDictationError@@@Z
    void OnDictationError(DictationError);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDictationStateChanged@IRemoteDictationUI@@QEAAXUDictationState@@@Z
    void OnDictationStateChanged(DictationState);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHint@IRemoteDictationUI@@QEAAXPEAVString@System@@@Z
    void UpdateHint(WindissectOpaque *);
};
