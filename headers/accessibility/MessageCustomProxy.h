#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageCustomProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProxy@MessageCustomProxy@Proxy@CoreUI@Microsoft@@UEAAXPEAVMessageProxy@234@@Z
    virtual void InitializeProxy(::Microsoft::CoreUI::Proxy::MessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@MessageCustomProxy@Proxy@CoreUI@Microsoft@@UEAAXPEAVIExportMessageProxy@34@@Z
    virtual void OnConnected(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@MessageCustomProxy@Proxy@CoreUI@Microsoft@@UEAAXPEAVIExportMessageProxy@34@@Z
    virtual void OnDisconnected(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUsage@MessageCustomProxy@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@MessageCustomProxy@Proxy@CoreUI@Microsoft@@UEAAXPEAVIExportMessageProxy@34@G@Z
    virtual void OnPropertyChanged(::Microsoft::CoreUI::IExportMessageProxy *, unsigned short);
};
} // namespace Microsoft::CoreUI::Proxy
