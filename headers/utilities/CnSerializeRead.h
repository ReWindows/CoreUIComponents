#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Formatting {
class CnSerializeRead {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnformatInvoke@CnSerializeRead@Formatting@CoreUI@Microsoft@@QEAAXPEBXIPEAI@Z
    void UnformatInvoke(void const *, unsigned int, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CnSerializeRead@Formatting@CoreUI@Microsoft@@QEAA@XZ
    ~CnSerializeRead();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpCall@CnSerializeRead@Formatting@CoreUI@Microsoft@@AEAAXPEAVObject@System@@H@Z
    void DumpCall(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpInvoke@CnSerializeRead@Formatting@CoreUI@Microsoft@@AEAAXPEAVObject@System@@H@Z
    void DumpInvoke(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpUpdate@CnSerializeRead@Formatting@CoreUI@Microsoft@@AEAAXPEAVObject@System@@@Z
    void DumpUpdate(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Formatting
