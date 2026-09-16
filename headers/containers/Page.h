#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 32 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class Page {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginActivation@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAV12345@@Z
    void BeginActivation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginClosing@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void BeginClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeactivation@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAV12345@@Z
    void BeginDeactivation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferProcessState@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void DeferProcessState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOrientation@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void EnsureOrientation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeactivating@Page@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsDeactivating();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInactive@Page@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool IsInactive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__CloseComplete@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPage__CloseComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__HideComplete@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPage__HideComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__NavigateAwayComplete@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPage__NavigateAwayComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__NavigateToComplete@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPage__NavigateToComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__RequestClose@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPage__RequestClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__ShowComplete@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Microsoft__CoreUI__Navigation__Client__IExportPage__ShowComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__get_NextPage@Page@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportPage@2345@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPage__get_NextPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft__CoreUI__Navigation__Client__IExportPage__get_PreviousPage@Page@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVIExportPage@2345@XZ
    WindissectOpaque * Microsoft__CoreUI__Navigation__Client__IExportPage__get_PreviousPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBoundsChanged@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXUViewBounds@Server@345@@Z
    void NotifyBoundsChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOrientationChanged@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXUOrientations@Rotation@45@@Z
    void NotifyOrientationChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Page@Client@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNextStepActivate@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ProcessNextStepActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNextStepDeactivate@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ProcessNextStepDeactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStateWorker@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ProcessStateWorker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetState@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXUPage__State@2345@@Z
    void SetTargetState(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNavigationTimeout@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void StartNavigationTimeout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopNavigationTimeout@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXUTimeoutInfo__EventType@345@@Z
    void StopNavigationTimeout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SystemKeyHandled@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXUSystemKey@345@_N@Z
    void SystemKeyHandled(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Page@Client@Navigation@CoreUI@Microsoft@@UEAAPEAVString@System@@XZ
    virtual WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Construct@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVMessageFactory@MessagingInterop@45@PEAVString@System@@1@Z
    void _Construct(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Name@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_Name(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_UI@Page@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void set_UI(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Visible@Page@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Visible(bool);
};
} // namespace Microsoft::CoreUI::Navigation::Client
