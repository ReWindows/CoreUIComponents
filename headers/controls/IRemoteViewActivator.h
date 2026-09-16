#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteViewActivator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@IRemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@1AEAH@Z
    void Activate(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@IRemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@11UViewActivationFlags@345@AEAH@Z
    void Activate(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@IRemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAX_KUWindowInstanceId@345@IPEAVString@System@@UGuid@8@UHostId@345@2UViewActivationFlags@345@00PEAVByte_1D@8@AEAUActivationRequestResult@2345@@Z
    void Activate(uint64_t, WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque, uint64_t, uint64_t, WindissectOpaque *, WindissectOpaque &);
};
} // namespace Microsoft::CoreUI::Navigation::Server
