#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class MockExecutionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@MockExecutionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUBufferInfo@MessagingInterop@45@@Z
    void Callback_OnMessage(::Microsoft::CoreUI::MessagingInterop::BufferInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@MockExecutionManager@Server@Navigation@CoreUI@Microsoft@@SAPEAV12345@XZ
    static WindissectOpaque * GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchTask@MockExecutionManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVString@System@@PEAEIAEAUTaskInstanceId@345@@Z
    WindissectOpaque LaunchTask(WindissectOpaque *, unsigned char *, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendLaunchTaskMsg@MockExecutionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXUHENDPOINT@MessagingInterop@45@PEAVString@System@@UTaskInstanceId@345@@Z
    void SendLaunchTaskMsg(::Microsoft::CoreUI::MessagingInterop::HENDPOINT, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@MockExecutionManager@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void _Construct();
};
} // namespace Microsoft::CoreUI::Navigation::Server
