#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Analog {
class IAnalogTiles {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHfmlForCurrentInstance@IAnalogTiles@Analog@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVIAnalogTilesListener@234@@Z
    void SetHfmlForCurrentInstance(WindissectOpaque *, ::Microsoft::CoreUI::Analog::IAnalogTilesListener *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHfmlForInstance@IAnalogTiles@Analog@CoreUI@Microsoft@@QEAAXUGuid@System@@PEAVString@6@PEAVIAnalogTilesListener@234@@Z
    void SetHfmlForInstance(WindissectOpaque, WindissectOpaque *, ::Microsoft::CoreUI::Analog::IAnalogTilesListener *);
};
} // namespace Microsoft::CoreUI::Analog
