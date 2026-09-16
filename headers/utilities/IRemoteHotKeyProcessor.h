#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
class IRemoteHotKeyProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHotKeyAcknowledged@IRemoteHotKeyProcessor@@QEAAXXZ
    void OnHotKeyAcknowledged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHotKey@IRemoteHotKeyProcessor@@QEAAXUMessageObjectID@CoreUI@Microsoft@@III_N@Z
    void RegisterHotKey(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHotKeyClient@IRemoteHotKeyProcessor@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_NUGuid@System@@@Z
    void RegisterHotKeyClient(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterHotKey@IRemoteHotKeyProcessor@@QEAAXUMessageObjectID@CoreUI@Microsoft@@II@Z
    void UnregisterHotKey(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterHotKeyClient@IRemoteHotKeyProcessor@@QEAAXUMessageObjectID@CoreUI@Microsoft@@@Z
    void UnregisterHotKeyClient(::Microsoft::CoreUI::MessageObjectID);
};
