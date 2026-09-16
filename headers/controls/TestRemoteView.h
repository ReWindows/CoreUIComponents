#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class TestRemoteView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteServerWindow@TestRemoteView@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerWindow@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteServerWindow(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@TestRemoteView@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TestRemoteView@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskPropertyChanged@TestRemoteView@Server@Navigation@CoreUI@Microsoft@@UEAAXUServerTask__Property@2345@@Z
    virtual void TaskPropertyChanged(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation::Server
