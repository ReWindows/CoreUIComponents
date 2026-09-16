#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogSignIn {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSignInStateChanged@IAnalogSignIn@Analog@CoreUI@Microsoft@@QEAAXUSignInState@234@@Z
    void OnSignInStateChanged(::Microsoft::CoreUI::Analog::SignInState);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSignInScenario@IAnalogSignIn@Analog@CoreUI@Microsoft@@QEAA?AUSignInScenario@234@XZ
    ::Microsoft::CoreUI::Analog::SignInScenario get_CurrentSignInScenario();
};
} // namespace Microsoft::CoreUI::Analog
