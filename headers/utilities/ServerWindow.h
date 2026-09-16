#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ServerWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferEvaluateActive@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeferEvaluateActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferEvaluateReady@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeferEvaluateReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferEvaluateVisible@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeferEvaluateVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ServerWindow@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterActiveTask@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void UnregisterActiveTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReadyTask@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void UnregisterReadyTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterVisibleTask@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void UnregisterVisibleTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVWindowManager@2345@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@IIUWindowInstanceId@345@PEAVProxy_IRemoteWindow@2345@URoutingInfo@845@5UWindowType@345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, unsigned int, unsigned int, WindissectOpaque, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Active@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Active(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Display@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewDescriptionHandle@345@@Z
    void set_Display(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_PowerTerminal@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXUPMTerminalHandle@345@@Z
    void set_PowerTerminal(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_TextInputRoutingInfo@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void set_TextInputRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_TouchInputRoutingInfo@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void set_TouchInputRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Visible@ServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Visible(bool);
};
} // namespace Microsoft::CoreUI::Navigation::Server
