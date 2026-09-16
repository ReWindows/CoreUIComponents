#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 15 member(s).
namespace Microsoft::CoreUI::Proxy {
class MessageProxyMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnInsertBool@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@_N@Z
    void IRemoteMessageMapListener__OnInsertBool(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnInsertInt32@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void IRemoteMessageMapListener__OnInsertInt32(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnInsertString@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@0@Z
    void IRemoteMessageMapListener__OnInsertString(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnRemoveAt@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void IRemoteMessageMapListener__OnRemoveAt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnReplaceBool@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@_N@Z
    void IRemoteMessageMapListener__OnReplaceBool(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnReplaceInt32@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@H@Z
    void IRemoteMessageMapListener__OnReplaceInt32(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnReplaceString@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@0@Z
    void IRemoteMessageMapListener__OnReplaceString(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IRemoteMessageMapListener__OnReplaceUInt32@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@I@Z
    void IRemoteMessageMapListener__OnReplaceUInt32(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalClear@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAX_N@Z
    void InternalClear(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageProxyMap@Proxy@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInsert@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@@Z
    void OnInsert(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReplace@MessageProxyMap@Proxy@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@@Z
    void OnReplace(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageProxyMap@Proxy@CoreUI@Microsoft@@UEAA@XZ
    virtual ~MessageProxyMap();
};
} // namespace Microsoft::CoreUI::Proxy
