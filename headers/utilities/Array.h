#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 22 member(s).
namespace System {
class Array {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Array@System@@SAXPEAV12@HH@Z
    static void Clear(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@Array@System@@SAXPEAV12@H0HH@Z
    static void Copy(WindissectOpaque *, int, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Array@System@@SAPEAV12@UType@2@H@Z
    static WindissectOpaque * CreateInstance(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Array@System@@QEAAPEAVObject@2@H@Z
    WindissectOpaque * GetValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@Array@System@@SAHPEAV12@PEAVObject@2@HH@Z
    static int IndexOf(WindissectOpaque *, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@Array@System@@SAXPEAV12@HH@Z
    static void InternalClear(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClone@Array@System@@QEAAPEAV12@XZ
    WindissectOpaque * InternalClone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCopy@Array@System@@SAXPEAV12@H0HH@Z
    static void InternalCopy(WindissectOpaque *, int, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetValue@Array@System@@QEAAPEAVObject@2@H@Z
    WindissectOpaque * InternalGetValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalIndexOfPrimitive@Array@System@@SAHPEAV12@HHPEAX@Z
    static int InternalIndexOfPrimitive(WindissectOpaque *, int, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalNew@Array@System@@SAPEAV12@PEBUTypeDefinition@Cn@@H@Z
    static WindissectOpaque * InternalNew(::Cn::TypeDefinition const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSetValue@Array@System@@QEAAXHPEAVObject@2@@Z
    void InternalSetValue(int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@Array@System@@QEAAXPEAVObject@2@H@Z
    void SetValue(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementSize@Array@System@@QEAAHXZ
    int _GetElementSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetElementSize@Array@System@@SAHPEBUTypeDefinition@Cn@@@Z
    static int _GetElementSize(::Cn::TypeDefinition const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeObjects@Array@System@@IEAAXHPEAD@Z
    void _InitializeObjects(int, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetItem@Array@System@@IEAAXHPEAVObject@2@@Z
    void _SetItem(int, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Array@System@@MEAA@XZ
    virtual ~Array();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalAllocate@Array@System@@CAPEAV12@PEAVContext@Cn@@PEBUTypeDefinition@4@H_N@Z
    static WindissectOpaque * InternalAllocate(::Cn::Context *, ::Cn::TypeDefinition const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateElementType@Array@System@@CAXPEBUTypeDefinition@Cn@@@Z
    static void ValidateElementType(::Cn::TypeDefinition const *);
};
} // namespace System
