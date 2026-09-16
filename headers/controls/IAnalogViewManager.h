#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 21 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateShell@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXXZ
    void ActivateShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateView@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@@Z
    void ActivateView(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachCaptureController@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@I_KAEA_K@Z
    void AttachCaptureController(WindissectOpaque, unsigned int, uint64_t, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseApplication@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void CloseApplication(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmShutdown@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXXZ
    void ConfirmShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsolidateView@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@_N@Z
    void ConsolidateView(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachCaptureController@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAX_K@Z
    void DetachCaptureController(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewPropertyAsBool@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@PEAVString@System@@AEAH@Z
    void GetViewPropertyAsBool(WindissectOpaque, WindissectOpaque *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewPropertyAsInt@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@PEAVString@System@@AEAH@Z
    void GetViewPropertyAsInt(WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellResumed@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXXZ
    void OnShellResumed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterListener@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXPEAVIAnalogViewManagerListener@234@_N@Z
    void RegisterListener(::Microsoft::CoreUI::Analog::IAnalogViewManagerListener *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAudioVisibilityForApp@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@I_N@Z
    void SetAudioVisibilityForApp(WindissectOpaque *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExclusiveWindowSize@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUWindowInstanceId@Navigation@34@II@Z
    void SetExclusiveWindowSize(WindissectOpaque, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGazedView@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@@Z
    void SetGazedView(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractiveCarryView@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@@Z
    void SetInteractiveCarryView(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocationInfoForApp@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUWindowInstanceId@Navigation@34@_NPEAVByte_1D@System@@1@Z
    void SetLocationInfoForApp(WindissectOpaque, bool, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTeleportTransform@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXPEAVByte_1D@System@@@Z
    void SetTeleportTransform(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewState@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@UShellViewState@234@@Z
    void SetViewState(WindissectOpaque, ::Microsoft::CoreUI::Analog::ShellViewState);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryBack@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXUViewInstanceId@Navigation@34@@Z
    void TryBack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterListener@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAAXPEAVIAnalogViewManagerListener@234@@Z
    void UnregisterListener(::Microsoft::CoreUI::Analog::IAnalogViewManagerListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentStartViewState@IAnalogViewManager@Analog@CoreUI@Microsoft@@QEAA?AUStartViewState@234@XZ
    ::Microsoft::CoreUI::Analog::StartViewState get_CurrentStartViewState();
};
} // namespace Microsoft::CoreUI::Analog
