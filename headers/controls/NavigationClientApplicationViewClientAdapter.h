#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 34 member(s).
class NavigationClientApplicationViewClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableResponsiveAppViewPolicy@NavigationClientApplicationViewClientAdapter@@UEAAJXZ
    virtual long DisableResponsiveAppViewPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeStateChanged@NavigationClientApplicationViewClientAdapter@@QEAAJ_N@Z
    long InvokeStateChanged(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewModeSupported@NavigationClientApplicationViewClientAdapter@@UEAAJW4ApplicationViewMode@ViewManagement@UI@Windows@@PEAE@Z
    virtual long IsViewModeSupported(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneViewAsync@NavigationClientApplicationViewClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long ShowAsStandaloneViewAsync(WindissectOpaque, WindissectOpaque, int, int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@NavigationClientApplicationViewClientAdapter@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchViewAsync@NavigationClientApplicationViewClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@0I_KPEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SwitchViewAsync(WindissectOpaque, WindissectOpaque, unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConsolidateAsync@NavigationClientApplicationViewClientAdapter@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryConsolidateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneViewAsync@NavigationClientApplicationViewClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long TryShowAsStandaloneViewAsync(WindissectOpaque, WindissectOpaque, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewModeAsync@NavigationClientApplicationViewClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4ApplicationViewMode@ViewManagement@UI@6@PEAUIViewModePreferences@896@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long TryShowAsViewModeAsync(WindissectOpaque, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StateChanged@NavigationClientApplicationViewClientAdapter@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_StateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToLeftDisplayEdge@NavigationClientApplicationViewClientAdapter@@UEAAJPEAE@Z
    virtual long get_AdjacentToLeftDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentToRightDisplayEdge@NavigationClientApplicationViewClientAdapter@@UEAAJPEAE@Z
    virtual long get_AdjacentToRightDisplayEdge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewMode@NavigationClientApplicationViewClientAdapter@@UEAAJPEAW4ApplicationViewMode@ViewManagement@UI@Windows@@@Z
    virtual long get_ApplicationViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewState@NavigationClientApplicationViewClientAdapter@@UEAAJPEAW4ApplicationViewState@ViewManagement@UI@Windows@@@Z
    virtual long get_ApplicationViewState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicationMultiviewActivationPolicyEnabled@NavigationClientApplicationViewClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsApplicationMultiviewActivationPolicyEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFullScreen@NavigationClientApplicationViewClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsFullScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOnLockScreen@NavigationClientApplicationViewClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsOnLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@NavigationClientApplicationViewClientAdapter@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_PreferredLaunchViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@NavigationClientApplicationViewClientAdapter@@UEAAJPEAW4ApplicationViewWindowingMode@ViewManagement@UI@Windows@@@Z
    virtual long get_PreferredLaunchWindowingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@NavigationClientApplicationViewClientAdapter@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpanningRects@NavigationClientApplicationViewClientAdapter@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SpanningRects(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSystemOverlays@NavigationClientApplicationViewClientAdapter@@UEAAJPEAW4FULL_SCREEN_TYPE@Core@UI@Phone@Windows@@@Z
    virtual long get_SuppressSystemOverlays(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@NavigationClientApplicationViewClientAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserInteractionMode@NavigationClientApplicationViewClientAdapter@@UEAAJPEAW4UserInteractionMode@ViewManagement@UI@Windows@@@Z
    virtual long get_UserInteractionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsApplicationMultiviewActivationPolicyEnabled@NavigationClientApplicationViewClientAdapter@@UEAAJE@Z
    virtual long put_IsApplicationMultiviewActivationPolicyEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchViewSize@NavigationClientApplicationViewClientAdapter@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_PreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchWindowingMode@NavigationClientApplicationViewClientAdapter@@UEAAJW4ApplicationViewWindowingMode@ViewManagement@UI@Windows@@@Z
    virtual long put_PreferredLaunchWindowingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMinSize@NavigationClientApplicationViewClientAdapter@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSystemOverlays@NavigationClientApplicationViewClientAdapter@@UEAAJW4FULL_SCREEN_TYPE@Core@UI@Phone@Windows@@@Z
    virtual long put_SuppressSystemOverlays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@NavigationClientApplicationViewClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StateChanged@NavigationClientApplicationViewClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StateChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientApplicationViewClientAdapter@@UEAA@XZ
    virtual ~NavigationClientApplicationViewClientAdapter();
};
