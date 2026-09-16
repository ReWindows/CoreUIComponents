#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 9 member(s).
namespace Windows::Phone::UI::Core {
class TaskmanWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNavigationClient@TaskmanWindow@Core@UI@Phone@Windows@@QEAAXPEAVNavigationClient@2345@@Z
    void AddNavigationClient(::Windows::Phone::UI::Core::NavigationClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@TaskmanWindow@Core@UI@Phone@Windows@@SAPEAV12345@XZ
    static ::Windows::Phone::UI::Core::TaskmanWindow * GetInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskIdForWindowId@TaskmanWindow@Core@UI@Phone@Windows@@QEAAJIPEAI@Z
    long GetTaskIdForWindowId(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNavigationClient@TaskmanWindow@Core@UI@Phone@Windows@@QEAAXPEAVNavigationClient@2345@@Z
    void RemoveNavigationClient(::Windows::Phone::UI::Core::NavigationClient *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShellHookWindow@TaskmanWindow@Core@UI@Phone@Windows@@AEAAPEAUHWND__@@XZ
    HWND__* CreateShellHookWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TaskmanWindow@Core@UI@Phone@Windows@@AEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowClass@TaskmanWindow@Core@UI@Phone@Windows@@AEAAXXZ
    void RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProc@TaskmanWindow@Core@UI@Phone@Windows@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t WindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProcStatic@TaskmanWindow@Core@UI@Phone@Windows@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WindowProcStatic(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace Windows::Phone::UI::Core
