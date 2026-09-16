#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 14 member(s).
class IRemoteTextInputClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@IRemoteTextInputClient@@QEAAXI@Z
    void ForceRemoveFocus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputLanguage@IRemoteTextInputClient@@QEAAXI@Z
    void InitializeInputLanguage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputProfile@IRemoteTextInputClient@@QEAAXUCoreInputProfile@@@Z
    void InitializeInputProfile(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChar@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIH_WI@Z
    void InsertChar(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, int, wchar_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertText@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIHPEAVString@System@@@Z
    void InsertText(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyEvent@IRemoteTextInputClient@@QEAAXII_NUKeyEventHostInfo@@@Z
    void OnKeyEvent(unsigned int, unsigned int, bool, KeyEventHostInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextEx@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIHHPEAVString@System@@HH@Z
    void ReplaceTextEx(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, int, int, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIPEAVString@System@@HHH1@Z
    void ReportError(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, WindissectOpaque *, int, int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@IRemoteTextInputClient@@QEAAXUCoreInputProfile@@@Z
    void RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCandidateList@IRemoteTextInputClient@@QEAAXIHHPEAVByte_1D@System@@@Z
    void SendCandidateList(unsigned int, int, int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIHHUCaretBindDirection@@UGripperVisibility@@@Z
    void SetSelection(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, int, int, CaretBindDirection, GripperVisibility);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmartLink@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIHHPEAVString@System@@111URichContentType@@@Z
    void SetSmartLink(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, int, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, RichContentType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TagText@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIHHI@Z
    void TagText(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledKey@IRemoteTextInputClient@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIIPEAVString@System@@I@Z
    void UnhandledKey(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, unsigned int, WindissectOpaque *, unsigned int);
};
