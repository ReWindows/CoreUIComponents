#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 14 member(s).
class NavigationClientDisplayClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyScaleChanged@NavigationClientDisplayClientAdapter@@UEAAJXZ
    virtual long NotifyScaleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@NavigationClientDisplayClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScaleChanged@NavigationClientDisplayClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ScaleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRotationPreferences@NavigationClientDisplayClientAdapter@@UEAAJPEAW4DisplayOrientations@Display@Graphics@Windows@@@Z
    virtual long get_AutoRotationPreferences(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@NavigationClientDisplayClientAdapter@@UEAAJPEAW4DisplayOrientations@Display@Graphics@Windows@@@Z
    virtual long get_CurrentOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@NavigationClientDisplayClientAdapter@@UEAAJPEAM@Z
    virtual long get_DisplayScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeOrientation@NavigationClientDisplayClientAdapter@@UEAAJPEAW4DisplayOrientations@Display@Graphics@Windows@@@Z
    virtual long get_NativeOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@NavigationClientDisplayClientAdapter@@UEAAJPEAM@Z
    virtual long get_RasterizationScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRotationPreferences@NavigationClientDisplayClientAdapter@@UEAAJW4DisplayOrientations@Display@Graphics@Windows@@@Z
    virtual long put_AutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@NavigationClientDisplayClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScaleChanged@NavigationClientDisplayClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScaleChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientDisplayClientAdapter@@UEAA@XZ
    virtual ~NavigationClientDisplayClientAdapter();
};
