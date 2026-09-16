#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class TestRemoteTask {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@TestRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TestRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskPropertyChanged@TestRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXUServerTask__Property@2345@@Z
    virtual void TaskPropertyChanged(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation::Server
