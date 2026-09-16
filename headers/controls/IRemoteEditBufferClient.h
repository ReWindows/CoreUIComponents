#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 15 member(s).
class IRemoteEditBufferClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcknowledgeNotification@IRemoteEditBufferClient@@QEAAX_K@Z
    void AcknowledgeNotification(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginComposition@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void BeginComposition(uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishComposition@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void FinishComposition(uint64_t, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditSettings@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void GetEditSettings(uint64_t, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedEditBuffer@IRemoteEditBufferClient@@QEAAXPEAVObject@System@@@Z
    void GetFocusedEditBuffer(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScopes@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void GetInputScopes(uint64_t, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumTextLength@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void GetMaximumTextLength(uint64_t, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void GetSelection(uint64_t, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@HH@Z
    void GetText(uint64_t, WindissectOpaque *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLength@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@@Z
    void GetTextLength(uint64_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterProxy@IRemoteEditBufferClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void RegisterProxy(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextW@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@HHPEAVString@3@@Z
    void ReplaceTextW(uint64_t, WindissectOpaque *, int, int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@HH@Z
    void SetSelection(uint64_t, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@HHI@Z
    void TagText(uint64_t, WindissectOpaque *, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComposition@IRemoteEditBufferClient@@QEAAX_KPEAVObject@System@@HHPEAVByte_1D@3@PEAVString@3@@Z
    void UpdateComposition(uint64_t, WindissectOpaque *, int, int, WindissectOpaque *, WindissectOpaque *);
};
