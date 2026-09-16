#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class TestRemoteViewManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteView@TestRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVMessageObject@Proxy@45@PEAVServerTask@2345@@Z
    virtual ::Microsoft::CoreUI::Proxy::MessageObject * GetRemoteView(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteWindow@TestRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVIRemoteServerWindow@2345@PEAVServerWindow@2345@@Z
    virtual WindissectOpaque * GetRemoteWindow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TestRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewManagerPropertyChanged@TestRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@UEAAXUViewManager__Property@2345@@Z
    virtual void ViewManagerPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@TestRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@TestRemoteViewManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteTestView@2345@XZ
    WindissectOpaque * get_ActiveView();
};
} // namespace Microsoft::CoreUI::Navigation::Server
