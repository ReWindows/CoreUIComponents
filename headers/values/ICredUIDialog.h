#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 23 member(s).
class ICredUIDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCredResultsReceived@ICredUIDialog@@QEAAXPEAVICredUIDialogResult@@@Z
    void OnCredResultsReceived(ICredUIDialogResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@ICredUIDialog@@QEAAXUActionDialogResult@@@Z
    void OnDismiss(ActionDialogResult);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AudioType@ICredUIDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_AudioType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthBuffer@ICredUIDialog@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_AuthBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthBufferSize@ICredUIDialog@@QEAAIXZ
    unsigned int get_AuthBufferSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthError@ICredUIDialog@@QEAAIXZ
    unsigned int get_AuthError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AuthPackage@ICredUIDialog@@QEAAIXZ
    unsigned int get_AuthPackage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelButtonText@ICredUIDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_CancelButtonText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientContext@ICredUIDialog@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_ClientContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientContextSize@ICredUIDialog@@QEAAIXZ
    unsigned int get_ClientContextSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientContextTargetCredentialProvider@ICredUIDialog@@QEAA?AUGuid@System@@XZ
    WindissectOpaque get_ClientContextTargetCredentialProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorText@ICredUIDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_ErrorText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@ICredUIDialog@@QEAAIXZ
    unsigned int get_Flags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Importance@ICredUIDialog@@QEAAIXZ
    unsigned int get_Importance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InternalFlags@ICredUIDialog@@QEAAIXZ
    unsigned int get_InternalFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InternalFlags2@ICredUIDialog@@QEAAIXZ
    unsigned int get_InternalFlags2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MessageText@ICredUIDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_MessageText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OkButtonText@ICredUIDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_OkButtonText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingWindowHandle@ICredUIDialog@@QEAA_KXZ
    uint64_t get_RequestingWindowHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Save@ICredUIDialog@@QEAA_NXZ
    bool get_Save();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeoutInMs@ICredUIDialog@@QEAAIXZ
    unsigned int get_TimeoutInMs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@ICredUIDialog@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_Title();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueId@ICredUIDialog@@QEAA?AUGuid@System@@XZ
    WindissectOpaque get_UniqueId();
};
