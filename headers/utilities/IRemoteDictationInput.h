#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 33 member(s).
class IRemoteDictationInput {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConsumedKey@IRemoteDictationInput@@QEAAXUGuid@System@@II@Z
    void AddConsumedKey(WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBufferCommand@IRemoteDictationInput@@QEAAXUGuid@System@@IUBufferOperationType@@PEAVString@3@2H@Z
    void OnBufferCommand(WindissectOpaque, unsigned int, BufferOperationType, WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandFinished@IRemoteDictationInput@@QEAAXUGuid@System@@I@Z
    void OnCommandFinished(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandStarted@IRemoteDictationInput@@QEAAXUGuid@System@@I@Z
    void OnCommandStarted(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCorrectCommand@IRemoteDictationInput@@QEAAXUGuid@System@@IUUnitOperationType@@HUUnitOperationSize@@H2PEAVString@3@3@Z
    void OnCorrectCommand(WindissectOpaque, unsigned int, UnitOperationType, int, UnitOperationSize, int, UnitOperationSize, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSegmentPartialResult@IRemoteDictationInput@@QEAAXUGuid@System@@IPEAVString@3@@Z
    void OnSegmentPartialResult(WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSegmentation@IRemoteDictationInput@@QEAAXUGuid@System@@IPEAVString@3@11I_N@Z
    void OnSegmentation(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSessionEnded@IRemoteDictationInput@@QEAAXUGuid@System@@IUSessionEndReason@@@Z
    void OnSessionEnded(WindissectOpaque, unsigned int, SessionEndReason);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnitCommand@IRemoteDictationInput@@QEAAXUGuid@System@@IUUnitOperationType@@HUUnitOperationSize@@H2PEAVString@3@@Z
    void OnUnitCommand(WindissectOpaque, unsigned int, UnitOperationType, int, UnitOperationSize, int, UnitOperationSize, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToCommit@IRemoteDictationInput@@QEAAXUGuid@System@@I@Z
    void PrepareToCommit(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceTextW@IRemoteDictationInput@@QEAAXUGuid@System@@IPEAVString@3@@Z
    void ReplaceTextW(WindissectOpaque, unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestNewDictationSession@IRemoteDictationInput@@QEAAXXZ
    void RequestNewDictationSession();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSessionStyle@IRemoteDictationInput@@QEAAXUGuid@System@@IHHHH@Z
    void SetSessionStyle(WindissectOpaque, unsigned int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActionCandidateSelected@IRemoteDictationInput@@QEAA_NXZ
    bool get_ActionCandidateSelected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActionCandidateString@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ActionCandidateString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientCorrectionTelemetry@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ClientCorrectionTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientSessionTelemetry@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ClientSessionTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandReady@IRemoteDictationInput@@QEAA?AUCommandReadyContext@@XZ
    CommandReadyContext get_CommandReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextFollowing@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContextFollowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextPrevious@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContextPrevious();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DictationAvailableChanged@IRemoteDictationInput@@QEAA_NXZ
    bool get_DictationAvailableChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DictationSessionApp@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DictationSessionApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DictationSessionFailed@IRemoteDictationInput@@QEAAIXZ
    unsigned int get_DictationSessionFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DictationSessionStartFailed@IRemoteDictationInput@@QEAA?AUDictationStartFailedReason@@XZ
    DictationStartFailedReason get_DictationSessionStartFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DictationSessionStarted@IRemoteDictationInput@@QEAA?AURemoteDictationContext@@XZ
    RemoteDictationContext get_DictationSessionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastKeypress@IRemoteDictationInput@@QEAAIXZ
    unsigned int get_LastKeypress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotifyOperationComplete@IRemoteDictationInput@@QEAAIXZ
    unsigned int get_NotifyOperationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotifyUserAction@IRemoteDictationInput@@QEAA?AUUserActionType@@XZ
    UserActionType get_NotifyUserAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestSessionEnd@IRemoteDictationInput@@QEAA?AUGuid@System@@XZ
    WindissectOpaque get_RequestSessionEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestSessionRestart@IRemoteDictationInput@@QEAA?AUSessionRestartContext@@XZ
    SessionRestartContext get_RequestSessionRestart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResultText@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ResultText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserInteractionAfterSessionEnd@IRemoteDictationInput@@QEAA_NXZ
    bool get_UserInteractionAfterSessionEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@IRemoteDictationInput@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_View();
};
