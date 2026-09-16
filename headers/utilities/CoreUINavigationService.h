#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
class CoreUINavigationService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeService@CoreUINavigationService@@UEAAX_N@Z
    virtual void InitializeService(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreUINavigationService@@IEAA@XZ
    CoreUINavigationService();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceName@CoreUINavigationService@@EEAAPEB_WXZ
    virtual wchar_t const * GetServiceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationServerThread@CoreUINavigationService@@CAKPEAVCoreUIBaseService@@@Z
    static unsigned long NavigationServerThread(CoreUIBaseService *);
};
