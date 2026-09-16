#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
class IRemoteEditBufferTestHook {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventSink@IRemoteEditBufferTestHook@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@II@Z
    void AddEventSink(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventSink@IRemoteEditBufferTestHook@@QEAAXUMessageObjectID@CoreUI@Microsoft@@@Z
    void RemoveEventSink(::Microsoft::CoreUI::MessageObjectID);
};
