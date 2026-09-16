#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAXUCloseDialogReason@234@I@Z
    void OnClose(::Microsoft::CoreUI::Analog::CloseDialogReason, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelCommandIndex@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_CancelCommandIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandLabel1@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CommandLabel1();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandLabel2@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CommandLabel2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandLabel3@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CommandLabel3();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Content();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_DefaultCommandIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemDialog@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsSystemDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OwnerWindowInstanceId@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_OwnerWindowInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@IAnalogDialog@Analog@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Title();
};
} // namespace Microsoft::CoreUI::Analog
