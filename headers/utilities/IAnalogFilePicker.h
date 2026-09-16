#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogFilePicker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@IAnalogFilePicker@Analog@CoreUI@Microsoft@@QEAAXUWindowInstanceId@Navigation@34@@Z
    void CloseSession(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtensionList@IAnalogFilePicker@Analog@CoreUI@Microsoft@@QEAAXUWindowInstanceId@Navigation@34@PEAVString@System@@I@Z
    void SetExtensionList(WindissectOpaque, WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileNameLabel@IAnalogFilePicker@Analog@CoreUI@Microsoft@@QEAAXUWindowInstanceId@Navigation@34@PEAVString@System@@@Z
    void SetFileNameLabel(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFilePicker@IAnalogFilePicker@Analog@CoreUI@Microsoft@@QEAAXUWindowInstanceId@Navigation@34@PEAVIAnalogFilePickerListener@234@@Z
    void ShowFilePicker(WindissectOpaque, ::Microsoft::CoreUI::Analog::IAnalogFilePickerListener *);
};
} // namespace Microsoft::CoreUI::Analog
