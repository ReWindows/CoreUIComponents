#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
class IQuickItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeAge@IQuickItem@@QEAAXH@Z
    void ChangeAge(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeName@IQuickItem@@QEAAXPEAVString@System@@@Z
    void ChangeName(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Method1@IQuickItem@@QEAAXXZ
    void Method1();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Method2@IQuickItem@@QEAAXPEAVString@System@@@Z
    void Method2(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Method3@IQuickItem@@QEAAXPEAV1@@Z
    void Method3(IQuickItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Age@IQuickItem@@QEAAHXZ
    int get_Age();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@IQuickItem@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Name();
};
