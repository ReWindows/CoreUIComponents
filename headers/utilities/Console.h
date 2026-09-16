#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace System {
class Console {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalWriteString@Console@System@@SAXPEAVString@2@_N@Z
    static void InternalWriteString(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeType@Console@System@@SAXXZ
    static void UninitializeType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLine@Console@System@@SAXPEAVString@2@PEAVObject@2@1@Z
    static void WriteLine(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushBuffer@Console@System@@CAXXZ
    static void FlushBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleConsoleError@Console@System@@CAXXZ
    static void HandleConsoleError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalWrite@Console@System@@CAXPEB_WH_N@Z
    static void InternalWrite(wchar_t const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalWriteLogger@Console@System@@CAXPEB_WH_N@Z
    static void InternalWriteLogger(wchar_t const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalWritePartial@Console@System@@CAXPEB_WH@Z
    static void InternalWritePartial(wchar_t const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenConsole@Console@System@@CAXXZ
    static void OpenConsole();
};
} // namespace System
