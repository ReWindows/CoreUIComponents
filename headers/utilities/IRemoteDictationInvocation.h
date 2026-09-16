#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
class IRemoteDictationInvocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@IRemoteDictationInvocation@@QEAAXXZ
    void Abort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFrameworkTypeChanged@IRemoteDictationInvocation@@QEAAXH@Z
    void OnFrameworkTypeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputLocaleChanged@IRemoteDictationInvocation@@QEAAXH@Z
    void OnInputLocaleChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyboardShowing@IRemoteDictationInvocation@@QEAAXXZ
    void OnKeyboardShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestStart@IRemoteDictationInvocation@@QEAAXUGuid@System@@@Z
    void RequestStart(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestStart@IRemoteDictationInvocation@@QEAAXXZ
    void RequestStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestStop@IRemoteDictationInvocation@@QEAAXXZ
    void RequestStop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImmersiveMode@IRemoteDictationInvocation@@QEAAX_N@Z
    void SetImmersiveMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Error@IRemoteDictationInvocation@@QEAA?AUDictationError@@XZ
    DictationError get_Error();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hint@IRemoteDictationInvocation@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Hint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@IRemoteDictationInvocation@@QEAA?AUDictationState@@XZ
    DictationState get_State();
};
