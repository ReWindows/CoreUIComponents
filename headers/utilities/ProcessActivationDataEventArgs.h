#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 15 member(s).
namespace Windows::Phone::UI::Core {
class ProcessActivationDataEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationData@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long GetActivationData(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@QEAAJW4ActivationReason@Navigation@@IPEAE@Z
    long RuntimeClassInitialize(int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reason@ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAAJPEAH@Z
    virtual long get_Reason(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessActivationDataEventArgs@Core@UI@Phone@Windows@@UEAA@XZ
    virtual ~ProcessActivationDataEventArgs();
};
} // namespace Windows::Phone::UI::Core
