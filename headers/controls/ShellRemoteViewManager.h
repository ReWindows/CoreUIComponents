#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 16 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ShellRemoteViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationSingleUserActivationPolicyDisabled@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@SA_NXZ
    static bool ApplicationSingleUserActivationPolicyDisabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteView@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteView(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@45@UHENDPOINT@745@@Z
    virtual void OnProxyCreated(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyDisposed@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@45@@Z
    virtual void OnProxyDisposed(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellActivationPolicy@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@SA_NXZ
    static bool ShellActivationPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellRemediationPolicy@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@SA_NXZ
    static bool ShellRemediationPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellWindowsChanged@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void ShellWindowsChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManagerNavigateAwayFromView@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@UViewNavigationLevel@345@@Z
    void ViewManagerNavigateAwayFromView(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManagerPropertyChanged@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXUViewManager__Property@2345@@Z
    virtual void ViewManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManagerRequestConsolidateView@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@@Z
    void ViewManagerRequestConsolidateView(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@ShellRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteShellView@2345@XZ
    WindissectOpaque * get_ActiveView();
};
} // namespace Microsoft::CoreUI::Navigation::Server
