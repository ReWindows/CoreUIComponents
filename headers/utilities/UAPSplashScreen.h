#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
class UAPSplashScreen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreenEvents@UAPSplashScreen@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSplashScreenEvents(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@UAPSplashScreen@@UEAAJPEBGPEBUtagRECT@@@Z
    virtual long Initialize(unsigned short const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationBegin@UAPSplashScreen@@UEAAJPEBGW4SPLASHSCREEN_FLAGS@@PEAPEAUHWND__@@@Z
    virtual long OnActivationBegin(unsigned short const *, int, HWND__* *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivationEnd@UAPSplashScreen@@UEAAJJ_K@Z
    virtual long OnActivationEnd(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSplashScreen@UAPSplashScreen@@UEAAJXZ
    virtual long ShowSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToApp@UAPSplashScreen@@UEAAJXZ
    virtual long TransitionToApp();
};
