#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class NotificationMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@NotificationMap@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVNotificationMap__MapChangedEventHandler@2345@@Z
    void add_Changed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@NotificationMap@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVObject@System@@PEAVString@7@@Z
    WindissectOpaque * get_Item(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@NotificationMap@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVNotificationMap__MapChangedEventHandler@2345@@Z
    void remove_Changed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Item@NotificationMap@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@7@@Z
    void set_Item(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
