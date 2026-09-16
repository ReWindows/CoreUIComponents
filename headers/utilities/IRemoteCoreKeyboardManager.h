#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
class IRemoteCoreKeyboardManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@IRemoteCoreKeyboardManager@@QEAAXXZ
    void Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputAppRequestedHide@IRemoteCoreKeyboardManager@@QEAAXII@Z
    void OnInputAppRequestedHide(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputAppRequestedResize@IRemoteCoreKeyboardManager@@QEAAXIMM_N0@Z
    void OnInputAppRequestedResize(unsigned int, float, float, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXYFocusTransferringFromInputApp@IRemoteCoreKeyboardManager@@QEAAXIMMMMI@Z
    void OnXYFocusTransferringFromInputApp(unsigned int, float, float, float, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCoreKeyboardClientWithViewTypes@IRemoteCoreKeyboardManager@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@II@Z
    void RegisterCoreKeyboardClientWithViewTypes(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotifyInputPaneHiding@IRemoteCoreKeyboardManager@@QEAAIXZ
    unsigned int get_NotifyInputPaneHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotifyInputPaneShowing@IRemoteCoreKeyboardManager@@QEAA?AUTextRect@@XZ
    TextRect get_NotifyInputPaneShowing();
};
