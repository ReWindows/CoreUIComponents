#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class BaseRemoteTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseRemoteTask@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@BaseRemoteTask@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVServerTask@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@BaseRemoteTask@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVIRemoteServerWindow@2345@XZ
    WindissectOpaque * get_Window();
};
} // namespace Microsoft::CoreUI::Navigation::Server
