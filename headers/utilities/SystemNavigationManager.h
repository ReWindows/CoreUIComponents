#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 42 member(s).
namespace Windows::UI::Core {
class SystemNavigationManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SystemNavigationManager@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SystemNavigationManager@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SystemNavigationManager@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemNavigationManager@Core@UI@Windows@@QEAA@PEAUISystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@3@@Z
    SystemNavigationManager(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackRequested@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVBackRequestedEventArgs@Core@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BackRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloseRequested@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVSystemNavigationCloseRequestedPreviewEventArgs@Preview@Core@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_CloseRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewBackButtonVisibility@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAW4AppViewBackButtonVisibility@234@@Z
    virtual long get_AppViewBackButtonVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemNavigationManagerPreview@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAPEAUISystemNavigationManagerPreview@Preview@234@@Z
    virtual long get_SystemNavigationManagerPreview(::Windows::UI::Core::Preview::ISystemNavigationManagerPreview * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AppViewBackButtonVisibility@SystemNavigationManager@Core@UI@Windows@@UEAAJW4AppViewBackButtonVisibility@234@@Z
    virtual long put_AppViewBackButtonVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemNavigationManagerPreview@SystemNavigationManager@Core@UI@Windows@@UEAAJPEAUISystemNavigationManagerPreview@Preview@234@@Z
    virtual long put_SystemNavigationManagerPreview(::Windows::UI::Core::Preview::ISystemNavigationManagerPreview *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackRequested@SystemNavigationManager@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloseRequested@SystemNavigationManager@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloseRequested(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackButton@SystemNavigationManager@Core@UI@Windows@@AEAAEXZ
    unsigned char InvokeBackButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackRequested@SystemNavigationManager@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnBackRequested(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseRequested@SystemNavigationManager@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnCloseRequested(IInspectable *, IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemNavigationManager@Core@UI@Windows@@EEAA@XZ
    virtual ~SystemNavigationManager();
};
} // namespace Windows::UI::Core
