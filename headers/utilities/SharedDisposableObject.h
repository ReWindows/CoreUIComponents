#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class SharedDisposableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@SharedDisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@SharedDisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnFinalRelease(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUsage@SharedDisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialExport@SharedDisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnInitialExport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterUsage@SharedDisposableObject@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVObject@System@@@Z
    void UnregisterUsage(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::MessagingInterop
