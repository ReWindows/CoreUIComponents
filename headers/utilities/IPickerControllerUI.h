#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 19 member(s).
class IPickerControllerUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEDPProvider@IPickerControllerUI@@QEAAXPEAVString@System@@@Z
    void AddEDPProvider(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFileExtension@IPickerControllerUI@@QEAAXPEAVString@System@@0@Z
    void AddFileExtension(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppBarItemEnabled@IPickerControllerUI@@QEAAXH_N00@Z
    void SetAppBarItemEnabled(int, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppbarButton@IPickerControllerUI@@QEAAXHHPEAVString@System@@0_N@Z
    void SetAppbarButton(int, int, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppbarButtonsCount@IPickerControllerUI@@QEAAXH@Z
    void SetAppbarButtonsCount(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommitButtonText@IPickerControllerUI@@QEAAXPEAVString@System@@@Z
    void SetCommitButtonText(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultEDPProvider@IPickerControllerUI@@QEAAXPEAVString@System@@@Z
    void SetDefaultEDPProvider(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultFileExtension@IPickerControllerUI@@QEAAXPEAVString@System@@@Z
    void SetDefaultFileExtension(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPickerFrameState@IPickerControllerUI@@QEAAXUPickerFrameState@@@Z
    void SetPickerFrameState(PickerFrameState);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPickerProviderDisplayName@IPickerControllerUI@@QEAAXPEAVString@System@@@Z
    void SetPickerProviderDisplayName(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPickerType@IPickerControllerUI@@QEAAXUFilePickerType@@@Z
    void SetPickerType(FilePickerType);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPickerUIState@IPickerControllerUI@@QEAAXUPickerUIState@@@Z
    void SetPickerUIState(PickerUIState);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProviderViewId@IPickerControllerUI@@QEAAXI@Z
    void SetProviderViewId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionMode@IPickerControllerUI@@QEAAXUFileSelectionMode@@@Z
    void SetSelectionMode(FileSelectionMode);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestedFileName@IPickerControllerUI@@QEAAXPEAVString@System@@@Z
    void SetSuggestedFileName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPickerSession@IPickerControllerUI@@QEAAXXZ
    void StartPickerSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopPickerSession@IPickerControllerUI@@QEAAXXZ
    void StopPickerSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EDPProvider@IPickerControllerUI@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_EDPProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SaveFileName@IPickerControllerUI@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SaveFileName();
};
