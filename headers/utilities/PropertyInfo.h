#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace System::Reflection {
class PropertyInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@PropertyInfo@Reflection@System@@UEAA_NPEAVObject@3@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGetMethod@PropertyInfo@Reflection@System@@QEAAPEAVMethodInfo@23@_N@Z
    WindissectOpaque * GetGetMethod(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetMethod@PropertyInfo@Reflection@System@@QEAAPEAVMethodInfo@23@_N@Z
    WindissectOpaque * GetSetMethod(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@PropertyInfo@Reflection@System@@QEAAXPEAVObject@3@0PEAVObject_1D@3@@Z
    void SetValue(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNameWorker@PropertyInfo@Reflection@System@@UEAAPEAVString@3@XZ
    virtual WindissectOpaque * _GetNameWorker();
};
} // namespace System::Reflection
