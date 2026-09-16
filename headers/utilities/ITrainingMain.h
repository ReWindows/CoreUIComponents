#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class ITrainingMain {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShutdown@ITrainingMain@@QEAAXUMessageObjectID@CoreUI@Microsoft@@@Z
    void NotifyShutdown(::Microsoft::CoreUI::MessageObjectID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessResult@ITrainingMain@@QEAAXUMessageObjectID@CoreUI@Microsoft@@PEAVString@System@@@Z
    void ProcessResult(::Microsoft::CoreUI::MessageObjectID, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnection@ITrainingMain@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void StartConnection(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
};
