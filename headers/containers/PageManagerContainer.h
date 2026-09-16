#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class PageManagerContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PageManagerContainer@Client@Navigation@CoreUI@Microsoft@@SAPEAV12345@PEAVMessageFactory@MessagingInterop@45@PEAVICallbackPageManagerContainerOwner@2345@@Z
    static WindissectOpaque * Create(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@PageManagerContainer@Client@Navigation@CoreUI@Microsoft@@SAPEAV12345@XZ
    static WindissectOpaque * GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPageManagerContainer__SetWindowInstanceId@PageManagerContainer@Client@Navigation@CoreUI@Microsoft@@QEAAXUWindowInstanceId@345@@Z
    void Microsoft__CoreUI__Navigation__Client__IExportPageManagerContainer__SetWindowInstanceId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@PageManagerContainer@Client@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
};
} // namespace Microsoft::CoreUI::Navigation::Client
