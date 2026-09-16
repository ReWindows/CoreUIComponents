#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Proxy {
class RegisteredObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegisteredObject@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@RegisteredObject@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Register(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegister@RegisteredObject@Proxy@CoreUI@Microsoft@@QEAA_NPEAVString@System@@@Z
    bool TryRegister(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Proxy
