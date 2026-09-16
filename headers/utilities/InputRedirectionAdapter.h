#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Input {
class InputRedirectionAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@InputRedirectionAdapter@Input@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@InputRedirectionAdapter@Input@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@MessagingInterop@34@@Z
    void Register(::Microsoft::CoreUI::MessagingInterop::MessageFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@InputRedirectionAdapter@Input@CoreUI@Microsoft@@SAXUWindowHandle@234@URoutingInfo@MessagingInterop@34@UPointerInputType@234@_N@Z
    static void Register(::Microsoft::CoreUI::Input::WindowHandle, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::Input::PointerInputType, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reregister@InputRedirectionAdapter@Input@CoreUI@Microsoft@@SAXXZ
    static void Reregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@InputRedirectionAdapter@Input@CoreUI@Microsoft@@SAXUWindowHandle@234@URoutingInfo@MessagingInterop@34@UPointerInputType@234@@Z
    static void Unregister(::Microsoft::CoreUI::Input::WindowHandle, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::Input::PointerInputType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputRedirectionState@InputRedirectionAdapter@Input@CoreUI@Microsoft@@QEAAXH_N_KURoutingInfo@MessagingInterop@34@0@Z
    void UpdateInputRedirectionState(int, bool, uint64_t, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@InputRedirectionAdapter@Input@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@MessagingInterop@34@UWindowHandle@234@URoutingInfo@634@UPointerInputType@234@_N@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::Input::WindowHandle, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::Input::PointerInputType, bool);
};
} // namespace Microsoft::CoreUI::Input
