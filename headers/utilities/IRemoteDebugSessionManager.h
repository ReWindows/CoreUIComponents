#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteDebugSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@IRemoteDebugSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void CloseSession(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@IRemoteDebugSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00AEAH@Z
    void LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeApplication@IRemoteDebugSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@AEAH@Z
    void ResumeApplication(WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendApplication@IRemoteDebugSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@AEAH@Z
    void SuspendApplication(WindissectOpaque *, int &);
};
} // namespace Microsoft::CoreUI::Navigation::Server
