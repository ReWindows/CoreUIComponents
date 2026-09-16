#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
class IApplicationBarCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Checked@IApplicationBarCommand@@QEAA_NXZ
    bool get_Checked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CheckedUri@IApplicationBarCommand@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CheckedUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enabled@IApplicationBarCommand@@QEAA_NXZ
    bool get_Enabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@IApplicationBarCommand@@QEAAIXZ
    unsigned int get_Id();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@IApplicationBarCommand@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Text();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@IApplicationBarCommand@@QEAA?AUMenuBarItemType@@XZ
    MenuBarItemType get_Type();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnCheckedImageBuffer@IApplicationBarCommand@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_UnCheckedImageBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnCheckedImageBufferData@IApplicationBarCommand@@QEAA?AUImageBufferData@@XZ
    ImageBufferData get_UnCheckedImageBufferData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnCheckedUri@IApplicationBarCommand@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_UnCheckedUri();
};
