#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 156 member(s).
namespace Microsoft::CoreUI::Navigation {
class Task {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClientExtensionMapByUInt32@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@I@Z
    void ChangeClientExtensionMapByUInt32(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferLaunchCompletedCallback@Task@Navigation@CoreUI@Microsoft@@QEAAXH_N@Z
    void DeferLaunchCompletedCallback(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void HideComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@Task@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@UIntPtr@6@I_NUAnimationType@234@3@Z
    int LaunchChildTask(WindissectOpaque *, WindissectOpaque, unsigned int, bool, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchCompletedCallbackWorker@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@0@Z
    void LaunchCompletedCallbackWorker(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@Task@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@UIntPtr@6@I0_NUAnimationType@234@3@Z
    int LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *, bool, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUri@Task@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@00_N1UAnimationType@234@2@Z
    int LaunchUri(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool, bool, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__ICallbackMessageProxyListener__OnDisconnected@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportMessageProxy@34@@Z
    void Microsoft__CoreUI__ICallbackMessageProxyListener__OnDisconnected(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__ICallbackMessageProxyListener__OnPropertyChanged@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportMessageProxy@34@G@Z
    void Microsoft__CoreUI__ICallbackMessageProxyListener__OnPropertyChanged(::Microsoft::CoreUI::IExportMessageProxy *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ActivateComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__ActivateComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByBool@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByBool(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByInt32@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByInt32(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByString@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@0@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByString(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByUInt32@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@I@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ChangeClientExtensionMapByUInt32(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ChangeTaskStateFileMappingSize@Task@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ChangeTaskStateFileMappingSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ClearPersistedState@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ClearPersistedState(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__CloseSessionInstance@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__CloseSessionInstance(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__DeactivateComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__DeactivateComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__DisableResponsiveAppViewPolicy@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__DisableResponsiveAppViewPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__EnableApplicationMultiviewActivationPolicy@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__EnableApplicationMultiviewActivationPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__HideComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__HideComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__HideStatusBar@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__HideStatusBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchChildTask@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@IAEAH@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchChildTask(WindissectOpaque *, WindissectOpaque, unsigned int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchChildTask@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@IUAnimationType@234@2@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchChildTask(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchChildTask@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@IUAnimationType@234@2AEAH@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchChildTask(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchSession@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@I0@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchSession@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@I0AEAH@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchSession@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@I0UAnimationType@234@2@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__LaunchSession@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UIntPtr@6@I0UAnimationType@234@2AEAH@Z
    void Microsoft__CoreUI__Navigation__IExportTask__LaunchSession(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__NavigateAwayComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__NavigateAwayComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__NavigateToComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__NavigateToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__NotifyLayoutCompleted@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__NotifyLayoutCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__PrepareToDisconnect@Task@Navigation@CoreUI@Microsoft@@QEAAXUClientDisconnectReason@234@AEAH@Z
    void Microsoft__CoreUI__Navigation__IExportTask__PrepareToDisconnect(WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ReadyToNavigate@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__ReadyToNavigate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__RequestActivateView@Task@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void Microsoft__CoreUI__Navigation__IExportTask__RequestActivateView(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__RequestClose@Task@Navigation@CoreUI@Microsoft@@QEAAXUIntPtr@System@@I@Z
    void Microsoft__CoreUI__Navigation__IExportTask__RequestClose(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__RequestHide@Task@Navigation@CoreUI@Microsoft@@QEAAXUHideOptions@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__RequestHide(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__RequestNavigateBack@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__RequestNavigateBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ShowComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__ShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ShowStandardSystemOverlays@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__ShowStandardSystemOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__ShowStatusBar@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__ShowStatusBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__SwitchView@Task@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@234@0I_K@Z
    void Microsoft__CoreUI__Navigation__IExportTask__SwitchView(WindissectOpaque, WindissectOpaque, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__SystemKeyHandled@Task@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@234@_N1@Z
    void Microsoft__CoreUI__Navigation__IExportTask__SystemKeyHandled(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__TryConsolidate@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportTask__TryConsolidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__TrySetTopMost@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__TrySetTopMost(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__TryShowAsStandaloneView@Task@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@234@0IIUAppWindowShowOptions@234@_K@Z
    void Microsoft__CoreUI__Navigation__IExportTask__TryShowAsStandaloneView(WindissectOpaque, WindissectOpaque, unsigned int, unsigned int, WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__TryShowAsViewMode@Task@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@234@IPEAVByte_1D@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__TryShowAsViewMode(WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_ClientExtensionMap@Task@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageMap@34@XZ
    ::Microsoft::CoreUI::IExportMessageMap * Microsoft__CoreUI__Navigation__IExportTask__get_ClientExtensionMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_ContainerId@Task@Navigation@CoreUI@Microsoft@@QEAA?AUGuid@System@@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_ContainerId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_DisplayScale@Task@Navigation@CoreUI@Microsoft@@QEAAMXZ
    float Microsoft__CoreUI__Navigation__IExportTask__get_DisplayScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_FrameStyle@Task@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationWindowFrameStyle@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_FrameStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_IsCloaked@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_IsCloaked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_IsTitleBarInputVisualSet@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_IsTitleBarInputVisualSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_IsTitleBarVisible@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_IsTitleBarVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_IsViewExtendedIntoTitleBar@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_IsViewExtendedIntoTitleBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_LockscreenVisible@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_LockscreenVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_NoPointerActivate@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_NoPointerActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_Occlusion@Task@Navigation@CoreUI@Microsoft@@QEAA?AUWindowOcclusion@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_Occlusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_PreferredMinSize@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiSize@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_PreferredMinSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_RasterizationScale@Task@Navigation@CoreUI@Microsoft@@QEAAMXZ
    float Microsoft__CoreUI__Navigation__IExportTask__get_RasterizationScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_SessionDisplayName@Task@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__IExportTask__get_SessionDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_SessionInstanceName@Task@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__IExportTask__get_SessionInstanceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_SpanningRects@Task@Navigation@CoreUI@Microsoft@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__IExportTask__get_SpanningRects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_SplashScreenDismissed@Task@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool Microsoft__CoreUI__Navigation__IExportTask__get_SplashScreenDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarBackgroundColor@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarBackgroundOpacity@Task@Navigation@CoreUI@Microsoft@@QEAANXZ
    double Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarBackgroundOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarForegroundColor@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarForegroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarOccludedRect@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiRect@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_StatusBarOccludedRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_SupportedOrientations@Task@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@34@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_SupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TaskInstanceId@Task@Navigation@CoreUI@Microsoft@@QEAA?AUTaskInstanceId@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TaskInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TaskStateFileMappingName@Task@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__IExportTask__get_TaskStateFileMappingName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TaskStateFileMappingSize@Task@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int Microsoft__CoreUI__Navigation__IExportTask__get_TaskStateFileMappingSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TaskType@Task@Navigation@CoreUI@Microsoft@@QEAA?AUTaskType@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TaskType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonHoverBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonHoverBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonHoverTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonHoverTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonPressedBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonPressedBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonPressedTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonPressedTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarButtonTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarHeight@Task@Navigation@CoreUI@Microsoft@@QEAANXZ
    double Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveButtonBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveButtonBackgroundColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveButtonTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveButtonTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarInactiveTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarPreferredVisibilityMode@Task@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationWindowTitleBarVisibility@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarPreferredVisibilityMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarSystemOverlayLeftInset@Task@Navigation@CoreUI@Microsoft@@QEAANXZ
    double Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarSystemOverlayLeftInset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarSystemOverlayRightInset@Task@Navigation@CoreUI@Microsoft@@QEAANXZ
    double Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarSystemOverlayRightInset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAA?AUCuiNullableColor@Server@234@XZ
    WindissectOpaque Microsoft__CoreUI__Navigation__IExportTask__get_TitleBarTextColorOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ContainerId@Task@Navigation@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ContainerId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_DisplayName@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_DisplayName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_FirstLayoutComplete@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_FirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_FrameStyle@Task@Navigation@CoreUI@Microsoft@@QEAAXUApplicationWindowFrameStyle@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_FrameStyle(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_IsTitleBarInputVisualSet@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_IsTitleBarInputVisualSet(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_IsViewExtendedIntoTitleBar@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_IsViewExtendedIntoTitleBar(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_LoadingScreenFileName@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_LoadingScreenFileName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PauseOnLock@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PauseOnLock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PersistingStateName@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PersistingStateName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PreferDisableSystemUXPolicy@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PreferDisableSystemUXPolicy(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PreferredLaunchViewSize@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiSize@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PreferredLaunchViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PreferredLaunchWindowingMode@Task@Navigation@CoreUI@Microsoft@@QEAAXUViewWindowingMode@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PreferredLaunchWindowingMode(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PreferredMinSize@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiSize@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PreferredMinSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_PreferredScale@Task@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_PreferredScale(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ProxiedAppId@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ProxiedAppId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ProxiedHwnd@Task@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ProxiedHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ProxiedProcessId@Task@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ProxiedProcessId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_RemoteConfigurationDescription@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_RemoteConfigurationDescription(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_RemoteConfigurationName@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_RemoteConfigurationName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ResumeOnPowerOn@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ResumeOnPowerOn(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ShellDataRoutingInfo@Task@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@34@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ShellDataRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ShouldWaitForFirstLayoutComplete@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ShouldWaitForFirstLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_ShouldWaitForLayoutComplete@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_ShouldWaitForLayoutComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_StatusBarBackgroundColor@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_StatusBarBackgroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_StatusBarBackgroundOpacity@Task@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_StatusBarBackgroundOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_StatusBarForegroundColor@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_StatusBarForegroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_SupportedOrientations@Task@Navigation@CoreUI@Microsoft@@QEAAXUOrientations@Rotation@34@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_SupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TaskType@Task@Navigation@CoreUI@Microsoft@@QEAAXUTaskType@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TaskType(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_Title@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_Title(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonHoverBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonHoverBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonHoverTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonHoverTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonPressedTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonPressedTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarButtonTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveButtonBackgroundColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveButtonBackgroundColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveButtonTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveButtonTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarInactiveTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarPreferredVisibilityMode@Task@Navigation@CoreUI@Microsoft@@QEAAXUApplicationWindowTitleBarVisibility@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarPreferredVisibilityMode(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarTextColorOverride@Task@Navigation@CoreUI@Microsoft@@QEAAXUCuiNullableColor@Server@234@@Z
    void Microsoft__CoreUI__Navigation__IExportTask__set_TitleBarTextColorOverride(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteTask__Close@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Server__IRemoteTask__Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteTask__ConnectionComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVIRemoteClientTask@Server@234@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteTask__ConnectionComplete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteTask__Hide@Task@Navigation@CoreUI@Microsoft@@QEAAXUDirection@234@UAnimationType@234@UAnimationFlags@234@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteTask__Hide(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteTask__NavigateAway@Task@Navigation@CoreUI@Microsoft@@QEAAXUDirection@234@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteTask__NavigateAway(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteTask__ProcessActivationData@Task@Navigation@CoreUI@Microsoft@@QEAAXUActivationReason@234@PEAVString@System@@1@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteTask__ProcessActivationData(WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAwayComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NavigateAwayComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void NavigateToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Task@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyToNavigate@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ReadyToNavigate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseProxies@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ReleaseProxies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@Task@Navigation@CoreUI@Microsoft@@QEAAXUIntPtr@System@@I@Z
    void RequestClose(WindissectOpaque, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellDataRoutingInfo@Task@Navigation@CoreUI@Microsoft@@QEAAXURoutingInfo@MessagingInterop@34@@Z
    void SetShellDataRoutingInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIAConnectComplete@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void UIAConnectComplete(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyProxyConnected@Task@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void VerifyProxyConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@34@PEAVICallbackTaskOwner@234@PEAVString@6@UTaskInstanceId@234@UWindowInstanceId@234@URoutingInfo@834@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationLayer@Task@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationLayer@234@XZ
    WindissectOpaque get_ApplicationLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskInstanceId@Task@Navigation@CoreUI@Microsoft@@QEAA?AUTaskInstanceId@234@XZ
    WindissectOpaque get_TaskInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentPageName@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_CurrentPageName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DisplayName@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_DisplayName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_FullScreen@Task@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_FullScreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_LoadingScreenBackgroundColor@Task@Navigation@CoreUI@Microsoft@@QEAAXI@Z
    void set_LoadingScreenBackgroundColor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_SupportedOrientations@Task@Navigation@CoreUI@Microsoft@@QEAAXUOrientations@Rotation@34@@Z
    void set_SupportedOrientations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Title@Task@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_Title(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation
