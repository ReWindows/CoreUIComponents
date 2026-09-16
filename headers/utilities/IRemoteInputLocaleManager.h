#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 13 member(s).
class IRemoteInputLocaleManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNotificationCounter@IRemoteInputLocaleManager@@QEAAXI@Z
    void ClearNotificationCounter(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareLocaleDownload@IRemoteInputLocaleManager@@QEAAXULocaleList@@0@Z
    void PrepareLocaleDownload(LocaleList, LocaleList);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestInputLocaleChange@IRemoteInputLocaleManager@@QEAAXI@Z
    void RequestInputLocaleChange(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocaleEnabled@IRemoteInputLocaleManager@@QEAAXI_N@Z
    void SetInputLocaleEnabled(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputLocaleEnabledList@IRemoteInputLocaleManager@@QEAAXULocaleList@@@Z
    void SetInputLocaleEnabledList(LocaleList);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputMethodsAll@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_InputMethodsAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputMethodsEnabled@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_InputMethodsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputMethodsHardwareKBAll@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_InputMethodsHardwareKBAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputMethodsHardwareKBEnabled@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_InputMethodsHardwareKBEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalesAll@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_LocalesAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalesHardwareKBEnabled@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_LocalesHardwareKBEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalesSoftwareKBEnabled@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_LocalesSoftwareKBEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalesSoftwareKBInstalled@IRemoteInputLocaleManager@@QEAA?AULocaleList@@XZ
    LocaleList get_LocalesSoftwareKBInstalled();
};
