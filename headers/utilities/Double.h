#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace System {
class Double {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNaN@Double@System@@SA_NN@Z
    static bool IsNaN(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixupExponent@Double@System@@SAXQEA_WUExponentOutput@12@_KPEAH@Z
    static void _FixupExponent(wchar_t * const, WindissectOpaque, uint64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToStringFormatter@Double@System@@SAPEAVString@2@PEAV32@N_N@Z
    static WindissectOpaque * _ToStringFormatter(WindissectOpaque *, double, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ApplyNumberFormat@Double@System@@CAXQEA_WPEAHH@Z
    static void _ApplyNumberFormat(wchar_t * const, int *, int);
};
} // namespace System
