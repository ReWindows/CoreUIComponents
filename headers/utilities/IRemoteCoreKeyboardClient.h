#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
class IRemoteCoreKeyboardClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@IRemoteCoreKeyboardClient@@QEAAXXZ
    void Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellRequestedHide@IRemoteCoreKeyboardClient@@QEAAXXZ
    void OnShellRequestedHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellRequestedShow@IRemoteCoreKeyboardClient@@QEAAXPEAVByte_1D@System@@II@Z
    void OnShellRequestedShow(WindissectOpaque *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellRequestedXYFocusTransfer@IRemoteCoreKeyboardClient@@QEAAXMMMMI@Z
    void OnShellRequestedXYFocusTransfer(float, float, float, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellResizeCompleted@IRemoteCoreKeyboardClient@@QEAAX_N@Z
    void OnShellResizeCompleted(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellStateChanged@IRemoteCoreKeyboardClient@@QEAAXPEAVByte_1D@System@@I_N1II@Z
    void OnShellStateChanged(WindissectOpaque *, unsigned int, bool, bool, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellStateChangedForView@IRemoteCoreKeyboardClient@@QEAAXPEAVByte_1D@System@@I_N1III@Z
    void OnShellStateChangedForView(WindissectOpaque *, unsigned int, bool, bool, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellTransferredXYFocus@IRemoteCoreKeyboardClient@@QEAAXXZ
    void OnShellTransferredXYFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualReferenceId@IRemoteCoreKeyboardClient@@QEAA_KXZ
    uint64_t get_VisualReferenceId();
};
