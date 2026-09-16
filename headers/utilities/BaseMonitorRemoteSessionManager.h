#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseMonitorRemoteSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeBackstackSize@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeBackstackSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMRUListSize@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeMRUListSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOrphanListSize@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeOrphanListSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSessionManagerSessionsChanged@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVMessageObjectList@Proxy@45@UNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void HandleSessionManagerSessionsChanged(::Microsoft::CoreUI::Proxy::MessageObjectList *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVSessionManager@2345@USessionManagerType@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentWindow@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_CurrentWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleWindow@BaseMonitorRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_VisibleWindow();
};
} // namespace Microsoft::CoreUI::Navigation::Server
