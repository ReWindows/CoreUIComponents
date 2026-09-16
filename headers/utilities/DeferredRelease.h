#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Cn::Com {
class DeferredRelease {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessItems@DeferredRelease@Com@Cn@@SAXXZ
    static void Callback_ProcessItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndPassOwnership@DeferredRelease@Com@Cn@@QEAAXPEAPEAUIUnknown@23@@Z
    void CreateAndPassOwnership(::Cn::Com::IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Callback_ProcessItems@DeferredRelease@Com@Cn@@SAXPEAUDeferredReleaseEntry@123@@Z
    static void NoContext_Callback_ProcessItems(WindissectOpaque *);
};
} // namespace Cn::Com
