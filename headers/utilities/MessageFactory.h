#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class MessageFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ShutdownAdapters@MessageFactory@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void Callback_ShutdownAdapters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMessageProxyWorker@MessageFactory@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVIExportMessageProxy@34@AEAURoutingInfo@234@I@Z
    ::Microsoft::CoreUI::IExportMessageProxy * CreateMessageProxyWorker(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCoreMessagingShutdown@MessageFactory@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void NotifyCoreMessagingShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackErrorWorker@MessageFactory@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVObject@System@@@Z
    void TrackErrorWorker(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterExternalObject@MessageFactory@MessagingInterop@CoreUI@Microsoft@@QEAAXUIntPtr@System@@PEAVMessageEndpoint@234@@Z
    void UnregisterExternalObject(WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::MessageEndpoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@MessageFactory@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void _Construct();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@MessageFactory@MessagingInterop@CoreUI@Microsoft@@SAPEAV1234@XZ
    static ::Microsoft::CoreUI::MessagingInterop::MessageFactory * get_Current();
};
} // namespace Microsoft::CoreUI::MessagingInterop
