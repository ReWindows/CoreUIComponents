#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageProxyList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageListListener__OnInsert@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAAXHPEAVObject@System@@@Z
    void IRemoteMessageListListener__OnInsert(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageListListener__OnRemoveAt@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAAXH@Z
    void IRemoteMessageListListener__OnRemoveAt(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageListListener__OnReplace@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAAXHPEAVObject@System@@@Z
    void IRemoteMessageListListener__OnReplace(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAAX_N@Z
    void InternalClear(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageList__Contains@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAA_NPEAVIExportMessageProxy@34@@Z
    bool Microsoft__CoreUI__IExportMessageList__Contains(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__IExportMessageList__IndexOf@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAAHPEAVIExportMessageProxy@34@@Z
    int Microsoft__CoreUI__IExportMessageList__IndexOf(::Microsoft::CoreUI::IExportMessageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageProxyList@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@MessageProxyList@Proxy@CoreUI@Microsoft@@QEAAPEAVMessageProxy@234@H@Z
    ::Microsoft::CoreUI::Proxy::MessageProxy * get_Item(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageProxyList@Proxy@CoreUI@Microsoft@@UEAA@XZ
    virtual ~MessageProxyList();
};
} // namespace Microsoft::CoreUI::Proxy
