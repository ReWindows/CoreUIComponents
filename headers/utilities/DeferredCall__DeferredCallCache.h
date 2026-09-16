#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class DeferredCall__DeferredCallCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateFromCache@DeferredCall__DeferredCallCache@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVDeferredCall@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::DeferredCall * AllocateFromCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DeferredCall__DeferredCallCache@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVDeferredCall@234@PEAVAction__object__object@System@@PEAVObject@7@1@Z
    ::Microsoft::CoreUI::MessagingInterop::DeferredCall * Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeChain@DeferredCall__DeferredCallCache@MessagingInterop@CoreUI@Microsoft@@QEAAXV?$ParamRef@VDeferredCall@MessagingInterop@CoreUI@Microsoft@@@Cn@@@Z
    void DisposeChain(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DeferredCall__DeferredCallCache@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
};
} // namespace Microsoft::CoreUI::MessagingInterop
