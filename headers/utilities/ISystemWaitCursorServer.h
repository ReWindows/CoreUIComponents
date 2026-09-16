#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class ISystemWaitCursorServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@ISystemWaitCursorServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void Hide(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@ISystemWaitCursorServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@PEAVString@System@@I@Z
    void Show(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateText@ISystemWaitCursorServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@PEAVString@System@@@Z
    void UpdateText(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque *);
};
