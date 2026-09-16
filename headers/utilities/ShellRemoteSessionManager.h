#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ShellRemoteSessionManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteSession@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVSession@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteSession(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteTask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerPropertyChanged@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXUSessionManager__Property@2345@@Z
    virtual void SessionManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVSessionManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentLockTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOverlayTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSession@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellSession@2345@XZ
    WindissectOpaque * get_CurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleLockTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleLockTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleOverlayTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleOverlayTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleSession@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellSession@2345@XZ
    WindissectOpaque * get_VisibleSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@ShellRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
