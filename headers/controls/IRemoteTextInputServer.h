#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 37 member(s).
class IRemoteTextInputServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipboardAccessCheck@IRemoteTextInputServer@@QEAAXUClipboardCallerInfo@@AEAUClipboardAccessResult@@@Z
    void ClipboardAccessCheck(ClipboardCallerInfo, ClipboardAccessResult &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentUIRights@IRemoteTextInputServer@@QEAAXI_NUComponentUIRights@@@Z
    void ConfigureComponentUIRights(unsigned int, bool, ComponentUIRights);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlKeyEventCompleted@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@II@Z
    void EditControlKeyEventCompleted(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlOperationFailed@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IIH@Z
    void EditControlOperationFailed(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlReconvertRequest@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@I_N1@Z
    void EditControlReconvertRequest(::Microsoft::CoreUI::MessageObjectID, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlStartNavigateFocus@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@UEditControlInfo@@UViewInstanceId@Navigation@34@_N@Z
    void EditControlStartNavigateFocus(::Microsoft::CoreUI::MessageObjectID, EditControlInfo, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlTapped@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IH_N@Z
    void EditControlTapped(::Microsoft::CoreUI::MessageObjectID, unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUnpopulate@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@III@Z
    void EditControlUnpopulate(::Microsoft::CoreUI::MessageObjectID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EditControlUsesHost@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@I_N@Z
    void EditControlUsesHost(::Microsoft::CoreUI::MessageObjectID, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInput@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_N@Z
    void EnableInput(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostAcceleratorKeyCompleted@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@I_N1@Z
    void InputHostAcceleratorKeyCompleted(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostDepartFocus@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UNavigateFocusInfo@@@Z
    void InputHostDepartFocus(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostNavigateFocusComplete@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UNavigateFocusCompleteInfo@@@Z
    void InputHostNavigateFocusComplete(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostOnWindowEnabled@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_N@Z
    void InputHostOnWindowEnabled(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSetProcessIDDelegation@IRemoteTextInputServer@@QEAAXIURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UDelegateInputMode@@@Z
    void InputHostSetProcessIDDelegation(unsigned int, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, DelegateInputMode);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSetViewIDDelegation@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@IIUDelegateInputMode@@@Z
    void InputHostSetViewIDDelegation(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, DelegateInputMode);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteDelegateInput@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@II_N@Z
    void InputHostSiteDelegateInput(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteDepartFocusComplete@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UNavigateFocusCompleteInfo@@@Z
    void InputHostSiteDepartFocusComplete(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, NavigateFocusCompleteInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteEnableWindow@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_N@Z
    void InputHostSiteEnableWindow(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostSiteNavigateFocus@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UNavigateFocusInfo@@@Z
    void InputHostSiteNavigateFocus(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, NavigateFocusInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostStartNavigateFocus@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UViewInstanceId@Navigation@45@_N@Z
    void InputHostStartNavigateFocus(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostUpdateDelegatedTextInputHost@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@0@Z
    void InputHostUpdateDelegatedTextInputHost(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRemoteForegroundTextInputHost@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UGuid@System@@UViewInstanceId@Navigation@45@UWindowInstanceId@945@UTextInputHostSettings@@@Z
    void NotifyRemoteForegroundTextInputHost(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque, WindissectOpaque, WindissectOpaque, TextInputHostSettings);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActionFinished@IRemoteTextInputServer@@QEAAXURemoteActionType@@I@Z
    void OnActionFinished(RemoteActionType, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocFeedReady@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@IPEAVString@System@@1@Z
    void OnDocFeedReady(::Microsoft::CoreUI::MessageObjectID, unsigned int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHotKeyRegistrationChanged@IRemoteTextInputServer@@QEAAXUHotKeyRegistrationData@@_N@Z
    void OnHotKeyRegistrationChanged(HotKeyRegistrationData, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterRemoteTextConnectionThread@IRemoteTextInputServer@@QEAAXUGuid@System@@I@Z
    void RegisterRemoteTextConnectionThread(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTextInputHostSite@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@UViewInstanceId@Navigation@45@UTextInputHostSiteSettings@@@Z
    void RegisterTextInputHostSite(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, WindissectOpaque, TextInputHostSiteSettings);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestSoftwareKeyboardVisibilityChange@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_NI@Z
    void RequestSoftwareKeyboardVisibilityChange(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKeepSoftwareKeyboardVisibleOnEditControlFocusLoss@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_N@Z
    void SetKeepSoftwareKeyboardVisibleOnEditControlFocusLoss(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteIntegrationStatus@IRemoteTextInputServer@@QEAAXUGuid@System@@_N@Z
    void SetRemoteIntegrationStatus(WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteTihInfo@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@0@Z
    void SetRemoteTihInfo(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextVirtualizationParameters@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@_KUGuid@System@@@Z
    void SetTextVirtualizationParameters(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, uint64_t, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationVersion@IRemoteTextInputServer@@QEAAXUGuid@System@@II@Z
    void SetVirtualizationVersion(WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterRemoteTextConnectionThread@IRemoteTextInputServer@@QEAAXUGuid@System@@I@Z
    void UnregisterRemoteTextConnectionThread(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTextInputClient@IRemoteTextInputServer@@QEAAXUMessageObjectID@CoreUI@Microsoft@@@Z
    void UnregisterTextInputClient(::Microsoft::CoreUI::MessageObjectID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTextInputHostSite@IRemoteTextInputServer@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void UnregisterTextInputHostSite(::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
};
