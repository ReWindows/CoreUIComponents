#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 49 member(s).
namespace System {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CnGetInvariantIgnoreCaseHashCode@String@System@@QEAAHXZ
    int CnGetInvariantIgnoreCaseHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@String@System@@SAHPEAV12@0UStringComparison@2@@Z
    static int Compare(WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@String@System@@QEAAHPEAVObject@2@@Z
    int CompareTo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@System@@SAPEAV12@PEAV12@000@Z
    static WindissectOpaque * Concat(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@System@@SAPEAV12@PEAVObject@2@00@Z
    static WindissectOpaque * Concat(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEmpty@String@System@@SAPEAV12@XZ
    static WindissectOpaque * CreateEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndsWith@String@System@@QEAA_NPEAV12@UStringComparison@2@@Z
    bool EndsWith(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@System@@QEAA_NPEAV12@UStringComparison@2@@Z
    bool Equals(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@System@@SA_NPEAV12@0@Z
    static bool Equals(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandAscii@String@System@@SAXPEBDHPEA_W@Z
    static void ExpandAscii(char const *, int, wchar_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SAPEAV12@PEAVIFormatProvider@2@PEAV12@PEAPEAVObject@2@H@Z
    static WindissectOpaque * Format(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SAPEAV12@PEAVIFormatProvider@2@PEAV12@PEAVObject@2@2222@Z
    static WindissectOpaque * Format(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SAPEAV12@PEAVIFormatProvider@2@PEAV12@PEAVObject@2@222222@Z
    static WindissectOpaque * Format(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SAPEAV12@PEAVIFormatProvider@2@PEAV12@PEAVObject@2@22222@Z
    static WindissectOpaque * Format(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SAPEAV12@PEAVIFormatProvider@2@PEAV12@PEAVObject@2@222@Z
    static WindissectOpaque * Format(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SAPEAV12@PEAVIFormatProvider@2@PEAV12@PEAVObject_1D@2@@Z
    static WindissectOpaque * Format(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@String@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@String@System@@QEAAHPEAV12@UStringComparison@2@@Z
    int IndexOf(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@String@System@@QEAAH_WHH@Z
    int IndexOf(wchar_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCompare@String@System@@SAHPEAV12@0UStringComparison@2@@Z
    static int InternalCompare(WindissectOpaque *, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreateFromUnicodeBytes@String@System@@SAPEAV12@PEAVByte_1D@2@HH_N@Z
    static WindissectOpaque * InternalCreateFromUnicodeBytes(WindissectOpaque *, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalIsTrimWhitespaceChar@String@System@@SA_N_W@Z
    static bool InternalIsTrimWhitespaceChar(wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSimpleSplit@String@System@@QEAAPEAVString_1D@2@_W@Z
    WindissectOpaque * InternalSimpleSplit(wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PadHelper@String@System@@QEAAPEAV12@H_W_N@Z
    WindissectOpaque * PadHelper(int, wchar_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@String@System@@QEAAPEAV12@HH@Z
    WindissectOpaque * Remove(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@String@System@@QEAAPEAV12@H@Z
    WindissectOpaque * Remove(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Replace@String@System@@QEAAPEAV12@PEAV12@0@Z
    WindissectOpaque * Replace(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Replace@String@System@@QEAAPEAV12@_W0@Z
    WindissectOpaque * Replace(wchar_t, wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWith@String@System@@QEAA_NPEAV12@UStringComparison@2@@Z
    bool StartsWith(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Substring@String@System@@QEAAPEAV12@HH@Z
    WindissectOpaque * Substring(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToCharArray@String@System@@QEAAPEAVChar_1D@2@HH@Z
    WindissectOpaque * ToCharArray(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@String@System@@UEAAPEAV12@XZ
    virtual WindissectOpaque * ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@String@System@@QEAAPEAV12@XZ
    WindissectOpaque * Trim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_New@String@System@@SAPEAV12@PEB_WHH@Z
    static WindissectOpaque * _New(wchar_t const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NewFromAscii@String@System@@SAPEAV12@PEBDH@Z
    static WindissectOpaque * _NewFromAscii(char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartsWith@String@System@@SA_NPEBD0PEA_K@Z
    static bool _StartsWith(char const *, char const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@String@System@@QEAA_WH@Z
    wchar_t get_Item(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@String@System@@SA_NPEAV12@0@Z
    static bool op_Inequality(WindissectOpaque *, WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildBuffer@String@System@@CAPEAV12@HH@Z
    static WindissectOpaque * BuildBuffer(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHashCode@String@System@@CAHPEB_WH@Z
    static int ComputeHashCode(wchar_t const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConcatHelper@String@System@@CAPEAV12@PEAPEAV12@H@Z
    static WindissectOpaque * ConcatHelper(WindissectOpaque * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCompareOrdinals@String@System@@CAHPEB_WH0H_N@Z
    static int InternalCompareOrdinals(wchar_t const *, int, wchar_t const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalDoCaseMapping@String@System@@AEAAPEAV12@_N0@Z
    WindissectOpaque * InternalDoCaseMapping(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalDoCaseMapping@String@System@@CAXPEB_WHPEA_W_N2@Z
    static void InternalDoCaseMapping(wchar_t const *, int, wchar_t *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalStrStr@String@System@@CAPEB_WPEB_W_K01@Z
    static wchar_t const * InternalStrStr(wchar_t const *, uint64_t, wchar_t const *, uint64_t);
};
} // namespace System
