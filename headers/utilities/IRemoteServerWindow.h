#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteServerWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOwner@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void ChangeOwner(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTextInputRoutingInfo@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void ChangeTextInputRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTouchInputRoutingInfo@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void ChangeTouchInputRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationObjectId@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA_KXZ
    uint64_t get_ActivationObjectId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Active@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Active();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewBounds@2345@XZ
    WindissectOpaque get_Bounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA?AUWindowInstanceId@345@XZ
    WindissectOpaque get_Owner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PowerTerminal@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA?AUPMTerminalHandle@345@XZ
    WindissectOpaque get_PowerTerminal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Ready@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Ready();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextInputRoutingInfo@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_TextInputRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThreadId@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ThreadId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@IRemoteServerWindow@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Visible();
};
} // namespace Microsoft::CoreUI::Navigation::Server
