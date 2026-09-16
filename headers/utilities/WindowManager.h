#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class WindowManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByInstanceId@WindowManager@Server@Navigation@CoreUI@Microsoft@@QEAAPEAVServerWindow@2345@UWindowInstanceId@345@@Z
    WindissectOpaque * FindWindowByInstanceId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IRemoteWindowManager__RegisterNavigationWindow@WindowManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVIRemoteWindow@2345@UWindowInstanceId@345@URoutingInfo@MessagingInterop@45@2@Z
    void Microsoft__CoreUI__Navigation__Server__IRemoteWindowManager__RegisterNavigationWindow(WindissectOpaque *, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowDestroyed@WindowManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVServerWindow@2345@@Z
    void NotifyWindowDestroyed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@WindowManager@Server@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowHandleWithDxcore@WindowManager@Server@Navigation@CoreUI@Microsoft@@QEAA?AUMessagingResults@MessagingInterop@45@II@Z
    ::Microsoft::CoreUI::MessagingInterop::MessagingResults RegisterWindowHandleWithDxcore(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@WindowManager@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVMessageFactory@MessagingInterop@45@PEAVPortManager@2345@@Z
    void _Construct(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
