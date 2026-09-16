#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 25 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BrokerRemoteSessionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferNotifyInitiateModernActivationCompleted@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@H@Z
    void DeferNotifyInitiateModernActivationCompleted(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPendingInitiateModernActivation@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DoPendingInitiateModernActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndCloseMatchingTasks@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVNotificationList@2345@@Z
    void FindAndCloseMatchingTasks(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingTaskInstanceId@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@0ULaunchFlags@345@AEAUTaskInstanceId@345@@Z
    int GetPendingTaskInstanceId(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteSession@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVSession@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteSession(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteTask@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteTask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingTask@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UWindowInstanceId@345@@Z
    WindissectOpaque * GetRequestingTask(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHeadlessCapability@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAA_NI@Z
    bool HasHeadlessCapability(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteBrokerSessionManager__InitiateModernActivation@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@1ULaunchFlags@345@1AEAH@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteBrokerSessionManager__InitiateModernActivation(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteBrokerSessionManager__LaunchLegacyChildTask@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@1ULaunchFlags@345@AEAH@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteBrokerSessionManager__LaunchLegacyChildTask(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteBrokerSessionManager__LaunchLegacySession@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@11AEAH@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteBrokerSessionManager__LaunchLegacySession(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInitiateModernActivationCompleted@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@0@Z
    void NotifyInitiateModernActivationCompleted(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskCompleted@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void OnTaskCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePendingModernActivation@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@0ULaunchFlags@345@@Z
    void PreparePendingModernActivation(WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionManagerPropertyChanged@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@UEAAXUSessionManager__Property@2345@@Z
    virtual void SessionManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRequestingTask@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAHUWindowInstanceId@345@IPEAVString@System@@11_N@Z
    int ValidateRequestingTask(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVSessionManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSession@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerSession@2345@XZ
    WindissectOpaque * get_CurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentTask@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_CurrentTask();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleSession@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerSession@2345@XZ
    WindissectOpaque * get_VisibleSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleTask@BrokerRemoteSessionManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteBrokerTask@2345@XZ
    WindissectOpaque * get_VisibleTask();
};
} // namespace Microsoft::CoreUI::Navigation::Server
