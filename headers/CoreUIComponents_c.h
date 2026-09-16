// Flat C exports observed in CoreUIComponents.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef COREUICOMPONENTS_C_H
#define COREUICOMPONENTS_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: CoreUIClientCreate (ABI unverified)
// Export: CoreUICreateDuplicateWindowFactory (ABI unverified)
// Export: CoreUICreateICoreWindowFactoryEx (ABI unverified)
// Export: CoreUIFactoryCreate (ABI unverified)
// Export: CoreUIServerCreate (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: CoreUIConfigureTestHost (ABI unverified)
// Export: CoreUIClientTestCreate (ABI unverified)
// Export: CoreUIServerTestCreate (ABI unverified)
// Export: MinUserImplNotifyOneCoreTransformMode (ABI unverified)
// Export: MinUserNotifyOneCoreTransformMode (ABI unverified)
// Export: MinUserImplRegisterPointerInputTarget (ABI unverified)
// Export: MinUserRegisterPointerInputTarget (ABI unverified)
// Export: MinUserImplReregisterPointerInputTargets (ABI unverified)
// Export: MinUserReregisterPointerInputTargets (ABI unverified)
// Export: MinUserImplUnregisterPointerInputTarget (ABI unverified)
// Export: MinUserUnregisterPointerInputTarget (ABI unverified)
// Export: CoreUIComponents_ServiceMain (ABI unverified)
// Export: ServiceMain (ABI unverified)
// Export: CoreUIComponents_SvchostPushServiceGlobals (ABI unverified)
// Export: SvchostPushServiceGlobals (ABI unverified)
// Export: CoreUICreateICoreWindowFactory (ABI unverified)
// Export: CreateNavigationClientWindowAdapter (ABI unverified)
// Export: RegisterNavigationClientWindowAdapter (ABI unverified)
// Export: MinUserGetInputHost (ABI unverified)
// Export: MinUserImplGetInputHost (ABI unverified)
// Export: MinUserGetInputRoutingInfo (ABI unverified)
// Export: MinUserImplGetInputRoutingInfo (ABI unverified)
// Export: MinUserImplInputInitialize (ABI unverified)
// Export: MinUserInputInitialize (ABI unverified)
// Export: MinUserImplRequestViewHitTest (ABI unverified)
// Export: MinUserRequestViewHitTest (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // COREUICOMPONENTS_C_H
