#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 42 member(s).
namespace Windows::Phone::UI::Input {
class HardwareButtons {
public:
    class ButtonHandlerHelper;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HardwareButtons@Input@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HardwareButtons@Input@UI@Phone@Windows@@QEAA@XZ
    HardwareButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HardwareButtons@Input@UI@Phone@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@HardwareButtons@Input@UI@Phone@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackButton@HardwareButtons@Input@UI@Phone@Windows@@SAEXZ
    static unsigned char InvokeBackButton();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HardwareButtons@Input@UI@Phone@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HardwareButtons@Input@UI@Phone@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackPressed@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAVBackPressedEventArgs@Input@UI@Phone@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_BackPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CameraHalfPressed@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAVCameraEventArgs@Input@UI@Phone@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CameraHalfPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CameraPressed@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAVCameraEventArgs@Input@UI@Phone@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CameraPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CameraReleased@HardwareButtons@Input@UI@Phone@Windows@@UEAAJPEAU?$IEventHandler@PEAVCameraEventArgs@Input@UI@Phone@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CameraReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackPressed@HardwareButtons@Input@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CameraHalfPressed@HardwareButtons@Input@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CameraHalfPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CameraPressed@HardwareButtons@Input@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CameraPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CameraReleased@HardwareButtons@Input@UI@Phone@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CameraReleased(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementAndUnregister@HardwareButtons@Input@UI@Phone@Windows@@AEAAJXZ
    long DecrementAndUnregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementAndRegister@HardwareButtons@Input@UI@Phone@Windows@@AEAAJXZ
    long IncrementAndRegister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCameraReleased@HardwareButtons@Input@UI@Phone@Windows@@AEAAXXZ
    void InvokeCameraReleased();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPress@HardwareButtons@Input@UI@Phone@Windows@@AEAAJW4ShellButton@@W4ShellButtonPressEvent@@@Z
    long OnButtonPress(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCameraButtons@HardwareButtons@Input@UI@Phone@Windows@@AEAAJXZ
    long RegisterCameraButtons();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HardwareButtons@Input@UI@Phone@Windows@@EEAA@XZ
    virtual ~HardwareButtons();
};
} // namespace Windows::Phone::UI::Input
