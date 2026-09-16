#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
class IRemoteEditBufferClientNotify {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEditSettingsResult@IRemoteEditBufferClientNotify@@QEAAX_KGII@Z
    void GetEditSettingsResult(uint64_t, unsigned short, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScopesResult@IRemoteEditBufferClientNotify@@QEAAX_KGII@Z
    void GetInputScopesResult(uint64_t, unsigned short, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumTextLengthResult@IRemoteEditBufferClientNotify@@QEAAX_KI@Z
    void GetMaximumTextLengthResult(uint64_t, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLengthResult@IRemoteEditBufferClientNotify@@QEAAX_KI@Z
    void GetTextLengthResult(uint64_t, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextResult@IRemoteEditBufferClientNotify@@QEAAX_KGPEAVString@System@@I@Z
    void GetTextResult(uint64_t, unsigned short, WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextTagResult@IRemoteEditBufferClientNotify@@QEAAX_KGII@Z
    void GetTextTagResult(uint64_t, unsigned short, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompositionTerminated@IRemoteEditBufferClientNotify@@QEAAX_K@Z
    void NotifyCompositionTerminated(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMethodResult@IRemoteEditBufferClientNotify@@QEAAX_KGI@Z
    void UpdateMethodResult(uint64_t, unsigned short, unsigned int);
};
