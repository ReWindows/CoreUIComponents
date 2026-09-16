#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Windows::Internal::ApplicationModel {
class WindowManagement {
public:
    class IApplicationViewStateChangedEventArgs;
    class IClientBackRequestedEventArgs;
    class ICloseRequestedEventArgs;
    class IConsolidatedEventArgs;
    class IPresentationChangingEventArgs;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationActivationWatcherEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsApplicationActivationWatcherEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsIDKOnHoloEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEB_W@Z
    bool IsIDKOnSKUEnabled(wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnXboxEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsIDKOnXboxEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsMinShellPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewManagerPhaseoutEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsViewManagerPhaseoutEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowClientBamoEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsWindowClientBamoEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowManagementRegKeySet@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsWindowManagementRegKeySet();
};
} // namespace Windows::Internal::ApplicationModel
