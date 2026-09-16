#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
class IActionDialogManagerTestHook {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissVisibleDialog@IActionDialogManagerTestHook@@QEAAXI@Z
    void DismissVisibleDialog(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DialogCount@IActionDialogManagerTestHook@@QEAAIXZ
    unsigned int get_DialogCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogAudioType@IActionDialogManagerTestHook@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_VisibleDialogAudioType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogBody@IActionDialogManagerTestHook@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_VisibleDialogBody();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogButton1@IActionDialogManagerTestHook@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_VisibleDialogButton1();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogButton2@IActionDialogManagerTestHook@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_VisibleDialogButton2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogCheckbox@IActionDialogManagerTestHook@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_VisibleDialogCheckbox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogIsChecked@IActionDialogManagerTestHook@@QEAA_NXZ
    bool get_VisibleDialogIsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogTimeOutMS@IActionDialogManagerTestHook@@QEAAIXZ
    unsigned int get_VisibleDialogTimeOutMS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleDialogTitle@IActionDialogManagerTestHook@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_VisibleDialogTitle();
};
