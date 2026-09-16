#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 30 member(s).
namespace Cn {
class Throw {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArgumentException@Throw@Cn@@SAXXZ
    static void ArgumentException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArgumentNullException@Throw@Cn@@SAXXZ
    static void ArgumentNullException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArgumentOutOfRangeException@Throw@Cn@@SAXXZ
    static void ArgumentOutOfRangeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?COMException@Throw@Cn@@SAXH@Z
    static void COMException(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DivideByZeroException@Throw@Cn@@SAXXZ
    static void DivideByZeroException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DllNotFoundException@Throw@Cn@@SAXPEAVString@System@@@Z
    static void DllNotFoundException(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EntryPointNotFoundException@Throw@Cn@@SAXPEAVString@System@@0@Z
    static void EntryPointNotFoundException(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExceptionForHR@Throw@Cn@@SAXH@Z
    static void ExceptionForHR(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExceptionForWin32@Throw@Cn@@SAX_N@Z
    static void ExceptionForWin32(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterException2@Throw@Cn@@SA_NUXH@2@PEBUTypeDefinition@2@@Z
    static bool FilterException2(::Cn::XH, ::Cn::TypeDefinition const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatException@Throw@Cn@@SAXPEB_W@Z
    static void FormatException(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromDefinition@Throw@Cn@@SAXPEBUTypeDefinition@2@H@Z
    static void FromDefinition(::Cn::TypeDefinition const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWin32LastErrorForHR@Throw@Cn@@SAIH@Z
    static unsigned int GetWin32LastErrorForHR(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HRForWin32@Throw@Cn@@SAHPEAK@Z
    static int HRForWin32(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOutOfRangeException@Throw@Cn@@SAXXZ
    static void IndexOutOfRangeException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidCastException@Throw@Cn@@SAXXZ
    static void InvalidCastException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidOperationException@Throw@Cn@@SAXPEB_W@Z
    static void InvalidOperationException(wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHROutOfMemory@Throw@Cn@@SA_NH@Z
    static bool IsHROutOfMemory(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotImplementedException@Throw@Cn@@SAXXZ
    static void NotImplementedException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotSupportedException@Throw@Cn@@SAXXZ
    static void NotSupportedException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Now@Throw@Cn@@SAXPEAVException@System@@@Z
    static void Now(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Now@Throw@Cn@@SAXPEAVException@System@@PEBDIPEAX@Z
    static void Now(WindissectOpaque *, char const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Now@Throw@Cn@@SAXPEAVException@System@@PEBDI@Z
    static void Now(WindissectOpaque *, char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NullReferenceException@Throw@Cn@@SAXXZ
    static void NullReferenceException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfMemoryException@Throw@Cn@@SAXXZ
    static void OutOfMemoryException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfMemoryException@Throw@Cn@@SAX_K@Z
    static void OutOfMemoryException(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverflowException@Throw@Cn@@SAXXZ
    static void OverflowException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetException@Throw@Cn@@SAXXZ
    static void TargetException();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectCreateException@Throw@Cn@@CAPEAVException@System@@PEBUTypeDefinition@2@H@Z
    static WindissectOpaque * DirectCreateException(::Cn::TypeDefinition const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPair@Throw@Cn@@CAPEBUPair@12@H@Z
    static WindissectOpaque const * FindPair(int);
};
} // namespace Cn
