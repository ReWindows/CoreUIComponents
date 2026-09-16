#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class MessageEndpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPortFilter@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@SAXPEAVIMessagePort@234@PEAV1234@@Z
    static void CheckPortFilter(::Microsoft::CoreUI::MessagingInterop::IMessagePort *, ::Microsoft::CoreUI::MessagingInterop::MessageEndpoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPortFilter@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAV1234@@Z
    void CheckPortFilter(::Microsoft::CoreUI::MessagingInterop::MessageEndpoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferFinalUsage@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void DeferFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredCheckFinalUsage@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@SAXPEAVObject@System@@@Z
    static void DeferredCheckFinalUsage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeEndpoint@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void FreeEndpoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpoint@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAA?AUHENDPOINT@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::HENDPOINT GetEndpoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEndpoint@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@234@PEAVIMessagePort@234@@Z
    void InitializeEndpoint(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUsage@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVEndpointHandler@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::EndpointHandler * get_Handler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoutingInfo@MessageEndpoint@MessagingInterop@CoreUI@Microsoft@@QEAA?AURoutingInfo@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_RoutingInfo();
};
} // namespace Microsoft::CoreUI::MessagingInterop
