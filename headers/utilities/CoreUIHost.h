#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
class CoreUIHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallbackError@CoreUIHost@@UEAAXJPEBX@Z
    virtual void OnCallbackError(long, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterInvalidContext@CoreUIHost@@UEAAXXZ
    virtual void OnEnterInvalidContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterUninitializedContext@CoreUIHost@@UEAAXPEAJ@Z
    virtual void OnEnterUninitializedContext(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidCallback@CoreUIHost@@UEAAXPEBX@Z
    virtual void OnInvalidCallback(void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessShutdownLeak@CoreUIHost@@UEAAXXZ
    virtual void OnProcessShutdownLeak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThrowException@CoreUIHost@@UEAAXPEAVException@System@@@Z
    virtual void OnThrowException(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnhandledException@CoreUIHost@@UEAAXPEAVException@System@@JPEAJ@Z
    virtual void OnUnhandledException(WindissectOpaque *, long, long *);
};
