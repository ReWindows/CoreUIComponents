#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class MessagingValidationException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromResult@MessagingValidationException@MessagingInterop@CoreUI@Microsoft@@SAPEAVException@System@@UMessagingResults@234@@Z
    static WindissectOpaque * FromResult(::Microsoft::CoreUI::MessagingInterop::MessagingResults);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@MessagingValidationException@MessagingInterop@CoreUI@Microsoft@@QEAAXUMessagingResults@234@PEAVString@System@@@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::MessagingResults, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::MessagingInterop
