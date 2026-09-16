#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 26 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class PageNavigationController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfAllPagesAreDeactivated@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAA_NXZ
    bool CheckIfAllPagesAreDeactivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPendingPageManagerCommandInfo@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void ClearPendingPageManagerCommandInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletePageAwaitingPendingPageManagerCommand@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXXZ
    void CompletePageAwaitingPendingPageManagerCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousPage@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAPEAVPage@2345@PEAV62345@@Z
    WindissectOpaque * GetPreviousPage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@UAnimationFlags@345@@Z
    void Hide(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateAway@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@@Z
    void NavigateAway(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateBack@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAX_NAEA_N@Z
    void NavigateBack(bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateBackToTargetPageInternal@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAA_NPEAVPage@2345@@Z
    bool NavigateBackToTargetPageInternal(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateTo@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@UAnimationFlags@345@@Z
    void NavigateTo(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToPage@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void NavigateToPage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyClosed@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void NotifyClosed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadyToHide@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void NotifyReadyToHide(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReadyToShow@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void NotifyReadyToShow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportPageManagerCommandComplete@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXUNavigationCommand@2345@@Z
    void ReportPageManagerCommandComplete(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void RequestClose(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXUDirection@345@UAnimationType@345@UAnimationFlags@345@@Z
    void Show(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeState@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void SynchronizeState(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@UEAAPEAVString@System@@XZ
    virtual WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPageId@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_CurrentPageId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentPage@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void set_CurrentPage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Visible@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Visible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_VisiblePage@PageNavigationController@Client@Navigation@CoreUI@Microsoft@@QEAAXPEAVPage@2345@@Z
    void set_VisiblePage(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Navigation::Client
