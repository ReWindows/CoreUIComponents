#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
class IMetronome {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTimeSignature@IMetronome@@QEAAXXZ
    void ChangeTimeSignature();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SlowDown@IMetronome@@QEAAX_N@Z
    void SlowDown(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpeedUp@IMetronome@@QEAAX_N@Z
    void SpeedUp(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartStop@IMetronome@@QEAAXXZ
    void StartStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BeatsPerMeasure@IMetronome@@QEAAHXZ
    int get_BeatsPerMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BeatsPerMinute@IMetronome@@QEAAHXZ
    int get_BeatsPerMinute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Running@IMetronome@@QEAA_NXZ
    bool get_Running();
};
