#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseMonitorRemoteViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseMonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BaseMonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@UViewManagerType@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveWindow@BaseMonitorRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_ActiveWindow();
};
} // namespace Microsoft::CoreUI::Navigation::Server
