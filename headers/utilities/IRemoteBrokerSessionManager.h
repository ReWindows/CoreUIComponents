#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteBrokerSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateModernActivation@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@1ULaunchFlags@345@1AEAH@Z
    void InitiateModernActivation(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchLegacyChildTask@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@1ULaunchFlags@345@AEAH@Z
    void LaunchLegacyChildTask(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchLegacySession@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@11AEAH@Z
    void LaunchLegacySession(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLoadingScreenProperties@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXIPEAVString@System@@I@Z
    void UpdateLoadingScreenProperties(unsigned int, WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSession@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerSession@2345@XZ
    WindissectOpaque * get_CurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentWindow@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_CurrentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Sessions@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Sessions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleSession@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerSession@2345@XZ
    WindissectOpaque * get_VisibleSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleWindow@IRemoteBrokerSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_VisibleWindow();
};
} // namespace Microsoft::CoreUI::Navigation::Server
