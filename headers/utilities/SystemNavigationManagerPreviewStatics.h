#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 18 member(s).
namespace Windows::UI::Core::Preview {
class SystemNavigationManagerPreviewStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAPEAUISystemNavigationManagerPreview@2345@@Z
    virtual long GetForCurrentView(::Windows::UI::Core::Preview::ISystemNavigationManagerPreview * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemNavigationManagerPreviewStatics@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Core::Preview
