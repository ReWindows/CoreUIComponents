#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 26 member(s).
class SplashScreen {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SplashScreen@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SplashScreen@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SplashScreen@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SplashScreen@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SplashScreen@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySplashScreenDismissed@SplashScreen@@UEAAJXZ
    virtual long NotifySplashScreenDismissed();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SplashScreen@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SplashScreen@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSplashScreenDismissed@SplashScreen@@UEAAJXZ
    virtual long ResetSplashScreenDismissed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@SplashScreen@@UEAAJPEBUtagRECT@@@Z
    virtual long SetRect(tagRECT const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SplashScreen@@QEAA@XZ
    SplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Dismissed@SplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Dismissed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImageLocation@SplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ImageLocation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Dismissed@SplashScreen@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Dismissed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SplashScreen@@UEAA@XZ
    virtual ~SplashScreen();
};
