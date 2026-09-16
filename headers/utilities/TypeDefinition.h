#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Cn {
class TypeDefinition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComData@TypeDefinition@Cn@@QEBAPEBUTypeExtra_Com@2@XZ
    ::Cn::TypeExtra_Com const * GetComData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDerivativeData@TypeDefinition@Cn@@QEBAPEBUTypeExtra_Derivative@2@XZ
    ::Cn::TypeExtra_Derivative const * GetDerivativeData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumData@TypeDefinition@Cn@@QEBAPEBUTypeExtra_Enum@2@XZ
    ::Cn::TypeExtra_Enum const * GetEnumData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameData@TypeDefinition@Cn@@QEBAPEBUTypeExtra_Name@2@XZ
    ::Cn::TypeExtra_Name const * GetNameData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPredefinedType@TypeDefinition@Cn@@QEBA?AUPredefinedTypeKind@2@XZ
    ::Cn::PredefinedTypeKind GetPredefinedType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReflection@TypeDefinition@Cn@@QEBAPEBUTypeExtra_Reflection@2@XZ
    ::Cn::TypeExtra_Reflection const * GetReflection() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSection@TypeDefinition@Cn@@QEBAPEBXUTypeExtraSection@2@@Z
    void const * GetSection(::Cn::TypeExtraSection) const;
};
} // namespace Cn
