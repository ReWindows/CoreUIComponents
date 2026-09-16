#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 23 member(s).
namespace System {
class Object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Object@System@@UEAA_NPEAV12@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Object@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalNew@Object@System@@SAPEAV12@PEBUTypeDefinition@Cn@@@Z
    static WindissectOpaque * InternalNew(::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MemberwiseClone@Object@System@@QEAAPEAV12@XZ
    WindissectOpaque * MemberwiseClone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Object@System@@UEAAPEAVString@2@XZ
    virtual WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsClass@Object@System@@SAPEAV12@PEAV12@PEBUTypeDefinition@Cn@@@Z
    static WindissectOpaque * _AsClass(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AsInterface@Object@System@@SAPEAV12@PEAV12@PEBUTypeDefinition@Cn@@@Z
    static WindissectOpaque * _AsInterface(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CastClass@Object@System@@SAPEAV12@PEAV12@PEBUTypeDefinition@Cn@@@Z
    static WindissectOpaque * _CastClass(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CastInterface@Object@System@@SAPEAV12@PEAV12@PEBUTypeDefinition@Cn@@@Z
    static WindissectOpaque * _CastInterface(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockRange@Object@System@@SAXPEBXPEBUTypeDefinition@Cn@@H@Z
    static void _LockRange(void const *, ::Cn::TypeDefinition const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Preconstruct@Object@System@@QEAAXPEAVHeap@Engine@Cn@@PEBUTypeDefinition@5@@Z
    void _Preconstruct(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreconstructClone@Object@System@@SAXPEAVHeap@Engine@Cn@@PEAV12@1@Z
    static void _PreconstructClone(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unbox@Object@System@@SAPEAXPEAV12@PEBUTypeDefinition@Cn@@@Z
    static void * _Unbox(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnboxWithEnumConversions@Object@System@@SAPEAXPEAV12@PEBUTypeDefinition@Cn@@@Z
    static void * _UnboxWithEnumConversions(WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Unlock@Object@System@@QEAAXXZ
    void _Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnlockRange@Object@System@@SAXPEBXPEBUTypeDefinition@Cn@@H@Z
    static void _UnlockRange(void const *, ::Cn::TypeDefinition const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnlockRange@Object@System@@SAXQEAPEAV12@H@Z
    static void _UnlockRange(WindissectOpaque * * const, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@Object@System@@MEAAXXZ
    virtual void Finalize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseReferences@Object@System@@IEAAX_N@Z
    void _ReleaseReferences(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Object@System@@MEAA@XZ
    virtual ~Object();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Heap_CheckFinalizerWorker@Object@System@@AEAAX_N@Z
    void _Heap_CheckFinalizerWorker(bool);
};
} // namespace System
