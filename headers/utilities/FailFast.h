#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Cn {
class FailFast {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do@FailFast@Cn@@SAXPEAU_EXCEPTION_RECORD@@@Z
    static void Do(_EXCEPTION_RECORD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Do@FailFast@Cn@@SAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@@Z
    static void Do(_EXCEPTION_RECORD *, _CONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForHR@FailFast@Cn@@SAXHPEBX@Z
    static void ForHR(int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForHR@FailFast@Cn@@SAXHPEBXH@Z
    static void ForHR(int, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidArgument@FailFast@Cn@@SAXXZ
    static void InvalidArgument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidOperation@FailFast@Cn@@SAXXZ
    static void InvalidOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfMemory@FailFast@Cn@@SAXXZ
    static void OutOfMemory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SehToFailFastFilter@FailFast@Cn@@SAHPEBU_EXCEPTION_POINTERS@@_NPEAVContext@2@@Z
    static int SehToFailFastFilter(_EXCEPTION_POINTERS const *, bool, ::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unexpected@FailFast@Cn@@SAXXZ
    static void Unexpected();
};
} // namespace Cn
