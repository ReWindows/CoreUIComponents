#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
class ICredUIDialogResult {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthBuffer@ICredUIDialogResult@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_AuthBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthBufferSize@ICredUIDialogResult@@QEAAIXZ
    unsigned int get_AuthBufferSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthPackage@ICredUIDialogResult@@QEAAIXZ
    unsigned int get_AuthPackage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Save@ICredUIDialogResult@@QEAA_NXZ
    bool get_Save();
};
