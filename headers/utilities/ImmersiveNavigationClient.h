#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 45 member(s).
namespace Windows::Phone::UI::Core {
class ImmersiveNavigationClient {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewBounds@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUVIEW_BOUNDS@2345@@Z
    virtual long GetViewBounds(::Windows::Phone::UI::Core::VIEW_BOUNDS *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivateWindow@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnActivateWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseWindow@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnCloseWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroyWindow@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnDestroyWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPreferredMinSize@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long SetPreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PE Export
    // Symbol: ?ShowStandardSystemOverlays@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PE Export
    // Symbol: ?get_IsScreenCaptureEnabled@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarVisible@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTitleBarVisible(unsigned char *);
    // Category: Method | Source: PE Export
    // Symbol: ?get_SuppressSystemOverlays@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4FULL_SCREEN_TYPE@2345@@Z
    virtual long get_SuppressSystemOverlays(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarHeight@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayLeftInset@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarSystemOverlayLeftInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayRightInset@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarSystemOverlayRightInset(double *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_IsScreenCaptureEnabled@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PE Export
    // Symbol: ?put_SplashScreen@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@5@@Z
    virtual long put_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_SuppressSystemOverlays@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJW4FULL_SCREEN_TYPE@2345@@Z
    virtual long put_SuppressSystemOverlays(int);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarBackgroundColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarButtonBackgroundColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarButtonHoverBackgroundColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonHoverBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarButtonHoverTextColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonHoverTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarButtonPressedBackgroundColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonPressedBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarButtonPressedTextColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonPressedTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarButtonTextColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarInactiveBackgroundColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarInactiveButtonBackgroundColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarInactiveButtonTextColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveButtonTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarInactiveTextColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?put_TitleBarTextColorOverride@ImmersiveNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarTextColorOverride(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@ImmersiveNavigationClient@Core@UI@Phone@Windows@@EEAAJXZ
    virtual long CreateView();
};
} // namespace Windows::Phone::UI::Core
