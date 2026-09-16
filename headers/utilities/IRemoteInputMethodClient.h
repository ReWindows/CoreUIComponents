#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 36 member(s).
class IRemoteInputMethodClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonComposition@IRemoteInputMethodClient@@QEAAXII@Z
    void AbandonComposition(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInputMethod@IRemoteInputMethodClient@@QEAAXII@Z
    void ActivateInputMethod(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOnSelection@IRemoteInputMethodClient@@QEAAXIIIUEditControlRange@@@Z
    void ActivateOnSelection(unsigned int, unsigned int, unsigned int, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOnTap@IRemoteInputMethodClient@@QEAAXIIIH_N@Z
    void ActivateOnTap(unsigned int, unsigned int, unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBufferForImmUndo@IRemoteInputMethodClient@@QEAAXI@Z
    void ClearBufferForImmUndo(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBufferForRemoteReplay@IRemoteInputMethodClient@@QEAAXXZ
    void ClearBufferForRemoteReplay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputMethodByDeviceType@IRemoteInputMethodClient@@QEAAXIUInputDeviceTypeEx@@I@Z
    void CreateInputMethodByDeviceType(unsigned int, InputDeviceTypeEx, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputMethodByName@IRemoteInputMethodClient@@QEAAXIPEAVString@System@@I@Z
    void CreateInputMethodByName(unsigned int, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateInputMethod@IRemoteInputMethodClient@@QEAAXII@Z
    void DeactivateInputMethod(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyInputMethod@IRemoteInputMethodClient@@QEAAXI@Z
    void DestroyInputMethod(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineComposition@IRemoteInputMethodClient@@QEAAXIIPEAVString@System@@PEAVByte_1D@3@I@Z
    void DetermineComposition(unsigned int, unsigned int, WindissectOpaque *, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineCompositionAsIs@IRemoteInputMethodClient@@QEAAXII@Z
    void DetermineCompositionAsIs(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEditBufferWin32@IRemoteInputMethodClient@@QEAAXI_N@Z
    void NotifyEditBufferWin32(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEnabledInputLanguages@IRemoteInputMethodClient@@QEAAXIULocaleList@@@Z
    void NotifyEnabledInputLanguages(unsigned int, LocaleList);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHardwareKeyboardDeployChange@IRemoteInputMethodClient@@QEAAX_N@Z
    void NotifyHardwareKeyboardDeployChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyKeyboardLayout@IRemoteInputMethodClient@@QEAAXIPEAVByte_1D@System@@@Z
    void NotifyKeyboardLayout(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutChange@IRemoteInputMethodClient@@QEAAXIPEAVString@System@@@Z
    void NotifyLayoutChange(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShapeWritingTouchPoints@IRemoteInputMethodClient@@QEAAXIIFFFII@Z
    void NotifyShapeWritingTouchPoints(unsigned int, unsigned int, short, short, short, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuggestionMode@IRemoteInputMethodClient@@QEAAXII@Z
    void NotifySuggestionMode(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTap@IRemoteInputMethodClient@@QEAAXII@Z
    void NotifyTap(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActionFinished@IRemoteInputMethodClient@@QEAAXI@Z
    void OnActionFinished(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientBufferLengthChanged@IRemoteInputMethodClient@@QEAAXIH@Z
    void OnEditClientBufferLengthChanged(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientCompositionTerminated@IRemoteInputMethodClient@@QEAAXII@Z
    void OnEditClientCompositionTerminated(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientConversionModeChanged@IRemoteInputMethodClient@@QEAAXIIUGuid@System@@UIMEConversionMode@@@Z
    void OnEditClientConversionModeChanged(unsigned int, unsigned int, WindissectOpaque, IMEConversionMode);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientDocFeedReady@IRemoteInputMethodClient@@QEAAXIPEAVString@System@@0@Z
    void OnEditClientDocFeedReady(unsigned int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientReconvertRequest@IRemoteInputMethodClient@@QEAAXI_N0@Z
    void OnEditClientReconvertRequest(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditClientUnpopulate@IRemoteInputMethodClient@@QEAAXIUEditControlRange@@@Z
    void OnEditClientUnpopulate(unsigned int, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIntelligenceEngineActivated@IRemoteInputMethodClient@@QEAAXI@Z
    void OnIntelligenceEngineActivated(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextW@IRemoteInputMethodClient@@QEAAXIIUEditControlRange@@PEAVString@System@@0I@Z
    void ReplaceTextW(unsigned int, unsigned int, EditControlRange, WindissectOpaque *, EditControlRange, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInComposition@IRemoteInputMethodClient@@QEAAXII_NH@Z
    void SetInComposition(unsigned int, unsigned int, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputMethod@IRemoteInputMethodClient@@QEAAXII@Z
    void SetInputMethod(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@IRemoteInputMethodClient@@QEAAXIIUEditControlRange@@@Z
    void SetSelection(unsigned int, unsigned int, EditControlRange);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@IRemoteInputMethodClient@@QEAAXII@Z
    void StartComposition(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@IRemoteInputMethodClient@@QEAAXIIUEditControlRange@@I@Z
    void TagText(unsigned int, unsigned int, EditControlRange, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoReplaceText@IRemoteInputMethodClient@@QEAAXIIUEditControlRange@@PEAVByte_1D@System@@0I@Z
    void UndoReplaceText(unsigned int, unsigned int, EditControlRange, WindissectOpaque *, EditControlRange, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComposition@IRemoteInputMethodClient@@QEAAXIIPEAVByte_1D@System@@HPEAVString@3@I@Z
    void UpdateComposition(unsigned int, unsigned int, WindissectOpaque *, int, WindissectOpaque *, unsigned int);
};
