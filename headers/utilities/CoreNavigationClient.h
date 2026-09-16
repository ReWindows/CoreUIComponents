#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 108 member(s).
namespace Windows::Phone::UI::Core {
class CoreNavigationClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PE Export
    // Symbol: ?AddSetWindowPosFlags@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long AddSetWindowPosFlags(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Consolidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJW4HideOptions@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long Hide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CoreNavigationClient@Core@UI@Phone@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CoreNavigationClient@Core@UI@Phone@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long NotifyLayoutCompleted();
    // Category: Method | Source: PE Export
    // Symbol: ?OnOwnerActivated@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long OnOwnerActivated();
    // Category: Method | Source: PE Export
    // Symbol: ?OnOwnerClosed@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long OnOwnerClosed();
    // Category: Method | Source: PE Export
    // Symbol: ?OnOwnerDestroyed@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long OnOwnerDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long PropertyChanged(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?RemoveSetWindowPosFlags@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long RemoveSetWindowPosFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long SetOwner(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsync@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@5@W4AppWindowShowOptions@735@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsync(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAConnect@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUMsgString@@@Z
    virtual long UIAConnect(MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowPropertyChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long WindowPropertyChanged(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?add_CloakChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CloakChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_Closed@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_Consolidated@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Consolidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_FrameOffsetChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_FrameOffsetChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_FrameSizeChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_FrameSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_IsMinimizedChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_IsMinimizedChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LogicalSizeChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_LogicalSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_OcclusionChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OcclusionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_PhysicalBoundsChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PhysicalBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_TopMostChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TopMostChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_VisibilityChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PE Export
    // Symbol: ?add_VisibleBoundsChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibleBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppActivationClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIAppActivationClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_AppActivationClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppViewId@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUAppViewId@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_AppViewId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppWindowProxiedIdentityClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIAppWindowProxiedIdentityClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_AppWindowProxiedIdentityClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_ApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreApplicationViewClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUICoreApplicationViewClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_CoreApplicationViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIDisplayClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_DisplayClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIFrameClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_FrameClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloViewClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIHoloViewClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_HoloViewClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_Id(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsCloaked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimized@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalSize@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_LogicalSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4CoreWindowOcclusion@235@@Z
    virtual long get_Occlusion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalBounds@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_PhysicalBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUAppModelPlacement@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_Placement(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionerClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIPositionerClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_PositionerClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredScale@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAI@Z
    virtual long get_PreferredScale(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PresenterClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIPresenterClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_PresenterClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIDisplayRegion@WindowManagement@35@@Z
    virtual long get_PrimaryDisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SetWindowPosFlags@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAI@Z
    virtual long get_SetWindowPosFlags(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemNavigationClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUISystemNavigationClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_SystemNavigationClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarClientAdapter@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUITitleBarClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_TitleBarClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMaxSize@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredMaxSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredMinSize@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredScale@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long put_PreferredScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldWaitForLayoutCompletion@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_ShouldWaitForLayoutCompletion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_CloakChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloakChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_Closed@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_Consolidated@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Consolidated(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_FrameOffsetChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FrameOffsetChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_FrameSizeChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FrameSizeChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_IsMinimizedChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsMinimizedChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LogicalSizeChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LogicalSizeChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_OcclusionChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OcclusionChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_PhysicalBoundsChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PhysicalBoundsChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_TopMostChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TopMostChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_VisibilityChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PE Export
    // Symbol: ?remove_VisibleBoundsChanged@CoreNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibleBoundsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreNavigationClient@Core@UI@Phone@Windows@@UEAA@XZ
    virtual ~CoreNavigationClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@CoreNavigationClient@Core@UI@Phone@Windows@@EEAAJXZ
    virtual long CreateView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CoreNavigationClient@Core@UI@Phone@Windows@@EEAAJPEAUICoreWindow@235@@Z
    virtual long Initialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInput@CoreNavigationClient@Core@UI@Phone@Windows@@AEAAJPEAUICoreWindow@235@@Z
    long InitializeInput(::Windows::UI::Core::ICoreWindow *);
};
} // namespace Windows::Phone::UI::Core
