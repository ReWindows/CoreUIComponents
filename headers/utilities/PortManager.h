#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class PortManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@PortManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergedPortSecurityDescriptor@PortManager@Server@Navigation@CoreUI@Microsoft@@SAXPEAVString@System@@0AEAUPSECURITY_DESCRIPTOR@MessagingInterop@45@AEA_N@Z
    static void GetMergedPortSecurityDescriptor(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::PSECURITY_DESCRIPTOR &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@PortManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVMessageSession@MessagingInterop@45@@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::MessageSession *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
