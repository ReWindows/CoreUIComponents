#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 27 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteTestTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeFullScreen@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeFullScreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationLayer@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUApplicationLayer@345@XZ
    WindissectOpaque get_ApplicationLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_CurrentOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageName@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CurrentPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentState@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUServerTaskState@345@XZ
    WindissectOpaque get_CurrentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstActivation@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FirstActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreen@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FullScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadingScreenBackgroundColor@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_LoadingScreenBackgroundColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadingScreenFileName@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_LoadingScreenFileName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PauseOnLock@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_PauseOnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResumeOnPowerOn@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_ResumeOnPowerOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Running@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Running();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionDisplayName@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionDisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionInstanceName@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_SessionInstanceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellDataRoutingInfo@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_ShellDataRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedOrientations@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_SupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetState@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUServerTaskState@345@XZ
    WindissectOpaque get_TargetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskInstanceId@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskInstanceId@345@XZ
    WindissectOpaque get_TaskInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskStateFileMappingName@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_TaskStateFileMappingName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskStateFileMappingSize@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_TaskStateFileMappingSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskType@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskType@345@XZ
    WindissectOpaque get_TaskType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@IRemoteTestTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_Window();
};
} // namespace Microsoft::CoreUI::Navigation::Server
