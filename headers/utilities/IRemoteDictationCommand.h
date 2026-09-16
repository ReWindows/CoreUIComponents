#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
class IRemoteDictationCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBufferCommand@IRemoteDictationCommand@@QEAAXUGuid@System@@IIPEAVString@3@1H@Z
    void OnBufferCommand(WindissectOpaque, unsigned int, unsigned int, WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSendKey@IRemoteDictationCommand@@QEAAXUGuid@System@@II@Z
    void OnSendKey(WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnitCommand@IRemoteDictationCommand@@QEAAXUGuid@System@@IIHIHIHI@Z
    void OnUnitCommand(WindissectOpaque, unsigned int, unsigned int, int, unsigned int, int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocus@IRemoteDictationCommand@@QEAAXXZ
    void UpdateFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Error@IRemoteDictationCommand@@QEAA?AUDictationCommandError@@XZ
    DictationCommandError get_Error();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@IRemoteDictationCommand@@QEAA?AUCommandState@@XZ
    CommandState get_State();
};
