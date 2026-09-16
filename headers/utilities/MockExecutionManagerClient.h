#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class MockExecutionManagerClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@MockExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@UEAAXUBufferInfo@MessagingInterop@45@@Z
    virtual void Callback_OnMessage(::Microsoft::CoreUI::MessagingInterop::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToMockExecutionManagerEndpoint@MockExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ConnectToMockExecutionManagerEndpoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExecutionManagerTaskController__CompleteTask@MockExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void Microsoft__CoreUI__Navigation__Client__IExecutionManagerTaskController__CompleteTask(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MockExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendExecutionManagerClientRegisterMsg@MockExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void SendExecutionManagerClientRegisterMsg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@MockExecutionManagerClient@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@MessagingInterop@45@PEAVIExecutionManagerClientOwner@2345@@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Client
