#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessagePair {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemType@MessagePair@Proxy@CoreUI@Microsoft@@SA?AUType@System@@I@Z
    static WindissectOpaque GetSystemType(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInitialized@MessagePair@Proxy@CoreUI@Microsoft@@SAXPEAVITrackableResource@MessagingInterop@34@AEAURoutingInfo@634@@Z
    static void NotifyInitialized(::Microsoft::CoreUI::MessagingInterop::ITrackableResource *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
};
} // namespace Microsoft::CoreUI::Proxy
