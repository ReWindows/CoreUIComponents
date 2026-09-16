#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class NotificationList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@NotificationList@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVObject@System@@@Z
    int Add(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@NotificationList@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@NotificationList@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@@Z
    void Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@NotificationList@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVNotificationList__ListChangedEventHandler@2345@@Z
    void add_Changed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@NotificationList@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVNotificationList__ListChangedEventHandler@2345@@Z
    void remove_Changed(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
