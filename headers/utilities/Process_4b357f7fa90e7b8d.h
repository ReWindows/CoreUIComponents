#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Cn {
class Process {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModuleGetData@Process@Cn@@SAPEAXH@Z
    static void * ModuleGetData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCallbackError@Process@Cn@@SAXHPEBX@Z
    static void NotifyCallbackError(int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOutOfMemory@Process@Cn@@SAX_K@Z
    static void NotifyOutOfMemory(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@Process@Cn@@SAXUShutdownKind@12@@Z
    static void Uninitialize(WindissectOpaque);
};
} // namespace Cn
