#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 14 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteBrokerTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Close(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@_N@Z
    void Close(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveReturnData@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@AEAH@Z
    void SaveReturnData(WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AppUserModelId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Completed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContractId@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FullScreen@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_FullScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsChildTask@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsChildTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Running@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool get_Running();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskInstanceId@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskInstanceId@345@XZ
    WindissectOpaque get_TaskInstanceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TaskType@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAA?AUTaskType@345@XZ
    WindissectOpaque get_TaskType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Uri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@IRemoteBrokerTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_Window();
};
} // namespace Microsoft::CoreUI::Navigation::Server
