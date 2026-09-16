#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseMonitorRemoteView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtensionMapChanged@BaseMonitorRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVMessageObjectMap@Proxy@45@UNotificationMap__MapOperation@2345@PEAVString@System@@PEAVObject@System@@@Z
    void ExtensionMapChanged(::Microsoft::CoreUI::Proxy::MessageObjectMap *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseMonitorRemoteView@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BaseMonitorRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVServerTask@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
