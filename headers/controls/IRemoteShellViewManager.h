#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 23 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteShellViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowToView@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void AddWindowToView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomationConnect@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@PEAVString@System@@@Z
    void AutomationConnect(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActiveWindow@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeActiveWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisibleWindow@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeVisibleWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientOperationComplete@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0PEAVByte_1D@System@@H@Z
    void ClientOperationComplete(WindissectOpaque, WindissectOpaque, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequested@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@I@Z
    void CloseRequested(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseServerWindow@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void CloseServerWindow(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateServerWindow@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@URoutingInfo@MessagingInterop@45@1@Z
    void CreateServerWindow(WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideStatusBarCompleted@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@@Z
    void HideStatusBarCompleted(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateShutdownW@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void InitiateShutdownW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateUserLogoff@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAX_K@Z
    void InitiateUserLogoff(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCriticalThread@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void RegisterCriticalThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowFromView@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void RemoveWindowFromView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAndNavigateToView@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0UViewNavigationLevel@345@UDirection@345@UAnimationType@345@@Z
    void ReplaceAndNavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeAndNavigateToView@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@0UViewNavigationLevel@345@UDirection@345@UAnimationType@345@@Z
    void ResumeAndNavigateToView(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStatusBarCompleted@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@@Z
    void ShowStatusBarCompleted(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyPressed@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@USystemKey@345@@Z
    void SystemKeyPressed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCriticalThread@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void UnregisterCriticalThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellView@2345@XZ
    WindissectOpaque * get_ActiveView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveWindow@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_ActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellWindows@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_ShellWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Views@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Views();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleViews@IRemoteShellViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_VisibleViews();
};
} // namespace Microsoft::CoreUI::Navigation::Server
