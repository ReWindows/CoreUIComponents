#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 36 member(s).
class IRemoteTextInputState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProcessor@IRemoteTextInputState@@QEAAXUInputProcessorAction@@I@Z
    void NotifyProcessor(InputProcessorAction, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditBufferID@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_EditBufferID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditControlLineType@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_EditControlLineType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditControlSettings@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_EditControlSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditControlVisualReferenceId@IRemoteTextInputState@@QEAA_KXZ
    uint64_t get_EditControlVisualReferenceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnabledInputProfiles@IRemoteTextInputState@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_EnabledInputProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundInputHostInfo@IRemoteTextInputState@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ForegroundInputHostInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameworkType@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_FrameworkType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameworkVersion@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_FrameworkVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HardwareKeyboardDeployed@IRemoteTextInputState@@QEAA_NXZ
    bool get_HardwareKeyboardDeployed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HardwareKeyboardExists@IRemoteTextInputState@@QEAA_NXZ
    bool get_HardwareKeyboardExists();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HardwareKeyboardFixed@IRemoteTextInputState@@QEAA_NXZ
    bool get_HardwareKeyboardFixed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HardwareKeyboardOrientation@IRemoteTextInputState@@QEAA?AUOrientations@Rotation@CoreUI@Microsoft@@XZ
    WindissectOpaque get_HardwareKeyboardOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HardwareKeyboardTextIntelligenceEnabled@IRemoteTextInputState@@QEAA_NXZ
    bool get_HardwareKeyboardTextIntelligenceEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HardwareKeyboardUIEnabled@IRemoteTextInputState@@QEAA_NXZ
    bool get_HardwareKeyboardUIEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IMEMode@IRemoteTextInputState@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_IMEMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputAppAUMID@IRemoteTextInputState@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_InputAppAUMID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputLocale@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_InputLocale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputModality@IRemoteTextInputState@@QEAA?AUInputModalityInfo@@XZ
    InputModalityInfo get_InputModality();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputPaneTryHide@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_InputPaneTryHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputPaneTryShow@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_InputPaneTryShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputScope@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_InputScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSettings@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_InputSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyProcessingFlags@IRemoteTextInputState@@QEAAGXZ
    unsigned short get_KeyProcessingFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastTapInControlAtFocus@IRemoteTextInputState@@QEAA_NXZ
    bool get_LastTapInControlAtFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifierState@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_ModifierState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateField@IRemoteTextInputState@@QEAA_NXZ
    bool get_PrivateField();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoteForegroundInputHostInfo@IRemoteTextInputState@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_RemoteForegroundInputHostInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShapewritingEnabled@IRemoteTextInputState@@QEAA_NXZ
    bool get_ShapewritingEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SoftwareKeyboardDeployed@IRemoteTextInputState@@QEAA_NXZ
    bool get_SoftwareKeyboardDeployed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SoftwareKeyboardForcedDownTime@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_SoftwareKeyboardForcedDownTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpeechProcessorActive@IRemoteTextInputState@@QEAA_NXZ
    bool get_SpeechProcessorActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextHistory@IRemoteTextInputState@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_TextHistory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransferXYFocusToSoftwareKeyboard@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_TransferXYFocusToSoftwareKeyboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibilityRequestKind@IRemoteTextInputState@@QEAAIXZ
    unsigned int get_VisibilityRequestKind();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInfoMap@IRemoteTextInputState@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_WindowInfoMap();
};
