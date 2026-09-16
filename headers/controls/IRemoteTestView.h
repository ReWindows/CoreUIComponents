#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 24 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteTestView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeResizing@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void ChangeResizing(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanNavigateTo@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_CanNavigateTo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Consolidated@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewConsolidatedState@345@XZ
    WindissectOpaque get_Consolidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_CurrentOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageName@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CurrentPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentState@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUServerTaskState@345@XZ
    WindissectOpaque get_CurrentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostViewInstanceId@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewInstanceId@345@XZ
    WindissectOpaque get_HostViewInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopLevel@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsTopLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationLevel@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewNavigationLevel@345@XZ
    WindissectOpaque get_NavigationLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentViewInstanceId@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewInstanceId@345@XZ
    WindissectOpaque get_ParentViewInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PauseOnLock@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_PauseOnLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resizing@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Resizing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResumeOnPowerOn@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_ResumeOnPowerOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellDataRoutingInfo@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_ShellDataRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedOrientations@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_SupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetState@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUServerTaskState@345@XZ
    WindissectOpaque get_TargetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Title();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewInstanceId@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewInstanceId@345@XZ
    WindissectOpaque get_ViewInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Windows@IRemoteTestView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Windows();
};
} // namespace Microsoft::CoreUI::Navigation::Server
