#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteInputRedirection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableInputRedirection@IRemoteInputRedirection@@QEAAX_KURoutingInfo@MessagingInterop@CoreUI@Microsoft@@1H@Z
    void DisableInputRedirection(uint64_t, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputRedirection@IRemoteInputRedirection@@QEAAXI_KURoutingInfo@MessagingInterop@CoreUI@Microsoft@@1H_N@Z
    void EnableInputRedirection(unsigned int, uint64_t, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, int, bool);
};
