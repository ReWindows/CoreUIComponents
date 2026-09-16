#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace System {
class ValueType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@ValueType@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalNew@ValueType@System@@SAPEAV12@PEBUTypeDefinition@Cn@@@Z
    static WindissectOpaque * InternalNew(::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyInstance@ValueType@System@@SAXPEBXPEAXPEBUTypeDefinition@Cn@@H@Z
    static void _CopyInstance(void const *, void *, ::Cn::TypeDefinition const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_New@ValueType@System@@SAPEAV12@PEBUTypeDefinition@Cn@@PEBX@Z
    static WindissectOpaque * _New(::Cn::TypeDefinition const *, void const *);
};
} // namespace System
