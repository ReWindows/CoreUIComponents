#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
class NavigationClientCoreApplicationViewClientAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClientCoreApplicationViewClientAdapter@@QEAA@XZ
    NavigationClientCoreApplicationViewClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationLoading@NavigationClientCoreApplicationViewClientAdapter@@QEAAJPEAUIPresentationChangingEventArgs@Core@UI@Phone@Windows@@@Z
    long OnPresentationLoading(::Windows::Phone::UI::Core::IPresentationChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresentationUnloaded@NavigationClientCoreApplicationViewClientAdapter@@QEAAJPEAUIPresentationChangingEventArgs@Core@UI@Phone@Windows@@@Z
    long OnPresentationUnloaded(::Windows::Phone::UI::Core::IPresentationChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationLoading@NavigationClientCoreApplicationViewClientAdapter@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationLoading(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationUnloaded@NavigationClientCoreApplicationViewClientAdapter@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationUnloaded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationLoading@NavigationClientCoreApplicationViewClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationLoading(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationUnloaded@NavigationClientCoreApplicationViewClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationUnloaded(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientCoreApplicationViewClientAdapter@@UEAA@XZ
    virtual ~NavigationClientCoreApplicationViewClientAdapter();
};
