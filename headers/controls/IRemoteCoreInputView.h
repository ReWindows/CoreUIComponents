#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
class IRemoteCoreInputView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySupportedView@IRemoteCoreInputView@@QEAAXI_N0@Z
    void NotifySupportedView(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryViewAnimationStarting@IRemoteCoreInputView@@QEAAXPEAVByte_1D@System@@_K@Z
    void OnPrimaryViewAnimationStarting(WindissectOpaque *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryViewHiding@IRemoteCoreInputView@@QEAAXI_N@Z
    void OnPrimaryViewHiding(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryViewShowing@IRemoteCoreInputView@@QEAAXI_N@Z
    void OnPrimaryViewShowing(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXYFocusTransferredToPrimaryView@IRemoteCoreInputView@@QEAAXXZ
    void OnXYFocusTransferredToPrimaryView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnXYFocusTransferringToActiveView@IRemoteCoreInputView@@QEAAXMMMMI@Z
    void OnXYFocusTransferringToActiveView(float, float, float, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualReferenceId@IRemoteCoreInputView@@QEAA_KXZ
    uint64_t get_VisualReferenceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@IRemoteCoreInputView@@QEAA_KXZ
    uint64_t get_WindowId();
};
