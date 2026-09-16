#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageObjectMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@MessageObjectMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@@Z
    void Add(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireOnInsert@MessageObjectMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@UHENDPOINT@MessagingInterop@34@@Z
    void FireOnInsert(WindissectOpaque *, WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireOnReplace@MessageObjectMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@@Z
    void FireOnReplace(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@MessageObjectMap@Proxy@CoreUI@Microsoft@@QEAAX_N@Z
    void InternalClear(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageObjectMap@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@MessageObjectMap@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@UHENDPOINT@634@@Z
    virtual void OnProxyCreated(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@MessageObjectMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Item@MessageObjectMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@@Z
    void set_Item(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageObjectMap@Proxy@CoreUI@Microsoft@@UEAA@XZ
    virtual ~MessageObjectMap();
};
} // namespace Microsoft::CoreUI::Proxy
