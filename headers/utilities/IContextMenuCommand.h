#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IContextMenuCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enabled@IContextMenuCommand@@QEAA_NXZ
    bool get_Enabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@IContextMenuCommand@@QEAAIXZ
    unsigned int get_Id();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@IContextMenuCommand@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Text();
};
