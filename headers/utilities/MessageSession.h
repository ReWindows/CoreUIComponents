#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 17 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class MessageSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseEndpoint@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXUHENDPOINT@234@@Z
    void CloseEndpoint(::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePort@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVIMessagePort@234@UPSECURITY_DESCRIPTOR@234@@Z
    ::Microsoft::CoreUI::MessagingInterop::IMessagePort * CreatePort(::Microsoft::CoreUI::MessagingInterop::PSECURITY_DESCRIPTOR);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimer@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVMessageTimer@234@PEAVTimeoutHandler@234@@Z
    ::Microsoft::CoreUI::MessagingInterop::MessageTimer * CreateTimer(::Microsoft::CoreUI::MessagingInterop::TimeoutHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferInvoke@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVAction__object__object@System@@PEAVObject@6@1UExternalPriority@234@@Z
    void DeferInvoke(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::ExternalPriority);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferInvoke@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVAction__object@System@@PEAVObject@6@UExternalPriority@234@@Z
    void DeferInvoke(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::ExternalPriority);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferInvoke@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVAction@System@@UExternalPriority@234@@Z
    void DeferInvoke(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::ExternalPriority);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXII@Z
    void DisconnectClient(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCCollectSafe_Run@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXXZ
    void GCCollectSafe_Run();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageSession@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWait@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXUWin32Handle@234@PEAVWaitCallback@234@@Z
    void RegisterWait(::Microsoft::CoreUI::MessagingInterop::Win32Handle, ::Microsoft::CoreUI::MessagingInterop::WaitCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithCoreMessaging@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@234@@Z
    void RegisterWithCoreMessaging(::Microsoft::CoreUI::MessagingInterop::MessageFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendInPlace@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAPEAXUHENDPOINT@234@UExternalPriority@234@I@Z
    void * SendInPlace(::Microsoft::CoreUI::MessagingInterop::HENDPOINT, ::Microsoft::CoreUI::MessagingInterop::ExternalPriority, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWait@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAXUWin32Handle@234@@Z
    void UnregisterWait(::Microsoft::CoreUI::MessagingInterop::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MessageInfo@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVMessageInfo@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::MessageInfo * get_MessageInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Registrar@MessageSession@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVMessageRegistrar@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::MessageRegistrar * get_Registrar();
};
} // namespace Microsoft::CoreUI::MessagingInterop
