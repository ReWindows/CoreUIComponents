#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Cn::Engine::Heap {
class ObjectSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectWorker@ObjectSet@Heap@Engine@Cn@@QEAAXHPEAUHeapEntry@234@PEBD_N@Z
    void CollectWorker(int, WindissectOpaque *, char const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ObjectSet@Heap@Engine@Cn@@QEAAXXZ
    void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Grow@ObjectSet@Heap@Engine@Cn@@AEAAXXZ
    void Grow();
};
} // namespace Cn::Engine::Heap
