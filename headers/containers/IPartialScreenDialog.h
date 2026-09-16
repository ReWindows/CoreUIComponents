#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 18 member(s).
class IPartialScreenDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@IPartialScreenDialog@@QEAAXUActionDialogResult@@@Z
    void OnDismiss(ActionDialogResult);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioType@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AudioType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Body@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Body();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Button1@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Button1();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Button1URI@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Button1URI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Button2@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Button2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Button2URI@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Button2URI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CheckBox@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CheckBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayId@IPartialScreenDialog@@QEAAIXZ
    unsigned int get_DisplayId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IconText@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_IconText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IconURI@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_IconURI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Importance@IPartialScreenDialog@@QEAAIXZ
    unsigned int get_Importance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsChecked@IPartialScreenDialog@@QEAA_NXZ
    bool get_IsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingViewId@IPartialScreenDialog@@QEAAIXZ
    unsigned int get_RequestingViewId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingWindowHandle@IPartialScreenDialog@@QEAA_KXZ
    uint64_t get_RequestingWindowHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeoutInMs@IPartialScreenDialog@@QEAAIXZ
    unsigned int get_TimeoutInMs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@IPartialScreenDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Title();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueId@IPartialScreenDialog@@QEAA?AUGuid@System@@XZ
    WindissectOpaque get_UniqueId();
};
