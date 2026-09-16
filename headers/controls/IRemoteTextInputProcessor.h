#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 23 member(s).
class IRemoteTextInputProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputProfiles@IRemoteTextInputProcessor@@QEAAXPEAVString@System@@I@Z
    void EnableInputProfiles(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@IRemoteTextInputProcessor@@QEAAXXZ
    void ForceRemoveFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyKeyboardLayout@IRemoteTextInputProcessor@@QEAAXPEAVByte_1D@System@@@Z
    void NotifyKeyboardLayout(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRemoteKeyEventHint@IRemoteTextInputProcessor@@QEAAXUGuid@System@@GGGIPEAVByte_1D@3@@Z
    void NotifyRemoteKeyEventHint(WindissectOpaque, unsigned short, unsigned short, unsigned short, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuggestionMode@IRemoteTextInputProcessor@@QEAAXI@Z
    void NotifySuggestionMode(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChange@IRemoteTextInputProcessor@@QEAAXPEAVString@System@@@Z
    void OnLayoutChange(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOasisWnf@IRemoteTextInputProcessor@@QEAAXUOasisDisplayMode@@@Z
    void OnOasisWnf(OasisDisplayMode);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSipVisibilityChange@IRemoteTextInputProcessor@@QEAAX_N@Z
    void OnSipVisibilityChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSoftKBForceDown@IRemoteTextInputProcessor@@QEAAXXZ
    void OnSoftKBForceDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStringKey3@IRemoteTextInputProcessor@@QEAAXIGIGPEAVString@System@@FFIPEAVByte_1D@3@I_K@Z
    void OnStringKey3(unsigned int, unsigned short, unsigned int, unsigned short, WindissectOpaque *, short, short, unsigned int, WindissectOpaque *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCandidateUI@IRemoteTextInputProcessor@@QEAAXPEAVString@System@@URoutingInfo@MessagingInterop@CoreUI@Microsoft@@@Z
    void RegisterCandidateUI(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAllText@IRemoteTextInputProcessor@@QEAAXPEAVString@System@@@Z
    void ReplaceAllText(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportOnSIPShown@IRemoteTextInputProcessor@@QEAAXUSIPInvokeTrigger@@_N11@Z
    void ReportOnSIPShown(SIPInvokeTrigger, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivateByDeviceType@IRemoteTextInputProcessor@@QEAAXUInputDeviceTypeEx@@@Z
    void RequestActivateByDeviceType(InputDeviceTypeEx);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivateByName@IRemoteTextInputProcessor@@QEAAXPEAVString@System@@@Z
    void RequestActivateByName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestIMEConversionModeChange@IRemoteTextInputProcessor@@QEAAXUIMEConversionMode@@@Z
    void RequestIMEConversionModeChange(IMEConversionMode);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputHistoryUpdate@IRemoteTextInputProcessor@@QEAAXXZ
    void RequestInputHistoryUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputProfileActivation@IRemoteTextInputProcessor@@QEAAXUCoreInputProfile@@@Z
    void RequestInputProfileActivation(CoreInputProfile);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestModifierStateChange@IRemoteTextInputProcessor@@QEAAXI@Z
    void RequestModifierStateChange(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultInputProfile@IRemoteTextInputProcessor@@QEAAXPEAVString@System@@@Z
    void SetDefaultInputProfile(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputServiceBehavior@IRemoteTextInputProcessor@@QEAAXUInputServiceBehavior@@I@Z
    void SetInputServiceBehavior(InputServiceBehavior, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLastUserInputModality@IRemoteTextInputProcessor@@QEAAXUInputModalityInfo@@@Z
    void SetLastUserInputModality(InputModalityInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackPosition@IRemoteTextInputProcessor@@QEAAX_N0@Z
    void SetTrackPosition(bool, bool);
};
