#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class RemoteClientViewCreator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteClientViewCreator__CreateNewView@RemoteClientViewCreator@Server@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@IPEAVString@System@@11UViewActivationFlags@345@1AEAUCreateNewViewResult@2345@@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteClientViewCreator__CreateNewView(WindissectOpaque, unsigned int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteClientViewCreator__CreateView@RemoteClientViewCreator@Server@Navigation@CoreUI@Microsoft@@QEAAXUViewInstanceId@345@PEAVString@System@@UGuid@8@UHostId@345@11_K4UViewActivationFlags@345@AEAI@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteClientViewCreator__CreateView(WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, uint64_t, uint64_t, WindissectOpaque, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RemoteClientViewCreator@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@RemoteClientViewCreator@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVIMessagePort@945@PEAVViewManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
