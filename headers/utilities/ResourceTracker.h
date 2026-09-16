#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class ResourceTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTracking@ResourceTracker@MessagingInterop@CoreUI@Microsoft@@SAXPEAVITrackableResource@234@@Z
    static void CancelTracking(::Microsoft::CoreUI::MessagingInterop::ITrackableResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ResourceTracker@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetireEntry@ResourceTracker@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVResourceTracker__Entry@234@@Z
    void RetireEntry(::Microsoft::CoreUI::MessagingInterop::ResourceTracker__Entry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackWorker@ResourceTracker@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVResourceTracker__Entry@234@PEAVObject@System@@@Z
    ::Microsoft::CoreUI::MessagingInterop::ResourceTracker__Entry * TrackWorker(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ResourceTracker@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVAction__bool@System@@@Z
    void _Construct(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::MessagingInterop
