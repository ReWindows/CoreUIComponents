#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
class IRemoteInputProfilesClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateImeServerProfiles@IRemoteInputProfilesClient@@QEAAXXZ
    void InvalidateImeServerProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultProfileChanged@IRemoteInputProfilesClient@@QEAAXG@Z
    void OnDefaultProfileChanged(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoadCompleted@IRemoteInputProfilesClient@@QEAAX_N@Z
    void OnLoadCompleted(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewImeInstalled@IRemoteInputProfilesClient@@QEAAXG@Z
    void OnNewImeInstalled(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImeServerProfiles@IRemoteInputProfilesClient@@QEAAXXZ
    void UpdateImeServerProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemLanguageBarStatus@IRemoteInputProfilesClient@@QEAAXXZ
    void UpdateSystemLanguageBarStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCache@IRemoteInputProfilesClient@@QEAAXPEAVByte_1D@System@@_N@Z
    void WriteCache(WindissectOpaque *, bool);
};
