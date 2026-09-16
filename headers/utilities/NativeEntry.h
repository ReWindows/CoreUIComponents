#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Cn::Com {
class NativeEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@NativeEntry@Com@Cn@@QEAAXXZ
    void Exit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Callback_Inspect@NativeEntry@Com@Cn@@QEAAXPEAUIUnknown@23@@Z
    void NoContext_Callback_Inspect(::Cn::Com::IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Callback_Release@NativeEntry@Com@Cn@@QEAAXPEAUIUnknown@23@@Z
    void NoContext_Callback_Release(::Cn::Com::IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Prologue@NativeEntry@Com@Cn@@QEAA_NPEAUGCHandleGlobalEntry@Engine@3@PEAX@Z
    bool NoContext_Prologue(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Prologue@NativeEntry@Com@Cn@@QEAA_NUFlags@123@PEAXPEAVContext@3@@Z
    bool NoContext_Prologue(WindissectOpaque, void *, ::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhandledExceptionWorker@NativeEntry@Com@Cn@@SAJPEAVException@System@@@Z
    static long UnhandledExceptionWorker(WindissectOpaque *);
};
} // namespace Cn::Com
