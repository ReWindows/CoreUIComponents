#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
class IContextMenuMsgObj {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@IContextMenuMsgObj@@QEAAXI@Z
    void OnCommand(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterMenu@IContextMenuMsgObj@@QEAAXXZ
    void OnEnterMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitMenu@IContextMenuMsgObj@@QEAAXXZ
    void OnExitMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundRect@IContextMenuMsgObj@@QEAA?AUCMRect@@XZ
    CMRect get_BoundRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@IContextMenuMsgObj@@QEAAPEAVIExportMessageList@CoreUI@Microsoft@@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Commands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvokedByTouch@IContextMenuMsgObj@@QEAA_NXZ
    bool get_InvokedByTouch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@IContextMenuMsgObj@@QEAA?AUCMPoint@@XZ
    CMPoint get_Position();
};
