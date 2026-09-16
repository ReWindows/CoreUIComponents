#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BrokerRemoteSession {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteTask@BrokerRemoteSession@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteTask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BrokerRemoteSession@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionPropertyChanged@BrokerRemoteSession@Server@Navigation@CoreUI@Microsoft@@UEAAXUSession__Property@2345@@Z
    virtual void SessionPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@BrokerRemoteSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@BrokerRemoteSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
