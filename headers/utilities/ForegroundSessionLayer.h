#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ForegroundSessionLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterRestrictedMode@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void EnterRestrictedMode(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitRestrictedMode@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAX_NAEA_N@Z
    void ExitRestrictedMode(bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDefaultSessionUri@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAPEAVString@System@@PEAV67@@Z
    virtual WindissectOpaque * FormatDefaultSessionUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdleCurrentSession@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void IdleCurrentSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestEndPresentView@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void RequestEndPresentView(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibleTask@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVServerTask@2345@PEAVServerWindow@2345@_N@Z
    virtual void SetVisibleTask(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibleTask@ForegroundSessionLayer@Server@Navigation@CoreUI@Microsoft@@UEAAXPEAVServerTask@2345@PEAVServerWindow@2345@_N2@Z
    virtual void UpdateVisibleTask(WindissectOpaque *, WindissectOpaque *, bool, bool);
};
} // namespace Microsoft::CoreUI::Navigation::Server
