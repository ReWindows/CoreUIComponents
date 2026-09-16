#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 353 member(s).
namespace Windows::Phone::UI::Core {
class NavigationClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateViewComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_K@Z
    virtual long ActivateViewComplete(uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NavigationClient@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignPersistingStateName@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long AssignPersistingStateName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedStateAsync@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long ClearPersistedStateAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestHandled@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long CloseRequestHandled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequested@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long CloseRequested(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ConnectionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionFailed@NavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long ConnectionFailed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deactivate@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long Deactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableResponsiveAppViewPolicy@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long DisableResponsiveAppViewPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableApplicationMultiviewActivationPolicy@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long EnableApplicationMultiviewActivationPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppChrome@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIAppChrome@@@Z
    virtual long GetAppChrome(IAppChrome * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4ApplicationViewMode@ViewManagement@35@@Z
    virtual long GetApplicationViewMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppliedPresenter@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4ApplicationWindowPresenterKindInternal@WindowingEnvironment@ApplicationModel@Internal@5@@Z
    virtual long GetAppliedPresenter(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentOrientation@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long GetCurrentOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayScale@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAM@Z
    virtual long GetDisplayScale(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeOrientation@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long GetNativeOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusion@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4CoreWindowOcclusion@235@@Z
    virtual long GetOcclusion(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistingStateName@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPersistingStateName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScale@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAM@Z
    virtual long GetRasterizationScale(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServerTaskInstanceId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAI@Z
    virtual long GetServerTaskInstanceId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionDisplayName@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSessionDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpanningRects@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IVectorView@URect@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long GetSpanningRects(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewBounds@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUVIEW_BOUNDS@2345@@Z
    virtual long GetViewBounds(::Windows::Phone::UI::Core::VIEW_BOUNDS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAK@Z
    virtual long GetViewInstanceId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowId@NavigationClient@Core@UI@Phone@Windows@@QEAA?AUWindowId@WindowManagement@ApplicationModel@Internal@5@XZ
    WindissectOpaque GetWindowId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowInstanceId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAI@Z
    virtual long GetWindowInstanceId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@W4AnimationType@7@W4AnimationFlags@7@@Z
    virtual long Hide(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideStatusBarCompleted@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long HideStatusBarCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@NavigationClient@Core@UI@Phone@Windows@@QEAAJPEAUICoreWindow@235@_N1@Z
    long Initialize(::Windows::UI::Core::ICoreWindow *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@NavigationClient@Core@UI@Phone@Windows@@QEAAJPEAUINavigationClientWindow@235@PEAUHWND__@@W4WindowType@12345@@Z
    long Initialize(::Windows::UI::Core::INavigationClientWindow *, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOrientation@NavigationClient@Core@UI@Phone@Windows@@QEAAXK@Z
    void InitializeOrientation(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationMultiviewActivationPolicyEnabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long IsApplicationMultiviewActivationPolicyEnabled(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewModeSupported@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4ApplicationViewMode@ViewManagement@35@PEAE@Z
    virtual long IsViewModeSupported(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@PEAXI@Z
    virtual long LaunchChildTask(HSTRING__*, void *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?LaunchChildTaskComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long LaunchChildTaskComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@PEAXI0@Z
    virtual long LaunchSession(HSTRING__*, void *, unsigned int, HSTRING__*);
    // Category: Method | Source: PE Export
    // Symbol: ?LaunchSessionComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long LaunchSessionComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAway@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@@Z
    virtual long NavigateAway(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateTo@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@W4AnimationType@7@W4AnimationFlags@7@@Z
    virtual long NavigateTo(int, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationClient@Core@UI@Phone@Windows@@QEAA@XZ
    NavigationClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long NotifyLayoutCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyScaleChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long NotifyScaleChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivateWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnActivateWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnCloseWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long OnDestroyWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFullScreenModeChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_N@Z
    virtual long OnFullScreenModeChange(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLockScreenVisibilityChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_N@Z
    virtual long OnLockScreenVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateBackRequest@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long OnNavigateBackRequest(unsigned char *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnNavigationBarVisibilityChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_NK@Z
    virtual long OnNavigationBarVisibilityChange(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnObscurityChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_N@Z
    virtual long OnObscurityChange(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnOverlayStateChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4OverlayState@@@Z
    virtual long OnOverlayStateChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestScreenShotComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long OnRequestScreenShotComplete();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSearchButtonPress@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long OnSearchButtonPress(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookActivationRequestedMessage@NavigationClient@Core@UI@Phone@Windows@@QEAAJPEAUHWND__@@@Z
    long OnShellHookActivationRequestedMessage(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowAnimationComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long OnShowAnimationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipVisibilityChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_NK@Z
    virtual long OnSipVisibilityChange(bool, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUIAutomationConnection@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEBG@Z
    virtual long OnUIAutomationConnection(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnVisibleRegionChange@NavigationClient@Core@UI@Phone@Windows@@UEAAJUtagRECT@@0@Z
    virtual long OnVisibleRegionChange(tagRECT, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJIH@Z
    virtual long OperationComplete(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentationLoadingComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long PresentationLoadingComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentationUnloadedComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long PresentationUnloadedComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessActivationData@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4ActivationReason@Navigation@@PEAUMsgString@@PEAXI@Z
    virtual long ProcessActivationData(int, MsgString *, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long PropertyChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutAutoRotationPreferences@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4DisplayOrientations@Display@Graphics@5@@Z
    virtual long PutAutoRotationPreferences(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationClient@Core@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistrationComplete@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long RegistrationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistrationFailed@NavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long RegistrationFailed(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NavigationClient@Core@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivateViewAsync@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_KPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long RequestActivateViewAsync(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAXI@Z
    virtual long RequestClose(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHide@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4HideOptions@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long RequestHide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NavigationClient@Core@UI@Phone@Windows@@QEAAJIPEAUHMONITOR__@@HHHH@Z
    long RuntimeClassInitialize(unsigned int, HMONITOR__*, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long ScaleChanged(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppAsComponent@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long SetAppAsComponent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCanHandleCloseRequest@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long SetCanHandleCloseRequest(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExtendedProperty@NavigationClient@Core@UI@Phone@Windows@@QEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    long SetExtendedProperty(HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMaxSize@NavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long SetPreferredMaxSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredMinSize@NavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long SetPreferredMinSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredScale@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long SetPreferredScale(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextInputEndpoint@NavigationClient@Core@UI@Phone@Windows@@QEAAJ_K@Z
    long SetTextInputEndpoint(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4Direction@Navigation@@W4AnimationType@7@W4AnimationFlags@7@@Z
    virtual long Show(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneView@NavigationClient@Core@UI@Phone@Windows@@UEAAJIIII_KPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long ShowAsStandaloneView(unsigned int, unsigned int, unsigned int, unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStatusBarCompleted@NavigationClient@Core@UI@Phone@Windows@@UEAAJXZ
    virtual long ShowStatusBarCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatusBarHide@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long StatusBarHide(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatusBarShow@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long StatusBarShow(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchView@NavigationClient@Core@UI@Phone@Windows@@UEAAJIII_KPEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SwitchView(unsigned int, unsigned int, unsigned int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4SystemKey@Navigation@@@Z
    virtual long SystemKeyPressed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConsolidateAsync@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryConsolidateAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long TrySetTopMost(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneView@NavigationClient@Core@UI@Phone@Windows@@UEAAJIIIIW4AppWindowShowOptions@WindowManagement@35@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsStandaloneView(unsigned int, unsigned int, unsigned int, unsigned int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJIW4ApplicationViewMode@ViewManagement@35@PEAUIViewModePreferences@735@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long TryShowAsViewMode(unsigned int, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PE Export
    // Symbol: ?UIAConnect@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUMsgString@@@Z
    virtual long UIAConnect(MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUICoreWindow@235@@Z
    virtual long Uninitialize(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowPropertyChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long WindowPropertyChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackKeyPressed@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAVBackPressedEventArgs@Input@345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_BackKeyPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChangedInternal@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChangedInternal(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationLoading@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUIPresentationChangingEventArgs@Core@UI@Phone@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationLoading(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PresentationUnloaded@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUIPresentationChangingEventArgs@Core@UI@Phone@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_PresentationUnloaded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ProcessActivationData@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIProcessActivationDataEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ProcessActivationData(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScaleChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_ScaleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SipVisibilityChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUISipVisibilityChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_SipVisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TitleBarInputRoutingInfoChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TitleBarInputRoutingInfoChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TitleBarLayoutMetricsChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TitleBarLayoutMetricsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TitleBarVisibilityChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIInspectable@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_TitleBarVisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibleRegionChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUINavigationClient@Core@UI@Phone@Windows@@PEAUIVisibleRegionChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibleRegionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConsolidationStatus@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4ConsolidationStatus@235@@Z
    virtual long get_ConsolidationStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_ContainerId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameStyle@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4AppWindowFrameStyle@WindowManagement@35@@Z
    virtual long get_FrameStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameworkViewType@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4FrameworkViewType@@@Z
    virtual long get_FrameworkViewType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideInTaskSwitcher@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_HideInTaskSwitcher(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsCloaked(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConsolidated@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsConsolidated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximizable@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsMaximizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimizable@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimized@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsMinimized(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMovable@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsMovable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOnLockScreen@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsOnLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPinnedStateEnabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsPinnedStateEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPopup@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsPopup(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProxied@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsProxied(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResizable@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsResizable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarInputVisualSet@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTitleBarInputVisualSet(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarVisible@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTitleBarVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopMost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsViewExtendedIntoTitleBar@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsViewExtendedIntoTitleBar(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisible@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32NoActivate@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32NoActivate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32ToolWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32ToolWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32TopLevelAppWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_IsWin32TopLevelAppWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUAppModelPlacement@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_Placement(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferDisableSystemUXPolicy@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_PreferDisableSystemUXPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredLaunchViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAH@Z
    virtual long get_PreferredLaunchWindowingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMaxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_PreferredMinSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredScale@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAI@Z
    virtual long get_PreferredScale(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIDisplayRegion@WindowManagement@35@@Z
    virtual long get_PrimaryDisplayRegion(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedAppId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProxiedAppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedHwnd@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedHwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedProcessId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEA_K@Z
    virtual long get_ProxiedProcessId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationDescription@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationDescription(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationName@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RemoteConfigurationName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellChromeBackVisibility@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4AppViewBackButtonVisibility@235@@Z
    virtual long get_ShellChromeBackVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldSuppressCaptionControls@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldSuppressCaptionControls(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreen@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@5@@Z
    virtual long get_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarBackgroundColor@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_StatusBarBackgroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarBackgroundOpacity@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_StatusBarBackgroundOpacity(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarForegroundColor@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_StatusBarForegroundColor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarOccludedRect@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_StatusBarOccludedRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSystemOverlays@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4FULL_SCREEN_TYPE@2345@@Z
    virtual long get_SuppressSystemOverlays(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonHoverBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonHoverBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonHoverTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonHoverTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonPressedBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonPressedBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonPressedTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonPressedTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarButtonTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarHeight@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveButtonBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveButtonTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveButtonTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarInactiveTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInputRoutingHwnd@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAK@Z
    virtual long get_TitleBarInputRoutingHwnd(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInputRoutingInfo@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUCoreMessageRoutingInformation@2345@@Z
    virtual long get_TitleBarInputRoutingInfo(::Windows::Phone::UI::Core::CoreMessageRoutingInformation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarPreferredVisibilityMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4AppWindowTitleBarVisibility@WindowManagement@35@@Z
    virtual long get_TitleBarPreferredVisibilityMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayLeftInset@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarSystemOverlayLeftInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayRightInset@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAN@Z
    virtual long get_TitleBarSystemOverlayRightInset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long get_TitleBarTextColorOverride(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewPresentationMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAW4ViewPresentationMode@@@Z
    virtual long get_ViewPresentationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowClientAdapter@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAPEAUIWindowClientAdapter@WindowManagement@ApplicationModel@Internal@5@@Z
    virtual long get_WindowClientAdapter(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContainerId@NavigationClient@Core@UI@Phone@Windows@@UEAAJU_GUID@@@Z
    virtual long put_ContainerId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FrameStyle@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4AppWindowFrameStyle@WindowManagement@35@@Z
    virtual long put_FrameStyle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FrameworkViewType@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4FrameworkViewType@@@Z
    virtual long put_FrameworkViewType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HideInTaskSwitcher@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_HideInTaskSwitcher(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDisabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMaximizable@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsMaximizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMinimizable@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsMinimizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMovable@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsMovable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPinnedStateEnabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsPinnedStateEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPopup@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsPopup(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsProxied@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsProxied(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsResizable@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsResizable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsTitleBarInputVisualSet@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsTitleBarInputVisualSet(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsViewExtendedIntoTitleBar@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsViewExtendedIntoTitleBar(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32NoActivate@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsWin32NoActivate(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32ToolWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsWin32ToolWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWin32TopLevelAppWindow@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_IsWin32TopLevelAppWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IslandTransformsMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJI@Z
    virtual long put_IslandTransformsMode(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferDisableSystemUXPolicy@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_PreferDisableSystemUXPolicy(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchViewSize@NavigationClient@Core@UI@Phone@Windows@@UEAAJUSize@Foundation@5@@Z
    virtual long put_PreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreferredLaunchWindowingMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJH@Z
    virtual long put_PreferredLaunchWindowingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedAppId@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ProxiedAppId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedHwnd@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_K@Z
    virtual long put_ProxiedHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProxiedProcessId@NavigationClient@Core@UI@Phone@Windows@@UEAAJ_K@Z
    virtual long put_ProxiedProcessId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoteConfigurationDescription@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_RemoteConfigurationDescription(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RemoteConfigurationName@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_RemoteConfigurationName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShellChromeBackVisibility@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4AppViewBackButtonVisibility@235@@Z
    virtual long put_ShellChromeBackVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldSuppressCaptionControls@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_ShouldSuppressCaptionControls(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldWaitForLayoutCompletion@NavigationClient@Core@UI@Phone@Windows@@UEAAJE@Z
    virtual long put_ShouldWaitForLayoutCompletion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SplashScreen@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@5@@Z
    virtual long put_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StatusBarBackgroundColor@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_StatusBarBackgroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StatusBarBackgroundOpacity@NavigationClient@Core@UI@Phone@Windows@@UEAAJN@Z
    virtual long put_StatusBarBackgroundOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StatusBarForegroundColor@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_StatusBarForegroundColor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSystemOverlays@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4FULL_SCREEN_TYPE@2345@@Z
    virtual long put_SuppressSystemOverlays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonHoverBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonHoverBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonHoverTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonHoverTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonPressedBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonPressedBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonPressedTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonPressedTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarButtonTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarButtonTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveButtonBackgroundColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveButtonTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveButtonTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarInactiveTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarInactiveTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarPreferredVisibilityMode@NavigationClient@Core@UI@Phone@Windows@@UEAAJW4AppWindowTitleBarVisibility@WindowManagement@35@@Z
    virtual long put_TitleBarPreferredVisibilityMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TitleBarTextColorOverride@NavigationClient@Core@UI@Phone@Windows@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@@Z
    virtual long put_TitleBarTextColorOverride(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackKeyPressed@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackKeyPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChangedInternal@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChangedInternal(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationLoading@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationLoading(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PresentationUnloaded@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PresentationUnloaded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ProcessActivationData@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ProcessActivationData(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScaleChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScaleChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SipVisibilityChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SipVisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TitleBarInputRoutingInfoChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TitleBarInputRoutingInfoChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TitleBarLayoutMetricsChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TitleBarLayoutMetricsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TitleBarVisibilityChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TitleBarVisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibleRegionChanged@NavigationClient@Core@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibleRegionChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationClient@Core@UI@Phone@Windows@@UEAA@XZ
    virtual ~NavigationClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSplashScreenRect@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEBUtagRECT@@@Z
    long ChangeSplashScreenRect(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToDisplayProperties@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void ConnectToDisplayProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToShell@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void ConnectToShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromDisplayProperties@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void DisconnectFromDisplayProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromShell@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void DisconnectFromShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitMessageSession@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void ExitMessageSession();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationObjectId@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEA_K@Z
    long GetActivationObjectId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindow@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAV?$ComPtr@UICoreWindow@Core@UI@Windows@@@WRL@Microsoft@@@Z
    long GetCoreWindow(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowHwnd@NavigationClient@Core@UI@Phone@Windows@@AEAAXPEAUICoreWindow@235@PEAPEAUHWND__@@@Z
    void GetCoreWindowHwnd(::Windows::UI::Core::ICoreWindow *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeOrientationForCurrentMonitor@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAW4DisplayOrientations@Display@Graphics@5@@Z
    long GetNativeOrientationForCurrentMonitor(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNullableColorFromColorReference@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@5@PEAUCuiNullableColor@@@Z
    long GetNullableColorFromColorReference(WindissectOpaque *, CuiNullableColor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDisplayRegionInternal@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAPEAUIDisplayRegion@WindowManagement@35@@Z
    long GetPrimaryDisplayRegionInternal(::Windows::UI::WindowManagement::IDisplayRegion * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToActivate@NavigationClient@Core@UI@Phone@Windows@@AEAA_NXZ
    bool IsReadyToActivate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToActivateWindow@NavigationClient@Core@UI@Phone@Windows@@AEAA_NXZ
    bool IsReadyToActivateWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyToNavigateAway@NavigationClient@Core@UI@Phone@Windows@@AEAA_NXZ
    bool IsReadyToNavigateAway();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXboxPlatform@NavigationClient@Core@UI@Phone@Windows@@AEAA_NXZ
    bool IsXboxPlatform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOrientationChanged@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long NotifyOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySplashScreenDismissed@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long NotifySplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVisibleBoundsChangeToCoreWindow@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long NotifyVisibleBoundsChangeToCoreWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void OnActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosing@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAUICoreWindow@235@@Z
    long OnClosing(::Windows::UI::Core::ICoreWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExiting@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnExiting(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateAway@NavigationClient@Core@UI@Phone@Windows@@AEAAXXZ
    void OnNavigateAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAUICoreWindow@235@PEAUIVisibilityChangedEventArgs@235@@Z
    long OnVisibilityChanged(::Windows::UI::Core::ICoreWindow *, ::Windows::UI::Core::IVisibilityChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformRotationTransform@NavigationClient@Core@UI@Phone@Windows@@AEAAJPEAUCuiRect@@PEAURect@Foundation@5@@Z
    long PerformRotationTransform(CuiRect *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostConsolidatedMessage@NavigationClient@Core@UI@Phone@Windows@@AEAAXW4ViewConsolidatedState@@@Z
    void PostConsolidatedMessage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStatusBarAction@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long ProcessStatusBarAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAppExiting@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long RegisterAppExiting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSplashScreenDismissed@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long ResetSplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunMessageSession@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long RunMessageSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendWMViewStateChangedToCoreWindow@NavigationClient@Core@UI@Phone@Windows@@AEAAXW4AdjacentDisplayFlags@@W4ViewState@@W4UserInteractionMode@@_NW4ViewPresentationMode@@W4ApplicationViewMode@Server@Navigation@@W4ApplicationViewModeFlags@Server@Navigation@@3@Z
    void SendWMViewStateChangedToCoreWindow(int, int, int, bool, int, int, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@NavigationClient@Core@UI@Phone@Windows@@AEAAJW4MNC_STATE@2345@@Z
    long SetState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressedInternal@NavigationClient@Core@UI@Phone@Windows@@AEAAJW4SystemKey@Navigation@@EPEAE@Z
    long SystemKeyPressedInternal(int, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppExiting@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long UnregisterAppExiting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBoundsOnCoreWindow@NavigationClient@Core@UI@Phone@Windows@@AEAAXHHHH_NW4AdjacentDisplayFlags@@W4ViewState@@W4UserInteractionMode@@0W4ViewPresentationMode@@W4ApplicationViewMode@Server@Navigation@@W4ApplicationViewModeFlags@Server@Navigation@@0@Z
    void UpdateBoundsOnCoreWindow(int, int, int, int, bool, int, int, int, bool, int, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpanningRects@NavigationClient@Core@UI@Phone@Windows@@AEAAJXZ
    long UpdateSpanningRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowActivationState@NavigationClient@Core@UI@Phone@Windows@@AEAAX_N0@Z
    void UpdateWindowActivationState(bool, bool);
};
} // namespace Windows::Phone::UI::Core
