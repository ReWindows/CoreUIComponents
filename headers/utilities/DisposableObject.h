#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class DisposableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@DisposableObject@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@DisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnFinalRelease(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialExport@DisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnInitialExport();
};
} // namespace Microsoft::CoreUI::MessagingInterop
