#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ClientRemoteTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXUBufferInfo@MessagingInterop@45@@Z
    virtual void Callback_OnMessage(::Microsoft::CoreUI::MessagingInterop::BufferInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteServerWindow@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerWindow@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteServerWindow(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteClientTask__ChangeSupportedOrientations@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUOrientations@Rotation@45@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteClientTask__ChangeSupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyConnectRequested@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@45@@Z
    virtual void OnProxyConnectRequested(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskPropertyChanged@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXUServerTask__Property@2345@@Z
    virtual void TaskPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ClientRemoteTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVServerTask@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
