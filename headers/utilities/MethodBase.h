#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace System::Reflection {
class MethodBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@MethodBase@Reflection@System@@UEAA_NPEAVObject@3@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalInvoke@MethodBase@Reflection@System@@SAPEAVObject@3@PEBUTypeDefinition@Cn@@PEBUMethodDefinition@6@PEAV43@PEAVObject_1D@3@@Z
    static WindissectOpaque * InternalInvoke(::Cn::TypeDefinition const *, ::Cn::MethodDefinition const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameWorker@MethodBase@Reflection@System@@UEAAPEAVString@3@XZ
    virtual WindissectOpaque * _GetNameWorker();
};
} // namespace System::Reflection
