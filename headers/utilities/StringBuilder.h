#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace System::Text {
class StringBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@StringBuilder@Text@System@@QEAAPEAV123@PEAVString@3@@Z
    WindissectOpaque * Append(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewString@StringBuilder@Text@System@@QEAAXH@Z
    void GetNewString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalAppend@StringBuilder@Text@System@@QEAAXPEB_WH@Z
    void InternalAppend(wchar_t const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@StringBuilder@Text@System@@UEAAPEAVString@3@XZ
    virtual WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Append@StringBuilder@Text@System@@QEAAPEAV123@PEA_W@Z
    WindissectOpaque * _Append(wchar_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@StringBuilder@Text@System@@QEAAXH@Z
    void _Construct(int);
};
} // namespace System::Text
