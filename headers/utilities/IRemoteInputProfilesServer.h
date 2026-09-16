#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
class IRemoteInputProfilesServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesRequireCicero@IRemoteInputProfilesServer@@QEAAXAEA_N@Z
    void DoesRequireCicero(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfileByAtomId@IRemoteInputProfilesServer@@QEAAXIAEAUCoreInputProfile@@@Z
    void GetProfileByAtomId(unsigned int, CoreInputProfile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputProfileActivate@IRemoteInputProfilesServer@@QEAAXII_N@Z
    void OnInputProfileActivate(unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardLayoutListChange@IRemoteInputProfilesServer@@QEAAXXZ
    void OnKeyboardLayoutListChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputProfilesClient@IRemoteInputProfilesServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void RegisterInputProfilesClient(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadProfiles@IRemoteInputProfilesServer@@QEAAX_N@Z
    void ReloadProfiles(bool);
};
