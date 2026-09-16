#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
class NavigationClientPresenterClientAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClientPresenterClientAdapter@@QEAA@XZ
    NavigationClientPresenterClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPresentationAsync@NavigationClientPresenterClientAdapter@@UEAAJW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAPEAU?$IAsyncOperation@_N@96@@Z
    virtual long RequestPresentationAsync(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NavigationClientPresenterClientAdapter@@QEAAJPEAVNavigationClient@Core@UI@Phone@Windows@@@Z
    long RuntimeClassInitialize(::Windows::Phone::UI::Core::NavigationClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AppliedPresenterChanged@NavigationClientPresenterClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_AppliedPresenterChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@NavigationClientPresenterClientAdapter@@UEAAJPEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpanningRects@NavigationClientPresenterClientAdapter@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SpanningRects(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AppliedPresenterChanged@NavigationClientPresenterClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AppliedPresenterChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientPresenterClientAdapter@@UEAA@XZ
    virtual ~NavigationClientPresenterClientAdapter();
};
