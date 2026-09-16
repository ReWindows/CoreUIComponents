#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 20 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteMonitorView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewBounds@2345@XZ
    WindissectOpaque get_Bounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanNavigateTo@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_CanNavigateTo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientExtensionMap@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageMap@45@XZ
    ::Microsoft::CoreUI::IExportMessageMap * get_ClientExtensionMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_CurrentOrientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageName@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CurrentPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostViewInstanceId@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewInstanceId@345@XZ
    WindissectOpaque get_HostViewInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputEnabled@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_InputEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopLevel@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsTopLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationLevel@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewNavigationLevel@345@XZ
    WindissectOpaque get_NavigationLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUWindowOcclusion@345@XZ
    WindissectOpaque get_Occlusion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentViewInstanceId@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewInstanceId@345@XZ
    WindissectOpaque get_ParentViewInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShellDataRoutingInfo@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@45@XZ
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo get_ShellDataRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedOrientations@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUOrientations@Rotation@45@XZ
    WindissectOpaque get_SupportedOrientations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewInstanceId@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAA?AUViewInstanceId@345@XZ
    WindissectOpaque get_ViewInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Windows@IRemoteMonitorView@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Windows();
};
} // namespace Microsoft::CoreUI::Navigation::Server
