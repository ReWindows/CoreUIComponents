#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class ValidationException {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHResult@ValidationException@MessagingInterop@CoreUI@Microsoft@@SAHUErrorSubsystems@234@G@Z
    static int GetHResult(::Microsoft::CoreUI::MessagingInterop::ErrorSubsystems, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ValidationException@MessagingInterop@CoreUI@Microsoft@@QEAAXUErrorSubsystems@234@GPEAVString@System@@@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::ErrorSubsystems, unsigned short, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessDenied@ValidationException@MessagingInterop@CoreUI@Microsoft@@SAPEAV1234@XZ
    static ::Microsoft::CoreUI::MessagingInterop::ValidationException * get_AccessDenied();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ArgumentInvalid@ValidationException@MessagingInterop@CoreUI@Microsoft@@SAPEAV1234@XZ
    static ::Microsoft::CoreUI::MessagingInterop::ValidationException * get_ArgumentInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ArgumentNull@ValidationException@MessagingInterop@CoreUI@Microsoft@@SAPEAV1234@XZ
    static ::Microsoft::CoreUI::MessagingInterop::ValidationException * get_ArgumentNull();
};
} // namespace Microsoft::CoreUI::MessagingInterop
