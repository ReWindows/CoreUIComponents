#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 13 member(s).
class IRemoteEditBufferServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginComposition@IRemoteEditBufferServer@@QEAAX_KUMessageObjectID@CoreUI@Microsoft@@G@Z
    void BeginComposition(uint64_t, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishComposition@IRemoteEditBufferServer@@QEAAX_KUMessageObjectID@CoreUI@Microsoft@@G@Z
    void FinishComposition(uint64_t, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditSettings@IRemoteEditBufferServer@@QEAAX_KUMessageObjectID@CoreUI@Microsoft@@G@Z
    void GetEditSettings(uint64_t, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScopes@IRemoteEditBufferServer@@QEAAX_KUMessageObjectID@CoreUI@Microsoft@@G@Z
    void GetInputScopes(uint64_t, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumTextLength@IRemoteEditBufferServer@@QEAAX_KUMessageObjectID@CoreUI@Microsoft@@@Z
    void GetMaximumTextLength(uint64_t, ::Microsoft::CoreUI::MessageObjectID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@IRemoteEditBufferServer@@QEAAX_KHHUMessageObjectID@CoreUI@Microsoft@@G@Z
    void GetText(uint64_t, int, int, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLength@IRemoteEditBufferServer@@QEAAX_KUMessageObjectID@CoreUI@Microsoft@@@Z
    void GetTextLength(uint64_t, ::Microsoft::CoreUI::MessageObjectID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextTag@IRemoteEditBufferServer@@QEAAX_KHHUMessageObjectID@CoreUI@Microsoft@@G@Z
    void GetTextTag(uint64_t, int, int, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterClient@IRemoteEditBufferServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void RegisterClient(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextW@IRemoteEditBufferServer@@QEAAX_KHHPEAVString@System@@UMessageObjectID@CoreUI@Microsoft@@G@Z
    void ReplaceTextW(uint64_t, int, int, WindissectOpaque *, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@IRemoteEditBufferServer@@QEAAX_KHHUMessageObjectID@CoreUI@Microsoft@@G@Z
    void SetSelection(uint64_t, int, int, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@IRemoteEditBufferServer@@QEAAX_KHHIUMessageObjectID@CoreUI@Microsoft@@G@Z
    void TagText(uint64_t, int, int, unsigned int, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComposition@IRemoteEditBufferServer@@QEAAX_KHHPEAVByte_1D@System@@PEAVString@3@UMessageObjectID@CoreUI@Microsoft@@G@Z
    void UpdateComposition(uint64_t, int, int, WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessageObjectID, unsigned short);
};
