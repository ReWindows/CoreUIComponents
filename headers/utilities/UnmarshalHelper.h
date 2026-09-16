#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 15 member(s).
class UnmarshalHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UnmarshalHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@UnmarshalHelper@@UEAAJPEAPEAUIStream@@@Z
    virtual long Clone(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@UnmarshalHelper@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@UnmarshalHelper@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z
    virtual long CopyTo(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@UnmarshalHelper@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UnmarshalHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@UnmarshalHelper@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UnmarshalHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@UnmarshalHelper@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@UnmarshalHelper@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@UnmarshalHelper@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@UnmarshalHelper@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@UnmarshalHelper@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UnmarshalHelper@@QEAA@PEBEK@Z
    UnmarshalHelper(unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@UnmarshalHelper@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
};
