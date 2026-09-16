#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Proxy {
class ExternalRegisteredObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@UEAAXUBufferInfo@MessagingInterop@34@@Z
    virtual void Callback_OnMessage(::Microsoft::CoreUI::MessagingInterop::BufferInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageImplementation@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@UEAAPEAVObject@System@@XZ
    virtual WindissectOpaque * GetMessageImplementation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOwner@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@MessagingInterop@34@PEAVCallbackAdapter@Com@Cn@@UIntPtr@System@@UType@System@@@Z
    void InitializeOwner(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Cn::Com::CallbackAdapter *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyConnectRequested@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@@Z
    virtual void OnProxyConnectRequested(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@UHENDPOINT@634@@Z
    virtual void OnProxyCreated(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyDisposed@ExternalRegisteredObject@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@@Z
    virtual void OnProxyDisposed(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
};
} // namespace Microsoft::CoreUI::Proxy
