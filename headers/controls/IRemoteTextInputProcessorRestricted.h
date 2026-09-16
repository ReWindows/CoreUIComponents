#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
class IRemoteTextInputProcessorRestricted {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShapeWritingTouchPoints@IRemoteTextInputProcessorRestricted@@QEAAXFFFII@Z
    void NotifyShapeWritingTouchPoints(short, short, short, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@IRemoteTextInputProcessorRestricted@@QEAAXGGGI@Z
    void OnKeyEvent(unsigned short, unsigned short, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringKey@IRemoteTextInputProcessorRestricted@@QEAAXGGPEAVString@System@@FFI@Z
    void OnStringKey(unsigned short, unsigned short, WindissectOpaque *, short, short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringKey2@IRemoteTextInputProcessorRestricted@@QEAAXGGGPEAVString@System@@FFI@Z
    void OnStringKey2(unsigned short, unsigned short, unsigned short, WindissectOpaque *, short, short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVirtualKey@IRemoteTextInputProcessorRestricted@@QEAAXGG@Z
    void OnVirtualKey(unsigned short, unsigned short);
};
