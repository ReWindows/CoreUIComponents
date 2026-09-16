#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class BaseDisposableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeWorker@BaseDisposableObject@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void DisposeWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseDisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@BaseDisposableObject@MessagingInterop@CoreUI@Microsoft@@UEAAPEAVString@System@@XZ
    virtual WindissectOpaque * ToString();
};
} // namespace Microsoft::CoreUI::MessagingInterop
