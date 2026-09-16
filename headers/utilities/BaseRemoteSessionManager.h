#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseRemoteSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void CloseSession(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSession@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@UCloseSessionOption@345@@Z
    void CloseSession(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverlayMode@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DisableOverlayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverlayMode@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void EnableOverlayMode(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterRestrictedMode@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXURestrictedModeMask@345@URestrictedModeFlags@345@PEAVString@System@@H@Z
    void EnterRestrictedMode(WindissectOpaque, WindissectOpaque, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRestrictedMode@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUAnimationType@345@_N1@Z
    void ExitRestrictedMode(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSession@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@1AEAH@Z
    void LaunchSession(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToSession@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@USessionInstanceId@345@@Z
    void NavigateToSession(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDeactivatedSessionFromBackstack@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void RemoveDeactivatedSessionFromBackstack(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BaseRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVSessionManager@2345@USessionManagerType@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation::Server
