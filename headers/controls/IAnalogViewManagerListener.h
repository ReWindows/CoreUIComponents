#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogViewManagerListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarChanged@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@PEAVString@System@@@Z
    void OnTitleBarChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewClosed@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@@Z
    void OnViewClosed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDeactivated@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@@Z
    void OnViewDeactivated(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewNavigated@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@PEAVString@System@@UViewNavigationInfo@234@PEAVByte_1D@8@@Z
    void OnViewNavigated(WindissectOpaque, WindissectOpaque *, ::Microsoft::CoreUI::Analog::ViewNavigationInfo, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewOrderChanged@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXPEAVByte_1D@System@@@Z
    void OnViewOrderChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPresented@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@UWindowInstanceId@634@I_N@Z
    void OnViewPresented(WindissectOpaque, WindissectOpaque, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertyChanged@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@PEAVString@System@@@Z
    void OnViewPropertyChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewSizePreferencesChanged@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@II@Z
    void OnViewSizePreferencesChanged(WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOwnershipInfoChanged@IAnalogViewManagerListener@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@UViewOwnerRelationshipInfo@234@@Z
    void OnWindowOwnershipInfoChanged(WindissectOpaque, ::Microsoft::CoreUI::Analog::ViewOwnerRelationshipInfo);
};
} // namespace Microsoft::CoreUI::Analog
