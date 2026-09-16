#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI {
class ICallbackMessageProxyListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@ICallbackMessageProxyListener@CoreUI@Microsoft@@QEAAXPEAVIExportMessageProxy@23@@Z
    void OnConnected(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ICallbackMessageProxyListener@CoreUI@Microsoft@@QEAAXPEAVIExportMessageProxy@23@G@Z
    void OnPropertyChanged(::Microsoft::CoreUI::IExportMessageProxy *, unsigned short);
};
} // namespace Microsoft::CoreUI
