#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace System::Text {
class UnicodeEncoding {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByteCount@UnicodeEncoding@Text@System@@UEAAHPEAVString@3@@Z
    virtual int GetByteCount(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBytes@UnicodeEncoding@Text@System@@UEAAXPEAVString@3@HHPEAVByte_1D@3@H@Z
    virtual void GetBytes(WindissectOpaque *, int, int, WindissectOpaque *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@UnicodeEncoding@Text@System@@UEAAPEAVString@3@PEAVByte_1D@3@HH@Z
    virtual WindissectOpaque * GetString(WindissectOpaque *, int, int);
};
} // namespace System::Text
