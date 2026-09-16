#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Cn::Engine {
class ProcessItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProcessItem@Engine@Cn@@QEAAXXZ
    void Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroy@ProcessItem@Engine@Cn@@MEAAXXZ
    virtual void NotifyDestroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessItem@Engine@Cn@@MEAA@XZ
    virtual ~ProcessItem();
};
} // namespace Cn::Engine
