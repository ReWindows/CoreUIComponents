#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 14 member(s).
namespace Cn {
class TypeSystem {
public:
    class TypeSet;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TypeSystem@Cn@@SAPEAVObject@System@@PEBUTypeDefinition@2@@Z
    static WindissectOpaque * CreateInstance(::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindType@TypeSystem@Cn@@SAPEBUTypeDefinition@2@PEBD@Z
    static ::Cn::TypeDefinition const * FindType(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromTypeSystemID@TypeSystem@Cn@@SAPEBUTypeDefinition@2@I@Z
    static ::Cn::TypeDefinition const * FromTypeSystemID(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefinition@TypeSystem@Cn@@SAPEBUTypeDefinition@2@G@Z
    static ::Cn::TypeDefinition const * GetDefinition(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDescendentOf@TypeSystem@Cn@@SA_NPEBUTypeDefinition@2@0_N@Z
    static bool IsDescendentOf(::Cn::TypeDefinition const *, ::Cn::TypeDefinition const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeArrayType@TypeSystem@Cn@@SAPEBUTypeDefinition@2@PEBU32@E@Z
    static ::Cn::TypeDefinition const * MakeArrayType(::Cn::TypeDefinition const *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SingleContextDestroy@TypeSystem@Cn@@SAXXZ
    static void SingleContextDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToTypeSystemID@TypeSystem@Cn@@SAIPEBUTypeDefinition@2@@Z
    static unsigned int ToTypeSystemID(::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeType@TypeSystem@Cn@@SAXXZ
    static void UninitializeType();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDynamicType_LkReq@TypeSystem@Cn@@CAPEAUTypeDefinition@2@HUTypeFlags@2@P6AXPEAX@Z@Z
    static ::Cn::TypeDefinition * AllocateDynamicType_LkReq(int, ::Cn::TypeFlags, void ( *)(void *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildNames_LkReq@TypeSystem@Cn@@CAPEAUTypeDataProcess@2@PEBUTypeDefinition@2@@Z
    static ::Cn::TypeDataProcess * BuildNames_LkReq(::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDynamicDerivativeType_LkReq@TypeSystem@Cn@@CAPEBUTypeDefinition@2@GUTypeFlags@2@E@Z
    static ::Cn::TypeDefinition const * FindDynamicDerivativeType_LkReq(unsigned short, ::Cn::TypeFlags, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindStaticDerivativeType@TypeSystem@Cn@@CAPEBUTypeDefinition@2@GUTypeFlags@2@E@Z
    static ::Cn::TypeDefinition const * FindStaticDerivativeType(unsigned short, ::Cn::TypeFlags, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDerivativeType@TypeSystem@Cn@@CAPEBUTypeDefinition@2@PEBU32@UTypeFlags@2@@Z
    static ::Cn::TypeDefinition const * MakeDerivativeType(::Cn::TypeDefinition const *, ::Cn::TypeFlags);
};
} // namespace Cn
