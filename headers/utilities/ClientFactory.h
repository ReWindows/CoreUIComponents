#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Client {
class ClientFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExecutionManagerClient@ClientFactory@Client@CoreUI@Microsoft@@SAPEAVIExecutionManagerClient@2Navigation@34@PEAVIExecutionManagerClientOwner@2634@@Z
    static WindissectOpaque * CreateExecutionManagerClient(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Client__IExportClientFactory__CreateNavigationTask@ClientFactory@Client@CoreUI@Microsoft@@QEAAPEAVIExportTask@Navigation@34@PEAVICallbackTaskOwner@634@UTaskInstanceId@634@UWindowInstanceId@634@URoutingInfo@MessagingInterop@34@@Z
    WindissectOpaque * Microsoft__CoreUI__Client__IExportClientFactory__CreateNavigationTask(WindissectOpaque *, WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Client__IExportClientFactory__CreateNavigationWindow@ClientFactory@Client@CoreUI@Microsoft@@QEAAPEAVIExportWindow@Navigation@34@PEAVICallbackWindowOwner@634@UWindowInstanceId@634@UHENDPOINT@MessagingInterop@34@2@Z
    WindissectOpaque * Microsoft__CoreUI__Client__IExportClientFactory__CreateNavigationWindow(WindissectOpaque *, WindissectOpaque, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Client__IExportClientFactory__CreatePageManager@ClientFactory@Client@CoreUI@Microsoft@@QEAAPEAVIExportPageManager@2Navigation@34@PEAVString@System@@PEAVICallbackPageManagerOwner@2634@@Z
    WindissectOpaque * Microsoft__CoreUI__Client__IExportClientFactory__CreatePageManager(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Client__IExportClientFactory__CreatePageManager@ClientFactory@Client@CoreUI@Microsoft@@QEAAPEAVIExportPageManager@2Navigation@34@UTaskInstanceId@634@_NPEAVICallbackPageManagerOwner@2634@@Z
    WindissectOpaque * Microsoft__CoreUI__Client__IExportClientFactory__CreatePageManager(WindissectOpaque, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@ClientFactory@Client@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnFinalRelease(bool);
};
} // namespace Microsoft::CoreUI::Client
