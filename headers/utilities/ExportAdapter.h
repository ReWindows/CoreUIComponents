#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 20 member(s).
namespace Cn::Com {
class ExportAdapter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ExportAdapter@Com@Cn@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRelease@ExportAdapter@Com@Cn@@QEAAXXZ
    void InternalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_EnterUsageBlock@ExportAdapter@Com@Cn@@SAPEAV123@PEAUIUnknown@23@@Z
    static ::Cn::Com::ExportAdapter * NoContext_EnterUsageBlock(::Cn::Com::IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_ExitUsageBlock@ExportAdapter@Com@Cn@@SAXPEAPEAV123@H@Z
    static void NoContext_ExitUsageBlock(::Cn::Com::ExportAdapter * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OrphanChain@ExportAdapter@Com@Cn@@QEAAXPEAVObject@System@@@Z
    void OrphanChain(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ExportAdapter@Com@Cn@@UEAAJPEBUIID@23@PEAPEAX@Z
    virtual long QueryInterface(::Cn::Com::IID const *, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ExportAdapter@Com@Cn@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@ExportAdapter@Com@Cn@@SAXPEAUMsgBuffer@@@Z
    static void ReleaseBuffer(MsgBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToExport@ExportAdapter@Com@Cn@@SAPEAV123@PEAVContext@3@PEAVObject@System@@PEBUTypeDefinition@3@PEAPEAX@Z
    static ::Cn::Com::ExportAdapter * ToExport(::Cn::Context *, WindissectOpaque *, ::Cn::TypeDefinition const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToNativeBlobBuffer@ExportAdapter@Com@Cn@@SAXPEAVByte_1D@System@@PEAUMsgStackBlob@@PEAPEAUMsgBlob@@@Z
    static void ToNativeBlobBuffer(WindissectOpaque *, MsgStackBlob *, MsgBlob * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToNativeBlobShared@ExportAdapter@Com@Cn@@SAXPEAVByte_1D@System@@PEAPEAUMsgBlob@@@Z
    static void ToNativeBlobShared(WindissectOpaque *, MsgBlob * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToNativeStringBuffer@ExportAdapter@Com@Cn@@SAXPEAVString@System@@PEAUMsgStackString@@PEAPEAUMsgString@@@Z
    static void ToNativeStringBuffer(WindissectOpaque *, MsgStackString *, MsgString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToNativeStringShared@ExportAdapter@Com@Cn@@SAXPEAVString@System@@PEAPEAUMsgString@@@Z
    static void ToNativeStringShared(WindissectOpaque *, MsgString * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToSystemByteArray@ExportAdapter@Com@Cn@@SAPEAVByte_1D@System@@PEAUMsgBlob@@@Z
    static WindissectOpaque * ToSystemByteArray(MsgBlob *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToSystemString@ExportAdapter@Com@Cn@@SAPEAVString@System@@PEAUMsgString@@@Z
    static WindissectOpaque * ToSystemString(MsgString *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndPassOwnership@ExportAdapter@Com@Cn@@SAPEAVObject@System@@PEAVContext@3@PEAPEAUIUnknown@23@PEBUTypeDefinition@3@@Z
    static WindissectOpaque * ValidateAndPassOwnership(::Cn::Context *, ::Cn::Com::IUnknown * *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateExport@ExportAdapter@Com@Cn@@SAPEAVObject@System@@PEAVContext@3@PEAUIUnknown@23@PEAV123@PEBUTypeDefinition@3@@Z
    static WindissectOpaque * ValidateExport(::Cn::Context *, ::Cn::Com::IUnknown *, ::Cn::Com::ExportAdapter *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOut@ExportAdapter@Com@Cn@@SAXPEAPEAX@Z
    static void ValidateOut(void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ExportAdapter@Com@Cn@@CAPEAV123@PEAVContext@3@PEAVObject@System@@PEAUGCHandleGlobalEntry@Engine@3@PEBUTypeDefinition@3@@Z
    static ::Cn::Com::ExportAdapter * Create(::Cn::Context *, WindissectOpaque *, WindissectOpaque *, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ExportAdapter@Com@Cn@@AEAAXXZ
    void Destroy();
};
} // namespace Cn::Com
