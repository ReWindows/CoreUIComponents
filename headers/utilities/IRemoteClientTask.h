#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 202 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteClientTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ActivateComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCanHandleCloseRequest@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeCanHandleCloseRequest(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClientExtensionMapByBool@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@_N@Z
    void ChangeClientExtensionMapByBool(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClientExtensionMapByInt32@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void ChangeClientExtensionMapByInt32(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClientExtensionMapByString@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@0@Z
    void ChangeClientExtensionMapByString(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClientExtensionMapByUInt32@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@I@Z
    void ChangeClientExtensionMapByUInt32(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeContainerId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void ChangeContainerId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCurrentPageName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeCurrentPageName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeDisplayName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeDisplayName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeFirstLayoutComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeFirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeFrameStyle@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUApplicationWindowFrameStyle@345@@Z
    void ChangeFrameStyle(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeFullScreen@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeFullScreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeHideInTaskSwitcher@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeHideInTaskSwitcher(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsDisabled@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsDisabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMaximizable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsMaximizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMinimizable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsMinimizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMovable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsMovable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsPopup@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsPopup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsProxied@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsProxied(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsResizable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsResizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsTitleBarInputVisualSet@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsTitleBarInputVisualSet(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsTitleBarVisible@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsTitleBarVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsViewExtendedIntoTitleBar@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsViewExtendedIntoTitleBar(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsWin32NoActivate@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsWin32NoActivate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsWin32ToolWindow@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsWin32ToolWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsWin32TopLevelAppWindow@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsWin32TopLevelAppWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeLoadingScreenBackgroundColor@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void ChangeLoadingScreenBackgroundColor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeLoadingScreenFileName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeLoadingScreenFileName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePauseOnLock@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangePauseOnLock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePersistingStateName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangePersistingStateName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePreferDisableSystemUXPolicy@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangePreferDisableSystemUXPolicy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePreferredLaunchViewSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiSize@2345@@Z
    void ChangePreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePreferredLaunchWindowingMode@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewWindowingMode@2345@@Z
    void ChangePreferredLaunchWindowingMode(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePreferredMaxSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiSize@2345@@Z
    void ChangePreferredMaxSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePreferredMinSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiSize@2345@@Z
    void ChangePreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePreferredScale@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void ChangePreferredScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProxiedAppId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeProxiedAppId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProxiedHwnd@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void ChangeProxiedHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProxiedProcessId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void ChangeProxiedProcessId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeRemoteConfigurationDescription@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeRemoteConfigurationDescription(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeRemoteConfigurationName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeRemoteConfigurationName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeResumeOnPowerOn@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeResumeOnPowerOn(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeShellDataRoutingInfo@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void ChangeShellDataRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeShouldSuppressCaptionControls@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeShouldSuppressCaptionControls(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeShouldWaitForFirstLayoutComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeShouldWaitForFirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeShouldWaitForLayoutComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeShouldWaitForLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeStatusBarBackgroundColor@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeStatusBarBackgroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeStatusBarBackgroundOpacity@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeStatusBarBackgroundOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeStatusBarForegroundColor@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeStatusBarForegroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSupportedOrientations@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUOrientations@Rotation@45@@Z
    void ChangeSupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTaskStateFileMappingSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void ChangeTaskStateFileMappingSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTaskType@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskType@345@@Z
    void ChangeTaskType(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitle@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeTitle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarButtonBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarButtonBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarButtonHoverBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarButtonHoverBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarButtonHoverTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarButtonHoverTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarButtonPressedBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarButtonPressedBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarButtonPressedTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarButtonPressedTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarButtonTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarButtonTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarHeight@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeTitleBarHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarInactiveBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarInactiveBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarInactiveButtonBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarInactiveButtonTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarInactiveButtonTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarInactiveTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarInactiveTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarInputRoutingHwnd@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void ChangeTitleBarInputRoutingHwnd(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarInputRoutingInfo@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@45@@Z
    void ChangeTitleBarInputRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarPreferredVisibilityMode@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUApplicationWindowTitleBarVisibility@345@@Z
    void ChangeTitleBarPreferredVisibilityMode(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarSystemOverlayLeftInset@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeTitleBarSystemOverlayLeftInset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarSystemOverlayRightInset@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeTitleBarSystemOverlayRightInset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@2345@@Z
    void ChangeTitleBarTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPersistedState@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ClearPersistedState(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequestHandled@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void CloseRequestHandled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSessionInstance@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void CloseSessionInstance(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeactivateComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableResponsiveAppViewPolicy@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DisableResponsiveAppViewPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableApplicationMultiviewActivationPolicy@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void EnableApplicationMultiviewActivationPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void HideComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideStatusBar@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void HideStatusBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@0UAnimationType@345@1@Z
    void LaunchChildTask(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@0UAnimationType@345@1AEAH@Z
    void LaunchChildTask(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@1@Z
    void LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@1AEAH@Z
    void LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAwayComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NavigateAwayComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NavigateToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NotifyLayoutCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToDisconnect@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUClientDisconnectReason@345@AEAH@Z
    void PrepareToDisconnect(WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyToNavigate@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ReadyToNavigate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivateView@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void RequestActivateView(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void RequestClose(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestHide@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUHideOptions@345@@Z
    void RequestHide(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNavigateBack@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RequestNavigateBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStatusBar@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ShowStatusBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchView@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0I_K@Z
    void SwitchView(WindissectOpaque, WindissectOpaque, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyHandled@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@_N1@Z
    void SystemKeyHandled(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConsolidate@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void TryConsolidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetTopMost@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void TrySetTopMost(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsStandaloneView@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0IIUAppWindowShowOptions@345@_K@Z
    void TryShowAsStandaloneView(WindissectOpaque, WindissectOpaque, unsigned int, unsigned int, WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryShowAsViewMode@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@IPEAVByte_1D@System@@@Z
    void TryShowAsViewMode(WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAConnectComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void UIAConnectComplete(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationLayer@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationLayer@345@XZ
    WindissectOpaque get_ApplicationLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppliedPresenter@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUAppWindowPresenterKind@345@XZ
    WindissectOpaque get_AppliedPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewBounds@2345@XZ
    WindissectOpaque get_Bounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerSecurityID@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CallerSecurityID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanHandleCloseRequest@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_CanHandleCloseRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientExtensionMap@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageMap@45@XZ
    ::Microsoft::CoreUI::IExportMessageMap * get_ClientExtensionMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Consolidated@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewConsolidatedState@345@XZ
    WindissectOpaque get_Consolidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUGuid@System@@XZ
    WindissectOpaque get_ContainerId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_CurrentOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CurrentPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Display@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewDescriptionHandle@345@XZ
    WindissectOpaque get_Display();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayRegion@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_DisplayRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAMXZ
    float get_DisplayScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstLayoutComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FirstLayoutComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameStyle@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationWindowFrameStyle@345@XZ
    WindissectOpaque get_FrameStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreen@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FullScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideInTaskSwitcher@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_HideInTaskSwitcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCloaked@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsCloaked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDisabled@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsDisabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximizable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsMaximizable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimizable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsMinimizable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMinimized@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsMinimized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMovable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsMovable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPopup@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProxied@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsProxied();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResizable@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsResizable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarInputVisualSet@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsTitleBarInputVisualSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTitleBarVisible@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsTitleBarVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopMost@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsTopMost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsViewExtendedIntoTitleBar@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsViewExtendedIntoTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32NoActivate@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsWin32NoActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32ToolWindow@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsWin32ToolWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWin32TopLevelAppWindow@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsWin32TopLevelAppWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadingScreenBackgroundColor@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_LoadingScreenBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadingScreenFileName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_LoadingScreenFileName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NoPointerActivate@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_NoPointerActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUWindowOcclusion@345@XZ
    WindissectOpaque get_Occlusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PauseOnLock@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_PauseOnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PersistingStateName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_PersistingStateName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiPlacement@2345@XZ
    WindissectOpaque get_Placement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferDisableSystemUXPolicy@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_PreferDisableSystemUXPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchViewSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiSize@2345@XZ
    WindissectOpaque get_PreferredLaunchViewSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredLaunchWindowingMode@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewWindowingMode@2345@XZ
    WindissectOpaque get_PreferredLaunchWindowingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMaxSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiSize@2345@XZ
    WindissectOpaque get_PreferredMaxSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredMinSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiSize@2345@XZ
    WindissectOpaque get_PreferredMinSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreferredScale@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_PreferredScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUDisplayRegionId@345@XZ
    WindissectOpaque get_PrimaryDisplayRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedAppId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ProxiedAppId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedHwnd@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_KXZ
    uint64_t get_ProxiedHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProxiedProcessId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_KXZ
    uint64_t get_ProxiedProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAMXZ
    float get_RasterizationScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationDescription@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_RemoteConfigurationDescription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteConfigurationName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_RemoteConfigurationName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resizing@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Resizing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResumeOnPowerOn@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_ResumeOnPowerOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionDisplayName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionInstanceName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionInstanceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellDataRoutingInfo@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_ShellDataRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldSuppressCaptionControls@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_ShouldSuppressCaptionControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForFirstLayoutComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_ShouldWaitForFirstLayoutComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutComplete@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_ShouldWaitForLayoutComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpanningRects@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_SpanningRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreenDismissed@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_SplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreenRect@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiRect@2345@XZ
    WindissectOpaque get_SplashScreenRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarBackgroundColor@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_StatusBarBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarBackgroundOpacity@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAANXZ
    double get_StatusBarBackgroundOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarForegroundColor@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_StatusBarForegroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StatusBarOccludedRect@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiRect@2345@XZ
    WindissectOpaque get_StatusBarOccludedRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedOrientations@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_SupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskInstanceId@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskInstanceId@345@XZ
    WindissectOpaque get_TaskInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskStateFileMappingName@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_TaskStateFileMappingName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskStateFileMappingSize@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_TaskStateFileMappingSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskType@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskType@345@XZ
    WindissectOpaque get_TaskType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Title();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarButtonBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonHoverBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarButtonHoverBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonHoverTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarButtonHoverTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonPressedBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarButtonPressedBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonPressedTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarButtonPressedTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarButtonTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarButtonTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarHeight@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAANXZ
    double get_TitleBarHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarInactiveBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveButtonBackgroundColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarInactiveButtonBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveButtonTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarInactiveButtonTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInactiveTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarInactiveTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInputRoutingHwnd@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUWindowInstanceId@345@XZ
    WindissectOpaque get_TitleBarInputRoutingHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarInputRoutingInfo@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_TitleBarInputRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarPreferredVisibilityMode@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationWindowTitleBarVisibility@345@XZ
    WindissectOpaque get_TitleBarPreferredVisibilityMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayLeftInset@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAANXZ
    double get_TitleBarSystemOverlayLeftInset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarSystemOverlayRightInset@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAANXZ
    double get_TitleBarSystemOverlayRightInset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarTextColorOverride@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@2345@XZ
    WindissectOpaque get_TitleBarTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUCuiRect@2345@XZ
    WindissectOpaque get_VisibleBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_Window();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowManagementEnabled@IRemoteClientTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_WindowManagementEnabled();
};
} // namespace Microsoft::CoreUI::Navigation::Server
