#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Navigation {
class ICallbackTaskOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionComplete@ICallbackTaskOwner@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ConnectionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTaskComplete@ICallbackTaskOwner@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void LaunchChildTaskComplete(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSessionComplete@ICallbackTaskOwner@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void LaunchSessionComplete(int);
};
} // namespace Microsoft::CoreUI::Navigation
