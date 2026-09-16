#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 94 member(s).
class NavigationClientWindowClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSetWindowPosFlags@NavigationClientWindowClientAdapter@@UEAAJI@Z
    virtual long AddSetWindowPosFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppliedPresenterChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long AppliedPresenterChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloakChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long CloakChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseInternal@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long CloseInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long Consolidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@NavigationClientWindowClientAdapter@@UEAAJW4ConsolidationStatus@Core@UI@Windows@@@Z
    virtual long Consolidate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayRegionChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long DisplayRegionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameOffsetChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long FrameOffsetChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameSizeChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long FrameSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@NavigationClientWindowClientAdapter@@UEAAJW4HideOptions@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long Hide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackRequested@NavigationClientWindowClientAdapter@@QEAAJPEAE@Z
    long InvokeBackRequested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCloseRequested@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long InvokeCloseRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFirstChanceBackRequested@NavigationClientWindowClientAdapter@@QEAAJPEAE@Z
    long InvokeFirstChanceBackRequested(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMinimizedChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long IsMinimizedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_UpdatePhysicalBounds@NavigationClientWindowClientAdapter@@UEAAJURect@Foundation@Windows@@I@Z
    virtual long LegacyTransforms_UpdatePhysicalBounds(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationClientInitialized@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long NavigationClientInitialized();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClientWindowClientAdapter@@QEAA@XZ
    NavigationClientWindowClientAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long NotifyLayoutCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerActivated@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long OnOwnerActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerClosed@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long OnOwnerClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerDestroyed@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long OnOwnerDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChanged@NavigationClientWindowClientAdapter@@QEAAJXZ
    long OnVisibleBoundsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSetWindowPosFlags@NavigationClientWindowClientAdapter@@UEAAJI@Z
    virtual long RemoveSetWindowPosFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NavigationClientWindowClientAdapter@@QEAAJPEAVNavigationClient@Core@UI@Phone@Windows@@@Z
    long RuntimeClassInitialize(::Windows::Phone::UI::Core::NavigationClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIslandTransformsBounds@NavigationClientWindowClientAdapter@@UEAAJURect@Foundation@Windows@@@Z
    virtual long SetIslandTransformsBounds(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@NavigationClientWindowClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long SetOwner(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@NavigationClientWindowClientAdapter@@UEAAJE@Z
    virtual long SetVisibility(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TopMostChanged@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long TopMostChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsync@NavigationClientWindowClientAdapter@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4AppWindowShowOptions@3UI@6@PEAPEAU?$IAsyncOperation@_N@Foundation@6@@Z
    virtual long TryShowAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PE Export
    // Symbol: ?UpdateMetrics@NavigationClientWindowClientAdapter@@UEAAJXZ
    virtual long UpdateMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloakChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CloakChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Consolidated@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Consolidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FrameOffsetChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FrameOffsetChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FrameSizeChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FrameSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsMinimizedChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_IsMinimizedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LogicalSizeChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LogicalSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OcclusionChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OcclusionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PhysicalBoundsChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PhysicalBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TopMostChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TopMostChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibleBoundsChanged@NavigationClientWindowClientAdapter@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibleBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppActivationClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIAppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_AppActivationClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewId@NavigationClientWindowClientAdapter@@UEAAJPEAUAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_AppViewId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppWindowProxiedIdentityClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIAppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_AppWindowProxiedIdentityClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_ApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreApplicationViewClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUICoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_CoreApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CreateOperation@NavigationClientWindowClientAdapter@@QEAAJPEAPEAU?$IAsyncOperation@PEAUIInspectable@@@Foundation@Windows@@@Z
    long get_CreateOperation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIDisplayClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_DisplayClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIFrameClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_FrameClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloViewClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIHoloViewClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_HoloViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@NavigationClientWindowClientAdapter@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_Id(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@NavigationClientWindowClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsCloaked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimized@NavigationClientWindowClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsMinimized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@NavigationClientWindowClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@NavigationClientWindowClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@NavigationClientWindowClientAdapter@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalSize@NavigationClientWindowClientAdapter@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_LogicalSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@NavigationClientWindowClientAdapter@@UEAAJPEAW4CoreWindowOcclusion@Core@UI@Windows@@@Z
    virtual long get_Occlusion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalBounds@NavigationClientWindowClientAdapter@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_PhysicalBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@NavigationClientWindowClientAdapter@@UEAAJPEAUAppModelPlacement@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_Placement(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionerClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIPositionerClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_PositionerClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@NavigationClientWindowClientAdapter@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_PreferredMaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@NavigationClientWindowClientAdapter@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredScale@NavigationClientWindowClientAdapter@@UEAAJPEAI@Z
    virtual long get_PreferredScale(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PresenterClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIPresenterClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_PresenterClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUIDisplayRegion@WindowManagement@UI@Windows@@@Z
    virtual long get_PrimaryDisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SetWindowPosFlags@NavigationClientWindowClientAdapter@@UEAAJPEAI@Z
    virtual long get_SetWindowPosFlags(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@NavigationClientWindowClientAdapter@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemNavigationClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUISystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_SystemNavigationClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarClientAdapter@NavigationClientWindowClientAdapter@@UEAAJPEAPEAUITitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@Windows@@@Z
    virtual long get_TitleBarClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@NavigationClientWindowClientAdapter@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@NavigationClientWindowClientAdapter@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMaxSize@NavigationClientWindowClientAdapter@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_PreferredMaxSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMinSize@NavigationClientWindowClientAdapter@@UEAAJUSize@Foundation@Windows@@@Z
    virtual long put_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredScale@NavigationClientWindowClientAdapter@@UEAAJI@Z
    virtual long put_PreferredScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldWaitForLayoutCompletion@NavigationClientWindowClientAdapter@@UEAAJE@Z
    virtual long put_ShouldWaitForLayoutCompletion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@NavigationClientWindowClientAdapter@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloakChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloakChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Consolidated@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Consolidated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FrameOffsetChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FrameOffsetChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FrameSizeChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FrameSizeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsMinimizedChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsMinimizedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LogicalSizeChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LogicalSizeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OcclusionChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OcclusionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PhysicalBoundsChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PhysicalBoundsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TopMostChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TopMostChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibleBoundsChanged@NavigationClientWindowClientAdapter@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibleBoundsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClientWindowClientAdapter@@UEAA@XZ
    virtual ~NavigationClientWindowClientAdapter();
};
