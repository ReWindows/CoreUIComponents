#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 17 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@MessageObject@Proxy@CoreUI@Microsoft@@UEAAXUBufferInfo@MessagingInterop@34@@Z
    virtual void Callback_OnMessage(::Microsoft::CoreUI::MessagingInterop::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindProxy@MessageObject@Proxy@CoreUI@Microsoft@@QEAAPEAVMessageStub@234@AEAURoutingInfo@MessagingInterop@34@@Z
    ::Microsoft::CoreUI::Proxy::MessageStub * FindProxy(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEvent@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXUHENDPOINT@MessagingInterop@34@GPEAPEAXI@Z
    void FireEvent(::Microsoft::CoreUI::MessagingInterop::HENDPOINT, unsigned short, void * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageImplementation@MessageObject@Proxy@CoreUI@Microsoft@@UEAAPEAVObject@System@@XZ
    virtual WindissectOpaque * GetMessageImplementation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeConnection@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@34@UType@6@PEAVIMessagePort@834@@Z
    void InitializeConnection(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMapping@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXXZ
    void InitializeMapping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxy@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXPEAVMessageStub@234@@Z
    void InitializeProxy(::Microsoft::CoreUI::Proxy::MessageStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXGPEAX@Z
    void NotifyPropertyChanged(unsigned short, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageObject@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyConnectRequested@MessageObject@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@@Z
    virtual void OnProxyConnectRequested(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@MessageObject@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@UHENDPOINT@634@@Z
    virtual void OnProxyCreated(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyDisposed@MessageObject@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@@Z
    virtual void OnProxyDisposed(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDisposeProxy@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXPEAVMessageStub@234@@Z
    void PerformDisposeProxy(::Microsoft::CoreUI::Proxy::MessageStub *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushNewProxyInternal@MessageObject@Proxy@CoreUI@Microsoft@@SAXPEAV1234@AEAURoutingInfo@MessagingInterop@34@AEAUHIDENTITY@634@@Z
    static void PushNewProxyInternal(::Microsoft::CoreUI::Proxy::MessageObject *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::HIDENTITY &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveRequestDisposeProxy@MessageObject@Proxy@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@34@@Z
    void ReceiveRequestDisposeProxy(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@MessageObject@Proxy@CoreUI@Microsoft@@UEAAPEAVString@System@@XZ
    virtual WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectID@MessageObject@Proxy@CoreUI@Microsoft@@QEAA?AUMessageObjectID@34@XZ
    ::Microsoft::CoreUI::MessageObjectID get_ObjectID();
};
} // namespace Microsoft::CoreUI::Proxy
