#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
namespace Windows::UI::Core::Preview {
class SystemNavigationManagerPreview {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@QEAAJPEAUISystemNavigationManager@345@@Z
    long RuntimeClassInitialize(::Windows::UI::Core::ISystemNavigationManager *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemNavigationManagerPreview@Preview@Core@UI@Windows@@QEAA@XZ
    SystemNavigationManagerPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloseRequested@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVSystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CloseRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloseRequested@SystemNavigationManagerPreview@Preview@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloseRequested(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemNavigationManagerPreview@Preview@Core@UI@Windows@@EEAA@XZ
    virtual ~SystemNavigationManagerPreview();
};
} // namespace Windows::UI::Core::Preview
