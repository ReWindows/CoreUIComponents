#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
namespace System {
class MulticastDelegate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInvocationList@MulticastDelegate@System@@UEAAPEAVDelegate_1D@2@XZ
    virtual WindissectOpaque * GetInvocationList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalEquals@MulticastDelegate@System@@UEAA_NPEAVDelegate@2@@Z
    virtual bool InternalEquals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTarget@MulticastDelegate@System@@UEAAPEAVObject@2@XZ
    virtual WindissectOpaque * InternalGetTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRemove@MulticastDelegate@System@@SAPEAVDelegate@2@PEAV12@0@Z
    static WindissectOpaque * InternalRemove(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_FromExportHandle@MulticastDelegate@System@@SAPEAUGCHandleGlobalEntry@Engine@Cn@@PEAX@Z
    static WindissectOpaque * NoContext_FromExportHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToExportHandle@MulticastDelegate@System@@QEAAPEAXXZ
    void * ToExportHandle();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalNew@MulticastDelegate@System@@KAPEAV12@PEBUTypeDefinition@Cn@@PEAVObject@2@PEAX@Z
    static WindissectOpaque * InternalNew(::Cn::TypeDefinition const *, WindissectOpaque *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MulticastDelegate@System@@MEAA@XZ
    virtual ~MulticastDelegate();
};
} // namespace System
