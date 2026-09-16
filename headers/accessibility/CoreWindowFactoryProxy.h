#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
class CoreWindowFactoryProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreWindowFactoryProxy@@QEAA@XZ
    CoreWindowFactoryProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CoreWindowFactoryProxy@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAttributes@CoreWindowFactoryProxy@@UEAAJPEAK@Z
    virtual long GetWindowAttributes(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowReuse@CoreWindowFactoryProxy@@UEAAJH@Z
    virtual long SetAllowReuse(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAttributes@CoreWindowFactoryProxy@@UEAAJK@Z
    virtual long SetWindowAttributes(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@CoreWindowFactoryProxy@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowFactoryProxy@@UEAA@XZ
    virtual ~CoreWindowFactoryProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_UnmarshalAdditionalData@CoreWindowFactoryProxy@@EEAAJPEAUIStream@@@Z
    virtual long v_UnmarshalAdditionalData(IStream *);
};
