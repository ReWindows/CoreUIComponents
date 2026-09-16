#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseRemoteViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowToView@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void AddWindowToView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActiveWindow@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeActiveWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisibleWindow@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeVisibleWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseServerWindow@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void CloseServerWindow(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateServerWindow@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@URoutingInfo@MessagingInterop@45@1@Z
    void CreateServerWindow(WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowFromView@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void RemoveWindowFromView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@BaseRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@USystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation::Server
