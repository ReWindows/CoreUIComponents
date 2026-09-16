#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class MessageSessionPrivate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointInfo@MessageSessionPrivate@MessagingInterop@CoreUI@Microsoft@@QEAA?AURoutingInfo@234@UHENDPOINT@234@@Z
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo GetEndpointInfo(::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoutingInfo@MessageSessionPrivate@MessagingInterop@CoreUI@Microsoft@@QEAA?AURoutingInfo@234@UIntPtr@System@@@Z
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo GetRoutingInfo(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::MessagingInterop
