#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
class CCloseRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompleteHandler@CCloseRequestedEventArgs@@QEAAXXZ
    void InvokeCompleteHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@CCloseRequestedEventArgs@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@CCloseRequestedEventArgs@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCloseRequestedEventArgs@@UEAA@XZ
    virtual ~CCloseRequestedEventArgs();
};
