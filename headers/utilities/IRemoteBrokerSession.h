#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteBrokerSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionInstanceId@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAA?AUSessionInstanceId@345@XZ
    WindissectOpaque get_SessionInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tasks@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Tasks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@IRemoteBrokerSession@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
