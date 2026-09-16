#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
class IApplicationBarMsgObj {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@IApplicationBarMsgObj@@QEAAXI_N@Z
    void OnCommand(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterMenu@IApplicationBarMsgObj@@QEAAXXZ
    void OnEnterMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitMenu@IApplicationBarMsgObj@@QEAAXXZ
    void OnExitMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@IApplicationBarMsgObj@@QEAAIXZ
    unsigned int get_BackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonCommands@IApplicationBarMsgObj@@QEAAPEAVIExportMessageList@CoreUI@Microsoft@@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_ButtonCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enabled@IApplicationBarMsgObj@@QEAA_NXZ
    bool get_Enabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnforceCase@IApplicationBarMsgObj@@QEAA_NXZ
    bool get_EnforceCase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@IApplicationBarMsgObj@@QEAAIXZ
    unsigned int get_ForegroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MenuEnabled@IApplicationBarMsgObj@@QEAA_NXZ
    bool get_MenuEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@IApplicationBarMsgObj@@QEAA?AUAppBarMode@@XZ
    AppBarMode get_Mode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Opacity@IApplicationBarMsgObj@@QEAAMXZ
    float get_Opacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotateLandscape@IApplicationBarMsgObj@@QEAA_NXZ
    bool get_RotateLandscape();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionID@IApplicationBarMsgObj@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextCommands@IApplicationBarMsgObj@@QEAAPEAVIExportMessageList@CoreUI@Microsoft@@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_TextCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UseCustomContent@IApplicationBarMsgObj@@QEAA_NXZ
    bool get_UseCustomContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@IApplicationBarMsgObj@@QEAA_NXZ
    bool get_Visible();
};
