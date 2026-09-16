#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 17 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class TestRemoteSessionManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteSession@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVSession@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteSession(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteTask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerPropertyChanged@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXUSessionManager__Property@2345@@Z
    virtual void SessionManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerSessionClosed@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUSessionInstanceId@345@@Z
    void SessionManagerSessionClosed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVSessionManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentLockTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOverlayTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSession@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestSession@2345@XZ
    WindissectOpaque * get_CurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleLockTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleOverlayTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleSession@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestSession@2345@XZ
    WindissectOpaque * get_VisibleSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@TestRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
