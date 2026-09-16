#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::MessagingInterop {
class DoubleListItem__FIFO {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DoubleListItem__FIFO@MessagingInterop@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@DoubleListItem__FIFO@MessagingInterop@CoreUI@Microsoft@@QEAAXPEAVDoubleListItem@234@@Z
    void Remove(::Microsoft::CoreUI::MessagingInterop::DoubleListItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Head@DoubleListItem__FIFO@MessagingInterop@CoreUI@Microsoft@@QEAAPEAVDoubleListItem@234@XZ
    ::Microsoft::CoreUI::MessagingInterop::DoubleListItem * get_Head();
};
} // namespace Microsoft::CoreUI::MessagingInterop
