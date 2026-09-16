#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 26 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class RemoteViewActivator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActivationDataToActivationMap@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXURemoteViewActivator__ModernApplicationActivationData@2345@@Z
    void AddActivationDataToActivationMap(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferNotifyInitiateModernActivationCompleted@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@IH@Z
    void DeferNotifyInitiateModernActivationCompleted(WindissectOpaque, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPendingInitiateModernActivation@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXURemoteViewActivator__ModernApplicationActivationData@2345@@Z
    void DoPendingInitiateModernActivation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndCloseMatchingViews@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UHostId@345@PEAVNotificationList@2345@_N@Z
    void FindAndCloseMatchingViews(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingView@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UViewInstanceId@345@PEAVNotificationList@2345@@Z
    WindissectOpaque * FindMatchingView(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingViewByWindowInstanceId@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UWindowInstanceId@345@PEAVNotificationList@2345@@Z
    WindissectOpaque * FindMatchingViewByWindowInstanceId(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchingViews@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVArrayList@Collections@System@@PEAVString@8@UHostId@345@PEAVNotificationList@2345@@Z
    WindissectOpaque * FindMatchingViews(WindissectOpaque *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateActivationKey@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@SAPEAVString@System@@PEAV67@UHostId@345@@Z
    static WindissectOpaque * GenerateActivationKey(WindissectOpaque *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingTaskInstanceId@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAHPEAVString@System@@0UViewActivationFlags@345@_NAEAUTaskInstanceId@345@@Z
    int GetPendingTaskInstanceId(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, bool, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestingView@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UWindowInstanceId@345@@Z
    WindissectOpaque * GetRequestingView(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerTask@2345@UViewInstanceId@345@@Z
    WindissectOpaque * GetView(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteViewActivator__Activate@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@00UAnimationType@345@1AEAH@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteViewActivator__Activate(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteViewActivator__Activate@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@11UViewActivationFlags@345@AEAH@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteViewActivator__Activate(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteViewActivator__Activate@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAX_KUWindowInstanceId@345@IPEAVString@System@@UGuid@8@UHostId@345@2UViewActivationFlags@345@00PEAVByte_1D@8@AEAUActivationRequestResult@2345@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteViewActivator__Activate(uint64_t, WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque, uint64_t, uint64_t, WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInitiateModernActivationCompleted@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@0@Z
    void NotifyInitiateModernActivationCompleted(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTaskCompleted@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerTask@2345@@Z
    void OnTaskCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePendingModernActivation@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UHostId@345@0UViewActivationFlags@345@_N_K@Z
    void PreparePendingModernActivation(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque, bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPendingActivations@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@UHostId@345@@Z
    void ProcessPendingActivations(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Quirk_AllowMultiInstanceForContractActivation@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAA_NPEAVString@System@@@Z
    bool Quirk_AllowMultiInstanceForContractActivation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldWaitForCloseCompletion@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAA_NPEAVString@System@@UHostId@345@@Z
    bool ShouldWaitForCloseCompletion(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRequestingView@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAHUWindowInstanceId@345@IPEAVString@System@@11_N@Z
    int ValidateRequestingView(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteViewActivator@Server@Navigation@CoreUI@Microsoft@@UEAA@XZ
    virtual ~RemoteViewActivator();
};
} // namespace Microsoft::CoreUI::Navigation::Server
