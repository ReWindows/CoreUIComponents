#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteTextInputOverrider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@IRemoteTextInputOverrider@@QEAAXGGGGPEAVString@System@@PEAVByte_1D@3@@Z
    void OnKeyEvent(unsigned short, unsigned short, unsigned short, unsigned short, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringKey@IRemoteTextInputOverrider@@QEAAXGGGPEAVString@System@@FFPEAVByte_1D@3@@Z
    void OnStringKey(unsigned short, unsigned short, unsigned short, WindissectOpaque *, short, short, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVirtualKeyEx@IRemoteTextInputOverrider@@QEAAXGG_KPEAVByte_1D@System@@@Z
    void OnVirtualKeyEx(unsigned short, unsigned short, uint64_t, WindissectOpaque *);
};
