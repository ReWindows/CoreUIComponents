#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 45 member(s).
namespace Microsoft::CoreUI::Navigation::Server {
class ForegroundTaskManagerWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortTask@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@UAbortTaskFlags@345@I@Z
    WindissectOpaque AbortTask(WindissectOpaque, WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationBypass@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAIUTaskInstanceId@345@@Z
    unsigned int ActivationBypass(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationPrerequisitePhase@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@IUApplicationLayer@345@_KPEAVString@System@@UGuid@System@@3ULaunchFlags@345@PEAVByte_1D@System@@PEAVServerTask@2345@@Z
    WindissectOpaque ActivationPrerequisitePhase(WindissectOpaque, unsigned int, WindissectOpaque, uint64_t, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTask@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@_NUTASKCANCELLATIONTYPE@2345@@Z
    WindissectOpaque CancelTask(WindissectOpaque, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferNotifyOnModernResourceAcquisition@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@H@Z
    void DeferNotifyOnModernResourceAcquisition(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferNotifyOnTaskCompleted@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVForegroundTaskManagerWrapper__TaskInstanceData@2345@@Z
    void DeferNotifyOnTaskCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferNotifyOnTaskPaused@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVForegroundTaskManagerWrapper__TaskInstanceData@2345@@Z
    void DeferNotifyOnTaskPaused(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferNotifyOnTaskRunning@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVForegroundTaskManagerWrapper__TaskInstanceData@2345@@Z
    void DeferNotifyOnTaskRunning(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateTaskInstanceId@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAIAEAUTaskInstanceId@345@@Z
    unsigned int GenerateTaskInstanceId(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationPolicy@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUACTIVATION_POLICY@2345@PEAVTaskUri@345@@Z
    WindissectOpaque GetActivationPolicy(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationDefaultFullScreenValue@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UGuid@System@@AEA_N@Z
    WindissectOpaque GetApplicationDefaultFullScreenValue(WindissectOpaque, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationDisplayName@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVString@System@@V?$ParamRef@VString@System@@@Cn@@@Z
    WindissectOpaque GetApplicationDisplayName(WindissectOpaque *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationDisplayName@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UGuid@System@@V?$ParamRef@VString@System@@@Cn@@@Z
    WindissectOpaque GetApplicationDisplayName(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskDefaultTransition@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUAnimationType@345@PEAVTaskUri@345@@Z
    WindissectOpaque GetTaskDefaultTransition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@SAXPEAVSessionManager@2345@@Z
    static void Initialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForegroundTaskManager@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int InitializeForegroundTaskManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCBETask@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA_NUTaskInstanceId@345@@Z
    bool IsCBETask(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskBeingDebugged@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA_NUTaskInstanceId@345@@Z
    bool IsTaskBeingDebugged(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskDehydrated@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@AEA_N@Z
    WindissectOpaque IsTaskDehydrated(WindissectOpaque, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchTask@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVString@System@@ULaunchFlags@345@PEAVServerTask@2345@AEAUTaskInstanceId@345@AEA_N@Z
    WindissectOpaque LaunchTask(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnResourceAcquisition@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@H@Z
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnResourceAcquisition(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnShutdownCompleted@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnShutdownCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskCompleted@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@HPEAEI@Z
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskCompleted(WindissectOpaque, int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskPaused@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskPaused(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskRunning@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskRunning(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskRunningEx@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UTASKRUNNING_OPTIONS@2345@@Z
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskRunningEx(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskStateChangeFailed@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UTASK_INSTANCE_STATE@2345@HPEAEI@Z
    void Microsoft__CoreUI__Navigation__Server__IExportForegroundTaskManagerListener__OnTaskStateChangeFailed(WindissectOpaque, WindissectOpaque, int, unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnModernResourceAcquisition@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVObject@System@@0@Z
    void NotifyOnModernResourceAcquisition(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnTaskRunning@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVForegroundTaskManagerWrapper__TaskInstanceData@2345@@Z
    void NotifyOnTaskRunning(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseTask@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@AEAH@Z
    WindissectOpaque PauseTask(WindissectOpaque, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestResourceSet@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@PEAVString@System@@PEAVByte_1D@9@@Z
    WindissectOpaque RequestResourceSet(WindissectOpaque, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTaskHandler@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@PEAVString@System@@V?$ParamRef@VString@System@@@Cn@@@Z
    WindissectOpaque ResolveTaskHandler(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumePrerequisitePhase@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@UApplicationLayer@345@PEAVByte_1D@System@@@Z
    WindissectOpaque ResumePrerequisitePhase(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumePrerequisitePhase@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAIUTaskInstanceId@345@UApplicationLayer@345@IPEAEAEA_N@Z
    unsigned int ResumePrerequisitePhase(WindissectOpaque, WindissectOpaque, unsigned int, unsigned char *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeTask@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UTaskInstanceId@345@UApplicationLayer@345@_NAEAH@Z
    WindissectOpaque ResumeTask(WindissectOpaque, WindissectOpaque, bool, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundTaskInstanceId@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UApplicationLayer@345@_N@Z
    void SetForegroundTaskInstanceId(WindissectOpaque, WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundTaskInstanceId@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UApplicationLayer@345@@Z
    void SetForegroundTaskInstanceId(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskDehydrationEligibility@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UTASKDEHYDRATIONELIGIBILITY@2345@@Z
    void SetTaskDehydrationEligibility(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskProperty@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@UTASKPROPERTY@2345@_K@Z
    void SetTaskProperty(WindissectOpaque, WindissectOpaque, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@UACTIVATIONSHUTDOWNIMPORTANCE@2345@@Z
    WindissectOpaque Shutdown(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@SAXXZ
    static void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserLogoff@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAA?AUError@345@_K@Z
    WindissectOpaque UserLogoff(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@ForegroundTaskManagerWrapper@Server@Navigation@CoreUI@Microsoft@@QEAAXPEAVSessionManager@2345@@Z
    void _Construct(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Server
