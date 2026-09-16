#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
class IHardwareCursorServer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorGlyph@IHardwareCursorServer@@QEAAX_K@Z
    void SetCursorGlyph(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorOrientation@IHardwareCursorServer@@QEAAXUORIENTATION_MESSAGE@@@Z
    void SetCursorOrientation(ORIENTATION_MESSAGE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@IHardwareCursorServer@@QEAAXN@Z
    void SetScaleFactor(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@IHardwareCursorServer@@QEAAX_N@Z
    void SetVisibility(bool);
};
