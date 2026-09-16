#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 58 member(s).
class NavigationClientPositionerClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@NavigationClientPositionerClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearPersistedState(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClientPositionerClientAdapter@@QEAA@XZ
    NavigationClientPositionerClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveAdjacentToAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestMoveAdjacentToAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToDisplayRegionAsync@NavigationClientPositionerClientAdapter@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UPoint@Foundation@6@PEAPEAU?$IAsyncOperation@_N@86@@Z
    virtual long RequestMoveRelativeToDisplayRegionAsync(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveRelativeToWindowAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@UPoint@Foundation@6@PEAPEAU?$IAsyncOperation@_N@86@@Z
    virtual long RequestMoveRelativeToWindowAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestMoveToDisplayRegionAsync@NavigationClientPositionerClientAdapter@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestMoveToDisplayRegionAsync(::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPositionAndSizeWithContextAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@UDisplayRegionId@WindowingEnvironment@456@UPoint@Foundation@6@USize@Foundation@6@123PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestPositionAndSizeWithContextAsync(WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque, WindissectOpaque, ::Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId, WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetIconAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIRandomAccessStream@Streams@Storage@6@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestSetIconAsync(WindissectOpaque, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetPreferredTopMostAsync@NavigationClientPositionerClientAdapter@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long RequestSetPreferredTopMostAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetRelativeZOrderBeneathAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestSetRelativeZOrderBeneathAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetSecondaryIconAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIRandomAccessStream@Streams@Storage@6@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestSetSecondaryIconAsync(WindissectOpaque, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSetThumbnailAsync@NavigationClientPositionerClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIRandomAccessStream@Streams@Storage@6@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long RequestSetThumbnailAsync(WindissectOpaque, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSizeAsync@NavigationClientPositionerClientAdapter@@UEAAJUSize@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@34@@Z
    virtual long RequestSizeAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedProperty@NavigationClientPositionerClientAdapter@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetExtendedProperty(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long TrySetTopMost(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DisplayRegionChanged@NavigationClientPositionerClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DisplayRegionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegionIds@NavigationClientPositionerClientAdapter@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_DisplayRegionIds(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideInTaskSwitcher@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_HideInTaskSwitcher(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximizable@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsMaximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimizable@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsMinimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMovable@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsMovable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPopup@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsPopup(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProxied@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsProxied(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResizable@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsResizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32NoActivate@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsWin32NoActivate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32ToolWindow@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsWin32ToolWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32TopLevelAppWindow@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsWin32TopLevelAppWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistedStateId@NavigationClientPositionerClientAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PersistedStateId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferDisableSystemUXPolicy@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_PreferDisableSystemUXPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationDescription@NavigationClientPositionerClientAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationDescription(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationName@NavigationClientPositionerClientAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldSuppressCaptionControls@NavigationClientPositionerClientAdapter@@UEAAJPEAE@Z
    virtual long get_ShouldSuppressCaptionControls(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowingEnvironmentId@NavigationClientPositionerClientAdapter@@UEAAJPEAUWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z
    virtual long get_WindowingEnvironmentId(::Windows::Internal::ApplicationModel::WindowingEnvironment::WindowingEnvironmentId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideInTaskSwitcher@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_HideInTaskSwitcher(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDisabled@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMaximizable@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsMaximizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMinimizable@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsMinimizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMovable@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsMovable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPopup@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsPopup(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsProxied@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsProxied(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsResizable@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsResizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32NoActivate@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsWin32NoActivate(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32ToolWindow@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsWin32ToolWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32TopLevelAppWindow@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_IsWin32TopLevelAppWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PersistedStateId@NavigationClientPositionerClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_PersistedStateId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferDisableSystemUXPolicy@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_PreferDisableSystemUXPolicy(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoteConfigurationDescription@NavigationClientPositionerClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_RemoteConfigurationDescription(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoteConfigurationName@NavigationClientPositionerClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_RemoteConfigurationName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldSuppressCaptionControls@NavigationClientPositionerClientAdapter@@UEAAJE@Z
    virtual long put_ShouldSuppressCaptionControls(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DisplayRegionChanged@NavigationClientPositionerClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DisplayRegionChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientPositionerClientAdapter@@UEAA@XZ
    virtual ~NavigationClientPositionerClientAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPresentationChanges@NavigationClientPositionerClientAdapter@@AEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    long ApplyPresentationChanges(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyWindowingEnvironmentChanges@NavigationClientPositionerClientAdapter@@AEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    long ApplyWindowingEnvironmentChanges(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositioner@NavigationClientPositionerClientAdapter@@AEAAJPEAPEAUIPositionerBroker@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z
    long GetPositioner(::Windows::Internal::ApplicationModel::WindowingEnvironment::IPositionerBroker * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowingEnvironment@NavigationClientPositionerClientAdapter@@AEAAJPEAPEAUIWindowingEnvironment@WindowManagement@UI@Windows@@@Z
    long GetWindowingEnvironment(::Windows::UI::WindowManagement::IWindowingEnvironment * *);
};
