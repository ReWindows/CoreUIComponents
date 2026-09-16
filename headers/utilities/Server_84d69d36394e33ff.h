#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Navigation {
class Server {
public:
    class ACTIVATION_POLICY__Boxed;
    class ActivationData;
    class ActivationProperties__Boxed;
    class ActivationRequestResult__Boxed;
    class AdjacentDisplayFlags__Boxed;
    class ApplicationViewModeFlags__Boxed;
    class ApplicationViewMode__Boxed;
    class BaseMonitorRemoteSessionManager;
    class BaseMonitorRemoteView;
    class BaseMonitorRemoteViewManager;
    class BaseRemoteSession;
    class BaseRemoteSessionManager;
    class BaseRemoteTask;
    class BaseRemoteView;
    class BaseRemoteViewManager;
    class BrokerRemoteSession;
    class BrokerRemoteSessionManager;
    class BrokerRemoteTask;
    class ClientRemoteSessionManager;
    class ClientRemoteTask;
    class CreateNewViewResult__Boxed;
    class CuiNullableColor__Boxed;
    class CuiPlacement__Boxed;
    class CuiPoint__Boxed;
    class CuiRect__Boxed;
    class CuiSize__Boxed;
    class DebugRemoteSessionManager;
    class ForegroundSessionLayer;
    class ForegroundTaskManagerWrapper;
    class ForegroundTaskManagerWrapper__TaskInstanceData;
    class IRemoteBasicViewAdapter;
    class IRemoteBrokerSession;
    class IRemoteBrokerSessionManager;
    class IRemoteBrokerTask;
    class IRemoteClientTask;
    class IRemoteClientViewCreator;
    class IRemoteDebugSessionManager;
    class IRemoteMonitorView;
    class IRemoteMonitorViewManager;
    class IRemoteServerWindow;
    class IRemoteShellSession;
    class IRemoteShellSessionManager;
    class IRemoteShellTask;
    class IRemoteShellView;
    class IRemoteShellViewManager;
    class IRemoteTestClientSessionManager;
    class IRemoteTestClientViewManager;
    class IRemoteTestSession;
    class IRemoteTestSessionManager;
    class IRemoteTestTask;
    class IRemoteTestView;
    class IRemoteTestViewManager;
    class IRemoteViewActivator;
    class LockSessionLayer;
    class MockExecutionManager;
    class MockExecutionManagerLaunchTaskData;
    class MonitorRemoteView;
    class MonitorRemoteViewManager;
    class NotificationList;
    class NotificationList__ListChangedEventHandler;
    class NotificationMap;
    class NotificationMap__MapChangedEventHandler;
    class OverlaySessionLayer;
    class PortManager;
    class Proxy_IRemoteBasicViewAdapter;
    class Proxy_IRemoteBrokerSession;
    class Proxy_IRemoteBrokerSessionManager;
    class Proxy_IRemoteBrokerTask;
    class Proxy_IRemoteClientSessionManager;
    class Proxy_IRemoteClientTask;
    class Proxy_IRemoteClientViewCreator;
    class Proxy_IRemoteDebugSessionManager;
    class Proxy_IRemoteMonitorSession;
    class Proxy_IRemoteMonitorSessionManager;
    class Proxy_IRemoteMonitorTask;
    class Proxy_IRemoteMonitorView;
    class Proxy_IRemoteMonitorViewManager;
    class Proxy_IRemoteServerWindow;
    class Proxy_IRemoteShellSession;
    class Proxy_IRemoteShellSessionManager;
    class Proxy_IRemoteShellTask;
    class Proxy_IRemoteShellView;
    class Proxy_IRemoteShellViewManager;
    class Proxy_IRemoteTask;
    class Proxy_IRemoteTestClientSessionManager;
    class Proxy_IRemoteTestClientViewManager;
    class Proxy_IRemoteTestSession;
    class Proxy_IRemoteTestSessionManager;
    class Proxy_IRemoteTestTask;
    class Proxy_IRemoteTestView;
    class Proxy_IRemoteTestViewManager;
    class Proxy_IRemoteViewActivator;
    class Proxy_IRemoteWindow;
    class Proxy_IRemoteWindowManager;
    class RemoteBasicViewAdapter;
    class RemoteClientViewCreator;
    class RemoteViewActivator;
    class RemoteViewActivator__ModernActivationCompletedEventArgs__Boxed;
    class RemoteViewActivator__ModernApplicationActivationData;
    class RemoteViewActivator__ModernApplicationActivationData__Boxed;
    class RemoteWindow;
    class Server;
    class ServerTask;
    class ServerTask__NativeTimer;
    class ServerTask__PropertyChangedEventHandler;
    class ServerTask__SupportedOrientationsChangedEventHandler;
    class ServerTask__TaskCompletedEventHandler;
    class ServerWindow;
    class ServerWindow__PropertyChangedEventHandler;
    class Session;
    class SessionLayer;
    class SessionLayer__PropertyChangedEventHandler;
    class SessionManager;
    class SessionManager__DeferredLaunchParams;
    class SessionManager__PendingSessionLaunchedEvent;
    class SessionManager__PropertyChangedEventHandler;
    class SessionManager__SessionClosedEventHandler;
    class SessionManager__SessionLaunchedEventHandler;
    class SessionManager__TaskRunningEventHandler;
    class SessionManager__TaskSuspendedEventHandler;
    class SessionManager__VisualVisibleTaskEventHandler;
    class Session__PropertyChangedEventHandler;
    class ShellRemoteSession;
    class ShellRemoteSessionManager;
    class ShellRemoteTask;
    class ShellRemoteView;
    class ShellRemoteViewManager;
    class TaskActivationInfo;
    class TaskActivationInfo__SendActivationDataHandler;
    class TaskStateTransitions;
    class TaskStateTransitions__StateTransition_1D;
    class TaskStateTransitions__StateTransition_1D_1D;
    class TaskStateTransitions__StateTransition__Boxed;
    class TestClientRemoteSessionManager;
    class TestClientRemoteViewManager;
    class TestRemoteSession;
    class TestRemoteSessionManager;
    class TestRemoteTask;
    class TestRemoteView;
    class TestRemoteViewManager;
    class UserInteractionMode__Boxed;
    class ViewBounds__Boxed;
    class ViewManager;
    class ViewManager__ActivateCompleteEventHandler;
    class ViewManager__ActivateInitiatedEventHandler;
    class ViewManager__BeginPresentViewEventHandler;
    class ViewManager__ClearPersistedStateEventHandler;
    class ViewManager__CloseRequestedCompleteEventHandler;
    class ViewManager__ConsolidateViewEventHandler;
    class ViewManager__EndPresentViewEventHandler;
    class ViewManager__HideStatusBarEventHandler;
    class ViewManager__HideWindowEventHandler;
    class ViewManager__LayoutCompletedEventHandler;
    class ViewManager__NavigateAwayFromViewEventHandler;
    class ViewManager__NavigateToViewEventHandler;
    class ViewManager__NavigateToViewFailedEventHandler;
    class ViewManager__PendingNavigateToViewData__Boxed;
    class ViewManager__PropertyChangedEventHandler;
    class ViewManager__ServerWindowCreatedEventHandler;
    class ViewManager__ShowStandardSystemOverlaysEventHandler;
    class ViewManager__ShowStatusBarEventHandler;
    class ViewManager__SystemKeyClientPressedEventHandler;
    class ViewManager__SystemKeyPressedCompleteEventHandler;
    class ViewManager__TrySetTopMostEventHandler;
    class ViewManager__UIAConnectCompleteEventHandler;
    class ViewManager__UserLogoffCompleteEventHandler;
    class ViewManager__WindowChangedInfo;
    class ViewManager__WindowChangedInfo__Boxed;
    class ViewPresentationMode__Boxed;
    class ViewState__Boxed;
    class ViewWindowingMode__Boxed;
    class WindowManager;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForegroundTaskManagerWorker@Server@Navigation@CoreUI@Microsoft@@YAJPEAPEAUIUnknown@Com@Cn@@@Z
    long CreateForegroundTaskManagerWorker(::Cn::Com::IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializePropertySet@Server@Navigation@CoreUI@Microsoft@@YAJPEAVByte_1D@System@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long DeserializePropertySet(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundAccessState@Server@Navigation@CoreUI@Microsoft@@YAJ_KAEBU_GUID@@PEAW4BACKGROUND_ACCESS_STATE@@@Z
    long GetBackgroundAccessState(uint64_t, _GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundAccessState@Server@Navigation@CoreUI@Microsoft@@YAJ_KPEB_WPEAW4BACKGROUND_ACCESS_STATE@@@Z
    long GetBackgroundAccessState(uint64_t, wchar_t const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMergedSecurityDescriptor@Server@Navigation@CoreUI@Microsoft@@YAJPEAX0PEAPEAX@Z
    long GetMergedSecurityDescriptor(void *, void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedSecurityDescriptor@Server@Navigation@CoreUI@Microsoft@@YAJPEAXPEAU_ACL@@PEAPEAX@Z
    long GetUpdatedSecurityDescriptor(void *, _ACL *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBestUserSidString@Server@Navigation@CoreUI@Microsoft@@YAJ_KPEAPEA_W@Z
    long QueryBestUserSidString(uint64_t, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBackgroundAccessPackage@Server@Navigation@CoreUI@Microsoft@@YAJ_KAEBU_GUID@@@Z
    long RegisterBackgroundAccessPackage(uint64_t, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBackgroundAccessPackage@Server@Navigation@CoreUI@Microsoft@@YAJ_KPEB_W@Z
    long RegisterBackgroundAccessPackage(uint64_t, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializePropertySet@Server@Navigation@CoreUI@Microsoft@@YAIPEAUIPropertySet@Collections@Foundation@Windows@@V?$ParamRef@VByte_1D@System@@@Cn@@@Z
    unsigned int SerializePropertySet(WindissectOpaque *, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation
