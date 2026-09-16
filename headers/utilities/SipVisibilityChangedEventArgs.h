#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 13 member(s).
namespace Windows::Phone::UI::Core {
class SipVisibilityChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAJPEAI@Z
    virtual long get_Height(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@SipVisibilityChangedEventArgs@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
};
} // namespace Windows::Phone::UI::Core
