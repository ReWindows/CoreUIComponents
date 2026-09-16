#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 29 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseRemoteView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeContainerId@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void ChangeContainerId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeHideInTaskSwitcher@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeHideInTaskSwitcher(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsDisabled@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsDisabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMaximizable@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsMaximizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMinimizable@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsMinimizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsMovable@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsMovable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsPopup@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsPopup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsProxied@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsProxied(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsResizable@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsResizable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsTitleBarInputVisualSet@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsTitleBarInputVisualSet(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsTitleBarVisible@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsTitleBarVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsWin32NoActivate@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsWin32NoActivate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsWin32ToolWindow@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsWin32ToolWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsWin32TopLevelAppWindow@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeIsWin32TopLevelAppWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProxiedAppId@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeProxiedAppId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProxiedHwnd@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void ChangeProxiedHwnd(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProxiedProcessId@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void ChangeProxiedProcessId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeRemoteConfigurationDescription@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeRemoteConfigurationDescription(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeRemoteConfigurationName@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeRemoteConfigurationName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeResizing@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeResizing(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeShouldSuppressCaptionControls@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeShouldSuppressCaptionControls(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSplashScreenDismissed@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeSplashScreenDismissed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarHeight@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeTitleBarHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarSystemOverlayLeftInset@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeTitleBarSystemOverlayLeftInset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTitleBarSystemOverlayRightInset@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXN@Z
    void ChangeTitleBarSystemOverlayRightInset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidView@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsValidView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowManagerConnectionComplete@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void WindowManagerConnectionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BaseRemoteView@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVServerTask@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
