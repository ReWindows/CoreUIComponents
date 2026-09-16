#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 15 member(s).
namespace Microsoft::CoreUI::Test {
class ITestInterface {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ChangeBlobProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAXPEAVByte_1D@System@@@Z
    void ChangeBlobProp(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ChangeIntProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAXH@Z
    void ChangeIntProp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ChangeStringProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void ChangeStringProp(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?ChangeStructProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAXUTestStruct@234@@Z
    void ChangeStructProp(::Microsoft::CoreUI::Test::TestStruct);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteTest@ITestInterface@Test@CoreUI@Microsoft@@QEAAXXZ
    void CompleteTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushImmediately@ITestInterface@Test@CoreUI@Microsoft@@QEAAXXZ
    void FlushImmediately();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlainMethod@ITestInterface@Test@CoreUI@Microsoft@@QEAAXXZ
    void PlainMethod();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveInterface@ITestInterface@Test@CoreUI@Microsoft@@QEAAXPEAV1234@H@Z
    void ReceiveInterface(::Microsoft::CoreUI::Test::ITestInterface *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronousCall@ITestInterface@Test@CoreUI@Microsoft@@QEAAXAEAH@Z
    void SynchronousCall(int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?get_BlobProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAPEAVByte_1D@System@@XZ
    WindissectOpaque * get_BlobProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?get_IntProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAHXZ
    int get_IntProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?get_InterfaceProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAPEAV1234@XZ
    ::Microsoft::CoreUI::Test::ITestInterface * get_InterfaceProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?get_ListProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAPEAVIExportMessageList@34@XZ
    ::Microsoft::CoreUI::IExportMessageList * get_ListProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?get_StringProp@ITestInterface@Test@CoreUI@Microsoft@@QEAAPEAVString@System@@XZ
    WindissectOpaque * get_StringProp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?get_StructProp@ITestInterface@Test@CoreUI@Microsoft@@QEAA?AUTestStruct@234@XZ
    ::Microsoft::CoreUI::Test::TestStruct get_StructProp();
};
} // namespace Microsoft::CoreUI::Test
