#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class RemoteBasicViewAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BasicWindowsChanged@RemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUNotificationList__ListOperation@2345@PEAVObject@System@@@Z
    void BasicWindowsChanged(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeProcessId@RemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@I@Z
    void ChangeProcessId(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateView@RemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXAEAH@Z
    void CreateView(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@RemoteBasicViewAdapter@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
