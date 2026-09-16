#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteVirtualClientManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRemoteCoreInputView@IRemoteVirtualClientManager@@QEAAXXZ
    void RegisterRemoteCoreInputView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRemoteTextInputClient@IRemoteVirtualClientManager@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void RegisterRemoteTextInputClient(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRemoteTextInputHost@IRemoteVirtualClientManager@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UWindowInstanceId@Navigation@45@UTextInputHostSettings@@@Z
    void RegisterRemoteTextInputHost(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque, TextInputHostSettings);
};
