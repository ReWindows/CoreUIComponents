#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 12 member(s).
class NavigationClientAppWindowProxiedIdentityClientAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClientAppWindowProxiedIdentityClientAdapter@@QEAA@XZ
    NavigationClientAppWindowProxiedIdentityClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerId@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContainerId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedAppId@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProxiedAppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedHwnd@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJPEA_K@Z
    virtual long get_ProxiedHwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedProcessId@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJPEA_K@Z
    virtual long get_ProxiedProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContainerId@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJU_GUID@@@Z
    virtual long put_ContainerId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedAppId@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ProxiedAppId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedHwnd@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJ_K@Z
    virtual long put_ProxiedHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedProcessId@NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAAJ_K@Z
    virtual long put_ProxiedProcessId(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientAppWindowProxiedIdentityClientAdapter@@UEAA@XZ
    virtual ~NavigationClientAppWindowProxiedIdentityClientAdapter();
};
