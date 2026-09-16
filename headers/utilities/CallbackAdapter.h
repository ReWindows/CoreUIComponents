#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
namespace Cn::Com {
class CallbackAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_AddRef@CallbackAdapter@Com@Cn@@SAXPEAUIUnknown@23@@Z
    static void Callback_AddRef(::Cn::Com::IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_QueryInterface@CallbackAdapter@Com@Cn@@SAJPEAUIUnknown@23@PEBUIID@23@PEAPEAX@Z
    static long Callback_QueryInterface(::Cn::Com::IUnknown *, ::Cn::Com::IID const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Release@CallbackAdapter@Com@Cn@@SAIPEAUIUnknown@23@@Z
    static unsigned int Callback_Release(::Cn::Com::IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndPassOwnership@CallbackAdapter@Com@Cn@@SAPEAV123@PEAVContext@3@PEAPEAUIUnknown@23@PEBUTypeDefinition@3@@Z
    static ::Cn::Com::CallbackAdapter * CreateAndPassOwnership(::Cn::Context *, ::Cn::Com::IUnknown * *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@CallbackAdapter@Com@Cn@@UEAA_NPEAVObject@System@@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@CallbackAdapter@Com@Cn@@UEAAXXZ
    virtual void Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@CallbackAdapter@Com@Cn@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalDisconnect@CallbackAdapter@Com@Cn@@QEAAXPEAVContext@3@@Z
    void InternalDisconnect(::Cn::Context *);
};
} // namespace Cn::Com
