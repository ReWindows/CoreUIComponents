#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Cn::Com {
class NativeExit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCall@NativeExit@Com@Cn@@QEAAX_N@Z
    void BeginCall(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredRelease@NativeExit@Com@Cn@@QEAAXPEAPEAUIUnknown@23@@Z
    void DeferredRelease(::Cn::Com::IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_EndCall@NativeExit@Com@Cn@@QEAAXXZ
    void NoContext_EndCall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prologue@NativeExit@Com@Cn@@QEAAXPEAVContext@3@@Z
    void Prologue(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@NativeExit@Com@Cn@@QEAAXPEAUIUnknown@23@H@Z
    void Validate(::Cn::Com::IUnknown *, int);
};
} // namespace Cn::Com
