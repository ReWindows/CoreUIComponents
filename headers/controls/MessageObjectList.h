#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 18 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageObjectList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAHPEAVMessageObject@234@@Z
    int Add(::Microsoft::CoreUI::Proxy::MessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAX_N@Z
    void InternalClear(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__Add@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXPEAVIExportMessageObject@34@@Z
    void Microsoft__CoreUI__IExportMessageObjectList__Add(::Microsoft::CoreUI::IExportMessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__Contains@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAA_NPEAVIExportMessageObject@34@@Z
    bool Microsoft__CoreUI__IExportMessageObjectList__Contains(::Microsoft::CoreUI::IExportMessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__GetItem@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAPEAVIExportMessageObject@34@H@Z
    ::Microsoft::CoreUI::IExportMessageObject * Microsoft__CoreUI__IExportMessageObjectList__GetItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__IndexOf@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAHPEAVIExportMessageObject@34@@Z
    int Microsoft__CoreUI__IExportMessageObjectList__IndexOf(::Microsoft::CoreUI::IExportMessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__Insert@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXHPEAVIExportMessageObject@34@@Z
    void Microsoft__CoreUI__IExportMessageObjectList__Insert(int, ::Microsoft::CoreUI::IExportMessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__RemoveAt@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXH@Z
    void Microsoft__CoreUI__IExportMessageObjectList__RemoveAt(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageObjectList__SetItem@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXHPEAVIExportMessageObject@34@@Z
    void Microsoft__CoreUI__IExportMessageObjectList__SetItem(int, ::Microsoft::CoreUI::IExportMessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageObjectList@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyCreated@MessageObjectList@Proxy@CoreUI@Microsoft@@UEAAXAEAURoutingInfo@MessagingInterop@34@UHENDPOINT@634@@Z
    virtual void OnProxyCreated(::Microsoft::CoreUI::MessagingInterop::RoutingInfo &, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXPEAVMessageObject@234@@Z
    void Remove(::Microsoft::CoreUI::Proxy::MessageObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXH@Z
    void RemoveAt(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAPEAVMessageObject@234@H@Z
    ::Microsoft::CoreUI::Proxy::MessageObject * get_Item(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Item@MessageObjectList@Proxy@CoreUI@Microsoft@@QEAAXHPEAVMessageObject@234@@Z
    void set_Item(int, ::Microsoft::CoreUI::Proxy::MessageObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageObjectList@Proxy@CoreUI@Microsoft@@UEAA@XZ
    virtual ~MessageObjectList();
};
} // namespace Microsoft::CoreUI::Proxy
