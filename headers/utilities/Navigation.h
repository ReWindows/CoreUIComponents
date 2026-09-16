#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI {
class Navigation {
public:
    class ActivationReason__Boxed;
    class AnimationFlags__Boxed;
    class AnimationType__Boxed;
    class AppWindowPresenterKind__Boxed;
    class AppWindowShowOptions__Boxed;
    class ApplicationLayer__Boxed;
    class ApplicationWindowFrameStyle__Boxed;
    class ApplicationWindowTitleBarVisibility__Boxed;
    class ClientDisconnectReason__Boxed;
    class CloseSessionOption__Boxed;
    class Direction__Boxed;
    class DisplayRegionId__Boxed;
    class HideOptions__Boxed;
    class HostId__Boxed;
    class ICallbackTaskOwner;
    class LaunchFlags__Boxed;
    class NavigationValidationException;
    class NavigationWindow;
    class PMTerminalHandle__Boxed;
    class RestrictedModeFlags__Boxed;
    class RestrictedModeMask__Boxed;
    class Server;
    class ServerTaskState__Boxed;
    class SessionInstanceId__Boxed;
    class SessionManagerActivationLevel__Boxed;
    class ShutdownImportance__Boxed;
    class SystemKey__Boxed;
    class Task;
    class TaskInstanceId__Boxed;
    class TaskType__Boxed;
    class TaskUri;
    class TimeoutInfo;
    class TimeoutInfo__EventType__Boxed;
    class TimeoutInfo__TimeoutModifierType__Boxed;
    class Utilities;
    class ViewActivationFlags__Boxed;
    class ViewConsolidatedState__Boxed;
    class ViewDescriptionHandle__Boxed;
    class ViewInstanceId__Boxed;
    class ViewNavigationLevel__Boxed;
    class WindowInstanceId__Boxed;
    class WindowOcclusion__Boxed;
    class WindowType__Boxed;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRegQueryValue@Navigation@CoreUI@Microsoft@@YA_NPEAUHKEY__@@PEB_WPEAK@Z
    bool ReadRegQueryValue(HKEY__*, wchar_t const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRegStringValue@Navigation@CoreUI@Microsoft@@YA_NPEAUHKEY__@@PEB_WK1@Z
    bool ReadRegStringValue(HKEY__*, wchar_t const *, unsigned long, wchar_t const *);
};
} // namespace Microsoft::CoreUI
