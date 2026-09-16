#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Navigation {
class TimeoutInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@TimeoutInfo@Navigation@CoreUI@Microsoft@@SAXXZ
    static void EnsureInitialized();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationTimeout@TimeoutInfo@Navigation@CoreUI@Microsoft@@SAHUTimeoutInfo__EventType@234@UTimeoutInfo__ApplicationType@234@UTimeoutInfo__TimeoutModifierType@234@@Z
    static int GetNavigationTimeout(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TimeoutInfo@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TimeoutInfo@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeoutsEnabled@TimeoutInfo@Navigation@CoreUI@Microsoft@@SA_NXZ
    static bool get_TimeoutsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeoutsEnabledOnDebuggerAttached@TimeoutInfo@Navigation@CoreUI@Microsoft@@SA_NXZ
    static bool get_TimeoutsEnabledOnDebuggerAttached();
};
} // namespace Microsoft::CoreUI::Navigation
