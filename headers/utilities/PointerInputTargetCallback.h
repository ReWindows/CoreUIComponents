#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
class PointerInputTargetCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointerInputTargetCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompletion@PointerInputTargetCallback@@UEAAJH@Z
    virtual long OnCompletion(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointerInputTargetCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointerInputTargetCallback@@UEAAKXZ
    virtual unsigned long Release();
};
