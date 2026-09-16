#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class MonitorRemoteViewManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteView@MonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteView(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@MonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManagerPropertyChanged@MonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXUViewManager__Property@2345@@Z
    virtual void ViewManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@MonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@MonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteMonitorView@2345@XZ
    WindissectOpaque * get_ActiveView();
};
} // namespace Microsoft::CoreUI::Navigation::Server
