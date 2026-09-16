#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteClientViewCreator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreView@IRemoteClientViewCreator@Server@Navigation@CoreUI@Microsoft@@QEAAXAEAUCreateNewViewResult@2345@@Z
    void CreateCoreView(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewView@IRemoteClientViewCreator@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@11UViewActivationFlags@345@1AEAUCreateNewViewResult@2345@@Z
    void CreateNewView(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque &);
};
} // namespace Microsoft::CoreUI::Navigation::Server
