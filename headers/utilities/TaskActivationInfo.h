#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class TaskActivationInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushActivationData@TaskActivationInfo@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void FlushActivationData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TaskActivationInfo@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationData@TaskActivationInfo@Server@Navigation@CoreUI@Microsoft@@QEAAXUActivationReason@345@PEAVString@System@@1@Z
    void SetActivationData(WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@TaskActivationInfo@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@PEAVTaskActivationInfo__SendActivationDataHandler@2345@@Z
    void _Construct(WindissectOpaque, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
