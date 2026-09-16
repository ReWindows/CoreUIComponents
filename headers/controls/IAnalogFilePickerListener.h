#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogFilePickerListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationStarted@IAnalogFilePickerListener@Analog@CoreUI@Microsoft@@QEAAXXZ
    void OnApplicationStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressed@IAnalogFilePickerListener@Analog@CoreUI@Microsoft@@QEAAXUButtonType@234@@Z
    void OnButtonPressed(::Microsoft::CoreUI::Analog::ButtonType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExtensionChanged@IAnalogFilePickerListener@Analog@CoreUI@Microsoft@@QEAAXI@Z
    void OnExtensionChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserSetFileName@IAnalogFilePickerListener@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void OnUserSetFileName(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Analog
