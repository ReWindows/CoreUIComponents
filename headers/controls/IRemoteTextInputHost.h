#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
class IRemoteTextInputHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKeyEventPayload@IRemoteTextInputHost@@QEAAXIIUKeyEventHostInfo@@@Z
    void BeginKeyEventPayload(unsigned int, unsigned int, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@IRemoteTextInputHost@@QEAAX_N@Z
    void EnableWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndKeyEventPayload@IRemoteTextInputHost@@QEAAXII_NUKeyEventHostInfo@@@Z
    void EndKeyEventPayload(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAcceleratorKeyEvent@IRemoteTextInputHost@@QEAAXIIUAcceleratorKeyRoutingStage@@UKeyEventHostInfo@@PEAVByte_1D@System@@PEAVString@5@_W3@Z
    void OnAcceleratorKeyEvent(unsigned int, unsigned int, AcceleratorKeyRoutingStage, KeyEventHostInfo, WindissectOpaque *, WindissectOpaque *, wchar_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationStateChange@IRemoteTextInputHost@@QEAAXUViewActivationState@@I@Z
    void OnActivationStateChange(ViewActivationState, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterEvent@IRemoteTextInputHost@@QEAAXIIIUKeyEventHostInfo@@@Z
    void OnCharacterEvent(unsigned int, unsigned int, unsigned int, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDepartFocusComplete@IRemoteTextInputHost@@QEAAXUNavigateFocusCompleteInfo@@@Z
    void OnDepartFocusComplete(NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusNavigating@IRemoteTextInputHost@@QEAAXUNavigateFocusInfo@@@Z
    void OnFocusNavigating(NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@IRemoteTextInputHost@@QEAAXIII_NUKeyEventHostInfo@@PEAVByte_1D@System@@PEAVString@4@_W3@Z
    void OnKeyEvent(unsigned int, unsigned int, unsigned int, bool, KeyEventHostInfo, WindissectOpaque *, WindissectOpaque *, wchar_t, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNonCUIConfigurationChange@IRemoteTextInputHost@@QEAAXUNonCUIConfiguration@@@Z
    void OnNonCUIConfigurationChange(NonCUIConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@IRemoteTextInputHost@@QEAAXUTextInputAcknowledgment@@@Z
    void OperationCompleted(TextInputAcknowledgment);
};
