#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class DebugRemoteSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteDebugSessionManager__LaunchSession@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00AEAH@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteDebugSessionManager__LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerSessionClosed@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void SessionManagerSessionClosed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerSessionLaunched@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void SessionManagerSessionLaunched(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerTaskRunning@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void SessionManagerTaskRunning(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerTaskSuspended@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void SessionManagerTaskSuspended(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@DebugRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVSessionManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
