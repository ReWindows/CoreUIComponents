#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 12 member(s).
class IPickerDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@IPickerDialog@@QEAAXUActionDialogResult@@@Z
    void OnDismiss(ActionDialogResult);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioType@IPickerDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AudioType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Backgrounds@IPickerDialog@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_Backgrounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayId@IPickerDialog@@QEAAIXZ
    unsigned int get_DisplayId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Icons@IPickerDialog@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_Icons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Importance@IPickerDialog@@QEAAIXZ
    unsigned int get_Importance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@IPickerDialog@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_Items();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingViewId@IPickerDialog@@QEAAIXZ
    unsigned int get_RequestingViewId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingWindowHandle@IPickerDialog@@QEAA_KXZ
    uint64_t get_RequestingWindowHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeoutInMs@IPickerDialog@@QEAAIXZ
    unsigned int get_TimeoutInMs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@IPickerDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Title();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueId@IPickerDialog@@QEAA?AUGuid@System@@XZ
    WindissectOpaque get_UniqueId();
};
