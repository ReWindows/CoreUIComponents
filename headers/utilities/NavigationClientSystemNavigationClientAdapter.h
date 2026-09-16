#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
class NavigationClientSystemNavigationClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCloseRequested@NavigationClientSystemNavigationClientAdapter@@QEAAJXZ
    long InvokeCloseRequested();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClientSystemNavigationClientAdapter@@QEAA@XZ
    NavigationClientSystemNavigationClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateBackRequest@NavigationClientSystemNavigationClientAdapter@@UEAAJPEAE@Z
    virtual long OnNavigateBackRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_BackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloseRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CloseRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FirstChanceBackRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FirstChanceBackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewBackButtonVisibility@NavigationClientSystemNavigationClientAdapter@@UEAAJPEAW4AppViewBackButtonVisibility@Core@UI@Windows@@@Z
    virtual long get_AppViewBackButtonVisibility(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_CanHandleCloseRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJPEAE@Z
    virtual long get_CanHandleCloseRequested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppViewBackButtonVisibility@NavigationClientSystemNavigationClientAdapter@@UEAAJW4AppViewBackButtonVisibility@Core@UI@Windows@@@Z
    virtual long put_AppViewBackButtonVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CanHandleCloseRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJE@Z
    virtual long put_CanHandleCloseRequested(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloseRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloseRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FirstChanceBackRequested@NavigationClientSystemNavigationClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FirstChanceBackRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientSystemNavigationClientAdapter@@UEAA@XZ
    virtual ~NavigationClientSystemNavigationClientAdapter();
};
