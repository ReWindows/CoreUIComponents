#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteTestSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClosingTasks@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_ClosingTasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageName@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CurrentPageName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceName@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_InstanceName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionInstanceId@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAA?AUSessionInstanceId@345@XZ
    WindissectOpaque get_SessionInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tasks@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Tasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@IRemoteTestSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
