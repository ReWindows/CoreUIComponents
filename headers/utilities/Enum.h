#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace System {
class Enum {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Enum@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCompare@Enum@System@@SAHPEAV12@PEAVObject@2@@Z
    static int InternalCompare(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Enum@System@@UEAAPEAVString@2@XZ
    virtual WindissectOpaque * ToString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameStringByOrdinal@Enum@System@@CAPEAVString@2@PEBUTypeExtra_Enum@Cn@@H@Z
    static WindissectOpaque * _GetNameStringByOrdinal(::Cn::TypeExtra_Enum const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToString_FlagsMode@Enum@System@@AEAAPEAVString@2@PEBUTypeDefinition@Cn@@_K_N@Z
    WindissectOpaque * _ToString_FlagsMode(::Cn::TypeDefinition const *, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToString_RegularMode@Enum@System@@AEAAPEAVString@2@PEBUTypeDefinition@Cn@@_K_N@Z
    WindissectOpaque * _ToString_RegularMode(::Cn::TypeDefinition const *, uint64_t, bool);
};
} // namespace System
