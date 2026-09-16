#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogCortanaListenUIControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@IAnalogCortanaListenUIControl@Analog@CoreUI@Microsoft@@QEAAXPEAVIAnalogCortanaListenUIControlListener@234@@Z
    void Dismiss(::Microsoft::CoreUI::Analog::IAnalogCortanaListenUIControlListener *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetListeningText@IAnalogCortanaListenUIControl@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@_NPEAVIAnalogCortanaListenUIControlListener@234@@Z
    void SetListeningText(WindissectOpaque *, bool, ::Microsoft::CoreUI::Analog::IAnalogCortanaListenUIControlListener *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPersonaState@IAnalogCortanaListenUIControl@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVIAnalogCortanaListenUIControlListener@234@@Z
    void SetPersonaState(WindissectOpaque *, ::Microsoft::CoreUI::Analog::IAnalogCortanaListenUIControlListener *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResponseTextWithOptions@IAnalogCortanaListenUIControl@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@0000PEAVIAnalogCortanaListenUIControlListener@234@@Z
    void SetResponseTextWithOptions(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::Analog::IAnalogCortanaListenUIControlListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@IAnalogCortanaListenUIControl@Analog@CoreUI@Microsoft@@QEAAXPEAVIAnalogCortanaListenUIControlListener@234@@Z
    void Show(::Microsoft::CoreUI::Analog::IAnalogCortanaListenUIControlListener *);
};
} // namespace Microsoft::CoreUI::Analog
