#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 22 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteShellTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchChildTask@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@0AEAH@Z
    void LaunchChildTask(WindissectOpaque *, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowVisibleTaskComplete@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ShowVisibleTaskComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_CurrentOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageName@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CurrentPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstActivation@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FirstActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreen@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FullScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadingScreenBackgroundColor@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_LoadingScreenBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadingScreenFileName@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_LoadingScreenFileName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PauseOnLock@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_PauseOnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Running@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Running();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionDisplayName@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionInstanceName@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionInstanceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellDataRoutingInfo@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_ShellDataRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedOrientations@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_SupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskInstanceId@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskInstanceId@345@XZ
    WindissectOpaque get_TaskInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskType@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskType@345@XZ
    WindissectOpaque get_TaskType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@IRemoteShellTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_Window();
};
} // namespace Microsoft::CoreUI::Navigation::Server
