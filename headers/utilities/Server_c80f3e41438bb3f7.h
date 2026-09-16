#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 1 member(s).
namespace Microsoft::CoreUI::Rotation {
class Server {
public:
    class PhoneRotationManager;
    class RotationManager;
    class RotationManagerEndpoint;
    class RotationManager__OrientationServiceRunningChangedEventHandler;
    class RotationManager__PropertyChangedEventHandler;
    class TestRotationManager;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceOrientationCallback@Server@Rotation@CoreUI@Microsoft@@YAXPEAXW4DEVICE_ORIENTATION@@@Z
    void DeviceOrientationCallback(void *, int);
};
} // namespace Microsoft::CoreUI::Rotation
