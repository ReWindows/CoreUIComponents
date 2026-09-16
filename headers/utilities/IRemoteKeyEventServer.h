#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteKeyEventServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEventResult@IRemoteKeyEventServer@@QEAAXI_N@Z
    void OnKeyEventResult(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClient@IRemoteKeyEventServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@PEAVString@System@@@Z
    void RegisterClient(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque *);
};
