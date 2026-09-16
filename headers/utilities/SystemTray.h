#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 20 member(s).
namespace Windows::UI::ViewManagement {
class SystemTray {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemTray@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideAsync@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long HideAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemTray@ViewManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemTray@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long ShowAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundColor@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long get_ForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludedRect@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_OccludedRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForegroundColor@SystemTray@ViewManagement@UI@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@4@@Z
    virtual long put_ForegroundColor(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemTray@ViewManagement@UI@Windows@@UEAA@XZ
    virtual ~SystemTray();
};
} // namespace Windows::UI::ViewManagement
