#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
class IRemoteTextInputDelegationServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClient@IRemoteTextInputDelegationServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void RegisterClient(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenewDelegationSourcePID@IRemoteTextInputDelegationServer@@QEAAXIAEAI@Z
    void RenewDelegationSourcePID(unsigned int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNotifyingKeyEvents@IRemoteTextInputDelegationServer@@QEAAXPEAVByte_1D@System@@@Z
    void StartNotifyingKeyEvents(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopNotifyingKeyEvents@IRemoteTextInputDelegationServer@@QEAAXXZ
    void StopNotifyingKeyEvents();
};
