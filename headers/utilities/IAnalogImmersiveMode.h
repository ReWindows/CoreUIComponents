#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 1 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogImmersiveMode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestImmersiveModeChange@IAnalogImmersiveMode@Analog@CoreUI@Microsoft@@QEAAXUImmersiveMode@234@PEAVIAnalogImmersiveModeListener@234@@Z
    void RequestImmersiveModeChange(::Microsoft::CoreUI::Analog::ImmersiveMode, ::Microsoft::CoreUI::Analog::IAnalogImmersiveModeListener *);
};
} // namespace Microsoft::CoreUI::Analog
