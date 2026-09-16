#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 19 member(s).
namespace Windows::UI::Core::Preview {
class SystemNavigationCloseRequestedPreviewEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJPEAPEAUIDeferral@Foundation@5@@Z
    virtual long GetDeferral(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@QEAA@XZ
    SystemNavigationCloseRequestedPreviewEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@UEAA@XZ
    virtual ~SystemNavigationCloseRequestedPreviewEventArgs();
};
} // namespace Windows::UI::Core::Preview
