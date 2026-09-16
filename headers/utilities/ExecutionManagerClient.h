#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class ExecutionManagerClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@SAHPEAVMessageFactory@MessagingInterop@45@PEAVIExecutionManagerClientOwner@2345@V?$ParamRef@VIExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@@Cn@@@Z
    static int Create(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
};
} // namespace Microsoft::CoreUI::Navigation::Client
