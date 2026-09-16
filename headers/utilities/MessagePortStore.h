#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Input {
class MessagePortStore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossProcessReceivePort@MessagePortStore@Input@CoreUI@Microsoft@@QEAAPEAVIMessagePort@MessagingInterop@34@PEAVString@System@@UPSECURITY_DESCRIPTOR@634@@Z
    ::Microsoft::CoreUI::MessagingInterop::IMessagePort * GetCrossProcessReceivePort(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::PSECURITY_DESCRIPTOR);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@MessagePortStore@Input@CoreUI@Microsoft@@SAPEAV1234@PEAVMessageFactory@MessagingInterop@34@@Z
    static ::Microsoft::CoreUI::Input::MessagePortStore * GetInstance(::Microsoft::CoreUI::MessagingInterop::MessageFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessagePortStore@Input@CoreUI@Microsoft@@QEAAXXZ
    void OnDispose();
};
} // namespace Microsoft::CoreUI::Input
