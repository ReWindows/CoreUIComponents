#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 3 member(s).
class IRemoteCursorBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEndpoint@IRemoteCursorBroker@@QEAAXURoutingInfo@MessagingInterop@CoreUI@Microsoft@@I_N@Z
    void AddEndpoint(::Microsoft::CoreUI::MessagingInterop::RoutingInfo, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClosestInteractiveBounds@IRemoteCursorBroker@@QEAAXUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z
    void SetClosestInteractiveBounds(CursorIdInfo, CursorClosestInteractiveBoundsRect);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLocked@IRemoteCursorBroker@@QEAAXUCursorIdInfo@@_N@Z
    void SetLocked(CursorIdInfo, bool);
};
