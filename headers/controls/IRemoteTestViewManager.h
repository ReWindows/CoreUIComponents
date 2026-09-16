#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteTestViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowToView@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void AddWindowToView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelShutdown@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void CancelShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActiveWindow@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeActiveWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisibleWindow@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeVisibleWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseServerWindow@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void CloseServerWindow(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateServerWindow@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@URoutingInfo@MessagingInterop@45@1@Z
    void CreateServerWindow(WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateMessageFlush@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXII@Z
    void InitiateMessageFlush(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateUserLogoff@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void InitiateUserLogoff(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToView@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@UViewNavigationLevel@345@UDirection@345@UAnimationType@345@@Z
    void NavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowFromView@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void RemoveWindowFromView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@USystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestView@2345@XZ
    WindissectOpaque * get_ActiveView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveWindow@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_ActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Views@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Views();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleViews@IRemoteTestViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_VisibleViews();
};
} // namespace Microsoft::CoreUI::Navigation::Server
