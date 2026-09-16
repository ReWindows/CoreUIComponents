#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class MessageRegistrar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEndpointInfo@MessageRegistrar@MessagingInterop@CoreUI@Microsoft@@QEAA?AUMessagingResults@234@PEAVString@System@@URegistrarScope@234@AEAURoutingInfo@234@@Z
    ::Microsoft::CoreUI::MessagingInterop::MessagingResults FindEndpointInfo(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::RegistrarScope, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishEndpoint@MessageRegistrar@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVString@System@@UHENDPOINT@234@URegistrarScope@234@@Z
    void PublishEndpoint(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT, ::Microsoft::CoreUI::MessagingInterop::RegistrarScope);
};
} // namespace Microsoft::CoreUI::MessagingInterop
