#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 95 member(s).
namespace Windows::Phone::UI::Core {
class BaseNavigationClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Activate();
    // Category: Method | Source: PE Export
    // Symbol: ?ActivateViewComplete@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJ_K@Z
    virtual long ActivateViewComplete(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PE Export
    // Symbol: ?CloseRequested@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long CloseRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionComplete@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ConnectionComplete();
    // Category: Method | Source: PE Export
    // Symbol: ?ConnectionFailed@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long ConnectionFailed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deactivate@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Deactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableResponsiveAppViewPolicy@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long DisableResponsiveAppViewPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentOrientation@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long GetCurrentOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeOrientation@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long GetNativeOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewBounds@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUVIEW_BOUNDS@2345@@Z
    virtual long GetViewBounds(::Windows::Phone::UI::Core::VIEW_BOUNDS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAK@Z
    virtual long GetViewInstanceId(unsigned long *);
    // Category: Method | Source: PE Export
    // Symbol: ?Hide@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@W4AnimationType@7@W4AnimationFlags@7@@Z
    virtual long Hide(int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?HideStatusBarCompleted@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long HideStatusBarCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BaseNavigationClient@Core@UI@Phone@Windows@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PE Export
    // Symbol: ?LaunchChildTaskComplete@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long LaunchChildTaskComplete(int);
    // Category: Method | Source: PE Export
    // Symbol: ?LaunchSessionComplete@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long LaunchSessionComplete(int);
    // Category: Method | Source: PE Export
    // Symbol: ?NavigateAway@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@@Z
    virtual long NavigateAway(int);
    // Category: Method | Source: PE Export
    // Symbol: ?NavigateTo@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@W4AnimationType@7@W4AnimationFlags@7@@Z
    virtual long NavigateTo(int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnActivateWindow@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnActivateWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCloseWindow@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnCloseWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnDestroyWindow@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnDestroyWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateBackRequest@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long OnNavigateBackRequest(unsigned char *);
    // Category: Method | Source: PE Export
    // Symbol: ?OperationComplete@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJIH@Z
    virtual long OperationComplete(unsigned int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?ProcessActivationData@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4ActivationReason@Navigation@@PEAUMsgString@@PEAXI@Z
    virtual long ProcessActivationData(int, MsgString *, void *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?PropertyChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long PropertyChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistrationComplete@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long RegistrationComplete();
    // Category: Method | Source: PE Export
    // Symbol: ?RegistrationFailed@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long RegistrationFailed(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppAsComponent@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long SetAppAsComponent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long SetPreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PE Export
    // Symbol: ?Show@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@W4AnimationType@7@W4AnimationFlags@7@@Z
    virtual long Show(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PE Export
    // Symbol: ?ShowStatusBarCompleted@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ShowStatusBarCompleted();
    // Category: Method | Source: PE Export
    // Symbol: ?SystemKeyPressed@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4SystemKey@Navigation@@@Z
    virtual long SystemKeyPressed(int);
    // Category: Method | Source: PE Export
    // Symbol: ?UIAConnect@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUMsgString@@@Z
    virtual long UIAConnect(MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long Uninitialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PE Export
    // Symbol: ?WindowPropertyChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long WindowPropertyChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TitleBarInputRoutingInfoChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TitleBarInputRoutingInfoChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TitleBarLayoutMetricsChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TitleBarLayoutMetricsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TitleBarVisibilityChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TitleBarVisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarInputVisualSet@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTitleBarInputVisualSet(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarVisible@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTitleBarVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsViewExtendedIntoTitleBar@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsViewExtendedIntoTitleBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredLaunchViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAH@Z
    virtual long get_PreferredLaunchWindowingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreen@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@5@@Z
    virtual long get_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSystemOverlays@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4FULL_SCREEN_TYPE@2345@@Z
    virtual long get_SuppressSystemOverlays(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonHoverBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonHoverBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonHoverTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonHoverTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonPressedBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonPressedBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonPressedTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonPressedTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarHeight@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveButtonBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveButtonTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveButtonTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInputRoutingHwnd@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAK@Z
    virtual long get_TitleBarInputRoutingHwnd(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInputRoutingInfo@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUCoreMessageRoutingInformation@2345@@Z
    virtual long get_TitleBarInputRoutingInfo(::Windows::Phone::UI::Core::CoreMessageRoutingInformation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayLeftInset@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarSystemOverlayLeftInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayRightInset@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarSystemOverlayRightInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTitleBarInputVisualSet@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsTitleBarInputVisualSet(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsViewExtendedIntoTitleBar@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsViewExtendedIntoTitleBar(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchViewSize@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchWindowingMode@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long put_PreferredLaunchWindowingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SplashScreen@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@5@@Z
    virtual long put_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSystemOverlays@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJW4FULL_SCREEN_TYPE@2345@@Z
    virtual long put_SuppressSystemOverlays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonHoverBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonHoverBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonHoverTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonHoverTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonPressedBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonPressedBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonPressedTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonPressedTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveButtonBackgroundColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveButtonTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveButtonTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarTextColorOverride@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TitleBarInputRoutingInfoChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TitleBarInputRoutingInfoChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TitleBarLayoutMetricsChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TitleBarLayoutMetricsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TitleBarVisibilityChanged@BaseNavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TitleBarVisibilityChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseNavigationClient@Core@UI@Phone@Windows@@QEAA@XZ
    ~BaseNavigationClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@BaseNavigationClient@Core@UI@Phone@Windows@@MEAAJXZ
    virtual long CreateView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BaseNavigationClient@Core@UI@Phone@Windows@@MEAAJPEAUICoreWindow@235@@Z
    virtual long Initialize(::Windows::UI::Core::ICoreWindow *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationObjectId@BaseNavigationClient@Core@UI@Phone@Windows@@AEAAJPEA_K@Z
    long GetActivationObjectId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHwnd@BaseNavigationClient@Core@UI@Phone@Windows@@AEAAJPEAUICoreWindow@235@PEAPEAUHWND__@@@Z
    long GetCoreWindowHwnd(::Windows::UI::Core::ICoreWindow *, HWND__* *);
};
} // namespace Windows::Phone::UI::Core
