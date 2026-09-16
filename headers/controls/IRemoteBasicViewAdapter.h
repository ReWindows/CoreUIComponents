#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteBasicViewAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWindowToView@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void AddWindowToView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeActiveWindow@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeActiveWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProcessId@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@I@Z
    void ChangeProcessId(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisibleWindow@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@_N@Z
    void ChangeVisibleWindow(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseServerWindow@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void CloseServerWindow(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseView@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@@Z
    void CloseView(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateServerWindow@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@URoutingInfo@MessagingInterop@45@1@Z
    void CreateServerWindow(WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXAEAH@Z
    void CreateView(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowFromView@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@UViewInstanceId@345@@Z
    void RemoveWindowFromView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BasicWindows@IRemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_BasicWindows();
};
} // namespace Microsoft::CoreUI::Navigation::Server
