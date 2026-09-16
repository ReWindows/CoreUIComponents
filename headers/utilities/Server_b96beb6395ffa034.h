#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class Server {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Run@Server@1Navigation@CoreUI@Microsoft@@SAXV?$StrongRef@VString@System@@@Cn@@0@Z
    static void Callback_Run(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadHandle@Server@1Navigation@CoreUI@Microsoft@@SA?AUWin32Handle@MessagingInterop@34@I@Z
    static ::Microsoft::CoreUI::MessagingInterop::Win32Handle GetThreadHandle(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBeingDebugged@Server@1Navigation@CoreUI@Microsoft@@SA_NXZ
    static bool IsBeingDebugged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCriticalThread@Server@1Navigation@CoreUI@Microsoft@@SAXI@Z
    static void RegisterCriticalThread(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedEvent@Server@1Navigation@CoreUI@Microsoft@@SAXPEAVString@System@@@Z
    static void SetNamedEvent(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCriticalThread@Server@1Navigation@CoreUI@Microsoft@@SAXI@Z
    static void UnregisterCriticalThread(unsigned int);
};
} // namespace Microsoft::CoreUI::Navigation::Server
