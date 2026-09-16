#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
class Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object@@QEAAXH@Z
    void Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object@@QEAA_NUConnectionID@MessagingInterop@CoreUI@Microsoft@@PEAVObject@System@@_N@Z
    bool Insert(::Microsoft::CoreUI::MessagingInterop::ConnectionID, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object@@QEAA_NUConnectionID@MessagingInterop@CoreUI@Microsoft@@@Z
    bool Remove(::Microsoft::CoreUI::MessagingInterop::ConnectionID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object@@QEAAXXZ
    void Resize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValue@Map__Microsoft_CoreUI_MessagingInterop_ConnectionID__object@@QEAA_NUConnectionID@MessagingInterop@CoreUI@Microsoft@@V?$ParamRef@VObject@System@@@Cn@@@Z
    bool TryGetValue(::Microsoft::CoreUI::MessagingInterop::ConnectionID, WindissectOpaque);
};
