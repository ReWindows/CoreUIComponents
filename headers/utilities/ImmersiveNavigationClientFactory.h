#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 17 member(s).
namespace Windows::Phone::UI::Core {
class ImmersiveNavigationClientFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAJW4VIEW_KIND@2345@KPEAPEAUINavigationClient@2345@@Z
    virtual long Create(int, unsigned long, ::Windows::Phone::UI::Core::INavigationClient * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImmersiveNavigationClientFactory@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Phone::UI::Core
