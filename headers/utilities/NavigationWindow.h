#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 14 member(s).
namespace Microsoft::CoreUI::Navigation {
class NavigationWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__ICallbackMessageProxyListener__OnDisconnected@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXPEAVIExportMessageProxy@34@@Z
    void Microsoft__CoreUI__ICallbackMessageProxyListener__OnDisconnected(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportWindow__Register@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__IExportWindow__Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportWindow__set_Owner@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@234@@Z
    void Microsoft__CoreUI__Navigation__IExportWindow__set_Owner(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportWindow__set_TextInputEndpoint@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXUHENDPOINT@MessagingInterop@34@@Z
    void Microsoft__CoreUI__Navigation__IExportWindow__set_TextInputEndpoint(::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__IExportWindow__set_TouchInputEndpoint@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXUHENDPOINT@MessagingInterop@34@@Z
    void Microsoft__CoreUI__Navigation__IExportWindow__set_TouchInputEndpoint(::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteWindow__ChangeIsCreated@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteWindow__ChangeIsCreated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteWindow__RegistrationComplete@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXPEAVIRemoteServerWindow@Server@234@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteWindow__RegistrationComplete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@NavigationWindow@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseProxies@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ReleaseProxies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoutingInfoFromEndpoint@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAA?AURoutingInfo@MessagingInterop@34@UHENDPOINT@634@@Z
    ::Microsoft::CoreUI::MessagingInterop::RoutingInfo RoutingInfoFromEndpoint(::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyProxyConnected@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void VerifyProxyConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@NavigationWindow@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@34@PEAVICallbackWindowOwner@234@UWindowInstanceId@234@UHENDPOINT@834@4@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
};
} // namespace Microsoft::CoreUI::Navigation
