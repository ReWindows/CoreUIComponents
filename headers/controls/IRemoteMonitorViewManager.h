#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class IRemoteMonitorViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@IRemoteMonitorViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteMonitorView@2345@XZ
    WindissectOpaque * get_ActiveView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveWindow@IRemoteMonitorViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_ActiveWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Views@IRemoteMonitorViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_Views();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleViews@IRemoteMonitorViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@45@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_VisibleViews();
};
} // namespace Microsoft::CoreUI::Navigation::Server
