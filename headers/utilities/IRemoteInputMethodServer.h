#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 14 member(s).
class IRemoteInputMethodServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineComposition@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIPEAVString@System@@PEAVByte_1D@6@I@Z
    void DetermineComposition(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, WindissectOpaque *, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRunsName@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIPEAVString@System@@@Z
    void InitializeRunsName(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogUserTextToTipc@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@I@Z
    void LogUserTextToTipc(::Microsoft::CoreUI::MessageObjectID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidatingOperationCompleted@IRemoteInputMethodServer@@QEAAXXZ
    void NotifyInvalidatingOperationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActionFinished@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@I@Z
    void OnActionFinished(::Microsoft::CoreUI::MessageObjectID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpeechProcessorActiveChanged@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@_N@Z
    void OnSpeechProcessorActiveChanged(::Microsoft::CoreUI::MessageObjectID, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceWithSmartLink@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIUEditControlRange@@PEAVString@System@@222URichContentType@@@Z
    void ReplaceWithSmartLink(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, EditControlRange, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, RichContentType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IHHPEAVByte_1D@System@@@Z
    void SendCandidateList(::Microsoft::CoreUI::MessageObjectID, unsigned int, int, int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMethod@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@II@Z
    void SetInputMethod(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRunData@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIHPEAVByte_1D@System@@@Z
    void SetRunData(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIUEditControlRange@@I@Z
    void TagText(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, EditControlRange, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIPEAVString@System@@I@Z
    void UnhandledKey(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputMethodClient@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@@Z
    void UnregisterInputMethodClient(::Microsoft::CoreUI::MessageObjectID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComposition@IRemoteInputMethodServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIPEAVByte_1D@System@@HPEAVString@6@I@Z
    void UpdateComposition(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, WindissectOpaque *, int, WindissectOpaque *, unsigned int);
};
