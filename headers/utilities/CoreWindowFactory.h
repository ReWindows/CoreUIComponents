#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 64 member(s).
class CoreWindowFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreWindowFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreWindowFactory@@QEAA@XZ
    CoreWindowFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreWindow@CoreWindowFactory@@UEAAJPEAUHSTRING__@@PEAPEAUICoreWindow@Core@UI@Windows@@@Z
    virtual long CreateCoreWindow(HSTRING__*, ::Windows::UI::Core::ICoreWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreen@CoreWindowFactory@@UEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z
    virtual long CreateSplashScreen(int, ISplashScreen * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindow@CoreWindowFactory@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetAppWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreWindowFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenBackgroundColor@CoreWindowFactory@@UEAAJPEAI@Z
    virtual long GetSplashScreenBackgroundColor(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenImagePath@CoreWindowFactory@@UEAAJPEAPEAUMsgString@@@Z
    virtual long GetSplashScreenImagePath(MsgString * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreWindowFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAttributes@CoreWindowFactory@@UEAAJPEAK@Z
    virtual long GetWindowAttributes(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasExistingSplashScreen@CoreWindowFactory@@UEAAJPEAH@Z
    virtual long HasExistingSplashScreen(int *);
    // Category: Method | Source: PE Export
    // Symbol: ?Initialize@CoreWindowFactory@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z
    virtual long Initialize(IImmersiveMonitor *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWithPosition@CoreWindowFactory@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z
    virtual long InitializeWithPosition(IImmersiveMonitor *, unsigned short const *, tagRECT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreWindowFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationId@CoreWindowFactory@@UEAAJK@Z
    virtual long SetActivationId(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowReuse@CoreWindowFactory@@UEAAJH@Z
    virtual long SetAllowReuse(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@CoreWindowFactory@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@CoreWindowFactory@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSink@CoreWindowFactory@@UEAAJPEAUICoreWindowFactoryPrivCallbackSink@@@Z
    virtual long SetSink(ICoreWindowFactoryPrivCallbackSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskInstanceId@CoreWindowFactory@@UEAAJK@Z
    virtual long SetTaskInstanceId(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewId@CoreWindowFactory@@UEAAJK@Z
    virtual long SetViewId(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAttributes@CoreWindowFactory@@UEAAJK@Z
    virtual long SetWindowAttributes(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowReuseAllowed@CoreWindowFactory@@UEAAJPEAE@Z
    virtual long get_WindowReuseAllowed(unsigned char *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKeyForThirdPartyApp@CoreWindowFactory@@AEAAJPEBG0PEAPEAUHKEY__@@@Z
    long GetRegKeyForThirdPartyApp(unsigned short const *, unsigned short const *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSettings@CoreWindowFactory@@AEAAXXZ
    void LoadSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSplashScreenSettings@CoreWindowFactory@@AEAAJPEAUHKEY__@@@Z
    long LoadSplashScreenSettings(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetAdditionalDataSizeMax@CoreWindowFactory@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long v_GetAdditionalDataSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetHandlerCLSID@CoreWindowFactory@@EEAAAEBU_GUID@@XZ
    virtual _GUID const & v_GetHandlerCLSID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_MarshalAdditionalData@CoreWindowFactory@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long v_MarshalAdditionalData(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowFactory@@EEAA@XZ
    virtual ~CoreWindowFactory();
};
