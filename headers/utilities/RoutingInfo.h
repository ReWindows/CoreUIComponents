#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class RoutingInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@RoutingInfo@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Equality@RoutingInfo@MessagingInterop@CoreUI@Microsoft@@SA_NU1234@0@Z
    static bool op_Equality(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@RoutingInfo@MessagingInterop@CoreUI@Microsoft@@SA_NU1234@0@Z
    static bool op_Inequality(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
};
} // namespace Microsoft::CoreUI::MessagingInterop
