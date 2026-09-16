#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 18 member(s).
namespace Windows::UI::Core {
class BackRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BackRequestedEventArgs@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackRequestedEventArgs@Core@UI@Windows@@QEAA@XZ
    BackRequestedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BackRequestedEventArgs@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BackRequestedEventArgs@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BackRequestedEventArgs@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BackRequestedEventArgs@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BackRequestedEventArgs@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@BackRequestedEventArgs@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@BackRequestedEventArgs@Core@UI@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackRequestedEventArgs@Core@UI@Windows@@EEAA@XZ
    virtual ~BackRequestedEventArgs();
};
} // namespace Windows::UI::Core
