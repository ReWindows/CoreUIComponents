#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 33 member(s).
class IChromeMsgObj {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFullScreenModeChange@IChromeMsgObj@@QEAAX_N@Z
    void OnFullScreenModeChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLockScreenVisibilityChange@IChromeMsgObj@@QEAAX_N@Z
    void OnLockScreenVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationBarVisibilityChange@IChromeMsgObj@@QEAAX_NH@Z
    void OnNavigationBarVisibilityChange(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnObscurityChange@IChromeMsgObj@@QEAAX_N@Z
    void OnObscurityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverlayStateChange@IChromeMsgObj@@QEAAXUOverlayState@@@Z
    void OnOverlayStateChange(OverlayState);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestScreenShotComplete@IChromeMsgObj@@QEAAXXZ
    void OnRequestScreenShotComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchButtonPress@IChromeMsgObj@@QEAAXXZ
    void OnSearchButtonPress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowAnimationComplete@IChromeMsgObj@@QEAAXXZ
    void OnShowAnimationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipVisibilityChange@IChromeMsgObj@@QEAAX_NH@Z
    void OnSipVisibilityChange(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUIAutomationConnection@IChromeMsgObj@@QEAAXPEAVString@System@@@Z
    void OnUIAutomationConnection(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleRegionChange@IChromeMsgObj@@QEAAXUCMRect@@0@Z
    void OnVisibleRegionChange(CMRect, CMRect);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjustVisibleRegionForPersistentTopBar@IChromeMsgObj@@QEAA_NXZ
    bool get_AdjustVisibleRegionForPersistentTopBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppBar@IChromeMsgObj@@QEAAPEAVIApplicationBarMsgObj@@XZ
    IApplicationBarMsgObj * get_AppBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BottomLetterboxHeight@IChromeMsgObj@@QEAAIXZ
    unsigned int get_BottomLetterboxHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClipboardControlsTextInfo@IChromeMsgObj@@QEAA?AUClipboardControlsTextInfo@@XZ
    ClipboardControlsTextInfo get_ClipboardControlsTextInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextMenu@IChromeMsgObj@@QEAAPEAVIContextMenuMsgObj@@XZ
    IContextMenuMsgObj * get_ContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferPageSettings@IChromeMsgObj@@QEAA_NXZ
    bool get_DeferPageSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HighContrastOverride@IChromeMsgObj@@QEAA?AUHighContrastOverride@@XZ
    HighContrastOverride get_HighContrastOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMangoOrEarlierApp@IChromeMsgObj@@QEAA_NXZ
    bool get_IsMangoOrEarlierApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMaximized@IChromeMsgObj@@QEAA_NXZ
    bool get_IsMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsShowingProtectedContent@IChromeMsgObj@@QEAA_NXZ
    bool get_IsShowingProtectedContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSilverlight8_0OrEarlierApp@IChromeMsgObj@@QEAA_NXZ
    bool get_IsSilverlight8_0OrEarlierApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressIndicatorIsIndeterminate@IChromeMsgObj@@QEAA_NXZ
    bool get_ProgressIndicatorIsIndeterminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressIndicatorPosition@IChromeMsgObj@@QEAAMXZ
    float get_ProgressIndicatorPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressIndicatorText@IChromeMsgObj@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ProgressIndicatorText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressIndicatorVisible@IChromeMsgObj@@QEAA_NXZ
    bool get_ProgressIndicatorVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestedNavigationBarVisibility@IChromeMsgObj@@QEAA_NXZ
    bool get_RequestedNavigationBarVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressMediaControls@IChromeMsgObj@@QEAA_NXZ
    bool get_SuppressMediaControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SysTray@IChromeMsgObj@@QEAAPEAVISystemTrayMsgObj@@XZ
    ISystemTrayMsgObj * get_SysTray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeOverride@IChromeMsgObj@@QEAA?AUThemeOverride@@XZ
    ThemeOverride get_ThemeOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WaitCursorText@IChromeMsgObj@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_WaitCursorText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WaitCursorVisible@IChromeMsgObj@@QEAA_NXZ
    bool get_WaitCursorVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WantSearchButtonPressInfo@IChromeMsgObj@@QEAA_NXZ
    bool get_WantSearchButtonPressInfo();
};
