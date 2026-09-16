#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ShellRemoteSession {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteTask@ShellRemoteSession@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ShellRemoteSession@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionPropertyChanged@ShellRemoteSession@Server@Navigation@CoreUI@Microsoft@@UEAAXUSession__Property@2345@@Z
    virtual void SessionPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@ShellRemoteSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@ShellRemoteSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
