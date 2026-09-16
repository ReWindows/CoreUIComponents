#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogImmersiveModeListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImmersiveModeStep@IAnalogImmersiveModeListener@Analog@CoreUI@Microsoft@@QEAAXUImmersiveMode@234@UTransitionStep@234@@Z
    void OnImmersiveModeStep(::Microsoft::CoreUI::Analog::ImmersiveMode, ::Microsoft::CoreUI::Analog::TransitionStep);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestFailed@IAnalogImmersiveModeListener@Analog@CoreUI@Microsoft@@QEAAXI@Z
    void RequestFailed(unsigned int);
};
} // namespace Microsoft::CoreUI::Analog
