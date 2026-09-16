#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 25 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProxyListener@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXPEAVICallbackMessageProxyListener@34@@Z
    void AddProxyListener(::Microsoft::CoreUI::ICallbackMessageProxyListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CallOnDisconnected@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXPEAVICallbackMessageProxyListener@34@_N@Z
    void Callback_CallOnDisconnected(::Microsoft::CoreUI::ICallbackMessageProxyListener *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@MessageProxy@Proxy@CoreUI@Microsoft@@UEAAXUBufferInfo@MessagingInterop@34@@Z
    virtual void Callback_OnMessage(::Microsoft::CoreUI::MessagingInterop::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpParkedProxies@MessageProxy@Proxy@CoreUI@Microsoft@@SAXXZ
    static void CleanUpParkedProxies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositeFinalUsage@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXXZ
    void CompositeFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@MessageProxy@Proxy@CoreUI@Microsoft@@SAPEAVSharedDisposableObject@MessagingInterop@34@PEAVMessageFactory@634@AEAURoutingInfo@634@1IUMessageErrorPolicy@234@@Z
    static ::Microsoft::CoreUI::MessagingInterop::SharedDisposableObject * CreateInstance(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, unsigned int, ::Microsoft::CoreUI::Proxy::MessageErrorPolicy);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferParkedProxyCleanup@MessageProxy@Proxy@CoreUI@Microsoft@@SAXPEAV1234@@Z
    static void DeferParkedProxyCleanup(::Microsoft::CoreUI::Proxy::MessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromImplementation@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAX_N0@Z
    void DisconnectFromImplementation(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyPropertyCache@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXXZ
    void EmptyPropertyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalUsageWorker@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXXZ
    void FinalUsageWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTypeMap@MessageProxy@Proxy@CoreUI@Microsoft@@SAPEBUMessageProxy__TypeMap@234@PEBUTypeDefinition@Cn@@@Z
    static ::Microsoft::CoreUI::Proxy::MessageProxy__TypeMap const * FindTypeMap(::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageProxy__AddEventListener@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXPEAXI@Z
    void Microsoft__CoreUI__IExportMessageProxy__AddEventListener(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageProxy__GetConnectionStatus@MessageProxy@Proxy@CoreUI@Microsoft@@QEAA?AURawHRESULT@MessagingInterop@34@XZ
    ::Microsoft::CoreUI::MessagingInterop::RawHRESULT Microsoft__CoreUI__IExportMessageProxy__GetConnectionStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageProxy__RemoveEventListener@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXPEAX@Z
    void Microsoft__CoreUI__IExportMessageProxy__RemoveEventListener(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImplementationConnected@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXXZ
    void NotifyImplementationConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageProxy@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUsage@MessageProxy@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullProxy@MessageProxy@Proxy@CoreUI@Microsoft@@SAPEAVSharedDisposableObject@MessagingInterop@34@PEAVObject@System@@PEAVMessageFactory@634@PEAVString@8@UType@8@UMessageErrorPolicy@234@@Z
    static ::Microsoft::CoreUI::MessagingInterop::SharedDisposableObject * PullProxy(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque, ::Microsoft::CoreUI::Proxy::MessageErrorPolicy);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullProxy@MessageProxy@Proxy@CoreUI@Microsoft@@SAPEAVSharedDisposableObject@MessagingInterop@34@PEAVObject@System@@PEAVMessageFactory@634@AEAURoutingInfo@634@UType@8@UMessageErrorPolicy@234@@Z
    static ::Microsoft::CoreUI::MessagingInterop::SharedDisposableObject * PullProxy(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, WindissectOpaque, ::Microsoft::CoreUI::Proxy::MessageErrorPolicy);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProxyListener@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXPEAVICallbackMessageProxyListener@34@@Z
    void RemoveProxyListener(::Microsoft::CoreUI::ICallbackMessageProxyListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendProxyNotice@MessageProxy@Proxy@CoreUI@Microsoft@@QEAAXUMessageProxy__ProxyNotice@234@@Z
    void SendProxyNotice(::Microsoft::CoreUI::Proxy::MessageProxy__ProxyNotice);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@MessageProxy@Proxy@CoreUI@Microsoft@@UEAAPEAVString@System@@XZ
    virtual WindissectOpaque * ToString();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageProxy@Proxy@CoreUI@Microsoft@@UEAA@XZ
    virtual ~MessageProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Send@MessageProxy@Proxy@CoreUI@Microsoft@@IEAAXGPEAPEBXH_N@Z
    void Send(unsigned short, void const * *, int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTypeMap@MessageProxy@Proxy@CoreUI@Microsoft@@CAXPEBUTypeDefinition@Cn@@PEBUMessageProxy__TypeMap@234@@Z
    static void ValidateTypeMap(::Cn::TypeDefinition const *, ::Microsoft::CoreUI::Proxy::MessageProxy__TypeMap const *);
};
} // namespace Microsoft::CoreUI::Proxy
