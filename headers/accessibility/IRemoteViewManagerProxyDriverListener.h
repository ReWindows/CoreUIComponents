#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Navigation::Test {
class IRemoteViewManagerProxyDriverListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestBeginPresentView@IRemoteViewManagerProxyDriverListener@Test@Navigation@CoreUI@Microsoft@@QEAAXIUViewInstanceId@345@_N@Z
    void OnRequestBeginPresentView(unsigned int, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestEndPresentView@IRemoteViewManagerProxyDriverListener@Test@Navigation@CoreUI@Microsoft@@QEAAXIUViewInstanceId@345@_N@Z
    void OnRequestEndPresentView(unsigned int, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestNavigateToView@IRemoteViewManagerProxyDriverListener@Test@Navigation@CoreUI@Microsoft@@QEAAXIUViewInstanceId@345@@Z
    void OnRequestNavigateToView(unsigned int, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation::Test
