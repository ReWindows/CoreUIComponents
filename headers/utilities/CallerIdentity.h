#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class CallerIdentity {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z
    long GetAppIdFromProcessId(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z
    long GetCallingProcessHandle(unsigned long, int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z
    long GetProcessAppId(void *, unsigned short * *);
};
