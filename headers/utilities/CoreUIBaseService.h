#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
class CoreUIBaseService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceMain@CoreUIBaseService@@UEAAXKQEAPEA_W@Z
    virtual void ServiceMain(unsigned long, wchar_t * * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeService@CoreUIBaseService@@QEAAXXZ
    void UninitializeService();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeServiceInternal@CoreUIBaseService@@IEAAX_NP6AKPEAV1@@Z@Z
    void InitializeServiceInternal(bool, unsigned long ( *)(CoreUIBaseService *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceHandler@CoreUIBaseService@@KAKKKPEAX0@Z
    static unsigned long ServiceHandler(unsigned long, unsigned long, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopService@CoreUIBaseService@@KAXPEAXE@Z
    static void StopService(void *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateServiceStatus@CoreUIBaseService@@IEAAXKKK@Z
    void UpdateServiceStatus(unsigned long, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreUIBaseService@@MEAA@XZ
    virtual ~CoreUIBaseService();
};
