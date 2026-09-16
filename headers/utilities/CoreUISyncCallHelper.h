#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Helpers {
class CoreUISyncCallHelper {
public:
    class CoreUIState;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreUISyncCallHelper@Helpers@CoreUI@Microsoft@@QEAA@XZ
    ~CoreUISyncCallHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWorkThunk@CoreUISyncCallHelper@Helpers@CoreUI@Microsoft@@CAJPEAX@Z
    static long DoWorkThunk(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncCallThreadStart@CoreUISyncCallHelper@Helpers@CoreUI@Microsoft@@CAKPEAX@Z
    static unsigned long SyncCallThreadStart(void *);
};
} // namespace Microsoft::CoreUI::Helpers
