#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Formatting {
class Format {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatMethod@Format@Formatting@CoreUI@Microsoft@@SAXPEAVMessageFactory@MessagingInterop@34@PEAVIMessagePort@634@UHENDPOINT@634@_N3W4MessageKind@CnSerialize@234@PEBUTypeExtra_Reflection@Cn@@GPEAPEBXI@Z
    static void FormatMethod(::Microsoft::CoreUI::MessagingInterop::MessageFactory *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, ::Microsoft::CoreUI::MessagingInterop::HENDPOINT, bool, bool, int, ::Cn::TypeExtra_Reflection const *, unsigned short, void const * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnformatAndInvoke@Format@Formatting@CoreUI@Microsoft@@SAXPEAVObject@System@@PEAVIMessagePort@MessagingInterop@34@PEBUTypeExtra_Reflection@Cn@@PEAUMessageHeader@CnSerialize@234@I@Z
    static void UnformatAndInvoke(WindissectOpaque *, ::Microsoft::CoreUI::MessagingInterop::IMessagePort *, ::Cn::TypeExtra_Reflection const *, WindissectOpaque *, unsigned int);
};
} // namespace Microsoft::CoreUI::Formatting
