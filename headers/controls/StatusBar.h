#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 30 member(s).
namespace Windows::UI::ViewManagement {
class StatusBar {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StatusBar@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideAsync@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long HideAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StatusBar@ViewManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StatusBar@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long ShowAsync(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StatusBar@ViewManagement@UI@Windows@@QEAA@XZ
    StatusBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Hiding@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVStatusBar@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Hiding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Showing@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVStatusBar@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Showing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_BackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundOpacity@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAN@Z
    virtual long get_BackgroundOpacity(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludedRect@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_OccludedRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressIndicator@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAPEAUIStatusBarProgressIndicator@234@@Z
    virtual long get_ProgressIndicator(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundColor@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_BackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BackgroundOpacity@StatusBar@ViewManagement@UI@Windows@@UEAAJN@Z
    virtual long put_BackgroundOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForegroundColor@StatusBar@ViewManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Hiding@StatusBar@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Hiding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Showing@StatusBar@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Showing(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StatusBar@ViewManagement@UI@Windows@@UEAA@XZ
    virtual ~StatusBar();
};
} // namespace Windows::UI::ViewManagement
