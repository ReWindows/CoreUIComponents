#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 18 member(s).
namespace Windows::Phone::UI::Input {
class BackPressedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackPressedEventArgs@Input@UI@Phone@Windows@@QEAA@XZ
    BackPressedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@BackPressedEventArgs@Input@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackPressedEventArgs@Input@UI@Phone@Windows@@EEAA@XZ
    virtual ~BackPressedEventArgs();
};
} // namespace Windows::Phone::UI::Input
