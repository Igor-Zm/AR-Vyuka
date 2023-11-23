#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Argument>
struct List_1_t988846CAEF609ACC7D1C79A3B6E23A5C5706EDE6;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Constant>
struct List_1_tA92CE35C0CA8F47D9DA61153DADA4A997C0D3048;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Expression>
struct List_1_t74F8975B7818A9AF839316B204D2B8B9B8095E1F;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Function>
struct List_1_t366350BFC6F30DC8D39F8BE15177129EB3CE3279;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.parsertokens.KeyWord>
struct List_1_t48F31FA39903F7B3076A14ADDC923E893268FB51;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>
struct List_1_t1066F23710B975B7F8366D381935E50E21D1418A;
// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.parsertokens.Token>
struct List_1_t02BFEC5432A5D2761D99EFB1B3C34030E686DDF0;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// org.mariuszgromada.math.mxparser.PrimitiveElement[]
struct PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4;
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue[]
struct SpecialValueU5BU5D_t24F7DC457BA9CA50CB000AE824F888E68BA30CEC;
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric[]
struct SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
// org.mariuszgromada.math.mxparser.Argument
struct Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3;
// org.mariuszgromada.math.mxparser.ArgumentExtension
struct ArgumentExtension_tB28A6863F07ED23B0F3554176C5F5806DB3D4178;
// org.mariuszgromada.math.mxparser.Constant
struct Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC;
// org.mariuszgromada.math.mxparser.Expression
struct Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// org.mariuszgromada.math.mxparser.mathcollection.PhysicalConstants
struct PhysicalConstants_t7B5373883AB867C2402F517D3F8DCBBD0297380F;
// org.mariuszgromada.math.mxparser.mathcollection.PrimesCache
struct PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131;
// org.mariuszgromada.math.mxparser.PrimitiveElement
struct PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A;
// org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions
struct ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions
struct SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3;
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue
struct SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE;
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric
struct SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811;
// org.mariuszgromada.math.mxparser.mathcollection.Statistics
struct Statistics_t1745F87FF3826D0E109FA0D02BA525E1948ECCCD;
// System.String
struct String_t;
// org.mariuszgromada.math.mxparser.mathcollection.Units
struct Units_t75D974EAA4EC8D2739F13E5C53D6F0A00FD64793;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult
struct CanonicalResult_tD27CD10B5E86F52F7643812164863383601A1956;

IL2CPP_EXTERN_C RuntimeClass* BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberTheory_tDB8B84BB7209E2A62467F31121733CC1A7DBEED6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral212EF11BFBF4507D756826D18645BC2D5D3438D3;
IL2CPP_EXTERN_C String_t* _stringLiteral9DFFC3267C5F999585E61B45BA9C8DF18D4B02CA;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFD36EDC4C7125CBCEC9A4C409AE10A62FB2AAE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD27B0F21298B57BC99EF1CA57488E0EB29BF23EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED5D57CC27CE7B1A31B4F4BBF702E27E36F66767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA27B29129107C505D7C7C80A302D0806599108FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4;
struct SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>
struct List_1_t1066F23710B975B7F8366D381935E50E21D1418A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpecialValueU5BU5D_t24F7DC457BA9CA50CB000AE824F888E68BA30CEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1066F23710B975B7F8366D381935E50E21D1418A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpecialValueU5BU5D_t24F7DC457BA9CA50CB000AE824F888E68BA30CEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations
struct BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33  : public RuntimeObject
{
};

struct BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations::DEFAULT_COMPARISON_EPSILON
	double ___DEFAULT_COMPARISON_EPSILON_0;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations::epsilon
	double ___epsilon_1;
	// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations::epsilonComparison
	bool ___epsilonComparison_2;
};

// org.mariuszgromada.math.mxparser.mathcollection.Coefficients
struct Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD  : public RuntimeObject
{
};

struct Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields
{
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpAn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpAn_0;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpAd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpAd_1;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpBn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpBn_2;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpBd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpBd_3;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpCn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpCn_4;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpCd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpCd_5;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpDn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpDn_6;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpDd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpDd_7;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpEn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpEn_8;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpEd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpEd_9;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpFn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpFn_10;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpFd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpFd_11;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpGn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpGn_12;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpGd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpGd_13;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpHn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpHn_14;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpHd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpHd_15;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpIn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpIn_16;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpId
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpId_17;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpJn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpJn_18;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpJd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpJd_19;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpKn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpKn_20;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpKd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpKd_21;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpLn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpLn_22;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpLd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpLd_23;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpMn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpMn_24;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpMd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpMd_25;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpNn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpNn_26;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::erfImpNd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___erfImpNd_27;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpAn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpAn_28;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpAd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpAd_29;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpBn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpBn_30;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpBd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpBd_31;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpCn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpCn_32;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpCd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpCd_33;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpDn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpDn_34;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpDd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpDd_35;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpEn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpEn_36;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpEd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpEd_37;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpFn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpFn_38;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpFd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpFd_39;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpGn
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpGn_40;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::ervInvImpGd
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___ervInvImpGd_41;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::EI
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___EI_42;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::lanchosGamma
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___lanchosGamma_43;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::logGammaA
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___logGammaA_44;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::logGammaB
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___logGammaB_45;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::logGammaC
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___logGammaC_46;
	// System.Double[] org.mariuszgromada.math.mxparser.mathcollection.Coefficients::lambertWqNearZero
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___lambertWqNearZero_47;
};

// org.mariuszgromada.math.mxparser.mathcollection.MathConstants
struct MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9  : public RuntimeObject
{
};

struct MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::PIBY2
	double ___PIBY2_1;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::PIINV
	double ___PIINV_2;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::SQRT2
	double ___SQRT2_45;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::LNPI
	double ___LNPI_48;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::EXP_MINUS_E
	double ___EXP_MINUS_E_49;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::EXP_1_OVER_E
	double ___EXP_1_OVER_E_50;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::LN_SQRT2
	double ___LN_SQRT2_52;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::SQRT2BY2
	double ___SQRT2BY2_53;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::SQRT3
	double ___SQRT3_54;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::SQRT3BY2
	double ___SQRT3BY2_55;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::D2BYSQRT3
	double ___D2BYSQRT3_56;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::SQRT3BY3
	double ___SQRT3BY3_57;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathConstants::SQRT5
	double ___SQRT5_58;
};

// org.mariuszgromada.math.mxparser.mathcollection.PhysicalConstants
struct PhysicalConstants_t7B5373883AB867C2402F517D3F8DCBBD0297380F  : public RuntimeObject
{
};

// org.mariuszgromada.math.mxparser.mathcollection.PrimesCache
struct PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131  : public RuntimeObject
{
	// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::maxNumInCache
	int32_t ___maxNumInCache_6;
	// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::numberOfPrimes
	int32_t ___numberOfPrimes_7;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::computingTime
	double ___computingTime_8;
	// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::cacheStatus
	bool ___cacheStatus_9;
	// System.Boolean[] org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::isPrime
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isPrime_10;
	// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::initSuccessful
	bool ___initSuccessful_11;
};

// org.mariuszgromada.math.mxparser.PrimitiveElement
struct PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A  : public RuntimeObject
{
	// System.Int32 org.mariuszgromada.math.mxparser.PrimitiveElement::myTypeId
	int32_t ___myTypeId_0;
};

// org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions
struct ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB  : public RuntimeObject
{
};

struct ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields
{
	// System.Random org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::randomGenerator
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___randomGenerator_0;
	// org.mariuszgromada.math.mxparser.Constant org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::pp
	Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* ___pp_1;
	// org.mariuszgromada.math.mxparser.Constant org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::vv
	Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* ___vv_2;
	// org.mariuszgromada.math.mxparser.Expression org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntSolveStud
	Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___qntSolveStud_3;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions
struct SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3  : public RuntimeObject
{
};

struct SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::EI_DBL_EPSILON
	double ___EI_DBL_EPSILON_0;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::EI_EPSILON
	double ___EI_EPSILON_1;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::doublePrecision
	double ___doublePrecision_3;
};

// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue
struct SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE  : public RuntimeObject
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::x
	double ___x_1;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::xFrom
	double ___xFrom_2;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::xTo
	double ___xTo_3;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::fv
	double ___fv_4;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::fvdeg
	double ___fvdeg_5;
};

struct SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_StaticFields
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::EPSILON
	double ___EPSILON_0;
};

// org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric
struct SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811  : public RuntimeObject
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::factor
	double ___factor_110;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::xrad
	double ___xrad_111;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::xdeg
	double ___xdeg_112;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::xradFrom
	double ___xradFrom_113;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::xradTo
	double ___xradTo_114;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::sin
	double ___sin_115;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::cos
	double ___cos_116;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::tan
	double ___tan_117;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::ctan
	double ___ctan_118;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::sec
	double ___sec_119;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::csc
	double ___csc_120;
};

struct SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::EPSILON
	double ___EPSILON_0;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_0
	double ___SIN_0_1;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_0
	double ___COS_0_2;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_0
	double ___TAN_0_3;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_0
	double ___CTAN_0_4;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_0
	double ___SEC_0_5;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_0
	double ___CSC_0_6;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_30
	double ___SIN_30_7;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_30
	double ___COS_30_8;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_30
	double ___TAN_30_9;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_30
	double ___CTAN_30_10;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_30
	double ___SEC_30_11;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_30
	double ___CSC_30_12;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_45
	double ___SIN_45_13;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_45
	double ___COS_45_14;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_45
	double ___TAN_45_15;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_45
	double ___CTAN_45_16;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_45
	double ___SEC_45_17;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_45
	double ___CSC_45_18;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_60
	double ___SIN_60_19;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_60
	double ___COS_60_20;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_60
	double ___TAN_60_21;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_60
	double ___CTAN_60_22;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_60
	double ___SEC_60_23;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_60
	double ___CSC_60_24;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_90
	double ___SIN_90_25;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_90
	double ___COS_90_26;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_90
	double ___TAN_90_27;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_90
	double ___CTAN_90_28;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_90
	double ___SEC_90_29;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_90
	double ___CSC_90_30;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_120
	double ___SIN_120_31;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_120
	double ___COS_120_32;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_120
	double ___TAN_120_33;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_120
	double ___CTAN_120_34;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_120
	double ___SEC_120_35;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_120
	double ___CSC_120_36;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_135
	double ___SIN_135_37;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_135
	double ___COS_135_38;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_135
	double ___TAN_135_39;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_135
	double ___CTAN_135_40;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_135
	double ___SEC_135_41;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_135
	double ___CSC_135_42;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_150
	double ___SIN_150_43;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_150
	double ___COS_150_44;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_150
	double ___TAN_150_45;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_150
	double ___CTAN_150_46;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_150
	double ___SEC_150_47;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_150
	double ___CSC_150_48;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_180
	double ___SIN_180_49;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_180
	double ___COS_180_50;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_180
	double ___TAN_180_51;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_180
	double ___CTAN_180_52;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_180
	double ___SEC_180_53;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_180
	double ___CSC_180_54;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_210
	double ___SIN_210_55;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_210
	double ___COS_210_56;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_210
	double ___TAN_210_57;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_210
	double ___CTAN_210_58;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_210
	double ___SEC_210_59;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_210
	double ___CSC_210_60;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_225
	double ___SIN_225_61;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_225
	double ___COS_225_62;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_225
	double ___TAN_225_63;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_225
	double ___CTAN_225_64;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_225
	double ___SEC_225_65;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_225
	double ___CSC_225_66;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_240
	double ___SIN_240_67;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_240
	double ___COS_240_68;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_240
	double ___TAN_240_69;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_240
	double ___CTAN_240_70;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_240
	double ___SEC_240_71;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_240
	double ___CSC_240_72;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_270
	double ___SIN_270_73;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_270
	double ___COS_270_74;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_270
	double ___TAN_270_75;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_270
	double ___CTAN_270_76;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_270
	double ___SEC_270_77;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_270
	double ___CSC_270_78;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_300
	double ___SIN_300_79;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_300
	double ___COS_300_80;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_300
	double ___TAN_300_81;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_300
	double ___CTAN_300_82;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_300
	double ___SEC_300_83;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_300
	double ___CSC_300_84;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_315
	double ___SIN_315_85;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_315
	double ___COS_315_86;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_315
	double ___TAN_315_87;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_315
	double ___CTAN_315_88;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_315
	double ___SEC_315_89;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_315
	double ___CSC_315_90;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_330
	double ___SIN_330_91;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_330
	double ___COS_330_92;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_330
	double ___TAN_330_93;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_330
	double ___CTAN_330_94;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_330
	double ___SEC_330_95;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_330
	double ___CSC_330_96;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SIN_360
	double ___SIN_360_97;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::COS_360
	double ___COS_360_98;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::TAN_360
	double ___TAN_360_99;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CTAN_360
	double ___CTAN_360_100;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::SEC_360
	double ___SEC_360_101;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::CSC_360
	double ___CSC_360_102;
	// org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric[] org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListTrig
	SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* ___valuesListTrig_103;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue> org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListAsin
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesListAsin_104;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue> org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListAcos
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesListAcos_105;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue> org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListAtan
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesListAtan_106;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue> org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListActan
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesListActan_107;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue> org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListAsec
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesListAsec_108;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue> org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::valuesListAcsc
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesListAcsc_109;
};

// org.mariuszgromada.math.mxparser.mathcollection.Statistics
struct Statistics_t1745F87FF3826D0E109FA0D02BA525E1948ECCCD  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// org.mariuszgromada.math.mxparser.mathcollection.Units
struct Units_t75D974EAA4EC8D2739F13E5C53D6F0A00FD64793  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>
struct Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* ____current_3;
};

// org.mariuszgromada.math.mxparser.Argument
struct Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3  : public PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A
{
	// System.Int32 org.mariuszgromada.math.mxparser.Argument::argumentBodyType
	int32_t ___argumentBodyType_12;
	// org.mariuszgromada.math.mxparser.ArgumentExtension org.mariuszgromada.math.mxparser.Argument::argumentExtension
	RuntimeObject* ___argumentExtension_13;
	// System.String org.mariuszgromada.math.mxparser.Argument::description
	String_t* ___description_14;
	// org.mariuszgromada.math.mxparser.Expression org.mariuszgromada.math.mxparser.Argument::argumentExpression
	Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___argumentExpression_15;
	// System.String org.mariuszgromada.math.mxparser.Argument::argumentName
	String_t* ___argumentName_16;
	// System.Int32 org.mariuszgromada.math.mxparser.Argument::argumentType
	int32_t ___argumentType_17;
	// System.Double org.mariuszgromada.math.mxparser.Argument::argumentValue
	double ___argumentValue_18;
	// org.mariuszgromada.math.mxparser.Argument org.mariuszgromada.math.mxparser.Argument::n
	Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* ___n_19;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// org.mariuszgromada.math.mxparser.Constant
struct Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC  : public PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A
{
	// System.String org.mariuszgromada.math.mxparser.Constant::constantName
	String_t* ___constantName_7;
	// System.Double org.mariuszgromada.math.mxparser.Constant::constantValue
	double ___constantValue_8;
	// System.String org.mariuszgromada.math.mxparser.Constant::description
	String_t* ___description_9;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Expression> org.mariuszgromada.math.mxparser.Constant::relatedExpressionsList
	List_1_t74F8975B7818A9AF839316B204D2B8B9B8095E1F* ___relatedExpressionsList_10;
	// System.Boolean org.mariuszgromada.math.mxparser.Constant::syntaxStatus
	bool ___syntaxStatus_11;
	// System.String org.mariuszgromada.math.mxparser.Constant::errorMessage
	String_t* ___errorMessage_12;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// org.mariuszgromada.math.mxparser.Expression
struct Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280  : public PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A
{
	// System.String org.mariuszgromada.math.mxparser.Expression::expressionString
	String_t* ___expressionString_10;
	// System.String org.mariuszgromada.math.mxparser.Expression::expressionStringCleaned
	String_t* ___expressionStringCleaned_11;
	// System.String org.mariuszgromada.math.mxparser.Expression::description
	String_t* ___description_12;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Argument> org.mariuszgromada.math.mxparser.Expression::argumentsList
	List_1_t988846CAEF609ACC7D1C79A3B6E23A5C5706EDE6* ___argumentsList_13;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Function> org.mariuszgromada.math.mxparser.Expression::functionsList
	List_1_t366350BFC6F30DC8D39F8BE15177129EB3CE3279* ___functionsList_14;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Constant> org.mariuszgromada.math.mxparser.Expression::constantsList
	List_1_tA92CE35C0CA8F47D9DA61153DADA4A997C0D3048* ___constantsList_15;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.parsertokens.KeyWord> org.mariuszgromada.math.mxparser.Expression::keyWordsList
	List_1_t48F31FA39903F7B3076A14ADDC923E893268FB51* ___keyWordsList_16;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.parsertokens.Token> org.mariuszgromada.math.mxparser.Expression::initialTokens
	List_1_t02BFEC5432A5D2761D99EFB1B3C34030E686DDF0* ___initialTokens_17;
	// System.Collections.Generic.HashSet`1<System.String> org.mariuszgromada.math.mxparser.Expression::neverParseForImpliedMultiplication
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___neverParseForImpliedMultiplication_18;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.parsertokens.Token> org.mariuszgromada.math.mxparser.Expression::tokensList
	List_1_t02BFEC5432A5D2761D99EFB1B3C34030E686DDF0* ___tokensList_19;
	// System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.Expression> org.mariuszgromada.math.mxparser.Expression::relatedExpressionsList
	List_1_t74F8975B7818A9AF839316B204D2B8B9B8095E1F* ___relatedExpressionsList_20;
	// System.Double org.mariuszgromada.math.mxparser.Expression::computingTime
	double ___computingTime_21;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::expressionWasModified
	bool ___expressionWasModified_22;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::recursiveMode
	bool ___recursiveMode_23;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::verboseMode
	bool ___verboseMode_24;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::impliedMultiplicationMode
	bool ___impliedMultiplicationMode_25;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::disableRounding
	bool ___disableRounding_26;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::syntaxStatus
	bool ___syntaxStatus_29;
	// System.String org.mariuszgromada.math.mxparser.Expression::errorMessage
	String_t* ___errorMessage_30;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::recursionCallPending
	bool ___recursionCallPending_31;
	// System.Int32 org.mariuszgromada.math.mxparser.Expression::recursionCallsCounter
	int32_t ___recursionCallsCounter_32;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::parserKeyWordsOnly
	bool ___parserKeyWordsOnly_33;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::unicodeKeyWordsEnabled
	bool ___unicodeKeyWordsEnabled_34;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::attemptToFixExpStrEnabled
	bool ___attemptToFixExpStrEnabled_35;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::UDFExpression
	bool ___UDFExpression_36;
	// System.Collections.Generic.List`1<System.Double> org.mariuszgromada.math.mxparser.Expression::UDFVariadicParamsAtRunTime
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___UDFVariadicParamsAtRunTime_37;
	// System.Boolean org.mariuszgromada.math.mxparser.Expression::internalClone
	bool ___internalClone_38;
	// System.Int32 org.mariuszgromada.math.mxparser.Expression::optionsChangesetNumber
	int32_t ___optionsChangesetNumber_39;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t5C7AE9554E2B4C10550DDAA6E365CC9DCD5A4473 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t5C7AE9554E2B4C10550DDAA6E365CC9DCD5A4473__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t34E81F1D32D45D9AAEBE427635AFF5C8006EAF8D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t34E81F1D32D45D9AAEBE427635AFF5C8006EAF8D__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=352
struct __StaticArrayInitTypeSizeU3D352_tA36E235BAB515C783896BA81703AC5D3CFE2FE39 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D352_tA36E235BAB515C783896BA81703AC5D3CFE2FE39__padding[352];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=468
struct __StaticArrayInitTypeSizeU3D468_t206D96467EBC412F59D4A3605716F6A8629B6AF7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D468_t206D96467EBC412F59D4A3605716F6A8629B6AF7__padding[468];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct __StaticArrayInitTypeSizeU3D80_tECF787BC490F47611C053B2EDA96DA6658361901 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_tECF787BC490F47611C053B2EDA96DA6658361901__padding[80];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88
struct __StaticArrayInitTypeSizeU3D88_t7619528DBE1D4B6017CBF427AEF5D35175B330B6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_t7619528DBE1D4B6017CBF427AEF5D35175B330B6__padding[88];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t159C4B9BA1038FFE4195ED2DC8EC152A05C94D87 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t159C4B9BA1038FFE4195ED2DC8EC152A05C94D87__padding[96];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF89B591D39DB02EA6364DF1DF2E924B01CB422BB  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF89B591D39DB02EA6364DF1DF2E924B01CB422BB_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::04EBBE5F39C75EBFC36DAFB1270BD15337A21600B7C010E9E9FC8D1B700240F8
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___04EBBE5F39C75EBFC36DAFB1270BD15337A21600B7C010E9E9FC8D1B700240F8_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::0AEB38AB550EB5B292900CECFDA25C22BEE4CC058E1CBF833D22D9713A276F96
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___0AEB38AB550EB5B292900CECFDA25C22BEE4CC058E1CBF833D22D9713A276F96_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::11CFFFE8B1E6EE15C900CEFFD7407617C0CAE5E1D124FD1851434D6F01E88719
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___11CFFFE8B1E6EE15C900CEFFD7407617C0CAE5E1D124FD1851434D6F01E88719_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::140F3C1B319CF21F177ED7D2D743E82889A5E341617DE57FBAE73E40CE6A789C
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___140F3C1B319CF21F177ED7D2D743E82889A5E341617DE57FBAE73E40CE6A789C_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::1415A001CBEB350CCEBF7DEE4381D483C15284F1B527CCCFC66D13F582408A22
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___1415A001CBEB350CCEBF7DEE4381D483C15284F1B527CCCFC66D13F582408A22_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::1565B83CBAC79A4352A66E8A6651922F3F6E3FFF7BC21E9AB973DF5DBAAF2D4B
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___1565B83CBAC79A4352A66E8A6651922F3F6E3FFF7BC21E9AB973DF5DBAAF2D4B_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::17BB0066E9E275C05C33976A7476A9A67DDBF573EA1A164223D4811806B742CE
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___17BB0066E9E275C05C33976A7476A9A67DDBF573EA1A164223D4811806B742CE_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::17BC1CD3D4A84AEFE48B53EC4348C6586B4AAD6BAA2CE78DFF53CB3020B76AFA
	__StaticArrayInitTypeSizeU3D32_t34E81F1D32D45D9AAEBE427635AFF5C8006EAF8D ___17BC1CD3D4A84AEFE48B53EC4348C6586B4AAD6BAA2CE78DFF53CB3020B76AFA_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=468 <PrivateImplementationDetails>::187C9453D92BC7373E87CF167B2A1209F0B2C30DB0459121D2CB00DBCBC85977
	__StaticArrayInitTypeSizeU3D468_t206D96467EBC412F59D4A3605716F6A8629B6AF7 ___187C9453D92BC7373E87CF167B2A1209F0B2C30DB0459121D2CB00DBCBC85977_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::19636D32411FBC275EE0458D092EB4438BF329C94640F6387ED4A22551510B88
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___19636D32411FBC275EE0458D092EB4438BF329C94640F6387ED4A22551510B88_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::1DFBEEF815FD2753CF534EED2217857DC7C719F3A9C6B2DB64B57759C72370BC
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___1DFBEEF815FD2753CF534EED2217857DC7C719F3A9C6B2DB64B57759C72370BC_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::287E80A7B382AAE82526A5C4B181C3971309E6AB8307F93E8D121CC611FAE16B
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___287E80A7B382AAE82526A5C4B181C3971309E6AB8307F93E8D121CC611FAE16B_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::2DA0A8D7217534E4624D82362FF71A3B32504DC6BBC3DCBFCC3FB09611EA2B6E
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___2DA0A8D7217534E4624D82362FF71A3B32504DC6BBC3DCBFCC3FB09611EA2B6E_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::3357FD12A4C6A431BB6C7987324CFE319B85B16C33042A7267C4EF4549D91D90
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___3357FD12A4C6A431BB6C7987324CFE319B85B16C33042A7267C4EF4549D91D90_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::33A70684A1DC35C92ED247AF02C0022C4DE567961B18ACEA2FB8A34EE3DC1811
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___33A70684A1DC35C92ED247AF02C0022C4DE567961B18ACEA2FB8A34EE3DC1811_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::3784412861751747F02F3447841124BD3F7EF1BA5AAD910E74B57AC8BAFB798B
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___3784412861751747F02F3447841124BD3F7EF1BA5AAD910E74B57AC8BAFB798B_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::3E54DDCA64B6026CEB3062E0D5602582863B849A37DECF2C3FD4F6384570D31E
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___3E54DDCA64B6026CEB3062E0D5602582863B849A37DECF2C3FD4F6384570D31E_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::4AF8268E464EB73720B94B49F585D2C19161EF47115DD10EB7A8A7D1FF23BBC2
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___4AF8268E464EB73720B94B49F585D2C19161EF47115DD10EB7A8A7D1FF23BBC2_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::507E2D733312627A71DA81FE2D7882E8E45502A7722994B45BEC1E14DA18B6BB
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___507E2D733312627A71DA81FE2D7882E8E45502A7722994B45BEC1E14DA18B6BB_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5F775B5B7B0177E3005CBBCD49C9BEBA7ECFB5CC7E06449E33268B2F19EA9E5F
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___5F775B5B7B0177E3005CBBCD49C9BEBA7ECFB5CC7E06449E33268B2F19EA9E5F_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::61B1020DCFA9F3378913A7D9444458F932AB899B5E95A535C9CAF48E22C30450
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___61B1020DCFA9F3378913A7D9444458F932AB899B5E95A535C9CAF48E22C30450_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::68C38DE387CAAF28B293BADF97D7428FA94D2665E7EFA8D5CD9D631357746772
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___68C38DE387CAAF28B293BADF97D7428FA94D2665E7EFA8D5CD9D631357746772_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::68E106791A0E72E5DD13B9186B480B3D000B9B0D7B37D38E91B65E6A2DE72F4F
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___68E106791A0E72E5DD13B9186B480B3D000B9B0D7B37D38E91B65E6A2DE72F4F_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::6DD804957BBD89A87D861D21FE20E7559D7449C60A34797C8F396E28ED2FB07C
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___6DD804957BBD89A87D861D21FE20E7559D7449C60A34797C8F396E28ED2FB07C_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::6E262259EF0B44EB16D3F2F85C55FF4E57A25AAA1BD77D41B0E83A3E83CF21FB
	__StaticArrayInitTypeSizeU3D32_t34E81F1D32D45D9AAEBE427635AFF5C8006EAF8D ___6E262259EF0B44EB16D3F2F85C55FF4E57A25AAA1BD77D41B0E83A3E83CF21FB_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7545B0D98337615EB8E3DCE4A6ABC4016D17650B2BF17ED78C153394EA67E90B
	__StaticArrayInitTypeSizeU3D24_t5C7AE9554E2B4C10550DDAA6E365CC9DCD5A4473 ___7545B0D98337615EB8E3DCE4A6ABC4016D17650B2BF17ED78C153394EA67E90B_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::7F115120BE8D4256410DFBF5BFC077A0CCA2BAD179B14A3C39B8DE27ADF66A31
	__StaticArrayInitTypeSizeU3D80_tECF787BC490F47611C053B2EDA96DA6658361901 ___7F115120BE8D4256410DFBF5BFC077A0CCA2BAD179B14A3C39B8DE27ADF66A31_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::8099EED7766F7DDD56764652DD2196F44FE2E80E478DAFA95913312B252B5EED
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___8099EED7766F7DDD56764652DD2196F44FE2E80E478DAFA95913312B252B5EED_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::83A56AE801FB1DCDBF6D8A56529B1088A0E2A68091873CE9BFA5C7E3CE4688C5
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___83A56AE801FB1DCDBF6D8A56529B1088A0E2A68091873CE9BFA5C7E3CE4688C5_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::8468F2AC7837A04299FE43CFD91AE539B94839B49DE0D75C4E23B1D833663B66
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___8468F2AC7837A04299FE43CFD91AE539B94839B49DE0D75C4E23B1D833663B66_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::861E1A22A096E48E0D1C738DA7E56C1D6689312B3FC77D8FCF1047A883683FFC
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___861E1A22A096E48E0D1C738DA7E56C1D6689312B3FC77D8FCF1047A883683FFC_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::8CC1DEA14901CAAED12DB14739EC67D27EDC433629BF5EFCA829ECE8A47311A5
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___8CC1DEA14901CAAED12DB14739EC67D27EDC433629BF5EFCA829ECE8A47311A5_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::8E51DC7B86DAB548E8EC9221A34FE46FBFB9E11D317257EFE687E2B26CAF593E
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___8E51DC7B86DAB548E8EC9221A34FE46FBFB9E11D317257EFE687E2B26CAF593E_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::8E76DE049BD99E7DDC4A4DDC0D0FA120A153E106226D2A64FC9FB54AF7540840
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___8E76DE049BD99E7DDC4A4DDC0D0FA120A153E106226D2A64FC9FB54AF7540840_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8ED2615639A1966E67770B712BF758EE082937BBBB1A8E7FC866C72E10F3FCE0
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___8ED2615639A1966E67770B712BF758EE082937BBBB1A8E7FC866C72E10F3FCE0_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::9148308824F1F4AAD5C8C3042D7E7965F17ABEDDAADB5957872466632D45DAB0
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___9148308824F1F4AAD5C8C3042D7E7965F17ABEDDAADB5957872466632D45DAB0_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::9391357FDDCC38846FBA45741FA1B4E72884F2D155CE5DC9D449FB3F2E6DE76C
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___9391357FDDCC38846FBA45741FA1B4E72884F2D155CE5DC9D449FB3F2E6DE76C_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::9501A4E7E303ABC27D8868795360C2502922C65E0925C6788873F9CF2ED4DF4F
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___9501A4E7E303ABC27D8868795360C2502922C65E0925C6788873F9CF2ED4DF4F_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::9D08CFB96C79C2CF5520C1520C62ADE7F253E058A50E306EB21F94D04269B1AF
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___9D08CFB96C79C2CF5520C1520C62ADE7F253E058A50E306EB21F94D04269B1AF_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=352 <PrivateImplementationDetails>::A79E3485B5BCFD50CC8E7217533844CCE47780DB8026FD9DF71F4FEE21A488D7
	__StaticArrayInitTypeSizeU3D352_tA36E235BAB515C783896BA81703AC5D3CFE2FE39 ___A79E3485B5BCFD50CC8E7217533844CCE47780DB8026FD9DF71F4FEE21A488D7_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::BA67F05A3C96CE43420032CE3D65B7175FF196B6C75EBDE166E5A89742FE8CB4
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___BA67F05A3C96CE43420032CE3D65B7175FF196B6C75EBDE166E5A89742FE8CB4_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::BB773F504E9204F9023AE53B47AC83BBF21E6458FAD48FF93D8CA1C533E6D008
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___BB773F504E9204F9023AE53B47AC83BBF21E6458FAD48FF93D8CA1C533E6D008_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::C4CC1DB5707E493A4E14E625A0C51840DEF701C6AFD4E9415559567C4970009A
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___C4CC1DB5707E493A4E14E625A0C51840DEF701C6AFD4E9415559567C4970009A_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C71F1D8CFBDCFD1F3B1465BCBDC738DD1D30013572F2BB6983B503526DE08D1A
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___C71F1D8CFBDCFD1F3B1465BCBDC738DD1D30013572F2BB6983B503526DE08D1A_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C8205CA8281543277EDB8FBD8BCEA62A7D48A7476B7F00C6D0A0FC0796ECCE4A
	__StaticArrayInitTypeSizeU3D48_tC45F0F63EC65133CCAB622959BC55BEF75400591 ___C8205CA8281543277EDB8FBD8BCEA62A7D48A7476B7F00C6D0A0FC0796ECCE4A_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::C85860D62B79EEE42ACD0FE8F09FA038EBD668547148347E0661D44ACA91CF95
	__StaticArrayInitTypeSizeU3D96_t159C4B9BA1038FFE4195ED2DC8EC152A05C94D87 ___C85860D62B79EEE42ACD0FE8F09FA038EBD668547148347E0661D44ACA91CF95_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::C9698DD6C498706E835F28F69EBACF56E380788F1E9169EF7E01472365AB4772
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___C9698DD6C498706E835F28F69EBACF56E380788F1E9169EF7E01472365AB4772_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D9CB763269419E73BAC44CB1AEA12E957AA337DC61177120D012BE4E03428D73
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___D9CB763269419E73BAC44CB1AEA12E957AA337DC61177120D012BE4E03428D73_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::DAA9E4A285E4B613799960CCD6CA7294A84CD5683A87F2072E88AD73759602B6
	__StaticArrayInitTypeSizeU3D56_t83F823C7BDF7A6EF8737A93960916860FB6A46A1 ___DAA9E4A285E4B613799960CCD6CA7294A84CD5683A87F2072E88AD73759602B6_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::DBAFA7162F03CEC52C75EE83BE3C5E536D3A525C9B32661DD8EC11473E4EB491
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___DBAFA7162F03CEC52C75EE83BE3C5E536D3A525C9B32661DD8EC11473E4EB491_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::E1043B6B4D1AC8BC8AFDBA7BA02436D5899B62B1A6FAA6BA81A63A4F7673F9DB
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___E1043B6B4D1AC8BC8AFDBA7BA02436D5899B62B1A6FAA6BA81A63A4F7673F9DB_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E4CF58EA387BC1B8D65DC0EE20295A5EF95AD716EBBBB6432B316FFC43F8AE94
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___E4CF58EA387BC1B8D65DC0EE20295A5EF95AD716EBBBB6432B316FFC43F8AE94_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88 <PrivateImplementationDetails>::E50B1BE91D17B2C69C54791AFEDAC31ACA6C6AD67CB9FBFC7F1DC88949925A4C
	__StaticArrayInitTypeSizeU3D88_t7619528DBE1D4B6017CBF427AEF5D35175B330B6 ___E50B1BE91D17B2C69C54791AFEDAC31ACA6C6AD67CB9FBFC7F1DC88949925A4C_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EB12EDA9225071A41236EC1F144D2B039A1BA976B4E6FC5497863266F2DA1E72
	__StaticArrayInitTypeSizeU3D32_t34E81F1D32D45D9AAEBE427635AFF5C8006EAF8D ___EB12EDA9225071A41236EC1F144D2B039A1BA976B4E6FC5497863266F2DA1E72_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::EFE55C2CBEA35A271C9ACF07760E56357D5E1D4BEA1EE784F60F3AEC9A82A483
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___EFE55C2CBEA35A271C9ACF07760E56357D5E1D4BEA1EE784F60F3AEC9A82A483_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::F01589B67FF9A75B2CC9925B744B0FE9E3B36C175B52F18485A5135834086D70
	__StaticArrayInitTypeSizeU3D64_t416D4ACFDDB7D355F5D22EC89911FB0E228CE996 ___F01589B67FF9A75B2CC9925B744B0FE9E3B36C175B52F18485A5135834086D70_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F23902362B0F6361BDDE4AC8F3B555FDFE7E30BBA61FF972885A2766E7540B58
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___F23902362B0F6361BDDE4AC8F3B555FDFE7E30BBA61FF972885A2766E7540B58_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F556C8D5A69CEF3387CCF9AA15D9676B6923C4999D4EE530458DFC4B77F49A2F
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___F556C8D5A69CEF3387CCF9AA15D9676B6923C4999D4EE530458DFC4B77F49A2F_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F9884B17C24ED60BAF991466C64DF0F50C020A4FD52AB859E8021DF316D6E789
	__StaticArrayInitTypeSizeU3D72_t3AF5E27F3253E3606B9DFEE9D38A24D76D05C937 ___F9884B17C24ED60BAF991466C64DF0F50C020A4FD52AB859E8021DF316D6E789_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::FCBA3969EB924386378F48C1E3C5E44E50E54BCE3314921F80D2DA6F9F5969A6
	__StaticArrayInitTypeSizeU3D40_t09A23272929A7BD7585A79F6173D0FB2C66BCEAC ___FCBA3969EB924386378F48C1E3C5E44E50E54BCE3314921F80D2DA6F9F5969A6_59;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult
struct CanonicalResult_tD27CD10B5E86F52F7643812164863383601A1956  : public RuntimeObject
{
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::fval
	double ___fval_2;
	// System.Double org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::result
	double ___result_3;
	// System.Decimal org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::dfval
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___dfval_4;
	// System.Decimal org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::dresult
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___dresult_5;
	// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::decimalStillInRange
	bool ___decimalStillInRange_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// org.mariuszgromada.math.mxparser.PrimitiveElement[]
struct PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4  : public RuntimeArray
{
	ALIGN_FIELD (8) PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A* m_Items[1];

	inline PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric[]
struct SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754  : public RuntimeArray
{
	ALIGN_FIELD (8) SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* m_Items[1];

	inline SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::isNotInDecimalRange(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathFunctions_isNotInDecimalRange_mD68626A3289074CEA28B9C72776B42C81C3698FB (double ___x0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Explicit_mD6A0AB17D1C7D2FF325DFBD733CCA7A00AD245DC (double ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m79AD1C3ED1E6345D50110EA4D20DAE724724B9DA (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Double System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mD8E11417E7C50756B8243840D18275050ABABBC6 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Int64 org.mariuszgromada.math.mxparser.mXparser::currentTimeMillis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t mXparser_currentTimeMillis_m0E9A7EF58A0FD028415701E3FAD6DE1879618E7A (const RuntimeMethod* method) ;
// System.Boolean org.mariuszgromada.math.mxparser.mXparser::isCurrentCalculationCancelled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4 (const RuntimeMethod* method) ;
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::EratosthenesSieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimesCache_EratosthenesSieve_mB89C5266F96CE81A97AADEE98F79A04EC984D6E1 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) ;
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::countPrimes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimesCache_countPrimes_m9B8C6563EDBF6AA93456907051DD88B71D6A1B51 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline (double ___d0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndUniformContinuous(System.Double,System.Double,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndUniformContinuous_m847AACF8E91678FBA14A2D2B8CAB86FFA01CCC8C (double ___a0, double ___b1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndUniformContinuous(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndUniformContinuous_m4DC0D331D65D590E7140079E9669F83C056AB4FB (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndInteger(System.Int32,System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndInteger_m80061EBDDA78081A0FC6696BD867365F43C115E4 (int32_t ___a0, int32_t ___b1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd2, const RuntimeMethod* method) ;
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndInteger(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProbabilityDistributions_rndInteger_m46FC7E6603D1DBCF02525901222A2957CA42C04F (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::ln(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_ln_m0423B7BB652194E4474B1DDFE7D717FE562741F9 (double ___a0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::sqrt(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_sqrt_m33F74C654C6CC80277FDE11AFD581050E440200D (double ___a0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndNormal(System.Double,System.Double,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndNormal_m67AF7CD0E2E53840083684D5063DD4CF83E3AE17 (double ___mean0, double ___stddev1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::exp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_exp_mD9728B5D263602F05FA97974B733A2691E2806F9 (double ___a0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfc(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfc_m0B46451424A822FC555F696925F32A8707DE6C9A (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfcInv(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfcInv_mAC3905F92AAE00D530B899DD0FD9CD25C169E67E (double ___z0, const RuntimeMethod* method) ;
// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.BinaryRelations::isEqualOrAlmost(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E (double ___a0, double ___b1, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::gamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454 (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erf(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erf_m97B92E50561D70697F2BE8F77B544AA598D1C91A (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::hypergeometricF(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_hypergeometricF_m4106F8A14AFCC91B383C84CE95972B8BE92C7BB5 (double ___a0, double ___b1, double ___c2, double ___z3, double ___maxIterations4, double ___precision5, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::cdfStudentTPositiveX(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_cdfStudentTPositiveX_m287BA9C12787CE93FBD8AFC4C54C37322EC1F122 (double ___x0, double ___v1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Sign(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Sign_mA4D918D42B753CFEF3AC049AEF14C7FDE07FFD7E (double ___value0, const RuntimeMethod* method) ;
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6 (double ___val10, double ___val21, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfInv(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfInv_mF9CA902E25D3EDBC3C86A3F99D3B4051ADA0B311 (double ___x0, const RuntimeMethod* method) ;
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716 (double ___val10, double ___val21, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::inverseRegularizedBeta(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_inverseRegularizedBeta_m68388C6B6D4EC39D86993D948DBDACB719D54E72 (double ___a0, double ___b1, double ___p2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntChengFuStudentTAlgorithm(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntChengFuStudentTAlgorithm_mECCD957C50877FE3DE0D3BA82B6C8E0AAA7F6563 (double ___p0, double ___v1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntHillsAlgorithm396(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntHillsAlgorithm396_mAF1166C09374EA9E484BA1498BEF07D1F1CA9E01 (double ___p0, double ___v1, const RuntimeMethod* method) ;
// System.Void org.mariuszgromada.math.mxparser.Constant::setConstantValue(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Constant_setConstantValue_mB6DC23E29846DC26A76081A11F9FA1D09FA290B4_inline (Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* __this, double ___constantValue0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.Expression::calculate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Expression_calculate_mB0AAB05AF159348B01B4020FFDDAAE087F96A77C (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* __this, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntStudentT(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntStudentT_mF05AD8A63684D7BE7C8F8D3A493195F4A9633117 (double ___p0, double ___v1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::factorial(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8 (double ___n0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntNormal(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntNormal_m443BD44DE1A7CCD356908ABF1AF6A5938FB5BA99 (double ___q0, double ___mean1, double ___stddev2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::regularizedGammaLowerP(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_regularizedGammaLowerP_m0391776CA4410893E77030FD28C5384E3A2CC963 (double ___s0, double ___x1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::inverseRegularizedGammaLowerP(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_inverseRegularizedGammaLowerP_m745F43000295E313CBE261DC9C05A3D2B99D237E (double ___a0, double ___p1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntChiSquared(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntChiSquared_m611AF7CE278900E4097DEEDE3625C30C5369D810 (double ___p0, double ___k1, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void org.mariuszgromada.math.mxparser.Constant::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constant__ctor_m16AB1A05B1A1B3B0A5D7A92D4DB9205EDDBA75A3 (Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* __this, String_t* ___constantName0, double ___constantValue1, const RuntimeMethod* method) ;
// System.Void org.mariuszgromada.math.mxparser.Expression::.ctor(System.String,org.mariuszgromada.math.mxparser.PrimitiveElement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__ctor_m07A7BC64A5801D60FBC620C122A36B3201275FB0 (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* __this, String_t* ___expressionString0, PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4* ___elements1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::continuedFractionEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_continuedFractionEi_mB15C99E6444DB8F7D53F4E958BC6811F08BD11FB (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::powerSeriesEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_powerSeriesEi_m439E55C0FE301FB484B4B0D9C03075FD58D4708A (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::argumentAdditionSeriesEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_argumentAdditionSeriesEi_m52E7FAE74AF80DF7D9A5727127C19CABC66E695E (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::exponentialIntegralEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_exponentialIntegralEi_m9EAF7B690AB0B9E7A40BEC3D00592444D3DDE1EF (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::logarithmicIntegralLi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_logarithmicIntegralLi_mF53BCDF7F4FB9B8BB6DD30A4C36F5E1BC16A0ACE (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfImp(System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF (double ___z0, bool ___invert1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfInvImpl(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfInvImpl_m20C8E18C78A770ECD5654CD808588A190D3FCE64 (double ___p0, double ___q1, double ___s2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Evaluate::polynomial(System.Double,System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93 (double ___x0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___coefficients1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::gammaInt(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C (int64_t ___n0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_m6E8147B50DE6E7EDD6CAB8873F83B943E2CD74F9_inline (double ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline (double ___d0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::abs(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_abs_m4D1D0AB6BBFE19CE1F5B4677149ED219B56D8EA7 (double ___a0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lanchosGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lanchosGamma_m420D7DC6ECC24916EF929F92D97EA1BEF7919370 (double ___x0, const RuntimeMethod* method) ;
// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::isInteger(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathFunctions_isInteger_m395DCAA8FF434CC25085365E779AB9A592A9289D (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::logGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181 (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Evaluate::polevl(System.Double,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Evaluate_polevl_mAB5B74D43ACB3E50C640752A4C0CB91583F2CC0C (double ___x0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___coef1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Evaluate::p1evl(System.Double,System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Evaluate_p1evl_m6E28C9DA481EA52C69A4B84A939D49376873AE8D (double ___x0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___coef1, int32_t ___n2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::sgn(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_sgn_mD254177C7DBE43AC3E6C09FD1B217095C38AF1AE (double ___a0, const RuntimeMethod* method) ;
// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::almostEqual(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F (double ___a0, double ___b1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::regularizedGammaUpperQ(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_regularizedGammaUpperQ_m45ED208005C576A967B57E368F5C289C679EEEB6 (double ___s0, double ___x1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::diGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_diGamma_m8C1CB6F413491CFEFE2E34E1E54BB563B505557E (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::logBeta(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_logBeta_mB5E6CC62B63FFABE9A22AA48CB0240B0B1C0ADFA (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::beta(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_beta_m06D6912A82FAA21732ADA5D89A87DCBC82CC838F (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::integerPart(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_integerPart_m9E88CABBDB278AC0E1B0B514A207FA866314BD96 (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::binomCoeff(System.Double,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_binomCoeff_m459A53F8DB5BAF471802DDB95EADCAC7471C9876 (double ___n0, int64_t ___k1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::regularizedBeta(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_regularizedBeta_m319A6FA708B7C27509709CCF6C6DC22818D3CDE7 (double ___a0, double ___b1, double ___x2, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
// System.Double System.BitConverter::Int64BitsToDouble(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BitConverter_Int64BitsToDouble_mC0B5F34D5389EF32DBA08916755C880EDB6838AB_inline (int64_t ___value0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::nextUp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_nextUp_m569C138572848FF5207278DF2C8152B6A0BC0A87 (double ___d0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::seriesEval(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_seriesEval_mAC864FC515B7EFDF80E1E43A1B2BACFB18DBA460 (double ___r0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::halleyIteration(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_halleyIteration_m4FF77351D1449D56C849AC3394DEFC70C2542E25 (double ___x0, double ___wInitial1, int32_t ___maxIter2, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lambertW0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lambertW0_mF474DD1884080122F272CDD94ACCF75D48731534 (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lambertW1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lambertW1_m20ECDAE8697AF416B9EF01DA9319E301A1E846E6 (double ___x0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::hypergeometricFDirect(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_hypergeometricFDirect_mC1FFC6B40D4F07236655EE53B243C25E92C6CC5A (double ___a0, double ___b1, double ___c2, double ___z3, double ___maxIterations4, double ___precision5, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::factorialRising(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_factorialRising_m60CE1D45228720FA6D356FCBCE409070522F74A9 (double ___x0, double ___n1, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::ulp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_ulp_mA3EFB52F5600883829DA7488B80EB4A0E7FF9EA6 (double ___value0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.MathFunctions::round(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MathFunctions_round_mF44AB2B728A16C367B4F1C639AE994A39EEBE0A1 (double ___value0, int32_t ___places1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>::.ctor()
inline void List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2 (List_1_t1066F23710B975B7F8366D381935E50E21D1418A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* __this, double ___x0, double ___fv1, double ___fvdeg2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>::Add(T)
inline void List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline (List_1_t1066F23710B975B7F8366D381935E50E21D1418A* __this, SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*, SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mFA158CA8247818AE2FEB5B11158A354CA5B4FCC5_inline (double ___d0, const RuntimeMethod* method) ;
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValue(System.Double,System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F (double ___x0, List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesList1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>::GetEnumerator()
inline Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8 List_1_GetEnumerator_mA27B29129107C505D7C7C80A302D0806599108FB (List_1_t1066F23710B975B7F8366D381935E50E21D1418A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8 (*) (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>::Dispose()
inline void Enumerator_Dispose_mFD36EDC4C7125CBCEC9A4C409AE10A62FB2AAE4A (Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>::get_Current()
inline SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* Enumerator_get_Current_mED5D57CC27CE7B1A31B4F4BBF702E27E36F66767_inline (Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8* __this, const RuntimeMethod* method)
{
	return ((  SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* (*) (Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>::MoveNext()
inline bool Enumerator_MoveNext_mD27B0F21298B57BC99EF1CA57488E0EB29BF23EC (Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8 (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* __this, double ___factor0, double ___sin1, double ___cos2, double ___tan3, double ___ctan4, double ___sec5, double ___csc6, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mXparser::getFunctionValue(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double mXparser_getFunctionValue_m5063DF197081CC692BA1A0D599DEC78E06B5F795 (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___f0, Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* ___x1, double ___x02, const RuntimeMethod* method) ;
// System.Double[] org.mariuszgromada.math.mxparser.mXparser::getFunctionValues(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* mXparser_getFunctionValues_m9D0AAEFB81F50153DCC4CBFEEA900AE500821C55 (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___f0, Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* ___index1, double ___from2, double ___to3, double ___delta4, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::var(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_var_mF1C4F1F927FD7EECE1CBF7C2C061759D75FC9712 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::std(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_std_mA3F86D56C60511A6661778E3A7CF4A0FCA81A7EA (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) ;
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::avg(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_avg_m7AB2A73B9752B4140419E1CBF8C462BCF53D4B39 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) ;
// System.Int32[] org.mariuszgromada.math.mxparser.mathcollection.NumberTheory::sortAsc(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NumberTheory_sortAsc_mF4AA4AB9C8B31BB96E278DEFB662B8A5AB17F375 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, const RuntimeMethod* method) ;
// System.Double[,] org.mariuszgromada.math.mxparser.mathcollection.NumberTheory::getDistValues(System.Double[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* NumberTheory_getDistValues_mC3EBE6B0B5D7F49339A05B971DECED65DC0945D7 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, bool ___returnOrderByDescFreqAndAscOrigPos1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanonicalResult__ctor_m66FED4FB1A8BFF34430A83734248156E71106614 (CanonicalResult_tD27CD10B5E86F52F7643812164863383601A1956* __this, bool ___summation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___summation0;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		__this->___fval_2 = (0.0);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_1 = (&__this->___dfval_4);
		il2cpp_codegen_initobj(L_1, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		__this->___result_3 = (0.0);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_2 = (&__this->___dresult_5);
		il2cpp_codegen_initobj(L_2, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
		__this->___decimalStillInRange_6 = (bool)1;
		return;
	}

IL_0047:
	{
		__this->___fval_2 = (1.0);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One_4;
		__this->___dfval_4 = L_3;
		__this->___result_3 = (1.0);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))->___One_4;
		__this->___dresult_5 = L_4;
		__this->___decimalStillInRange_6 = (bool)1;
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::add()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanonicalResult_add_m6E0DB27B8D537857E6434578729F9CD4C21486E7 (CanonicalResult_tD27CD10B5E86F52F7643812164863383601A1956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___result_3;
		double L_1 = __this->___fval_2;
		__this->___result_3 = ((double)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___decimalStillInRange_6;
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		double L_3 = __this->___fval_2;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = MathFunctions_isNotInDecimalRange_mD68626A3289074CEA28B9C72776B42C81C3698FB(L_3, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		__this->___decimalStillInRange_6 = (bool)0;
	}

IL_002f:
	{
		double L_5 = __this->___result_3;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = MathFunctions_isNotInDecimalRange_mD68626A3289074CEA28B9C72776B42C81C3698FB(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		__this->___decimalStillInRange_6 = (bool)0;
	}

IL_0043:
	{
		bool L_7 = __this->___decimalStillInRange_6;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		double L_8 = __this->___fval_2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Decimal_op_Explicit_mD6A0AB17D1C7D2FF325DFBD733CCA7A00AD245DC(L_8, NULL);
		__this->___dfval_4 = L_9;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = __this->___dresult_5;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11 = __this->___dfval_4;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
		L_12 = Decimal_op_Addition_m79AD1C3ED1E6345D50110EA4D20DAE724724B9DA(L_10, L_11, NULL);
		__this->___dresult_5 = L_12;
	}

IL_0073:
	{
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::multiply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanonicalResult_multiply_m6C646C8E34AF1F73DA323B7A475D3FF291541640 (CanonicalResult_tD27CD10B5E86F52F7643812164863383601A1956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = __this->___result_3;
		double L_1 = __this->___fval_2;
		__this->___result_3 = ((double)il2cpp_codegen_multiply(L_0, L_1));
		bool L_2 = __this->___decimalStillInRange_6;
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		double L_3 = __this->___fval_2;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = MathFunctions_isNotInDecimalRange_mD68626A3289074CEA28B9C72776B42C81C3698FB(L_3, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		__this->___decimalStillInRange_6 = (bool)0;
	}

IL_002f:
	{
		double L_5 = __this->___result_3;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = MathFunctions_isNotInDecimalRange_mD68626A3289074CEA28B9C72776B42C81C3698FB(L_5, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		__this->___decimalStillInRange_6 = (bool)0;
	}

IL_0043:
	{
		bool L_7 = __this->___decimalStillInRange_6;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		double L_8 = __this->___fval_2;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = Decimal_op_Explicit_mD6A0AB17D1C7D2FF325DFBD733CCA7A00AD245DC(L_8, NULL);
		__this->___dfval_4 = L_9;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = __this->___dresult_5;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11 = __this->___dfval_4;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
		L_12 = Decimal_op_Multiply_mFD6D7FB94F0CDF935CEE8527EA9FD3EAB159EF19(L_10, L_11, NULL);
		__this->___dresult_5 = L_12;
	}

IL_0073:
	{
		return;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.NumberTheory/CanonicalResult::getResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CanonicalResult_getResult_m0B2460F53C33B95E70CF178EDA7543A37B55D0DB (CanonicalResult_tD27CD10B5E86F52F7643812164863383601A1956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___decimalStillInRange_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = __this->___dresult_5;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Decimal_op_Explicit_mD8E11417E7C50756B8243840D18275050ABABBC6(L_1, NULL);
		return ((double)L_2);
	}

IL_0015:
	{
		double L_3 = __this->___result_3;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PhysicalConstants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicalConstants__ctor_m060A691DDA8F480BF4ECA87D3969AD763C2E2E36 (PhysicalConstants_t7B5373883AB867C2402F517D3F8DCBBD0297380F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::EratosthenesSieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimesCache_EratosthenesSieve_mB89C5266F96CE81A97AADEE98F79A04EC984D6E1 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		int64_t L_0;
		L_0 = mXparser_currentTimeMillis_m0E9A7EF58A0FD028415701E3FAD6DE1879618E7A(NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0100:
			{// begin finally (depth: 1)
				il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
				int64_t L_1;
				L_1 = mXparser_currentTimeMillis_m0E9A7EF58A0FD028415701E3FAD6DE1879618E7A(NULL);
				V_6 = L_1;
				int64_t L_2 = V_6;
				int64_t L_3 = V_0;
				__this->___computingTime_8 = ((double)(((double)((int64_t)il2cpp_codegen_subtract(L_2, L_3)))/(1000.0)));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					int32_t L_4 = __this->___maxNumInCache_6;
					V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
					int32_t L_5 = V_1;
					if ((((int32_t)L_5) > ((int32_t)0)))
					{
						goto IL_0047_2;
					}
				}
				{
					__this->___numberOfPrimes_7 = 0;
					__this->___maxNumInCache_6 = 0;
					__this->___initSuccessful_11 = (bool)0;
					il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
					int64_t L_6;
					L_6 = mXparser_currentTimeMillis_m0E9A7EF58A0FD028415701E3FAD6DE1879618E7A(NULL);
					V_2 = L_6;
					int64_t L_7 = V_2;
					int64_t L_8 = V_0;
					__this->___computingTime_8 = ((double)(((double)((int64_t)il2cpp_codegen_subtract(L_7, L_8)))/(1000.0)));
					goto IL_011d;
				}

IL_0047_2:
				{
					int32_t L_9 = V_1;
					BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_9);
					__this->___isPrime_10 = L_10;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___isPrime_10), (void*)L_10);
					__this->___numberOfPrimes_7 = 0;
					BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->___isPrime_10;
					NullCheck(L_11);
					(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)0);
					BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = __this->___isPrime_10;
					NullCheck(L_12);
					(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (bool)0);
					V_3 = 2;
					goto IL_0089_2;
				}

IL_0070_2:
				{
					BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = __this->___isPrime_10;
					int32_t L_14 = V_3;
					NullCheck(L_13);
					(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (bool)1);
					il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
					bool L_15;
					L_15 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
					if (!L_15)
					{
						goto IL_0085_2;
					}
				}
				{
					goto IL_011d;
				}

IL_0085_2:
				{
					int32_t L_16 = V_3;
					V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
				}

IL_0089_2:
				{
					int32_t L_17 = V_3;
					int32_t L_18 = __this->___maxNumInCache_6;
					if ((((int32_t)L_17) <= ((int32_t)L_18)))
					{
						goto IL_0070_2;
					}
				}
				{
					V_4 = 2;
					goto IL_00e0_2;
				}

IL_0097_2:
				{
					il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
					bool L_19;
					L_19 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
					if (!L_19)
					{
						goto IL_00a0_2;
					}
				}
				{
					goto IL_011d;
				}

IL_00a0_2:
				{
					BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = __this->___isPrime_10;
					int32_t L_21 = V_4;
					NullCheck(L_20);
					int32_t L_22 = L_21;
					uint8_t L_23 = (uint8_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
					if (!L_23)
					{
						goto IL_00da_2;
					}
				}
				{
					int32_t L_24 = V_4;
					V_5 = L_24;
					goto IL_00cd_2;
				}

IL_00b1_2:
				{
					BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = __this->___isPrime_10;
					int32_t L_26 = V_4;
					int32_t L_27 = V_5;
					NullCheck(L_25);
					(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_26, L_27))), (bool)0);
					il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
					bool L_28;
					L_28 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
					if (!L_28)
					{
						goto IL_00c7_2;
					}
				}
				{
					goto IL_011d;
				}

IL_00c7_2:
				{
					int32_t L_29 = V_5;
					V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
				}

IL_00cd_2:
				{
					int32_t L_30 = V_4;
					int32_t L_31 = V_5;
					int32_t L_32 = __this->___maxNumInCache_6;
					if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_30, L_31))) <= ((int32_t)L_32)))
					{
						goto IL_00b1_2;
					}
				}

IL_00da_2:
				{
					int32_t L_33 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
				}

IL_00e0_2:
				{
					int32_t L_34 = V_4;
					int32_t L_35 = V_4;
					int32_t L_36 = __this->___maxNumInCache_6;
					if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_34, L_35))) <= ((int32_t)L_36)))
					{
						goto IL_0097_2;
					}
				}
				{
					__this->___initSuccessful_11 = (bool)1;
					goto IL_011d;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00f6_1;
				}
				throw e;
			}

CATCH_00f6_1:
			{// begin catch(System.OutOfMemoryException)
				__this->___initSuccessful_11 = (bool)0;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_011d;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011d:
	{
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::countPrimes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimesCache_countPrimes_m9B8C6563EDBF6AA93456907051DD88B71D6A1B51 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___isPrime_10;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = __this->___numberOfPrimes_7;
		__this->___numberOfPrimes_7 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001c:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___maxNumInCache_6;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimesCache__ctor_m494AA7500EF4B8B2ED95A788D0A440CCE9B9B7C4 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___initSuccessful_11 = (bool)0;
		__this->___cacheStatus_9 = (bool)0;
		__this->___maxNumInCache_6 = ((int32_t)10000000);
		PrimesCache_EratosthenesSieve_mB89C5266F96CE81A97AADEE98F79A04EC984D6E1(__this, NULL);
		bool L_0 = __this->___initSuccessful_11;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		PrimesCache_countPrimes_m9B8C6563EDBF6AA93456907051DD88B71D6A1B51(__this, NULL);
		__this->___cacheStatus_9 = (bool)1;
		return;
	}

IL_003b:
	{
		__this->___maxNumInCache_6 = 0;
		__this->___numberOfPrimes_7 = 0;
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimesCache__ctor_m852F14B745D2CC2F35C980383030BDAA909ADC57 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, int32_t ___maxNumInCache0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___maxNumInCache0;
		if ((((int32_t)L_0) <= ((int32_t)2)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = ___maxNumInCache0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_1, ((int32_t)2147483646), NULL);
		__this->___maxNumInCache_6 = L_2;
		goto IL_0028;
	}

IL_001d:
	{
		__this->___maxNumInCache_6 = ((int32_t)10000000);
	}

IL_0028:
	{
		__this->___initSuccessful_11 = (bool)0;
		__this->___cacheStatus_9 = (bool)0;
		___maxNumInCache0 = ((int32_t)10000000);
		PrimesCache_EratosthenesSieve_mB89C5266F96CE81A97AADEE98F79A04EC984D6E1(__this, NULL);
		bool L_3 = __this->___initSuccessful_11;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		PrimesCache_countPrimes_m9B8C6563EDBF6AA93456907051DD88B71D6A1B51(__this, NULL);
		__this->___cacheStatus_9 = (bool)1;
		return;
	}

IL_0059:
	{
		___maxNumInCache0 = 0;
		__this->___numberOfPrimes_7 = 0;
		return;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::getComputingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PrimesCache_getComputingTime_mDF82F9BF4D274FF8591388E431298753A96CAC1C (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___computingTime_8;
		return L_0;
	}
}
// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::getCacheStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimesCache_getCacheStatus_m3EB1B51AAE2C1A1F12D72CAB066C189876FB959C (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___cacheStatus_9;
		return L_0;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::getNumberOfPrimes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimesCache_getNumberOfPrimes_mD71C954E8FC00FB5BB50BF17EA850434BD4BE37A (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___numberOfPrimes_7;
		return L_0;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::getMaxNumInCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimesCache_getMaxNumInCache_m9196E029BDBAC3A853BF0CCBB01ABD4C1594D463 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___maxNumInCache_6;
		return L_0;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::primeTest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimesCache_primeTest_m9350BE3CA76B3F831C621E504C5C575764A6771B (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		int32_t L_1 = ___n0;
		int32_t L_2 = __this->___maxNumInCache_6;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = 1;
		V_0 = (bool)L_3;
		__this->___cacheStatus_9 = (bool)L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->___isPrime_10;
		int32_t L_6 = ___n0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (uint8_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (!L_8)
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		return (-1);
	}
}
// System.Boolean org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::isInitSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimesCache_isInitSuccessful_mD5672F2D3F355C37EAF75A0066C700A34EA43AB5 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___initSuccessful_11;
		return L_0;
	}
}
// System.Boolean[] org.mariuszgromada.math.mxparser.mathcollection.PrimesCache::getPrimes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* PrimesCache_getPrimes_m313CFCCDA03EBF30C0FD1C3E71D185C248C3FD01 (PrimesCache_tB379228909D976784CBCA46E96037D468CFEF131* __this, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = __this->___isPrime_10;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndUniformContinuous(System.Double,System.Double,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndUniformContinuous_m847AACF8E91678FBA14A2D2B8CAB86FFA01CCC8C (double ___a0, double ___b1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd2, const RuntimeMethod* method) 
{
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___b1;
		double L_5 = ___a0;
		if ((!(((double)L_4) < ((double)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0032:
	{
		double L_6 = ___a0;
		double L_7 = ___b1;
		if ((!(((double)L_6) == ((double)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		double L_8 = ___a0;
		return L_8;
	}

IL_0038:
	{
		double L_9 = ___a0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = ___rnd2;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_10);
		double L_12 = ___b1;
		double L_13 = ___a0;
		return ((double)il2cpp_codegen_add(L_9, ((double)il2cpp_codegen_multiply(L_11, ((double)il2cpp_codegen_subtract(L_12, L_13))))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndUniformContinuous(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndUniformContinuous_mC7CF527DEAD767050BE45FBF81FA90C6ECA2F280 (double ___a0, double ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___a0;
		double L_1 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		double L_3;
		L_3 = ProbabilityDistributions_rndUniformContinuous_m847AACF8E91678FBA14A2D2B8CAB86FFA01CCC8C(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndUniformContinuous(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndUniformContinuous_m4DC0D331D65D590E7140079E9669F83C056AB4FB (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd0, const RuntimeMethod* method) 
{
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ___rnd0;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		return L_1;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::randomUniformContinuous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_randomUniformContinuous_m5F3BF914C587F061FA5B265BD663CA3E80F31DA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		double L_1;
		L_1 = ProbabilityDistributions_rndUniformContinuous_m4DC0D331D65D590E7140079E9669F83C056AB4FB(L_0, NULL);
		return L_1;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::pdfUniformContinuous(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_pdfUniformContinuous_m82A91AFD525F6F7506E5B798C84D4C85CEE0A652 (double ___x0, double ___a1, double ___b2, const RuntimeMethod* method) 
{
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___a1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___b2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___b2;
		double L_7 = ___a1;
		if ((!(((double)L_6) < ((double)L_7))))
		{
			goto IL_0044;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0044:
	{
		double L_8 = ___a1;
		double L_9 = ___b2;
		if ((!(((double)L_8) == ((double)L_9))))
		{
			goto IL_0060;
		}
	}
	{
		double L_10 = ___x0;
		double L_11 = ___a1;
		if ((!(((double)L_10) == ((double)L_11))))
		{
			goto IL_0056;
		}
	}
	{
		return (1.0);
	}

IL_0056:
	{
		return (0.0);
	}

IL_0060:
	{
		double L_12 = ___x0;
		double L_13 = ___a1;
		if ((((double)L_12) < ((double)L_13)))
		{
			goto IL_0068;
		}
	}
	{
		double L_14 = ___x0;
		double L_15 = ___b2;
		if ((!(((double)L_14) > ((double)L_15))))
		{
			goto IL_0072;
		}
	}

IL_0068:
	{
		return (0.0);
	}

IL_0072:
	{
		double L_16 = ___x0;
		if ((!(((double)L_16) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0088;
		}
	}
	{
		return (0.0);
	}

IL_0088:
	{
		double L_17 = ___x0;
		if ((!(((double)L_17) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_009e;
		}
	}
	{
		return (0.0);
	}

IL_009e:
	{
		double L_18 = ___b2;
		double L_19 = ___a1;
		return ((double)((1.0)/((double)il2cpp_codegen_subtract(L_18, L_19))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::cdfUniformContinuous(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_cdfUniformContinuous_m81CFD133B4BF42C0DAFD42E6572686EC4244A4E1 (double ___x0, double ___a1, double ___b2, const RuntimeMethod* method) 
{
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___a1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___b2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___b2;
		double L_7 = ___a1;
		if ((!(((double)L_6) < ((double)L_7))))
		{
			goto IL_0044;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0044:
	{
		double L_8 = ___a1;
		double L_9 = ___b2;
		if ((!(((double)L_8) == ((double)L_9))))
		{
			goto IL_0060;
		}
	}
	{
		double L_10 = ___x0;
		double L_11 = ___a1;
		if ((!(((double)L_10) < ((double)L_11))))
		{
			goto IL_0056;
		}
	}
	{
		return (0.0);
	}

IL_0056:
	{
		return (1.0);
	}

IL_0060:
	{
		double L_12 = ___x0;
		double L_13 = ___a1;
		if ((!(((double)L_12) < ((double)L_13))))
		{
			goto IL_006e;
		}
	}
	{
		return (0.0);
	}

IL_006e:
	{
		double L_14 = ___x0;
		double L_15 = ___b2;
		if ((!(((double)L_14) >= ((double)L_15))))
		{
			goto IL_007c;
		}
	}
	{
		return (1.0);
	}

IL_007c:
	{
		double L_16 = ___x0;
		if ((!(((double)L_16) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0092;
		}
	}
	{
		return (0.0);
	}

IL_0092:
	{
		double L_17 = ___x0;
		if ((!(((double)L_17) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_00a8;
		}
	}
	{
		return (1.0);
	}

IL_00a8:
	{
		double L_18 = ___x0;
		double L_19 = ___a1;
		double L_20 = ___b2;
		double L_21 = ___a1;
		return ((double)(((double)il2cpp_codegen_subtract(L_18, L_19))/((double)il2cpp_codegen_subtract(L_20, L_21))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntUniformContinuous(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntUniformContinuous_m8AA832C81274C7C9BC57BA68CE8465599174F022 (double ___q0, double ___a1, double ___b2, const RuntimeMethod* method) 
{
	{
		double L_0 = ___q0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___a1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___b2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___q0;
		if ((((double)L_6) < ((double)(0.0))))
		{
			goto IL_004e;
		}
	}
	{
		double L_7 = ___q0;
		if ((!(((double)L_7) > ((double)(1.0)))))
		{
			goto IL_0058;
		}
	}

IL_004e:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0058:
	{
		double L_8 = ___b2;
		double L_9 = ___a1;
		if ((!(((double)L_8) < ((double)L_9))))
		{
			goto IL_0066;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0066:
	{
		double L_10 = ___a1;
		double L_11 = ___b2;
		if ((!(((double)L_10) == ((double)L_11))))
		{
			goto IL_0082;
		}
	}
	{
		double L_12 = ___q0;
		if ((!(((double)L_12) == ((double)(1.0)))))
		{
			goto IL_0078;
		}
	}
	{
		double L_13 = ___b2;
		return L_13;
	}

IL_0078:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0082:
	{
		double L_14 = ___q0;
		if ((!(((double)L_14) == ((double)(0.0)))))
		{
			goto IL_0090;
		}
	}
	{
		double L_15 = ___a1;
		return L_15;
	}

IL_0090:
	{
		double L_16 = ___q0;
		if ((!(((double)L_16) == ((double)(1.0)))))
		{
			goto IL_009e;
		}
	}
	{
		double L_17 = ___b2;
		return L_17;
	}

IL_009e:
	{
		double L_18 = ___a1;
		double L_19 = ___q0;
		double L_20 = ___b2;
		double L_21 = ___a1;
		return ((double)il2cpp_codegen_add(L_18, ((double)il2cpp_codegen_multiply(L_19, ((double)il2cpp_codegen_subtract(L_20, L_21))))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndInteger(System.Int32,System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndInteger_m80061EBDDA78081A0FC6696BD867365F43C115E4 (int32_t ___a0, int32_t ___b1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(((double)L_0), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0013:
	{
		int32_t L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(((double)L_2), NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0026:
	{
		int32_t L_4 = ___b1;
		int32_t L_5 = ___a0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0034:
	{
		int32_t L_6 = ___a0;
		int32_t L_7 = ___b1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_8 = ___a0;
		return ((double)L_8);
	}

IL_003b:
	{
		int32_t L_9 = ___b1;
		int32_t L_10 = ___a0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_9, L_10)), 1));
		int32_t L_11 = ___a0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_12 = ___rnd2;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_12, L_13);
		return ((double)((int32_t)il2cpp_codegen_add(L_11, L_14)));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndInteger_m500B26ACE1B3D7C5B9EB6A04F1B9A94FF0EF58A9 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		double L_3;
		L_3 = ProbabilityDistributions_rndInteger_m80061EBDDA78081A0FC6696BD867365F43C115E4(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndInteger(System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProbabilityDistributions_rndInteger_m46FC7E6603D1DBCF02525901222A2957CA42C04F (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd0, const RuntimeMethod* method) 
{
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ___rnd0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_0, ((int32_t)-2147483648LL), ((int32_t)2147483647LL));
		return L_1;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndIndex(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProbabilityDistributions_rndIndex_mA43CB8E65C793B9ABB539C799DE76DDA2CC3DEA4 (int32_t ___n0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ___rnd1;
		int32_t L_2 = ___n0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_1, L_2);
		return L_3;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProbabilityDistributions_rndIndex_m53228EAE9B536D7F30484249279711309D0E9D71 (int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		int32_t L_2 = ___n0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_1, L_2);
		return L_3;
	}
}
// System.Int32 org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProbabilityDistributions_rndInteger_m27837CCAAD26A76EDB6A983EEEBB9D23508BB258 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		int32_t L_1;
		L_1 = ProbabilityDistributions_rndInteger_m46FC7E6603D1DBCF02525901222A2957CA42C04F(L_0, NULL);
		return L_1;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndNormal(System.Double,System.Double,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndNormal_m67AF7CD0E2E53840083684D5063DD4CF83E3AE17 (double ___mean0, double ___stddev1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	bool V_7 = false;
	{
		double L_0 = ___mean0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___stddev1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = ___rnd2;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0031:
	{
		double L_5 = ___stddev1;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0047;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0047:
	{
		double L_6 = ___stddev1;
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0055;
		}
	}
	{
		double L_7 = ___mean0;
		return L_7;
	}

IL_0055:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0066:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_9 = ___rnd2;
		NullCheck(L_9);
		double L_10;
		L_10 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_9);
		V_1 = L_10;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_11 = ___rnd2;
		NullCheck(L_11);
		double L_12;
		L_12 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_11);
		V_3 = L_12;
		double L_13 = V_1;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_13)), (1.0)));
		double L_14 = V_3;
		V_4 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_14)), (1.0)));
		double L_15 = V_2;
		double L_16 = V_2;
		double L_17 = V_4;
		double L_18 = V_4;
		V_5 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_15, L_16)), ((double)il2cpp_codegen_multiply(L_17, L_18))));
		double L_19 = V_5;
		if ((((double)L_19) >= ((double)(1.0))))
		{
			goto IL_00c6;
		}
	}
	{
		double L_20 = V_5;
		if ((!(((double)L_20) == ((double)(0.0)))))
		{
			goto IL_00d5;
		}
	}

IL_00c6:
	{
		V_0 = (0.0);
		V_7 = (bool)0;
		goto IL_00f8;
	}

IL_00d5:
	{
		double L_21 = V_5;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = MathFunctions_ln_m0423B7BB652194E4474B1DDFE7D717FE562741F9(L_21, NULL);
		double L_23 = V_5;
		double L_24;
		L_24 = MathFunctions_sqrt_m33F74C654C6CC80277FDE11AFD581050E440200D(((double)(((double)il2cpp_codegen_multiply((-2.0), L_22))/L_23)), NULL);
		V_6 = L_24;
		double L_25 = V_2;
		double L_26 = V_6;
		V_0 = ((double)il2cpp_codegen_multiply(L_25, L_26));
		V_7 = (bool)1;
	}

IL_00f8:
	{
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_0055;
		}
	}
	{
		double L_28 = ___mean0;
		double L_29 = ___stddev1;
		double L_30 = V_0;
		return ((double)il2cpp_codegen_add(L_28, ((double)il2cpp_codegen_multiply(L_29, L_30))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndNormal(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndNormal_m98E77137D44C724E680FF6C437B7D13C9D0E3C73 (double ___mean0, double ___stddev1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___mean0;
		double L_1 = ___stddev1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		double L_3;
		L_3 = ProbabilityDistributions_rndNormal_m67AF7CD0E2E53840083684D5063DD4CF83E3AE17(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::pdfNormal(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_pdfNormal_m6CC49CE2F89231F6BDF121C56090CABBD208461F (double ___x0, double ___mean1, double ___stddev2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___mean1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___stddev2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___stddev2;
		if ((!(((double)L_6) < ((double)(0.0)))))
		{
			goto IL_004c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_004c:
	{
		double L_7 = ___stddev2;
		if ((!(((double)L_7) == ((double)(0.0)))))
		{
			goto IL_0070;
		}
	}
	{
		double L_8 = ___x0;
		double L_9 = ___mean1;
		if ((!(((double)L_8) == ((double)L_9))))
		{
			goto IL_0066;
		}
	}
	{
		return (1.0);
	}

IL_0066:
	{
		return (0.0);
	}

IL_0070:
	{
		double L_10 = ___x0;
		if ((!(((double)L_10) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0086;
		}
	}
	{
		return (0.0);
	}

IL_0086:
	{
		double L_11 = ___x0;
		if ((!(((double)L_11) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_009c;
		}
	}
	{
		return (0.0);
	}

IL_009c:
	{
		double L_12 = ___x0;
		double L_13 = ___mean1;
		double L_14 = ___stddev2;
		V_0 = ((double)(((double)il2cpp_codegen_subtract(L_12, L_13))/L_14));
		double L_15 = V_0;
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = MathFunctions_exp_mD9728B5D263602F05FA97974B733A2691E2806F9(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((-0.5), L_15)), L_16)), NULL);
		double L_18 = ___stddev2;
		return ((double)(L_17/((double)il2cpp_codegen_multiply((2.5066282746310007), L_18))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::cdfNormal(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_cdfNormal_mA667E61B924E63084B7F68DD4DE1ED7D55C91A55 (double ___x0, double ___mean1, double ___stddev2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___mean1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___stddev2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___stddev2;
		if ((!(((double)L_6) < ((double)(0.0)))))
		{
			goto IL_004c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_004c:
	{
		double L_7 = ___stddev2;
		if ((!(((double)L_7) == ((double)(0.0)))))
		{
			goto IL_0070;
		}
	}
	{
		double L_8 = ___x0;
		double L_9 = ___mean1;
		if ((!(((double)L_8) < ((double)L_9))))
		{
			goto IL_0066;
		}
	}
	{
		return (0.0);
	}

IL_0066:
	{
		return (1.0);
	}

IL_0070:
	{
		double L_10 = ___x0;
		if ((!(((double)L_10) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0086;
		}
	}
	{
		return (0.0);
	}

IL_0086:
	{
		double L_11 = ___x0;
		if ((!(((double)L_11) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_009c;
		}
	}
	{
		return (1.0);
	}

IL_009c:
	{
		double L_12 = ___mean1;
		double L_13 = ___x0;
		double L_14 = ___stddev2;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_15 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = SpecialFunctions_erfc_m0B46451424A822FC555F696925F32A8707DE6C9A(((double)(((double)il2cpp_codegen_subtract(L_12, L_13))/((double)il2cpp_codegen_multiply(L_14, L_15)))), NULL);
		return ((double)il2cpp_codegen_multiply((0.5), L_16));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntNormal(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntNormal_m443BD44DE1A7CCD356908ABF1AF6A5938FB5BA99 (double ___q0, double ___mean1, double ___stddev2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___q0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___mean1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___stddev2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___q0;
		if ((((double)L_6) < ((double)(0.0))))
		{
			goto IL_004e;
		}
	}
	{
		double L_7 = ___q0;
		if ((!(((double)L_7) > ((double)(1.0)))))
		{
			goto IL_0058;
		}
	}

IL_004e:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0058:
	{
		double L_8 = ___stddev2;
		if ((!(((double)L_8) < ((double)(0.0)))))
		{
			goto IL_006e;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_006e:
	{
		double L_9 = ___stddev2;
		if ((!(((double)L_9) == ((double)(0.0)))))
		{
			goto IL_0092;
		}
	}
	{
		double L_10 = ___q0;
		if ((!(((double)L_10) == ((double)(1.0)))))
		{
			goto IL_0088;
		}
	}
	{
		double L_11 = ___mean1;
		return L_11;
	}

IL_0088:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0092:
	{
		double L_12 = ___q0;
		if ((!(((double)L_12) == ((double)(0.0)))))
		{
			goto IL_00a8;
		}
	}
	{
		return (-std::numeric_limits<double>::infinity());
	}

IL_00a8:
	{
		double L_13 = ___q0;
		if ((!(((double)L_13) == ((double)(1.0)))))
		{
			goto IL_00be;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_00be:
	{
		double L_14 = ___mean1;
		double L_15 = ___stddev2;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_16 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		double L_17 = ___q0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = SpecialFunctions_erfcInv_mAC3905F92AAE00D530B899DD0FD9CD25C169E67E(((double)il2cpp_codegen_multiply((2.0), L_17)), NULL);
		return ((double)il2cpp_codegen_subtract(L_14, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_15, L_16)), L_18))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::pdfStudentT(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_pdfStudentT_m96C2D587389F8772EF3A555B8CC0810C2C212B5C (double ___x0, double ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___v1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___v1;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_003a:
	{
		double L_5 = ___x0;
		if ((!(((double)L_5) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0);
	}

IL_0050:
	{
		double L_6 = ___x0;
		if ((!(((double)L_6) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_0066;
		}
	}
	{
		return (0.0);
	}

IL_0066:
	{
		double L_7 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_7, (1.0), NULL);
		if (!L_8)
		{
			goto IL_0099;
		}
	}
	{
		double L_9 = ___x0;
		double L_10 = ___x0;
		return ((double)((1.0)/((double)il2cpp_codegen_multiply((3.1415926535897931), ((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_9, L_10))))))));
	}

IL_0099:
	{
		double L_11 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_11, (2.0), NULL);
		if (!L_12)
		{
			goto IL_00ea;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_13 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		double L_14 = ___x0;
		double L_15 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_14, L_15))/(2.0))))), (1.5), NULL);
		return ((double)((1.0)/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_13)), L_16))));
	}

IL_00ea:
	{
		double L_17 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_17, (3.0), NULL);
		if (!L_18)
		{
			goto IL_013b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_19 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3_54;
		double L_20 = ___x0;
		double L_21 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_20, L_21))/(3.0))))), (2.0), NULL);
		return ((double)((2.0)/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((3.1415926535897931), L_19)), L_22))));
	}

IL_013b:
	{
		double L_23 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_23, (4.0), NULL);
		if (!L_24)
		{
			goto IL_0186;
		}
	}
	{
		double L_25 = ___x0;
		double L_26 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_25, L_26))/(4.0))))), (2.5), NULL);
		return ((double)((3.0)/((double)il2cpp_codegen_multiply((8.0), L_27))));
	}

IL_0186:
	{
		double L_28 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_28, (5.0), NULL);
		if (!L_29)
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_30 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT5_58;
		double L_31 = ___x0;
		double L_32 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_33;
		L_33 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_31, L_32))/(5.0))))), (3.0), NULL);
		return ((double)((8.0)/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((9.4247779607693793), L_30)), L_33))));
	}

IL_01d7:
	{
		double L_34 = ___v1;
		if ((!(((double)L_34) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_0201;
		}
	}
	{
		double L_35 = ___x0;
		double L_36 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = exp(((double)(((double)il2cpp_codegen_multiply(((-L_35)), L_36))/(2.0))));
		return ((double)il2cpp_codegen_multiply((0.39894228040143265), L_37));
	}

IL_0201:
	{
		double L_38 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_39;
		L_39 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)(((double)il2cpp_codegen_add(L_38, (1.0)))/(2.0))), NULL);
		double L_40 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = sqrt(((double)il2cpp_codegen_multiply(L_40, (3.1415926535897931))));
		double L_42 = ___v1;
		double L_43;
		L_43 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)(L_42/(2.0))), NULL);
		double L_44 = ___x0;
		double L_45 = ___x0;
		double L_46 = ___v1;
		double L_47 = ___v1;
		double L_48;
		L_48 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_44, L_45))/L_46)))), ((-((double)(((double)il2cpp_codegen_add(L_47, (1.0)))/(2.0))))), NULL);
		return ((double)il2cpp_codegen_multiply(((double)(L_39/((double)il2cpp_codegen_multiply(L_41, L_43)))), L_48));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::cdfStudentTPositiveX(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_cdfStudentTPositiveX_m287BA9C12787CE93FBD8AFC4C54C37322EC1F122 (double ___x0, double ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_0, (1.0), NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_2 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___PIINV_2;
		double L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = atan(L_3);
		return ((double)il2cpp_codegen_add((0.5), ((double)il2cpp_codegen_multiply(L_2, L_4))));
	}

IL_0028:
	{
		double L_5 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_5, (2.0), NULL);
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		double L_7 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_8 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		double L_9 = ___x0;
		double L_10 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = sqrt(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_9, L_10))/(2.0))))));
		return ((double)il2cpp_codegen_add((0.5), ((double)(L_7/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_8)), L_11))))));
	}

IL_0072:
	{
		double L_12 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_12, (3.0), NULL);
		if (!L_13)
		{
			goto IL_00ca;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_14 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___PIINV_2;
		double L_15 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3_54;
		double L_16 = ___x0;
		double L_17 = ___x0;
		double L_18 = ___x0;
		double L_19 = ___x0;
		double L_20 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3_54;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = atan(((double)(L_19/L_20)));
		return ((double)il2cpp_codegen_add((0.5), ((double)il2cpp_codegen_multiply(L_14, ((double)il2cpp_codegen_add(((double)(((double)il2cpp_codegen_multiply(((double)((1.0)/L_15)), L_16))/((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_17, L_18))/(3.0))))))), L_21))))));
	}

IL_00ca:
	{
		double L_22 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_22, (4.0), NULL);
		if (!L_23)
		{
			goto IL_013e;
		}
	}
	{
		double L_24 = ___x0;
		double L_25 = ___x0;
		double L_26 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = sqrt(((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_25, L_26))/(4.0))))));
		double L_28 = ___x0;
		double L_29 = ___x0;
		double L_30 = ___x0;
		double L_31 = ___x0;
		return ((double)il2cpp_codegen_add((0.5), ((double)il2cpp_codegen_multiply(((double)(((double)il2cpp_codegen_multiply((0.375), L_24))/L_27)), ((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.083333333333333329), L_28)), L_29))/((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_30, L_31))/(4.0)))))))))))));
	}

IL_013e:
	{
		double L_32 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_32, (5.0), NULL);
		if (!L_33)
		{
			goto IL_01c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_34 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___PIINV_2;
		double L_35 = ___x0;
		double L_36 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT5_58;
		double L_37 = ___x0;
		double L_38 = ___x0;
		double L_39 = ___x0;
		double L_40 = ___x0;
		double L_41 = ___x0;
		double L_42 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT5_58;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_43;
		L_43 = atan(((double)(L_41/L_42)));
		return ((double)il2cpp_codegen_add((0.5), ((double)il2cpp_codegen_multiply(L_34, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(L_35/((double)il2cpp_codegen_multiply(L_36, ((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_37, L_38))/(5.0))))))))), ((double)il2cpp_codegen_add((1.0), ((double)((2.0)/((double)il2cpp_codegen_multiply((3.0), ((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_39, L_40))/(5.0))))))))))))), L_43))))));
	}

IL_01c2:
	{
		double L_44 = ___v1;
		if ((!(((double)L_44) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_01ef;
		}
	}
	{
		double L_45 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_46 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = SpecialFunctions_erf_m97B92E50561D70697F2BE8F77B544AA598D1C91A(((double)(L_45/L_46)), NULL);
		return ((double)il2cpp_codegen_multiply((0.5), ((double)il2cpp_codegen_add((1.0), L_47))));
	}

IL_01ef:
	{
		double L_48 = ___x0;
		double L_49 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_50;
		L_50 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)(((double)il2cpp_codegen_add(L_49, (1.0)))/(2.0))), NULL);
		double L_51 = ___v1;
		double L_52 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_53;
		L_53 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_52, (2.0), NULL);
		double L_54 = ___v1;
		double L_55;
		L_55 = SpecialFunctions_hypergeometricF_m4106F8A14AFCC91B383C84CE95972B8BE92C7BB5((0.5), ((double)(((double)il2cpp_codegen_add(L_51, (1.0)))/(2.0))), (1.5), ((double)(((-L_53))/L_54)), (300.0), (1.0E-14), NULL);
		double L_56 = ___v1;
		double L_57;
		L_57 = sqrt(((double)il2cpp_codegen_multiply((3.1415926535897931), L_56)));
		double L_58 = ___v1;
		double L_59;
		L_59 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)(L_58/(2.0))), NULL);
		return ((double)il2cpp_codegen_add((0.5), ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_48, L_50)), L_55))/((double)il2cpp_codegen_multiply(L_57, L_59))))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::cdfStudentT(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_cdfStudentT_m559D7D1E2D3E056026892B0BC54556B52A1303D9 (double ___x0, double ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___v1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___v1;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_003a:
	{
		double L_5 = ___x0;
		if ((!(((double)L_5) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0);
	}

IL_0050:
	{
		double L_6 = ___x0;
		if ((!(((double)L_6) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_0066;
		}
	}
	{
		return (1.0);
	}

IL_0066:
	{
		double L_7 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_7, (0.0), NULL);
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		return (0.5);
	}

IL_0081:
	{
		double L_9 = ___x0;
		if ((!(((double)L_9) > ((double)(0.0)))))
		{
			goto IL_0095;
		}
	}
	{
		double L_10 = ___x0;
		double L_11 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = ProbabilityDistributions_cdfStudentTPositiveX_m287BA9C12787CE93FBD8AFC4C54C37322EC1F122(L_10, L_11, NULL);
		return L_12;
	}

IL_0095:
	{
		double L_13 = ___x0;
		double L_14 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = ProbabilityDistributions_cdfStudentTPositiveX_m287BA9C12787CE93FBD8AFC4C54C37322EC1F122(((-L_13)), L_14, NULL);
		return ((double)il2cpp_codegen_subtract((1.0), L_15));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntStudentT(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntStudentT_mF05AD8A63684D7BE7C8F8D3A493195F4A9633117 (double ___p0, double ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___p0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___v1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___v1;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_003a:
	{
		double L_5 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_5, (0.0), NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		return (-std::numeric_limits<double>::infinity());
	}

IL_0055:
	{
		double L_7 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_7, (1.0), NULL);
		if (!L_8)
		{
			goto IL_0070;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_0070:
	{
		double L_9 = ___p0;
		if ((((double)L_9) < ((double)(0.0))))
		{
			goto IL_0088;
		}
	}
	{
		double L_10 = ___p0;
		if ((!(((double)L_10) > ((double)(1.0)))))
		{
			goto IL_0092;
		}
	}

IL_0088:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0092:
	{
		double L_11 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_11, (0.5), NULL);
		if (!L_12)
		{
			goto IL_00ad;
		}
	}
	{
		return (0.0);
	}

IL_00ad:
	{
		double L_13 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_13, (1.0), NULL);
		if (!L_14)
		{
			goto IL_00d9;
		}
	}
	{
		double L_15 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = tan(((double)il2cpp_codegen_multiply((3.1415926535897931), ((double)il2cpp_codegen_subtract(L_15, (0.5))))));
		return L_16;
	}

IL_00d9:
	{
		double L_17 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_17, (2.0), NULL);
		if (!L_18)
		{
			goto IL_0129;
		}
	}
	{
		double L_19 = ___p0;
		double L_20 = ___p0;
		V_1 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((4.0), L_19)), ((double)il2cpp_codegen_subtract((1.0), L_20))));
		double L_21 = ___p0;
		double L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = sqrt(((double)((2.0)/L_22)));
		return ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_21)), (1.0))), L_23));
	}

IL_0129:
	{
		double L_24 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_24, (4.0), NULL);
		if (!L_25)
		{
			goto IL_01a1;
		}
	}
	{
		double L_26 = ___p0;
		double L_27 = ___p0;
		V_1 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((4.0), L_26)), ((double)il2cpp_codegen_subtract((1.0), L_27))));
		double L_28 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = sqrt(L_28);
		double L_30;
		L_30 = acos(L_29);
		double L_31;
		L_31 = cos(((double)il2cpp_codegen_multiply((0.33333333333333331), L_30)));
		double L_32 = V_1;
		double L_33;
		L_33 = sqrt(L_32);
		V_0 = ((double)(L_31/L_33));
		double L_34 = ___p0;
		int32_t L_35;
		L_35 = Math_Sign_mA4D918D42B753CFEF3AC049AEF14C7FDE07FFD7E(((double)il2cpp_codegen_subtract(L_34, (0.5))), NULL);
		double L_36 = V_0;
		double L_37;
		L_37 = sqrt(((double)il2cpp_codegen_subtract(L_36, (1.0))));
		return ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)L_35), (2.0))), L_37));
	}

IL_01a1:
	{
		double L_38 = ___v1;
		if ((!(((double)L_38) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_01e0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_39 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		double L_40 = ___p0;
		double L_41 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_42;
		L_42 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_40, ((double)il2cpp_codegen_subtract((1.0), L_41)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_43;
		L_43 = SpecialFunctions_erfInv_mF9CA902E25D3EDBC3C86A3F99D3B4051ADA0B311(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_42)), (1.0))), NULL);
		V_2 = ((double)il2cpp_codegen_multiply(L_39, L_43));
		goto IL_022a;
	}

IL_01e0:
	{
		double L_44 = ___v1;
		double L_45 = ___p0;
		double L_46 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716(L_45, ((double)il2cpp_codegen_subtract((1.0), L_46)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_48;
		L_48 = SpecialFunctions_inverseRegularizedBeta_m68388C6B6D4EC39D86993D948DBDACB719D54E72(((double)il2cpp_codegen_multiply((0.5), L_44)), (0.5), ((double)il2cpp_codegen_multiply((2.0), L_47)), NULL);
		V_2 = L_48;
		double L_49 = ___v1;
		double L_50 = V_2;
		double L_51 = V_2;
		double L_52;
		L_52 = sqrt(((double)(((double)il2cpp_codegen_multiply(L_49, ((double)il2cpp_codegen_subtract((1.0), L_50))))/L_51)));
		V_2 = L_52;
	}

IL_022a:
	{
		double L_53 = V_2;
		bool L_54;
		L_54 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_53, NULL);
		if (!L_54)
		{
			goto IL_025f;
		}
	}
	{
		double L_55 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E((fmod(L_55, (2.0))), (0.0), NULL);
		if (!L_56)
		{
			goto IL_0257;
		}
	}
	{
		double L_57 = ___p0;
		double L_58 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		double L_59;
		L_59 = ProbabilityDistributions_qntChengFuStudentTAlgorithm_mECCD957C50877FE3DE0D3BA82B6C8E0AAA7F6563(L_57, L_58, NULL);
		V_2 = L_59;
		goto IL_025f;
	}

IL_0257:
	{
		double L_60 = ___p0;
		double L_61 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		double L_62;
		L_62 = ProbabilityDistributions_qntHillsAlgorithm396_mAF1166C09374EA9E484BA1498BEF07D1F1CA9E01(L_60, L_61, NULL);
		V_2 = L_62;
	}

IL_025f:
	{
		double L_63 = V_2;
		bool L_64;
		L_64 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_63, NULL);
		if (!L_64)
		{
			goto IL_0298;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* L_65 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___pp_1;
		double L_66 = ___p0;
		double L_67 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_68;
		L_68 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_66, ((double)il2cpp_codegen_subtract((1.0), L_67)), NULL);
		NullCheck(L_65);
		Constant_setConstantValue_mB6DC23E29846DC26A76081A11F9FA1D09FA290B4_inline(L_65, L_68, NULL);
		Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* L_69 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___vv_2;
		double L_70 = ___v1;
		NullCheck(L_69);
		Constant_setConstantValue_mB6DC23E29846DC26A76081A11F9FA1D09FA290B4_inline(L_69, L_70, NULL);
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_71 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___qntSolveStud_3;
		NullCheck(L_71);
		double L_72;
		L_72 = Expression_calculate_mB0AAB05AF159348B01B4020FFDDAAE087F96A77C(L_71, NULL);
		V_2 = L_72;
	}

IL_0298:
	{
		double L_73 = ___p0;
		if ((((double)L_73) >= ((double)(0.5))))
		{
			goto IL_02a7;
		}
	}
	{
		double L_74 = V_2;
		return ((-L_74));
	}

IL_02a7:
	{
		double L_75 = V_2;
		return L_75;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndStudentT(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndStudentT_m68EE6641775FD59CF9195981E70168BC9CF8FDA3 (double ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___v0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___v0;
		if ((!(((double)L_2) <= ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		NullCheck(L_3);
		double L_4;
		L_4 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_3);
		double L_5 = ___v0;
		double L_6;
		L_6 = ProbabilityDistributions_qntStudentT_mF05AD8A63684D7BE7C8F8D3A493195F4A9633117(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntChengFuStudentTAlgorithm(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntChengFuStudentTAlgorithm_mECCD957C50877FE3DE0D3BA82B6C8E0AAA7F6563 (double ___p0, double ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		double L_0 = ___p0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___v1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___v1;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_003a:
	{
		double L_5 = ___p0;
		if ((((double)L_5) < ((double)(0.0))))
		{
			goto IL_0052;
		}
	}
	{
		double L_6 = ___p0;
		if ((!(((double)L_6) > ((double)(1.0)))))
		{
			goto IL_005c;
		}
	}

IL_0052:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_005c:
	{
		double L_7 = ___v1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = ceil(((double)(L_7/(2.0))));
		V_6 = L_8;
		double L_9 = ___p0;
		V_0 = ((double)il2cpp_codegen_subtract((1.0), L_9));
		double L_10 = V_0;
		if ((((double)L_10) == ((double)(0.5))))
		{
			goto IL_0252;
		}
	}
	{
		double L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((2.0), L_11)))), (2.0), NULL);
		double L_13 = V_0;
		double L_14;
		L_14 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((2.0), L_13)))), (2.0), NULL);
		double L_15;
		L_15 = sqrt(((double)(((double)il2cpp_codegen_multiply((2.0), L_12))/((double)il2cpp_codegen_subtract((1.0), L_14)))));
		V_1 = L_15;
		V_2 = (0.0);
		goto IL_022c;
	}

IL_00f9:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_16)
		{
			goto IL_010a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_010a:
	{
		V_3 = (0.0);
		V_4 = (0.0);
		goto IL_01b7;
	}

IL_0124:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_17)
		{
			goto IL_0135;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0135:
	{
		double L_18 = V_3;
		double L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(((double)il2cpp_codegen_multiply((2.0), L_19)), NULL);
		double L_21 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((2.0), ((double)il2cpp_codegen_multiply((2.0), L_21)), NULL);
		double L_23 = V_4;
		double L_24;
		L_24 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(L_23, NULL);
		double L_25;
		L_25 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_24, (2.0), NULL);
		double L_26 = V_1;
		double L_27;
		L_27 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_26, (2.0), NULL);
		double L_28 = V_6;
		double L_29 = V_4;
		double L_30;
		L_30 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_add((1.0), ((double)(L_27/((double)il2cpp_codegen_multiply((2.0), L_28)))))), ((-L_29)), NULL);
		V_3 = ((double)il2cpp_codegen_add(L_18, ((double)il2cpp_codegen_multiply(((double)(((double)(L_20/L_22))/L_25)), L_30))));
		double L_31 = V_4;
		V_4 = ((double)il2cpp_codegen_add(L_31, (1.0)));
	}

IL_01b7:
	{
		double L_32 = V_4;
		double L_33 = V_6;
		if ((((double)L_32) <= ((double)((double)il2cpp_codegen_subtract(L_33, (1.0))))))
		{
			goto IL_0124;
		}
	}
	{
		double L_34 = V_6;
		double L_35 = V_3;
		double L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)(L_35/((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((2.0), L_36)))))), (2.0), NULL);
		double L_38;
		L_38 = sqrt(((double)il2cpp_codegen_multiply(((double)((1.0)/((double)il2cpp_codegen_multiply((2.0), L_34)))), ((double)il2cpp_codegen_subtract(L_37, (1.0))))));
		V_1 = ((double)((1.0)/L_38));
		double L_39 = V_2;
		V_2 = ((double)il2cpp_codegen_add(L_39, (1.0)));
	}

IL_022c:
	{
		double L_40 = V_2;
		if ((((double)L_40) < ((double)(20.0))))
		{
			goto IL_00f9;
		}
	}
	{
		double L_41 = V_0;
		if ((!(((double)L_41) > ((double)(0.5)))))
		{
			goto IL_024d;
		}
	}
	{
		double L_42 = V_1;
		V_5 = ((-L_42));
		goto IL_025d;
	}

IL_024d:
	{
		double L_43 = V_1;
		V_5 = L_43;
		goto IL_025d;
	}

IL_0252:
	{
		V_5 = (0.0);
	}

IL_025d:
	{
		double L_44 = V_5;
		return L_44;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntHillsAlgorithm396(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntHillsAlgorithm396_mAF1166C09374EA9E484BA1498BEF07D1F1CA9E01 (double ___p0, double ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	{
		double L_0 = ___p0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___v1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___v1;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_003a:
	{
		double L_5 = ___p0;
		if ((((double)L_5) < ((double)(0.0))))
		{
			goto IL_0052;
		}
	}
	{
		double L_6 = ___p0;
		if ((!(((double)L_6) > ((double)(1.0)))))
		{
			goto IL_005c;
		}
	}

IL_0052:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_005c:
	{
		double L_7 = ___p0;
		if ((!(((double)L_7) > ((double)(0.5)))))
		{
			goto IL_0082;
		}
	}
	{
		V_2 = (bool)0;
		double L_8 = ___p0;
		V_1 = ((double)il2cpp_codegen_multiply((2.0), ((double)il2cpp_codegen_subtract((1.0), L_8))));
		goto IL_0090;
	}

IL_0082:
	{
		V_2 = (bool)1;
		double L_9 = ___p0;
		V_1 = ((double)il2cpp_codegen_multiply((2.0), L_9));
	}

IL_0090:
	{
		double L_10 = ___v1;
		V_3 = ((double)((1.0)/((double)il2cpp_codegen_subtract(L_10, (0.5)))));
		double L_11 = V_3;
		double L_12 = V_3;
		V_4 = ((double)((48.0)/((double)il2cpp_codegen_multiply(L_11, L_12))));
		double L_13 = V_3;
		double L_14 = V_4;
		double L_15 = V_3;
		double L_16 = V_3;
		V_5 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_multiply((20700.0), L_13))/L_14)), (98.0))), L_15)), (16.0))), L_16)), (96.359999999999999)));
		double L_17 = V_4;
		double L_18 = V_5;
		double L_19 = V_4;
		double L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_21 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___PIBY2_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = sqrt(((double)il2cpp_codegen_multiply(L_20, L_21)));
		double L_23 = ___v1;
		V_6 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)(((double)il2cpp_codegen_subtract(((double)((94.5)/((double)il2cpp_codegen_add(L_17, L_18)))), (3.0)))/L_19)), (1.0))), L_22)), L_23));
		double L_24 = V_1;
		double L_25 = V_6;
		V_7 = ((double)il2cpp_codegen_multiply(L_24, L_25));
		double L_26 = V_7;
		double L_27 = ___v1;
		double L_28;
		L_28 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_26, ((double)((2.0)/L_27)), NULL);
		V_8 = L_28;
		double L_29 = V_8;
		double L_30 = V_3;
		if ((!(((double)L_29) > ((double)((double)il2cpp_codegen_add((0.050000000000000003), L_30))))))
		{
			goto IL_027f;
		}
	}
	{
		double L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = ProbabilityDistributions_qntNormal_m443BD44DE1A7CCD356908ABF1AF6A5938FB5BA99(((double)il2cpp_codegen_multiply(L_31, (0.5))), (0.0), (1.0), NULL);
		V_7 = L_32;
		double L_33 = V_7;
		double L_34 = V_7;
		V_8 = ((double)il2cpp_codegen_multiply(L_33, L_34));
		double L_35 = ___v1;
		if ((!(((double)L_35) < ((double)(5.0)))))
		{
			goto IL_01a8;
		}
	}
	{
		double L_36 = V_5;
		double L_37 = ___v1;
		double L_38 = V_7;
		V_5 = ((double)il2cpp_codegen_add(L_36, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.29999999999999999), ((double)il2cpp_codegen_subtract(L_37, (4.5))))), ((double)il2cpp_codegen_add(L_38, (0.59999999999999998)))))));
	}

IL_01a8:
	{
		double L_39 = V_5;
		double L_40 = V_6;
		double L_41 = V_7;
		double L_42 = V_7;
		double L_43 = V_7;
		double L_44 = V_7;
		double L_45 = V_4;
		V_5 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_39, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.050000000000000003), L_40)), L_41)), (5.0))), L_42)), (7.0))), L_43)), (2.0))), L_44)))), L_45));
		double L_46 = V_8;
		double L_47 = V_8;
		double L_48 = V_8;
		double L_49 = V_5;
		double L_50 = V_8;
		double L_51 = V_4;
		double L_52 = V_7;
		V_8 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply((0.40000000000000002), L_46)), (6.2999999999999998))), L_47)), (36.0))), L_48)), (94.5)))/L_49)), L_50)), (3.0)))/L_51)), (1.0))), L_52));
		double L_53 = V_3;
		double L_54 = V_8;
		double L_55 = V_8;
		V_8 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_53, L_54)), L_55));
		double L_56 = V_8;
		if ((!(((double)L_56) > ((double)(0.002)))))
		{
			goto IL_0266;
		}
	}
	{
		double L_57 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_58;
		L_58 = exp(L_57);
		V_8 = ((double)il2cpp_codegen_subtract(L_58, (1.0)));
		goto IL_0310;
	}

IL_0266:
	{
		double L_59 = V_8;
		double L_60 = V_8;
		double L_61 = V_8;
		V_8 = ((double)il2cpp_codegen_add(L_59, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.5), L_60)), L_61))));
		goto IL_0310;
	}

IL_027f:
	{
		double L_62 = ___v1;
		double L_63 = ___v1;
		double L_64 = V_8;
		double L_65 = V_6;
		double L_66 = ___v1;
		double L_67 = ___v1;
		double L_68 = V_8;
		double L_69 = ___v1;
		double L_70 = ___v1;
		double L_71 = V_8;
		V_8 = ((double)il2cpp_codegen_add(((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(((double)((1.0)/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_add(L_62, (6.0)))/((double)il2cpp_codegen_multiply(L_63, L_64)))), ((double)il2cpp_codegen_multiply((0.088999999999999996), L_65)))), (0.82199999999999995))), ((double)il2cpp_codegen_add(L_66, (2.0))))), (3.0))))), ((double)((0.5)/((double)il2cpp_codegen_add(L_67, (4.0))))))), L_68)), (1.0))), ((double)il2cpp_codegen_add(L_69, (1.0)))))/((double)il2cpp_codegen_add(L_70, (2.0))))), ((double)((1.0)/L_71))));
	}

IL_0310:
	{
		double L_72 = ___v1;
		double L_73 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_74;
		L_74 = sqrt(((double)il2cpp_codegen_multiply(L_72, L_73)));
		V_0 = L_74;
		bool L_75 = V_2;
		if (!L_75)
		{
			goto IL_0320;
		}
	}
	{
		double L_76 = V_0;
		V_0 = ((-L_76));
	}

IL_0320:
	{
		double L_77 = V_0;
		return L_77;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::pdfChiSquared(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_pdfChiSquared_mB3BB447F61226CBB855760C1F6290F5064687889 (double ___x0, double ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___k1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = bankers_round(L_4);
		___k1 = L_5;
		double L_6 = ___k1;
		if ((!(((double)L_6) < ((double)(1.0)))))
		{
			goto IL_0042;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0042:
	{
		double L_7 = ___x0;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_0058;
		}
	}
	{
		return (0.0);
	}

IL_0058:
	{
		double L_8 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_8, (0.0), NULL);
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		return (0.0);
	}

IL_0073:
	{
		double L_10 = ___x0;
		double L_11 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_10, ((double)il2cpp_codegen_subtract(((double)(L_11/(2.0))), (1.0))), NULL);
		double L_13 = ___x0;
		double L_14;
		L_14 = exp(((double)(((-L_13))/(2.0))));
		double L_15 = ___k1;
		double L_16;
		L_16 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((2.0), ((double)(L_15/(2.0))), NULL);
		double L_17 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)(L_17/(2.0))), NULL);
		return ((double)(((double)il2cpp_codegen_multiply(L_12, L_14))/((double)il2cpp_codegen_multiply(L_16, L_18))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::cdfChiSquared(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_cdfChiSquared_m5E9E034EBFEE9F69C4E75C98AD8AE1B68A6CBEF2 (double ___x0, double ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___k1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = bankers_round(L_4);
		___k1 = L_5;
		double L_6 = ___k1;
		if ((!(((double)L_6) < ((double)(1.0)))))
		{
			goto IL_0042;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0042:
	{
		double L_7 = ___x0;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_0058;
		}
	}
	{
		return (0.0);
	}

IL_0058:
	{
		double L_8 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_8, (0.0), NULL);
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		return (0.0);
	}

IL_0073:
	{
		double L_10 = ___k1;
		double L_11 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = SpecialFunctions_regularizedGammaLowerP_m0391776CA4410893E77030FD28C5384E3A2CC963(((double)(L_10/(2.0))), ((double)(L_11/(2.0))), NULL);
		return L_12;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::qntChiSquared(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_qntChiSquared_m611AF7CE278900E4097DEEDE3625C30C5369D810 (double ___p0, double ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___p0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___k1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_4, (0.0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		return (0.0);
	}

IL_003f:
	{
		double L_6 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_6, (1.0), NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_005a:
	{
		double L_8 = ___p0;
		if ((((double)L_8) < ((double)(0.0))))
		{
			goto IL_0072;
		}
	}
	{
		double L_9 = ___p0;
		if ((!(((double)L_9) > ((double)(1.0)))))
		{
			goto IL_007c;
		}
	}

IL_0072:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_007c:
	{
		double L_10 = ___k1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = bankers_round(L_10);
		___k1 = L_11;
		double L_12 = ___k1;
		if ((!(((double)L_12) < ((double)(1.0)))))
		{
			goto IL_009a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_009a:
	{
		double L_13 = ___k1;
		double L_14 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = SpecialFunctions_inverseRegularizedGammaLowerP_m745F43000295E313CBE261DC9C05A3D2B99D237E(((double)(L_13/(2.0))), L_14, NULL);
		return ((double)il2cpp_codegen_multiply((2.0), L_15));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::rndChiSquared(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ProbabilityDistributions_rndChiSquared_mA2A0BF8F05D7597AF5066108BCED465BEB5482B4 (double ___k0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___k0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___k0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = bankers_round(L_2);
		___k0 = L_3;
		double L_4 = ___k0;
		if ((!(((double)L_4) < ((double)(1.0)))))
		{
			goto IL_0030;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_5 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0;
		NullCheck(L_5);
		double L_6;
		L_6 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_5);
		double L_7 = ___k0;
		double L_8;
		L_8 = ProbabilityDistributions_qntChiSquared_m611AF7CE278900E4097DEEDE3625C30C5369D810(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbabilityDistributions__ctor_m9A2CE00C4F22AF4F2B09771037726C49EA65FF2D (ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.ProbabilityDistributions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProbabilityDistributions__cctor_m5196C365602FDE7F03BA815C1683AB5AFD7B5495 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral212EF11BFBF4507D756826D18645BC2D5D3438D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DFFC3267C5F999585E61B45BA9C8DF18D4B02CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___randomGenerator_0), (void*)L_0);
		Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* L_1 = (Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC*)il2cpp_codegen_object_new(Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Constant__ctor_m16AB1A05B1A1B3B0A5D7A92D4DB9205EDDBA75A3(L_1, _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B, (1.0), NULL);
		((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___pp_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___pp_1), (void*)L_1);
		Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* L_2 = (Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC*)il2cpp_codegen_object_new(Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Constant__ctor_m16AB1A05B1A1B3B0A5D7A92D4DB9205EDDBA75A3(L_2, _stringLiteral9DFFC3267C5F999585E61B45BA9C8DF18D4B02CA, (1.0), NULL);
		((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___vv_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___vv_2), (void*)L_2);
		PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4* L_3 = (PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4*)(PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4*)SZArrayNew(PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4_il2cpp_TypeInfo_var, (uint32_t)2);
		PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4* L_4 = L_3;
		Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* L_5 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___pp_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A*)L_5);
		PrimitiveElementU5BU5D_t602267E426628D84CB379317863DB6FC19C411F4* L_6 = L_4;
		Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* L_7 = ((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___vv_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (PrimitiveElement_tB59355E876ADB261E185BFFE8077B73272E4613A*)L_7);
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_8 = (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280*)il2cpp_codegen_object_new(Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Expression__ctor_m07A7BC64A5801D60FBC620C122A36B3201275FB0(L_8, _stringLiteral212EF11BFBF4507D756826D18645BC2D5D3438D3, L_6, NULL);
		((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___qntSolveStud_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_StaticFields*)il2cpp_codegen_static_fields_for(ProbabilityDistributions_t174B620F9151220D9DBDDA5D826726AE9198D2DB_il2cpp_TypeInfo_var))->___qntSolveStud_3), (void*)L_8);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::exponentialIntegralEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_exponentialIntegralEi_m9EAF7B690AB0B9E7A40BEC3D00592444D3DDE1EF (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) < ((double)(-5.0)))))
		{
			goto IL_0025;
		}
	}
	{
		double L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = SpecialFunctions_continuedFractionEi_mB15C99E6444DB8F7D53F4E958BC6811F08BD11FB(L_3, NULL);
		return L_4;
	}

IL_0025:
	{
		double L_5 = ___x0;
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_003b;
		}
	}
	{
		return (-1.7976931348623157E+308);
	}

IL_003b:
	{
		double L_6 = ___x0;
		if ((!(((double)L_6) < ((double)(6.7999999999999998)))))
		{
			goto IL_004e;
		}
	}
	{
		double L_7 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = SpecialFunctions_powerSeriesEi_m439E55C0FE301FB484B4B0D9C03075FD58D4708A(L_7, NULL);
		return L_8;
	}

IL_004e:
	{
		double L_9 = ___x0;
		if ((!(((double)L_9) < ((double)(50.0)))))
		{
			goto IL_0061;
		}
	}
	{
		double L_10 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = SpecialFunctions_argumentAdditionSeriesEi_m52E7FAE74AF80DF7D9A5727127C19CABC66E695E(L_10, NULL);
		return L_11;
	}

IL_0061:
	{
		double L_12 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = SpecialFunctions_continuedFractionEi_mB15C99E6444DB8F7D53F4E958BC6811F08BD11FB(L_12, NULL);
		return L_13;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::continuedFractionEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_continuedFractionEi_mB15C99E6444DB8F7D53F4E958BC6811F08BD11FB (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	{
		V_0 = (1.0);
		V_1 = (0.0);
		V_2 = (0.0);
		V_3 = (1.0);
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = exp(L_0);
		V_4 = L_1;
		double L_2 = ___x0;
		V_5 = ((double)il2cpp_codegen_add(((-L_2)), (1.0)));
		double L_3 = V_5;
		double L_4 = V_1;
		double L_5 = V_4;
		double L_6 = V_0;
		V_6 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_3, L_4)), ((double)il2cpp_codegen_multiply(L_5, L_6))));
		double L_7 = V_5;
		double L_8 = V_3;
		double L_9 = V_4;
		double L_10 = V_2;
		V_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_7, L_8)), ((double)il2cpp_codegen_multiply(L_9, L_10))));
		V_8 = 1;
		V_4 = (1.0);
		goto IL_00e0;
	}

IL_0064:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0075:
	{
		double L_12 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = fabs(L_12);
		if ((!(((double)L_13) > ((double)(1.0)))))
		{
			goto IL_00a3;
		}
	}
	{
		double L_14 = V_1;
		double L_15 = V_7;
		V_0 = ((double)(L_14/L_15));
		double L_16 = V_6;
		double L_17 = V_7;
		V_1 = ((double)(L_16/L_17));
		double L_18 = V_3;
		double L_19 = V_7;
		V_2 = ((double)(L_18/L_19));
		V_3 = (1.0);
		goto IL_00ad;
	}

IL_00a3:
	{
		double L_20 = V_1;
		V_0 = L_20;
		double L_21 = V_6;
		V_1 = L_21;
		double L_22 = V_3;
		V_2 = L_22;
		double L_23 = V_7;
		V_3 = L_23;
	}

IL_00ad:
	{
		int32_t L_24 = V_8;
		int32_t L_25 = V_8;
		V_4 = ((double)((int32_t)il2cpp_codegen_multiply(((-L_24)), L_25)));
		double L_26 = V_5;
		V_5 = ((double)il2cpp_codegen_add(L_26, (2.0)));
		double L_27 = V_5;
		double L_28 = V_1;
		double L_29 = V_4;
		double L_30 = V_0;
		V_6 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_27, L_28)), ((double)il2cpp_codegen_multiply(L_29, L_30))));
		double L_31 = V_5;
		double L_32 = V_3;
		double L_33 = V_4;
		double L_34 = V_2;
		V_7 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_31, L_32)), ((double)il2cpp_codegen_multiply(L_33, L_34))));
		int32_t L_35 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00e0:
	{
		double L_36 = V_6;
		double L_37 = V_3;
		double L_38 = V_1;
		double L_39 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_40;
		L_40 = fabs(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_36, L_37)), ((double)il2cpp_codegen_multiply(L_38, L_39)))));
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_41 = ((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___EI_EPSILON_1;
		double L_42 = V_1;
		double L_43 = V_7;
		double L_44;
		L_44 = fabs(((double)il2cpp_codegen_multiply(L_42, L_43)));
		if ((((double)L_40) > ((double)((double)il2cpp_codegen_multiply(L_41, L_44)))))
		{
			goto IL_0064;
		}
	}
	{
		double L_45 = V_6;
		double L_46 = V_7;
		return ((double)(((-L_45))/L_46));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::powerSeriesEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_powerSeriesEi_m439E55C0FE301FB484B4B0D9C03075FD58D4708A (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		double L_0 = ___x0;
		V_0 = ((-L_0));
		double L_1 = ___x0;
		V_1 = ((-L_1));
		V_2 = (0.0);
		V_3 = (1.0);
		V_4 = (0.57721566490153287);
		V_5 = (1.0);
		V_6 = (1.0);
		double L_2 = ___x0;
		if ((!(((double)L_2) == ((double)(0.0)))))
		{
			goto IL_0096;
		}
	}
	{
		return (-1.7976931348623157E+308);
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0062:
	{
		double L_4 = V_1;
		V_2 = L_4;
		double L_5 = V_5;
		V_5 = ((double)il2cpp_codegen_add(L_5, (1.0)));
		double L_6 = V_0;
		double L_7 = ___x0;
		V_0 = ((double)il2cpp_codegen_multiply(L_6, ((-L_7))));
		double L_8 = V_6;
		double L_9 = V_5;
		V_6 = ((double)il2cpp_codegen_multiply(L_8, L_9));
		double L_10 = V_3;
		double L_11 = V_5;
		V_3 = ((double)il2cpp_codegen_add(L_10, ((double)((1.0)/L_11))));
		double L_12 = V_1;
		double L_13 = V_3;
		double L_14 = V_0;
		double L_15 = V_6;
		V_1 = ((double)il2cpp_codegen_add(L_12, ((double)(((double)il2cpp_codegen_multiply(L_13, L_14))/L_15))));
	}

IL_0096:
	{
		double L_16 = V_1;
		double L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = fabs(((double)il2cpp_codegen_subtract(L_16, L_17)));
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_19 = ((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___EI_EPSILON_1;
		double L_20 = V_2;
		double L_21;
		L_21 = fabs(L_20);
		if ((((double)L_18) > ((double)((double)il2cpp_codegen_multiply(L_19, L_21)))))
		{
			goto IL_0051;
		}
	}
	{
		double L_22 = V_4;
		double L_23 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = fabs(L_23);
		double L_25;
		L_25 = log(L_24);
		double L_26 = ___x0;
		double L_27;
		L_27 = exp(L_26);
		double L_28 = V_1;
		return ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_22, L_25)), ((double)il2cpp_codegen_multiply(L_27, L_28))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::argumentAdditionSeriesEi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_argumentAdditionSeriesEi_m52E7FAE74AF80DF7D9A5727127C19CABC66E695E (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	{
		double L_0 = ___x0;
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_add(L_0, (0.5))));
		V_1 = 0;
		int32_t L_1 = V_0;
		V_2 = ((double)L_1);
		double L_2 = ___x0;
		double L_3 = V_2;
		V_3 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		double L_4 = V_2;
		V_4 = L_4;
		double L_5 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = exp(L_5);
		V_5 = L_6;
		V_6 = (1.0);
		double L_7 = V_5;
		double L_8 = V_4;
		V_7 = ((double)(((double)il2cpp_codegen_subtract(L_7, (1.0)))/L_8));
		V_8 = (1.7976931348623157E+308);
		V_9 = (1.0);
		V_10 = (1.0);
		goto IL_00b1;
	}

IL_0060:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0071:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		double L_11 = V_9;
		int32_t L_12 = V_1;
		V_9 = ((double)il2cpp_codegen_multiply(L_11, ((double)L_12)));
		double L_13 = V_4;
		double L_14 = V_2;
		V_4 = ((double)il2cpp_codegen_multiply(L_13, L_14));
		double L_15 = V_10;
		double L_16 = V_3;
		V_10 = ((double)il2cpp_codegen_multiply(L_15, ((-L_16))));
		double L_17 = V_6;
		double L_18 = V_10;
		double L_19 = V_9;
		V_6 = ((double)il2cpp_codegen_add(L_17, ((double)(L_18/L_19))));
		double L_20 = V_9;
		double L_21 = V_5;
		double L_22 = V_6;
		double L_23 = V_4;
		V_8 = ((double)(((double)il2cpp_codegen_multiply(L_20, ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_21, L_22)), (1.0)))))/L_23));
		double L_24 = V_7;
		double L_25 = V_8;
		V_7 = ((double)il2cpp_codegen_add(L_24, L_25));
	}

IL_00b1:
	{
		double L_26 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = fabs(L_26);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_28 = ((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___EI_EPSILON_1;
		double L_29 = V_7;
		double L_30;
		L_30 = fabs(L_29);
		if ((((double)L_27) > ((double)((double)il2cpp_codegen_multiply(L_28, L_30)))))
		{
			goto IL_0060;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_31 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___EI_42;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract(L_32, 7));
		double L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		double L_35 = V_7;
		double L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = exp(L_36);
		return ((double)il2cpp_codegen_add(L_34, ((double)il2cpp_codegen_multiply(L_35, L_37))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::logarithmicIntegralLi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_logarithmicIntegralLi_mF53BCDF7F4FB9B8BB6DD30A4C36F5E1BC16A0ACE (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0028:
	{
		double L_3 = ___x0;
		if ((!(((double)L_3) == ((double)(0.0)))))
		{
			goto IL_003e;
		}
	}
	{
		return (0.0);
	}

IL_003e:
	{
		double L_4 = ___x0;
		if ((!(((double)L_4) == ((double)(2.0)))))
		{
			goto IL_0054;
		}
	}
	{
		return (1.0451637801174929);
	}

IL_0054:
	{
		double L_5 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = MathFunctions_ln_m0423B7BB652194E4474B1DDFE7D717FE562741F9(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = SpecialFunctions_exponentialIntegralEi_m9EAF7B690AB0B9E7A40BEC3D00592444D3DDE1EF(L_6, NULL);
		return L_7;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::offsetLogarithmicIntegralLi(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_offsetLogarithmicIntegralLi_m9DFBBB10E7F8D8D3D3FD69013E9E86825D36AF74 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) < ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0028:
	{
		double L_3 = ___x0;
		if ((!(((double)L_3) == ((double)(0.0)))))
		{
			goto IL_003e;
		}
	}
	{
		return (-1.0451637801174929);
	}

IL_003e:
	{
		double L_4 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = SpecialFunctions_logarithmicIntegralLi_mF53BCDF7F4FB9B8BB6DD30A4C36F5E1BC16A0ACE(L_4, NULL);
		return ((double)il2cpp_codegen_subtract(L_5, (1.0451637801174929)));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erf(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erf_m97B92E50561D70697F2BE8F77B544AA598D1C91A (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) == ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		return (0.0);
	}

IL_0028:
	{
		double L_3 = ___x0;
		if ((!(((double)L_3) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_003e;
		}
	}
	{
		return (1.0);
	}

IL_003e:
	{
		double L_4 = ___x0;
		if ((!(((double)L_4) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0054;
		}
	}
	{
		return (-1.0);
	}

IL_0054:
	{
		double L_5 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF(L_5, (bool)0, NULL);
		return L_6;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfc(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfc_m0B46451424A822FC555F696925F32A8707DE6C9A (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) == ((double)(0.0)))))
		{
			goto IL_0028;
		}
	}
	{
		return (1.0);
	}

IL_0028:
	{
		double L_3 = ___x0;
		if ((!(((double)L_3) == ((double)(std::numeric_limits<double>::infinity())))))
		{
			goto IL_003e;
		}
	}
	{
		return (0.0);
	}

IL_003e:
	{
		double L_4 = ___x0;
		if ((!(((double)L_4) == ((double)(-std::numeric_limits<double>::infinity())))))
		{
			goto IL_0054;
		}
	}
	{
		return (2.0);
	}

IL_0054:
	{
		double L_5 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF(L_5, (bool)1, NULL);
		return L_6;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfInv(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfInv_mF9CA902E25D3EDBC3C86A3F99D3B4051ADA0B311 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___x0;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0016;
		}
	}
	{
		return (0.0);
	}

IL_0016:
	{
		double L_1 = ___x0;
		if ((!(((double)L_1) >= ((double)(1.0)))))
		{
			goto IL_002c;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_002c:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) <= ((double)(-1.0)))))
		{
			goto IL_0042;
		}
	}
	{
		return (-std::numeric_limits<double>::infinity());
	}

IL_0042:
	{
		double L_3 = ___x0;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_0069;
		}
	}
	{
		double L_4 = ___x0;
		V_0 = ((-L_4));
		double L_5 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract((1.0), L_5));
		V_2 = (-1.0);
		goto IL_0081;
	}

IL_0069:
	{
		double L_6 = ___x0;
		V_0 = L_6;
		double L_7 = ___x0;
		V_1 = ((double)il2cpp_codegen_subtract((1.0), L_7));
		V_2 = (1.0);
	}

IL_0081:
	{
		double L_8 = V_0;
		double L_9 = V_1;
		double L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = SpecialFunctions_erfInvImpl_m20C8E18C78A770ECD5654CD808588A190D3FCE64(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfImp(System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF (double ___z0, bool ___invert1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		double L_0 = ___z0;
		if ((!(((double)L_0) < ((double)(0.0)))))
		{
			goto IL_004b;
		}
	}
	{
		bool L_1 = ___invert1;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		double L_2 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF(((-L_2)), (bool)0, NULL);
		return ((-L_3));
	}

IL_0019:
	{
		double L_4 = ___z0;
		if ((!(((double)L_4) < ((double)(-0.5)))))
		{
			goto IL_0038;
		}
	}
	{
		double L_5 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF(((-L_5)), (bool)1, NULL);
		return ((double)il2cpp_codegen_subtract((2.0), L_6));
	}

IL_0038:
	{
		double L_7 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = SpecialFunctions_erfImp_m60357763B7577096E10B2E81380ECBEB7E1A03FF(((-L_7)), (bool)0, NULL);
		return ((double)il2cpp_codegen_add((1.0), L_8));
	}

IL_004b:
	{
		double L_9 = ___z0;
		if ((!(((double)L_9) < ((double)(0.5)))))
		{
			goto IL_00ab;
		}
	}
	{
		double L_10 = ___z0;
		if ((!(((double)L_10) < ((double)(1.0E-10)))))
		{
			goto IL_0080;
		}
	}
	{
		double L_11 = ___z0;
		double L_12 = ___z0;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_11, (1.125))), ((double)il2cpp_codegen_multiply(L_12, (0.0033791670955125737)))));
		goto IL_047a;
	}

IL_0080:
	{
		double L_13 = ___z0;
		double L_14 = ___z0;
		double L_15 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpAn_0;
		double L_17;
		L_17 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_15, L_16, NULL);
		double L_18 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpAd_1;
		double L_20;
		L_20 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_18, L_19, NULL);
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_13, (1.125))), ((double)(((double)il2cpp_codegen_multiply(L_14, L_17))/L_20))));
		goto IL_047a;
	}

IL_00ab:
	{
		double L_21 = ___z0;
		if ((((double)L_21) < ((double)(110.0))))
		{
			goto IL_00ca;
		}
	}
	{
		double L_22 = ___z0;
		bool L_23 = ___invert1;
		if (!((int32_t)(((((double)L_22) < ((double)(110.0)))? 1 : 0)&(int32_t)L_23)))
		{
			goto IL_046a;
		}
	}

IL_00ca:
	{
		bool L_24 = ___invert1;
		___invert1 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		double L_25 = ___z0;
		if ((!(((double)L_25) < ((double)(0.75)))))
		{
			goto IL_0117;
		}
	}
	{
		double L_26 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpBn_2;
		double L_28;
		L_28 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_26, (0.5))), L_27, NULL);
		double L_29 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_30 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpBd_3;
		double L_31;
		L_31 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_29, (0.5))), L_30, NULL);
		V_1 = ((double)(L_28/L_31));
		V_2 = (0.34402421116828918);
		goto IL_0454;
	}

IL_0117:
	{
		double L_32 = ___z0;
		if ((!(((double)L_32) < ((double)(1.25)))))
		{
			goto IL_015e;
		}
	}
	{
		double L_33 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_34 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpCn_4;
		double L_35;
		L_35 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_33, (0.75))), L_34, NULL);
		double L_36 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpCd_5;
		double L_38;
		L_38 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_36, (0.75))), L_37, NULL);
		V_1 = ((double)(L_35/L_38));
		V_2 = (0.41999092698097229);
		goto IL_0454;
	}

IL_015e:
	{
		double L_39 = ___z0;
		if ((!(((double)L_39) < ((double)(2.25)))))
		{
			goto IL_01a5;
		}
	}
	{
		double L_40 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_41 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpDn_6;
		double L_42;
		L_42 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_40, (1.25))), L_41, NULL);
		double L_43 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_44 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpDd_7;
		double L_45;
		L_45 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_43, (1.25))), L_44, NULL);
		V_1 = ((double)(L_42/L_45));
		V_2 = (0.48986250162124634);
		goto IL_0454;
	}

IL_01a5:
	{
		double L_46 = ___z0;
		if ((!(((double)L_46) < ((double)(3.5)))))
		{
			goto IL_01ec;
		}
	}
	{
		double L_47 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpEn_8;
		double L_49;
		L_49 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_47, (2.25))), L_48, NULL);
		double L_50 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpEd_9;
		double L_52;
		L_52 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_50, (2.25))), L_51, NULL);
		V_1 = ((double)(L_49/L_52));
		V_2 = (0.53173708915710449);
		goto IL_0454;
	}

IL_01ec:
	{
		double L_53 = ___z0;
		if ((!(((double)L_53) < ((double)(5.25)))))
		{
			goto IL_0233;
		}
	}
	{
		double L_54 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpFn_10;
		double L_56;
		L_56 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_54, (3.5))), L_55, NULL);
		double L_57 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_58 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpFd_11;
		double L_59;
		L_59 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_57, (3.5))), L_58, NULL);
		V_1 = ((double)(L_56/L_59));
		V_2 = (0.54899734258651733);
		goto IL_0454;
	}

IL_0233:
	{
		double L_60 = ___z0;
		if ((!(((double)L_60) < ((double)(8.0)))))
		{
			goto IL_027a;
		}
	}
	{
		double L_61 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_62 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpGn_12;
		double L_63;
		L_63 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_61, (5.25))), L_62, NULL);
		double L_64 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_65 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpGd_13;
		double L_66;
		L_66 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_64, (5.25))), L_65, NULL);
		V_1 = ((double)(L_63/L_66));
		V_2 = (0.55717408657073975);
		goto IL_0454;
	}

IL_027a:
	{
		double L_67 = ___z0;
		if ((!(((double)L_67) < ((double)(11.5)))))
		{
			goto IL_02c1;
		}
	}
	{
		double L_68 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpHn_14;
		double L_70;
		L_70 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_68, (8.0))), L_69, NULL);
		double L_71 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_72 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpHd_15;
		double L_73;
		L_73 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_71, (8.0))), L_72, NULL);
		V_1 = ((double)(L_70/L_73));
		V_2 = (0.56098079681396484);
		goto IL_0454;
	}

IL_02c1:
	{
		double L_74 = ___z0;
		if ((!(((double)L_74) < ((double)(17.0)))))
		{
			goto IL_0308;
		}
	}
	{
		double L_75 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_76 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpIn_16;
		double L_77;
		L_77 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_75, (11.5))), L_76, NULL);
		double L_78 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_79 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpId_17;
		double L_80;
		L_80 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_78, (11.5))), L_79, NULL);
		V_1 = ((double)(L_77/L_80));
		V_2 = (0.56264936923980713);
		goto IL_0454;
	}

IL_0308:
	{
		double L_81 = ___z0;
		if ((!(((double)L_81) < ((double)(24.0)))))
		{
			goto IL_034f;
		}
	}
	{
		double L_82 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_83 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpJn_18;
		double L_84;
		L_84 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_82, (17.0))), L_83, NULL);
		double L_85 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_86 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpJd_19;
		double L_87;
		L_87 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_85, (17.0))), L_86, NULL);
		V_1 = ((double)(L_84/L_87));
		V_2 = (0.56345981359481812);
		goto IL_0454;
	}

IL_034f:
	{
		double L_88 = ___z0;
		if ((!(((double)L_88) < ((double)(38.0)))))
		{
			goto IL_0396;
		}
	}
	{
		double L_89 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpKn_20;
		double L_91;
		L_91 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_89, (24.0))), L_90, NULL);
		double L_92 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_93 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpKd_21;
		double L_94;
		L_94 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_92, (24.0))), L_93, NULL);
		V_1 = ((double)(L_91/L_94));
		V_2 = (0.56384778022766113);
		goto IL_0454;
	}

IL_0396:
	{
		double L_95 = ___z0;
		if ((!(((double)L_95) < ((double)(60.0)))))
		{
			goto IL_03da;
		}
	}
	{
		double L_96 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_97 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpLn_22;
		double L_98;
		L_98 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_96, (38.0))), L_97, NULL);
		double L_99 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_100 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpLd_23;
		double L_101;
		L_101 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_99, (38.0))), L_100, NULL);
		V_1 = ((double)(L_98/L_101));
		V_2 = (0.56405282020568848);
		goto IL_0454;
	}

IL_03da:
	{
		double L_102 = ___z0;
		if ((!(((double)L_102) < ((double)(85.0)))))
		{
			goto IL_041e;
		}
	}
	{
		double L_103 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_104 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpMn_24;
		double L_105;
		L_105 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_103, (60.0))), L_104, NULL);
		double L_106 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_107 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpMd_25;
		double L_108;
		L_108 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_106, (60.0))), L_107, NULL);
		V_1 = ((double)(L_105/L_108));
		V_2 = (0.56413090229034424);
		goto IL_0454;
	}

IL_041e:
	{
		double L_109 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_110 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpNn_26;
		double L_111;
		L_111 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_109, (85.0))), L_110, NULL);
		double L_112 = ___z0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_113 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___erfImpNd_27;
		double L_114;
		L_114 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(((double)il2cpp_codegen_subtract(L_112, (85.0))), L_113, NULL);
		V_1 = ((double)(L_111/L_114));
		V_2 = (0.56415843963623047);
	}

IL_0454:
	{
		double L_115 = ___z0;
		double L_116 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_117;
		L_117 = MathFunctions_exp_mD9728B5D263602F05FA97974B733A2691E2806F9(((double)il2cpp_codegen_multiply(((-L_115)), L_116)), NULL);
		double L_118 = ___z0;
		V_3 = ((double)(L_117/L_118));
		double L_119 = V_3;
		double L_120 = V_2;
		double L_121 = V_3;
		double L_122 = V_1;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_119, L_120)), ((double)il2cpp_codegen_multiply(L_121, L_122))));
		goto IL_047a;
	}

IL_046a:
	{
		V_0 = (0.0);
		bool L_123 = ___invert1;
		___invert1 = (bool)((((int32_t)L_123) == ((int32_t)0))? 1 : 0);
	}

IL_047a:
	{
		bool L_124 = ___invert1;
		if (!L_124)
		{
			goto IL_0489;
		}
	}
	{
		double L_125 = V_0;
		V_0 = ((double)il2cpp_codegen_subtract((1.0), L_125));
	}

IL_0489:
	{
		double L_126 = V_0;
		return L_126;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfcInv(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfcInv_mAC3905F92AAE00D530B899DD0FD9CD25C169E67E (double ___z0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___z0;
		if ((!(((double)L_0) <= ((double)(0.0)))))
		{
			goto IL_0016;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_0016:
	{
		double L_1 = ___z0;
		if ((!(((double)L_1) >= ((double)(2.0)))))
		{
			goto IL_002c;
		}
	}
	{
		return (-std::numeric_limits<double>::infinity());
	}

IL_002c:
	{
		double L_2 = ___z0;
		if ((!(((double)L_2) > ((double)(1.0)))))
		{
			goto IL_005c;
		}
	}
	{
		double L_3 = ___z0;
		V_1 = ((double)il2cpp_codegen_subtract((2.0), L_3));
		double L_4 = V_1;
		V_0 = ((double)il2cpp_codegen_subtract((1.0), L_4));
		V_2 = (-1.0);
		goto IL_0074;
	}

IL_005c:
	{
		double L_5 = ___z0;
		V_0 = ((double)il2cpp_codegen_subtract((1.0), L_5));
		double L_6 = ___z0;
		V_1 = L_6;
		V_2 = (1.0);
	}

IL_0074:
	{
		double L_7 = V_0;
		double L_8 = V_1;
		double L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = SpecialFunctions_erfInvImpl_m20C8E18C78A770ECD5654CD808588A190D3FCE64(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::erfInvImpl(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_erfInvImpl_m20C8E18C78A770ECD5654CD808588A190D3FCE64 (double ___p0, double ___q1, double ___s2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	float V_1 = 0.0f;
	double V_2 = 0.0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	{
		double L_0 = ___p0;
		if ((!(((double)L_0) <= ((double)(0.5)))))
		{
			goto IL_0046;
		}
	}
	{
		V_1 = (0.0891314745f);
		double L_1 = ___p0;
		double L_2 = ___p0;
		V_2 = ((double)il2cpp_codegen_multiply(L_1, ((double)il2cpp_codegen_add(L_2, (10.0)))));
		double L_3 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpAn_28;
		double L_5;
		L_5 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_3, L_4, NULL);
		double L_6 = ___p0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpAd_29;
		double L_8;
		L_8 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_6, L_7, NULL);
		V_3 = ((double)(L_5/L_8));
		double L_9 = V_2;
		float L_10 = V_1;
		double L_11 = V_2;
		double L_12 = V_3;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_9, ((double)L_10))), ((double)il2cpp_codegen_multiply(L_11, L_12))));
		goto IL_0213;
	}

IL_0046:
	{
		double L_13 = ___q1;
		if ((!(((double)L_13) >= ((double)(0.25)))))
		{
			goto IL_00a3;
		}
	}
	{
		V_4 = (2.2494812f);
		double L_14 = ___q1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = MathFunctions_ln_m0423B7BB652194E4474B1DDFE7D717FE562741F9(L_14, NULL);
		double L_16;
		L_16 = MathFunctions_sqrt_m33F74C654C6CC80277FDE11AFD581050E440200D(((double)il2cpp_codegen_multiply((-2.0), L_15)), NULL);
		double L_17 = ___q1;
		V_5 = ((double)il2cpp_codegen_subtract(L_17, (0.25)));
		double L_18 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpBn_30;
		double L_20;
		L_20 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_18, L_19, NULL);
		double L_21 = V_5;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_22 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpBd_31;
		double L_23;
		L_23 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_21, L_22, NULL);
		V_6 = ((double)(L_20/L_23));
		float L_24 = V_4;
		double L_25 = V_6;
		V_0 = ((double)(L_16/((double)il2cpp_codegen_add(((double)L_24), L_25))));
		goto IL_0213;
	}

IL_00a3:
	{
		double L_26 = ___q1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = MathFunctions_ln_m0423B7BB652194E4474B1DDFE7D717FE562741F9(L_26, NULL);
		double L_28;
		L_28 = MathFunctions_sqrt_m33F74C654C6CC80277FDE11AFD581050E440200D(((-L_27)), NULL);
		V_7 = L_28;
		double L_29 = V_7;
		if ((!(((double)L_29) < ((double)(3.0)))))
		{
			goto IL_00fc;
		}
	}
	{
		double L_30 = V_7;
		V_8 = ((double)il2cpp_codegen_subtract(L_30, (1.125)));
		double L_31 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpCn_32;
		double L_33;
		L_33 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_31, L_32, NULL);
		double L_34 = V_8;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpCd_33;
		double L_36;
		L_36 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_34, L_35, NULL);
		V_9 = ((double)(L_33/L_36));
		double L_37 = V_7;
		double L_38 = V_9;
		double L_39 = V_7;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(0.807220459f)), L_37)), ((double)il2cpp_codegen_multiply(L_38, L_39))));
		goto IL_0213;
	}

IL_00fc:
	{
		double L_40 = V_7;
		if ((!(((double)L_40) < ((double)(6.0)))))
		{
			goto IL_0147;
		}
	}
	{
		double L_41 = V_7;
		V_10 = ((double)il2cpp_codegen_subtract(L_41, (3.0)));
		double L_42 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_43 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpDn_34;
		double L_44;
		L_44 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_42, L_43, NULL);
		double L_45 = V_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpDd_35;
		double L_47;
		L_47 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_45, L_46, NULL);
		V_11 = ((double)(L_44/L_47));
		double L_48 = V_7;
		double L_49 = V_11;
		double L_50 = V_7;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(0.939955711f)), L_48)), ((double)il2cpp_codegen_multiply(L_49, L_50))));
		goto IL_0213;
	}

IL_0147:
	{
		double L_51 = V_7;
		if ((!(((double)L_51) < ((double)(18.0)))))
		{
			goto IL_0192;
		}
	}
	{
		double L_52 = V_7;
		V_12 = ((double)il2cpp_codegen_subtract(L_52, (6.0)));
		double L_53 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_54 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpEn_36;
		double L_55;
		L_55 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_53, L_54, NULL);
		double L_56 = V_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_57 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpEd_37;
		double L_58;
		L_58 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_56, L_57, NULL);
		V_13 = ((double)(L_55/L_58));
		double L_59 = V_7;
		double L_60 = V_13;
		double L_61 = V_7;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(0.983628273f)), L_59)), ((double)il2cpp_codegen_multiply(L_60, L_61))));
		goto IL_0213;
	}

IL_0192:
	{
		double L_62 = V_7;
		if ((!(((double)L_62) < ((double)(44.0)))))
		{
			goto IL_01da;
		}
	}
	{
		double L_63 = V_7;
		V_14 = ((double)il2cpp_codegen_subtract(L_63, (18.0)));
		double L_64 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_65 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpFn_38;
		double L_66;
		L_66 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_64, L_65, NULL);
		double L_67 = V_14;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_68 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpFd_39;
		double L_69;
		L_69 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_67, L_68, NULL);
		V_15 = ((double)(L_66/L_69));
		double L_70 = V_7;
		double L_71 = V_15;
		double L_72 = V_7;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(0.997145653f)), L_70)), ((double)il2cpp_codegen_multiply(L_71, L_72))));
		goto IL_0213;
	}

IL_01da:
	{
		double L_73 = V_7;
		V_16 = ((double)il2cpp_codegen_subtract(L_73, (44.0)));
		double L_74 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_75 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpGn_40;
		double L_76;
		L_76 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_74, L_75, NULL);
		double L_77 = V_16;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_78 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___ervInvImpGd_41;
		double L_79;
		L_79 = Evaluate_polynomial_mDEF118A34C601356EA611D3DC40BFA44E71C7F93(L_77, L_78, NULL);
		V_17 = ((double)(L_76/L_79));
		double L_80 = V_7;
		double L_81 = V_17;
		double L_82 = V_7;
		V_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)(0.99941349f)), L_80)), ((double)il2cpp_codegen_multiply(L_81, L_82))));
	}

IL_0213:
	{
		double L_83 = ___s2;
		double L_84 = V_0;
		return ((double)il2cpp_codegen_multiply(L_83, L_84));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::gammaInt(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C (int64_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		int64_t L_0 = ___n0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (0.57721566490153287);
	}

IL_000d:
	{
		int64_t L_1 = ___n0;
		if ((!(((uint64_t)L_1) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_001c;
		}
	}
	{
		return (1.0);
	}

IL_001c:
	{
		int64_t L_2 = ___n0;
		if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_002b;
		}
	}
	{
		return (1.0);
	}

IL_002b:
	{
		int64_t L_3 = ___n0;
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)3)))))
		{
			goto IL_003a;
		}
	}
	{
		return (2.0);
	}

IL_003a:
	{
		int64_t L_4 = ___n0;
		if ((!(((uint64_t)L_4) == ((uint64_t)((int64_t)4)))))
		{
			goto IL_0049;
		}
	}
	{
		return (6.0);
	}

IL_0049:
	{
		int64_t L_5 = ___n0;
		if ((!(((uint64_t)L_5) == ((uint64_t)((int64_t)5)))))
		{
			goto IL_0058;
		}
	}
	{
		return (24.0);
	}

IL_0058:
	{
		int64_t L_6 = ___n0;
		if ((!(((uint64_t)L_6) == ((uint64_t)((int64_t)6)))))
		{
			goto IL_0067;
		}
	}
	{
		return (120.0);
	}

IL_0067:
	{
		int64_t L_7 = ___n0;
		if ((!(((uint64_t)L_7) == ((uint64_t)((int64_t)7)))))
		{
			goto IL_0076;
		}
	}
	{
		return (720.0);
	}

IL_0076:
	{
		int64_t L_8 = ___n0;
		if ((!(((uint64_t)L_8) == ((uint64_t)((int64_t)8)))))
		{
			goto IL_0085;
		}
	}
	{
		return (5040.0);
	}

IL_0085:
	{
		int64_t L_9 = ___n0;
		if ((!(((uint64_t)L_9) == ((uint64_t)((int64_t)((int32_t)9))))))
		{
			goto IL_0095;
		}
	}
	{
		return (40320.0);
	}

IL_0095:
	{
		int64_t L_10 = ___n0;
		if ((!(((uint64_t)L_10) == ((uint64_t)((int64_t)((int32_t)10))))))
		{
			goto IL_00a5;
		}
	}
	{
		return (362880.0);
	}

IL_00a5:
	{
		int64_t L_11 = ___n0;
		if ((((int64_t)L_11) < ((int64_t)((int64_t)((int32_t)11)))))
		{
			goto IL_00b6;
		}
	}
	{
		int64_t L_12 = ___n0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(((double)((int64_t)il2cpp_codegen_subtract(L_12, ((int64_t)1)))), NULL);
		return L_13;
	}

IL_00b6:
	{
		int64_t L_14 = ___n0;
		if ((((int64_t)L_14) > ((int64_t)((int64_t)(-1)))))
		{
			goto IL_00fe;
		}
	}
	{
		int64_t L_15 = ___n0;
		V_0 = ((-L_15));
		int64_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(((double)L_16), NULL);
		V_1 = L_17;
		V_2 = (-1.0);
		int64_t L_18 = V_0;
		if (((int64_t)(L_18%((int64_t)2))))
		{
			goto IL_00e0;
		}
	}
	{
		V_2 = (1.0);
	}

IL_00e0:
	{
		double L_19 = V_2;
		int64_t L_20 = V_0;
		double L_21 = V_1;
		int64_t L_22 = V_0;
		int64_t L_23 = ___n0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C(((int64_t)il2cpp_codegen_add(L_23, ((int64_t)1))), NULL);
		return ((double)il2cpp_codegen_subtract(((double)(L_19/((double)il2cpp_codegen_multiply(((double)L_20), L_21)))), ((double)il2cpp_codegen_multiply(((double)((1.0)/((double)L_22))), L_24))));
	}

IL_00fe:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::gamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int64_t V_1 = 0;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		bool L_3;
		L_3 = Double_IsPositiveInfinity_m6E8147B50DE6E7EDD6CAB8873F83B943E2CD74F9_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_0024:
	{
		double L_4 = ___x0;
		bool L_5;
		L_5 = Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = MathFunctions_abs_m4D1D0AB6BBFE19CE1F5B4677149ED219B56D8EA7(L_6, NULL);
		double L_8 = L_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = bankers_round(L_8);
		V_0 = L_9;
		double L_10 = V_0;
		double L_11;
		L_11 = MathFunctions_abs_m4D1D0AB6BBFE19CE1F5B4677149ED219B56D8EA7(((double)il2cpp_codegen_subtract(L_8, L_10)), NULL);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_12 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_11) <= ((double)L_12))))
		{
			goto IL_006a;
		}
	}
	{
		double L_13 = V_0;
		V_1 = il2cpp_codegen_cast_double_to_int<int64_t>(L_13);
		double L_14 = ___x0;
		if ((!(((double)L_14) < ((double)(0.0)))))
		{
			goto IL_0063;
		}
	}
	{
		int64_t L_15 = V_1;
		V_1 = ((-L_15));
	}

IL_0063:
	{
		int64_t L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C(L_16, NULL);
		return L_17;
	}

IL_006a:
	{
		double L_18 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_19;
		L_19 = SpecialFunctions_lanchosGamma_m420D7DC6ECC24916EF929F92D97EA1BEF7919370(L_18, NULL);
		return L_19;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lanchosGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lanchosGamma_m420D7DC6ECC24916EF929F92D97EA1BEF7919370 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = MathFunctions_abs_m4D1D0AB6BBFE19CE1F5B4677149ED219B56D8EA7(L_2, NULL);
		V_0 = L_3;
		double L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = bankers_round(L_4);
		V_1 = L_5;
		double L_6 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_7 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_6) > ((double)L_7))))
		{
			goto IL_0048;
		}
	}
	{
		double L_8 = V_0;
		double L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = MathFunctions_abs_m4D1D0AB6BBFE19CE1F5B4677149ED219B56D8EA7(((double)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_11 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_10) <= ((double)L_11))))
		{
			goto IL_0074;
		}
	}
	{
		double L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(((double)il2cpp_codegen_subtract(L_12, (1.0))), NULL);
		return L_13;
	}

IL_0048:
	{
		double L_14 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_15 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_14) < ((double)((-L_15))))))
		{
			goto IL_006a;
		}
	}
	{
		double L_16 = V_0;
		double L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = MathFunctions_abs_m4D1D0AB6BBFE19CE1F5B4677149ED219B56D8EA7(((double)il2cpp_codegen_subtract(L_16, L_17)), NULL);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_19 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_18) <= ((double)L_19))))
		{
			goto IL_0074;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_006a:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0074:
	{
		double L_20 = ___x0;
		if ((!(((double)L_20) < ((double)(0.5)))))
		{
			goto IL_00ac;
		}
	}
	{
		double L_21 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = sin(((double)il2cpp_codegen_multiply((3.1415926535897931), L_21)));
		double L_23 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = SpecialFunctions_lanchosGamma_m420D7DC6ECC24916EF929F92D97EA1BEF7919370(((double)il2cpp_codegen_subtract((1.0), L_23)), NULL);
		return ((double)((3.1415926535897931)/((double)il2cpp_codegen_multiply(L_22, L_24))));
	}

IL_00ac:
	{
		V_2 = 7;
		double L_25 = ___x0;
		___x0 = ((double)il2cpp_codegen_subtract(L_25, (1.0)));
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lanchosGamma_43;
		NullCheck(L_26);
		int32_t L_27 = 0;
		double L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		double L_29 = ___x0;
		int32_t L_30 = V_2;
		V_4 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_29, ((double)L_30))), (0.5)));
		V_5 = 1;
		goto IL_00ef;
	}

IL_00d8:
	{
		double L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lanchosGamma_43;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		double L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		double L_36 = ___x0;
		int32_t L_37 = V_5;
		V_3 = ((double)il2cpp_codegen_add(L_31, ((double)(L_35/((double)il2cpp_codegen_add(L_36, ((double)L_37)))))));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ef:
	{
		int32_t L_39 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lanchosGamma_43;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = sqrt((6.2831853071795862));
		double L_42 = V_4;
		double L_43 = ___x0;
		double L_44;
		L_44 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_42, ((double)il2cpp_codegen_add(L_43, (0.5))), NULL);
		double L_45 = V_4;
		double L_46;
		L_46 = exp(((-L_45)));
		double L_47 = V_3;
		return ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_41, L_44)), L_46)), L_47));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::logGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		bool L_3;
		L_3 = Double_IsPositiveInfinity_m6E8147B50DE6E7EDD6CAB8873F83B943E2CD74F9_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_0024:
	{
		double L_4 = ___x0;
		bool L_5;
		L_5 = Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = MathFunctions_isInteger_m395DCAA8FF434CC25085365E779AB9A592A9289D(L_6, NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		double L_8 = ___x0;
		if ((!(((double)L_8) >= ((double)(0.0)))))
		{
			goto IL_0061;
		}
	}
	{
		double L_9 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = bankers_round(L_9);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C(il2cpp_codegen_cast_double_to_int<int64_t>(L_10), NULL);
		double L_12;
		L_12 = fabs(L_11);
		double L_13;
		L_13 = log(L_12);
		return L_13;
	}

IL_0061:
	{
		double L_14 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = bankers_round(((-L_14)));
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C(((-il2cpp_codegen_cast_double_to_int<int64_t>(L_15))), NULL);
		double L_17;
		L_17 = fabs(L_16);
		double L_18;
		L_18 = log(L_17);
		return L_18;
	}

IL_007a:
	{
		double L_19 = ___x0;
		if ((!(((double)L_19) < ((double)(-34.0)))))
		{
			goto IL_010e;
		}
	}
	{
		double L_20 = ___x0;
		V_1 = ((-L_20));
		double L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_21, NULL);
		V_2 = L_22;
		double L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = floor(L_23);
		V_0 = L_24;
		double L_25 = V_0;
		double L_26 = V_1;
		double L_27;
		L_27 = fabs(((double)il2cpp_codegen_subtract(L_25, L_26)));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_28 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_27) <= ((double)L_28))))
		{
			goto IL_00b3;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00b3:
	{
		double L_29 = V_1;
		double L_30 = V_0;
		V_3 = ((double)il2cpp_codegen_subtract(L_29, L_30));
		double L_31 = V_3;
		if ((!(((double)L_31) > ((double)(0.5)))))
		{
			goto IL_00d3;
		}
	}
	{
		double L_32 = V_0;
		V_0 = ((double)il2cpp_codegen_add(L_32, (1.0)));
		double L_33 = V_0;
		double L_34 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(L_33, L_34));
	}

IL_00d3:
	{
		double L_35 = V_1;
		double L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = sin(((double)il2cpp_codegen_multiply((3.1415926535897931), L_36)));
		V_3 = ((double)il2cpp_codegen_multiply(L_35, L_37));
		double L_38 = V_3;
		double L_39;
		L_39 = fabs(L_38);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_40 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_39) <= ((double)L_40))))
		{
			goto IL_00fd;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00fd:
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_41 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___LNPI_48;
		double L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_43;
		L_43 = log(L_42);
		double L_44 = V_2;
		V_3 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_41, L_43)), L_44));
		double L_45 = V_3;
		return L_45;
	}

IL_010e:
	{
		double L_46 = ___x0;
		if ((!(((double)L_46) < ((double)(13.0)))))
		{
			goto IL_01d0;
		}
	}
	{
		V_3 = (1.0);
		goto IL_013a;
	}

IL_0129:
	{
		double L_47 = ___x0;
		___x0 = ((double)il2cpp_codegen_subtract(L_47, (1.0)));
		double L_48 = V_3;
		double L_49 = ___x0;
		V_3 = ((double)il2cpp_codegen_multiply(L_48, L_49));
	}

IL_013a:
	{
		double L_50 = ___x0;
		if ((((double)L_50) >= ((double)(3.0))))
		{
			goto IL_0129;
		}
	}
	{
		goto IL_0170;
	}

IL_0148:
	{
		double L_51 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_52;
		L_52 = fabs(L_51);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_53 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_52) <= ((double)L_53))))
		{
			goto IL_015f;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_015f:
	{
		double L_54 = V_3;
		double L_55 = ___x0;
		V_3 = ((double)(L_54/L_55));
		double L_56 = ___x0;
		___x0 = ((double)il2cpp_codegen_add(L_56, (1.0)));
	}

IL_0170:
	{
		double L_57 = ___x0;
		if ((((double)L_57) < ((double)(2.0))))
		{
			goto IL_0148;
		}
	}
	{
		double L_58 = V_3;
		if ((!(((double)L_58) < ((double)(0.0)))))
		{
			goto IL_018b;
		}
	}
	{
		double L_59 = V_3;
		V_3 = ((-L_59));
	}

IL_018b:
	{
		double L_60 = ___x0;
		if ((!(((double)L_60) == ((double)(2.0)))))
		{
			goto IL_019e;
		}
	}
	{
		double L_61 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_62;
		L_62 = log(L_61);
		return L_62;
	}

IL_019e:
	{
		double L_63 = ___x0;
		___x0 = ((double)il2cpp_codegen_subtract(L_63, (2.0)));
		double L_64 = ___x0;
		double L_65 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_66 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___logGammaB_45;
		double L_67;
		L_67 = Evaluate_polevl_mAB5B74D43ACB3E50C640752A4C0CB91583F2CC0C(L_65, L_66, 5, NULL);
		double L_68 = ___x0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___logGammaC_46;
		double L_70;
		L_70 = Evaluate_p1evl_m6E28C9DA481EA52C69A4B84A939D49376873AE8D(L_68, L_69, 6, NULL);
		V_0 = ((double)(((double)il2cpp_codegen_multiply(L_64, L_67))/L_70));
		double L_71 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_72;
		L_72 = log(L_71);
		double L_73 = V_0;
		return ((double)il2cpp_codegen_add(L_72, L_73));
	}

IL_01d0:
	{
		double L_74 = ___x0;
		if ((!(((double)L_74) > ((double)(2.5563479999999998E+305)))))
		{
			goto IL_01e6;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_01e6:
	{
		double L_75 = ___x0;
		double L_76 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_77;
		L_77 = log(L_76);
		double L_78 = ___x0;
		V_1 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_75, (0.5))), L_77)), L_78)), (0.91893853320467278)));
		double L_79 = ___x0;
		if ((!(((double)L_79) > ((double)(100000000.0)))))
		{
			goto IL_0213;
		}
	}
	{
		double L_80 = V_1;
		return L_80;
	}

IL_0213:
	{
		double L_81 = ___x0;
		double L_82 = ___x0;
		V_0 = ((double)((1.0)/((double)il2cpp_codegen_multiply(L_81, L_82))));
		double L_83 = ___x0;
		if ((!(((double)L_83) >= ((double)(1000.0)))))
		{
			goto IL_0255;
		}
	}
	{
		double L_84 = V_1;
		double L_85 = V_0;
		double L_86 = V_0;
		double L_87 = ___x0;
		V_1 = ((double)il2cpp_codegen_add(L_84, ((double)(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((0.00079365079365079365), L_85)), (0.0027777777777777779))), L_86)), (0.083333333333333329)))/L_87))));
		goto IL_0266;
	}

IL_0255:
	{
		double L_88 = V_1;
		double L_89 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___logGammaA_44;
		double L_91;
		L_91 = Evaluate_polevl_mAB5B74D43ACB3E50C640752A4C0CB91583F2CC0C(L_89, L_90, 4, NULL);
		double L_92 = ___x0;
		V_1 = ((double)il2cpp_codegen_add(L_88, ((double)(L_91/L_92))));
	}

IL_0266:
	{
		double L_93 = V_1;
		return L_93;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::sgnGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_sgnGamma_m5F3439C534DA89CBE4DA18B4AD36BF338D47B56F (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		bool L_3;
		L_3 = Double_IsPositiveInfinity_m6E8147B50DE6E7EDD6CAB8873F83B943E2CD74F9_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (1.0);
	}

IL_0024:
	{
		double L_4 = ___x0;
		bool L_5;
		L_5 = Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___x0;
		if ((!(((double)L_6) > ((double)(0.0)))))
		{
			goto IL_004c;
		}
	}
	{
		return (1.0);
	}

IL_004c:
	{
		double L_7 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = MathFunctions_isInteger_m395DCAA8FF434CC25085365E779AB9A592A9289D(L_7, NULL);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		double L_9 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = bankers_round(((-L_9)));
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = SpecialFunctions_gammaInt_m8E1869C7879EB0352E40524838CD4580ED32F64C(((-il2cpp_codegen_cast_double_to_int<int64_t>(L_10))), NULL);
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = MathFunctions_sgn_mD254177C7DBE43AC3E6C09FD1B217095C38AF1AE(L_11, NULL);
		return L_12;
	}

IL_0068:
	{
		double L_13 = ___x0;
		___x0 = ((-L_13));
		double L_14 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = floor(L_14);
		double L_16;
		L_16 = floor((fmod(L_15, (2.0))));
		if ((!(((double)L_16) == ((double)(0.0)))))
		{
			goto IL_0096;
		}
	}
	{
		return (-1.0);
	}

IL_0096:
	{
		return (1.0);
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::regularizedGammaLowerP(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_regularizedGammaLowerP_m0391776CA4410893E77030FD28C5384E3A2CC963 (double ___s0, double ___x1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	{
		double L_0 = ___x1;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___s0;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_4, (0.0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		return (0.0);
	}

IL_003f:
	{
		double L_6 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_6, (0.0), NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		double L_8 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = SpecialFunctions_exponentialIntegralEi_m9EAF7B690AB0B9E7A40BEC3D00592444D3DDE1EF(((-L_8)), NULL);
		return ((double)il2cpp_codegen_add((1.0), ((double)(L_9/(0.57721566490153287)))));
	}

IL_006c:
	{
		double L_10 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_10, (1.0), NULL);
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		double L_12 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = exp(((-L_12)));
		return ((double)il2cpp_codegen_subtract((1.0), L_13));
	}

IL_008f:
	{
		double L_14 = ___x1;
		if ((!(((double)L_14) < ((double)(0.0)))))
		{
			goto IL_00a5;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00a5:
	{
		double L_15 = ___s0;
		if ((!(((double)L_15) < ((double)(0.0)))))
		{
			goto IL_00dc;
		}
	}
	{
		double L_16 = ___s0;
		double L_17 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = SpecialFunctions_regularizedGammaLowerP_m0391776CA4410893E77030FD28C5384E3A2CC963(((double)il2cpp_codegen_add(L_16, (1.0))), L_17, NULL);
		double L_19 = ___x1;
		double L_20 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_19, L_20, NULL);
		double L_22 = ___x1;
		double L_23;
		L_23 = exp(((-L_22)));
		double L_24 = ___s0;
		double L_25 = ___s0;
		double L_26;
		L_26 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_25, NULL);
		return ((double)il2cpp_codegen_add(L_18, ((double)(((double)il2cpp_codegen_multiply(L_21, L_23))/((double)il2cpp_codegen_multiply(L_24, L_26))))));
	}

IL_00dc:
	{
		double L_27 = ___s0;
		double L_28 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = log(L_28);
		double L_30 = ___x1;
		double L_31 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_31, NULL);
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_27, L_29)), L_30)), L_32));
		double L_33 = V_0;
		if ((!(((double)L_33) < ((double)(-709.78271289338397)))))
		{
			goto IL_0104;
		}
	}
	{
		return (1.0);
	}

IL_0104:
	{
		double L_34 = ___x1;
		if ((((double)L_34) <= ((double)(1.0))))
		{
			goto IL_0114;
		}
	}
	{
		double L_35 = ___x1;
		double L_36 = ___s0;
		if ((!(((double)L_35) <= ((double)L_36))))
		{
			goto IL_0167;
		}
	}

IL_0114:
	{
		double L_37 = ___s0;
		V_10 = L_37;
		V_11 = (1.0);
		V_12 = (1.0);
	}

IL_012d:
	{
		double L_38 = V_10;
		V_10 = ((double)il2cpp_codegen_add(L_38, (1.0)));
		double L_39 = V_11;
		double L_40 = ___x1;
		double L_41 = V_10;
		V_11 = ((double)(((double)il2cpp_codegen_multiply(L_39, L_40))/L_41));
		double L_42 = V_12;
		double L_43 = V_11;
		V_12 = ((double)il2cpp_codegen_add(L_42, L_43));
		double L_44 = V_11;
		double L_45 = V_12;
		if ((((double)((double)(L_44/L_45))) > ((double)(1.0000000000000001E-15))))
		{
			goto IL_012d;
		}
	}
	{
		double L_46 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = exp(L_46);
		double L_48 = V_12;
		double L_49 = ___s0;
		return ((double)(((double)il2cpp_codegen_multiply(L_47, L_48))/L_49));
	}

IL_0167:
	{
		V_1 = 0;
		double L_50 = ___s0;
		V_2 = ((double)il2cpp_codegen_subtract((1.0), L_50));
		double L_51 = ___x1;
		double L_52 = V_2;
		V_3 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_51, L_52)), (1.0)));
		V_4 = (1.0);
		double L_53 = ___x1;
		V_5 = L_53;
		double L_54 = ___x1;
		V_6 = ((double)il2cpp_codegen_add(L_54, (1.0)));
		double L_55 = V_3;
		double L_56 = ___x1;
		V_7 = ((double)il2cpp_codegen_multiply(L_55, L_56));
		double L_57 = V_6;
		double L_58 = V_7;
		V_8 = ((double)(L_57/L_58));
	}

IL_01aa:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_59)
		{
			goto IL_01bb;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_01bb:
	{
		int32_t L_60 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		double L_61 = V_2;
		V_2 = ((double)il2cpp_codegen_add(L_61, (1.0)));
		double L_62 = V_3;
		V_3 = ((double)il2cpp_codegen_add(L_62, (2.0)));
		double L_63 = V_2;
		int32_t L_64 = V_1;
		V_13 = ((double)il2cpp_codegen_multiply(L_63, ((double)L_64)));
		double L_65 = V_6;
		double L_66 = V_3;
		double L_67 = V_4;
		double L_68 = V_13;
		V_14 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_65, L_66)), ((double)il2cpp_codegen_multiply(L_67, L_68))));
		double L_69 = V_7;
		double L_70 = V_3;
		double L_71 = V_5;
		double L_72 = V_13;
		V_15 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_69, L_70)), ((double)il2cpp_codegen_multiply(L_71, L_72))));
		double L_73 = V_15;
		if ((((double)L_73) == ((double)(0.0))))
		{
			goto IL_021e;
		}
	}
	{
		double L_74 = V_14;
		double L_75 = V_15;
		V_16 = ((double)(L_74/L_75));
		double L_76 = V_8;
		double L_77 = V_16;
		double L_78 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_79;
		L_79 = fabs(((double)(((double)il2cpp_codegen_subtract(L_76, L_77))/L_78)));
		V_9 = L_79;
		double L_80 = V_16;
		V_8 = L_80;
		goto IL_0229;
	}

IL_021e:
	{
		V_9 = (1.0);
	}

IL_0229:
	{
		double L_81 = V_6;
		V_4 = L_81;
		double L_82 = V_14;
		V_6 = L_82;
		double L_83 = V_7;
		V_5 = L_83;
		double L_84 = V_15;
		V_7 = L_84;
		double L_85 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_86;
		L_86 = fabs(L_85);
		if ((!(((double)L_86) > ((double)(4503599627370496.0)))))
		{
			goto IL_0283;
		}
	}
	{
		double L_87 = V_4;
		V_4 = ((double)il2cpp_codegen_multiply(L_87, (2.2204460492503131E-16)));
		double L_88 = V_6;
		V_6 = ((double)il2cpp_codegen_multiply(L_88, (2.2204460492503131E-16)));
		double L_89 = V_5;
		V_5 = ((double)il2cpp_codegen_multiply(L_89, (2.2204460492503131E-16)));
		double L_90 = V_7;
		V_7 = ((double)il2cpp_codegen_multiply(L_90, (2.2204460492503131E-16)));
	}

IL_0283:
	{
		double L_91 = V_9;
		if ((((double)L_91) > ((double)(1.0000000000000001E-15))))
		{
			goto IL_01aa;
		}
	}
	{
		double L_92 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_93;
		L_93 = exp(L_92);
		double L_94 = V_8;
		return ((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(L_93, L_94))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::inverseRegularizedGammaLowerP(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_inverseRegularizedGammaLowerP_m745F43000295E313CBE261DC9C05A3D2B99D237E (double ___a0, double ___p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	double G_B18_0 = 0.0;
	double G_B31_0 = 0.0;
	double G_B30_0 = 0.0;
	double G_B32_0 = 0.0;
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___p1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___a0;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_003a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_003a:
	{
		double L_5 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_5, (0.0), NULL);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0055:
	{
		double L_7 = ___p1;
		if ((!(((double)L_7) <= ((double)(0.0)))))
		{
			goto IL_006b;
		}
	}
	{
		return (0.0);
	}

IL_006b:
	{
		double L_8 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_8, (0.0), NULL);
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		return (0.0);
	}

IL_0086:
	{
		double L_10 = ___p1;
		if ((!(((double)L_10) >= ((double)(1.0)))))
		{
			goto IL_00b3;
		}
	}
	{
		double L_11 = ___a0;
		double L_12 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = sqrt(L_12);
		double L_14;
		L_14 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((100.0), ((double)il2cpp_codegen_add(L_11, ((double)il2cpp_codegen_multiply((100.0), L_13)))), NULL);
		return L_14;
	}

IL_00b3:
	{
		V_4 = (0.0);
		V_5 = (0.0);
		double L_15 = ___a0;
		V_6 = ((double)il2cpp_codegen_subtract(L_15, (1.0)));
		double L_16 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_16, NULL);
		V_7 = L_17;
		double L_18 = ___a0;
		if ((!(((double)L_18) > ((double)(1.0)))))
		{
			goto IL_01dc;
		}
	}
	{
		double L_19 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = log(L_19);
		V_4 = L_20;
		double L_21 = V_6;
		double L_22 = V_4;
		double L_23 = V_7;
		double L_24;
		L_24 = exp(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_21, ((double)il2cpp_codegen_subtract(L_22, (1.0))))), L_23)));
		V_5 = L_24;
		double L_25 = ___p1;
		if ((((double)L_25) < ((double)(0.5))))
		{
			goto IL_0128;
		}
	}
	{
		double L_26 = ___p1;
		G_B18_0 = ((double)il2cpp_codegen_subtract((1.0), L_26));
		goto IL_0129;
	}

IL_0128:
	{
		double L_27 = ___p1;
		G_B18_0 = L_27;
	}

IL_0129:
	{
		V_3 = G_B18_0;
		double L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = log(L_28);
		double L_30;
		L_30 = sqrt(((double)il2cpp_codegen_multiply((-2.0), L_29)));
		V_1 = L_30;
		double L_31 = V_1;
		double L_32 = V_1;
		double L_33 = V_1;
		double L_34 = V_1;
		V_0 = ((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_add((2.3075299999999999), ((double)il2cpp_codegen_multiply(L_31, (0.27061000000000002)))))/((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_32, ((double)il2cpp_codegen_add((0.99229000000000001), ((double)il2cpp_codegen_multiply(L_33, (0.044810000000000003))))))))))), L_34));
		double L_35 = ___p1;
		if ((!(((double)L_35) < ((double)(0.5)))))
		{
			goto IL_0189;
		}
	}
	{
		double L_36 = V_0;
		V_0 = ((-L_36));
	}

IL_0189:
	{
		double L_37 = ___a0;
		double L_38 = ___a0;
		double L_39 = V_0;
		double L_40 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = sqrt(L_40);
		double L_42;
		L_42 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract((1.0), ((double)((1.0)/((double)il2cpp_codegen_multiply((9.0), L_38)))))), ((double)(L_39/((double)il2cpp_codegen_multiply((3.0), L_41)))))), (3.0), NULL);
		double L_43;
		L_43 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6((0.001), ((double)il2cpp_codegen_multiply(L_37, L_42)), NULL);
		V_0 = L_43;
		goto IL_0241;
	}

IL_01dc:
	{
		double L_44 = ___a0;
		double L_45 = ___a0;
		V_1 = ((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(L_44, ((double)il2cpp_codegen_add((0.253), ((double)il2cpp_codegen_multiply(L_45, (0.12)))))))));
		double L_46 = ___p1;
		double L_47 = V_1;
		if ((!(((double)L_46) < ((double)L_47))))
		{
			goto IL_0218;
		}
	}
	{
		double L_48 = ___p1;
		double L_49 = V_1;
		double L_50 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_51;
		L_51 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)(L_48/L_49)), ((double)((1.0)/L_50)), NULL);
		V_0 = L_51;
		goto IL_0241;
	}

IL_0218:
	{
		double L_52 = ___p1;
		double L_53 = V_1;
		double L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_55;
		L_55 = log(((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_subtract(L_52, L_53))/((double)il2cpp_codegen_subtract((1.0), L_54)))))));
		V_0 = ((double)il2cpp_codegen_subtract((1.0), L_55));
	}

IL_0241:
	{
		V_8 = 0;
		goto IL_032f;
	}

IL_0249:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_56)
		{
			goto IL_025a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_025a:
	{
		double L_57 = V_0;
		if ((!(((double)L_57) <= ((double)(0.0)))))
		{
			goto IL_0270;
		}
	}
	{
		return (0.0);
	}

IL_0270:
	{
		double L_58 = ___a0;
		double L_59 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_60;
		L_60 = SpecialFunctions_regularizedGammaLowerP_m0391776CA4410893E77030FD28C5384E3A2CC963(L_58, L_59, NULL);
		double L_61 = ___p1;
		double L_62 = ___a0;
		G_B30_0 = ((double)il2cpp_codegen_subtract(L_60, L_61));
		if ((!(((double)L_62) > ((double)(1.0)))))
		{
			G_B31_0 = ((double)il2cpp_codegen_subtract(L_60, L_61));
			goto IL_02a2;
		}
	}
	{
		double L_63 = V_5;
		double L_64 = V_0;
		double L_65 = V_6;
		double L_66 = V_6;
		double L_67 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_68;
		L_68 = log(L_67);
		double L_69 = V_4;
		double L_70;
		L_70 = exp(((double)il2cpp_codegen_add(((-((double)il2cpp_codegen_subtract(L_64, L_65)))), ((double)il2cpp_codegen_multiply(L_66, ((double)il2cpp_codegen_subtract(L_68, L_69)))))));
		V_1 = ((double)il2cpp_codegen_multiply(L_63, L_70));
		G_B32_0 = G_B30_0;
		goto IL_02b7;
	}

IL_02a2:
	{
		double L_71 = V_0;
		double L_72 = V_6;
		double L_73 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_74;
		L_74 = log(L_73);
		double L_75 = V_7;
		double L_76;
		L_76 = exp(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(((-L_71)), ((double)il2cpp_codegen_multiply(L_72, L_74)))), L_75)));
		V_1 = L_76;
		G_B32_0 = G_B31_0;
	}

IL_02b7:
	{
		double L_77 = V_1;
		V_2 = ((double)(G_B32_0/L_77));
		double L_78 = V_0;
		double L_79 = V_2;
		double L_80 = V_2;
		double L_81 = ___a0;
		double L_82 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_83;
		L_83 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716((1.0), ((double)il2cpp_codegen_multiply(L_80, ((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_subtract(L_81, (1.0)))/L_82)), (1.0))))), NULL);
		double L_84 = ((double)(L_79/((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((0.5), L_83))))));
		V_1 = L_84;
		V_0 = ((double)il2cpp_codegen_subtract(L_78, L_84));
		double L_85 = V_0;
		if ((!(((double)L_85) <= ((double)(0.0)))))
		{
			goto IL_0316;
		}
	}
	{
		double L_86 = V_0;
		double L_87 = V_1;
		V_0 = ((double)il2cpp_codegen_multiply((0.5), ((double)il2cpp_codegen_add(L_86, L_87))));
	}

IL_0316:
	{
		double L_88 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_89;
		L_89 = fabs(L_88);
		double L_90 = V_0;
		if ((((double)L_89) < ((double)((double)il2cpp_codegen_multiply((1.0E-08), L_90)))))
		{
			goto IL_0338;
		}
	}
	{
		int32_t L_91 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_032f:
	{
		int32_t L_92 = V_8;
		if ((((int32_t)L_92) < ((int32_t)((int32_t)12))))
		{
			goto IL_0249;
		}
	}

IL_0338:
	{
		double L_93 = V_0;
		return L_93;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::incompleteGammaLower(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_incompleteGammaLower_m487E535D3B7A806CBC2480B51C0412944A67A299 (double ___s0, double ___x1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_0, NULL);
		double L_2 = ___s0;
		double L_3 = ___x1;
		double L_4;
		L_4 = SpecialFunctions_regularizedGammaLowerP_m0391776CA4410893E77030FD28C5384E3A2CC963(L_2, L_3, NULL);
		return ((double)il2cpp_codegen_multiply(L_1, L_4));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::regularizedGammaUpperQ(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_regularizedGammaUpperQ_m45ED208005C576A967B57E368F5C289C679EEEB6 (double ___s0, double ___x1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	{
		double L_0 = ___x1;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___s0;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_4, (0.0), NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		return (1.0);
	}

IL_003f:
	{
		double L_6 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_6, (0.0), NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		double L_8 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = SpecialFunctions_exponentialIntegralEi_m9EAF7B690AB0B9E7A40BEC3D00592444D3DDE1EF(((-L_8)), NULL);
		return ((double)(((-L_9))/(0.57721566490153287)));
	}

IL_0063:
	{
		double L_10 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_10, (1.0), NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		double L_12 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = exp(((-L_12)));
		return L_13;
	}

IL_007c:
	{
		double L_14 = ___x1;
		if ((!(((double)L_14) < ((double)(0.0)))))
		{
			goto IL_0092;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0092:
	{
		double L_15 = ___s0;
		if ((!(((double)L_15) < ((double)(0.0)))))
		{
			goto IL_00c9;
		}
	}
	{
		double L_16 = ___s0;
		double L_17 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = SpecialFunctions_regularizedGammaUpperQ_m45ED208005C576A967B57E368F5C289C679EEEB6(((double)il2cpp_codegen_add(L_16, (1.0))), L_17, NULL);
		double L_19 = ___x1;
		double L_20 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_19, L_20, NULL);
		double L_22 = ___x1;
		double L_23;
		L_23 = exp(((-L_22)));
		double L_24 = ___s0;
		double L_25 = ___s0;
		double L_26;
		L_26 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_25, NULL);
		return ((double)il2cpp_codegen_subtract(L_18, ((double)(((double)il2cpp_codegen_multiply(L_21, L_23))/((double)il2cpp_codegen_multiply(L_24, L_26))))));
	}

IL_00c9:
	{
		double L_27 = ___s0;
		double L_28 = ___x1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = log(L_28);
		double L_30 = ___x1;
		double L_31 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_31, NULL);
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_27, L_29)), L_30)), L_32));
		double L_33 = V_0;
		if ((!(((double)L_33) < ((double)(-709.78271289338397)))))
		{
			goto IL_00f1;
		}
	}
	{
		return (0.0);
	}

IL_00f1:
	{
		double L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = exp(L_34);
		V_0 = L_35;
		double L_36 = ___s0;
		V_2 = ((double)il2cpp_codegen_subtract((1.0), L_36));
		double L_37 = ___x1;
		double L_38 = V_2;
		V_3 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_37, L_38)), (1.0)));
		V_4 = (0.0);
		V_5 = (1.0);
		double L_39 = ___x1;
		V_6 = L_39;
		double L_40 = ___x1;
		V_7 = ((double)il2cpp_codegen_add(L_40, (1.0)));
		double L_41 = V_3;
		double L_42 = ___x1;
		V_8 = ((double)il2cpp_codegen_multiply(L_41, L_42));
		double L_43 = V_7;
		double L_44 = V_8;
		V_9 = ((double)(L_43/L_44));
	}

IL_0144:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_45)
		{
			goto IL_0155;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0155:
	{
		double L_46 = V_4;
		V_4 = ((double)il2cpp_codegen_add(L_46, (1.0)));
		double L_47 = V_2;
		V_2 = ((double)il2cpp_codegen_add(L_47, (1.0)));
		double L_48 = V_3;
		V_3 = ((double)il2cpp_codegen_add(L_48, (2.0)));
		double L_49 = V_2;
		double L_50 = V_4;
		V_10 = ((double)il2cpp_codegen_multiply(L_49, L_50));
		double L_51 = V_7;
		double L_52 = V_3;
		double L_53 = V_5;
		double L_54 = V_10;
		V_11 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_51, L_52)), ((double)il2cpp_codegen_multiply(L_53, L_54))));
		double L_55 = V_8;
		double L_56 = V_3;
		double L_57 = V_6;
		double L_58 = V_10;
		V_12 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_55, L_56)), ((double)il2cpp_codegen_multiply(L_57, L_58))));
		double L_59 = V_12;
		if ((((double)L_59) == ((double)(0.0))))
		{
			goto IL_01c1;
		}
	}
	{
		double L_60 = V_11;
		double L_61 = V_12;
		V_13 = ((double)(L_60/L_61));
		double L_62 = V_9;
		double L_63 = V_13;
		double L_64 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_65;
		L_65 = fabs(((double)(((double)il2cpp_codegen_subtract(L_62, L_63))/L_64)));
		V_1 = L_65;
		double L_66 = V_13;
		V_9 = L_66;
		goto IL_01cb;
	}

IL_01c1:
	{
		V_1 = (1.0);
	}

IL_01cb:
	{
		double L_67 = V_7;
		V_5 = L_67;
		double L_68 = V_11;
		V_7 = L_68;
		double L_69 = V_8;
		V_6 = L_69;
		double L_70 = V_12;
		V_8 = L_70;
		double L_71 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_72;
		L_72 = fabs(L_71);
		if ((!(((double)L_72) > ((double)(4503599627370496.0)))))
		{
			goto IL_0225;
		}
	}
	{
		double L_73 = V_5;
		V_5 = ((double)il2cpp_codegen_multiply(L_73, (2.2204460492503131E-16)));
		double L_74 = V_7;
		V_7 = ((double)il2cpp_codegen_multiply(L_74, (2.2204460492503131E-16)));
		double L_75 = V_6;
		V_6 = ((double)il2cpp_codegen_multiply(L_75, (2.2204460492503131E-16)));
		double L_76 = V_8;
		V_8 = ((double)il2cpp_codegen_multiply(L_76, (2.2204460492503131E-16)));
	}

IL_0225:
	{
		double L_77 = V_1;
		if ((((double)L_77) > ((double)(1.0000000000000001E-15))))
		{
			goto IL_0144;
		}
	}
	{
		double L_78 = V_9;
		double L_79 = V_0;
		return ((double)il2cpp_codegen_multiply(L_78, L_79));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::incompleteGammaUpper(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_incompleteGammaUpper_mEC96E02A71A4B16649870AC8AECD7D0451878B84 (double ___s0, double ___x1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_0, NULL);
		double L_2 = ___s0;
		double L_3 = ___x1;
		double L_4;
		L_4 = SpecialFunctions_regularizedGammaUpperQ_m45ED208005C576A967B57E368F5C289C679EEEB6(L_2, L_3, NULL);
		return ((double)il2cpp_codegen_multiply(L_1, L_4));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::diGamma(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_diGamma_m8C1CB6F413491CFEFE2E34E1E54BB563B505557E (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___x0;
		bool L_3;
		L_3 = Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x0;
		if ((!(((double)L_4) <= ((double)(0.0)))))
		{
			goto IL_0042;
		}
	}
	{
		double L_5 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = MathFunctions_isInteger_m395DCAA8FF434CC25085365E779AB9A592A9289D(L_5, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0042:
	{
		double L_7 = ___x0;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_007a;
		}
	}
	{
		double L_8 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = SpecialFunctions_diGamma_m8C1CB6F413491CFEFE2E34E1E54BB563B505557E(((double)il2cpp_codegen_subtract((1.0), L_8)), NULL);
		double L_10 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = tan(((double)il2cpp_codegen_multiply((-3.1415926535897931), L_10)));
		return ((double)il2cpp_codegen_add(L_9, ((double)((3.1415926535897931)/L_11))));
	}

IL_007a:
	{
		double L_12 = ___x0;
		if ((!(((double)L_12) <= ((double)(9.9999999999999995E-07)))))
		{
			goto IL_00a8;
		}
	}
	{
		double L_13 = ___x0;
		double L_14 = ___x0;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract((-0.57721566490153287), ((double)((1.0)/L_13)))), ((double)il2cpp_codegen_multiply((1.6449340668482264), L_14))));
	}

IL_00a8:
	{
		V_0 = (0.0);
		goto IL_00e0;
	}

IL_00b4:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_15)
		{
			goto IL_00c5;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00c5:
	{
		double L_16 = V_0;
		double L_17 = ___x0;
		V_0 = ((double)il2cpp_codegen_subtract(L_16, ((double)((1.0)/L_17))));
		double L_18 = ___x0;
		___x0 = ((double)il2cpp_codegen_add(L_18, (1.0)));
	}

IL_00e0:
	{
		double L_19 = ___x0;
		if ((((double)L_19) < ((double)(12.0))))
		{
			goto IL_00b4;
		}
	}
	{
		double L_20 = ___x0;
		if ((!(((double)L_20) >= ((double)(12.0)))))
		{
			goto IL_015b;
		}
	}
	{
		double L_21 = ___x0;
		V_1 = ((double)((1.0)/L_21));
		double L_22 = V_0;
		double L_23 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = log(L_23);
		double L_25 = V_1;
		V_0 = ((double)il2cpp_codegen_add(L_22, ((double)il2cpp_codegen_subtract(L_24, ((double)il2cpp_codegen_multiply((0.5), L_25))))));
		double L_26 = V_1;
		double L_27 = V_1;
		V_1 = ((double)il2cpp_codegen_multiply(L_26, L_27));
		double L_28 = V_0;
		double L_29 = V_1;
		double L_30 = V_1;
		double L_31 = V_1;
		double L_32 = V_1;
		double L_33 = V_1;
		V_0 = ((double)il2cpp_codegen_subtract(L_28, ((double)il2cpp_codegen_multiply(L_29, ((double)il2cpp_codegen_subtract((0.083333333333333329), ((double)il2cpp_codegen_multiply(L_30, ((double)il2cpp_codegen_subtract((0.0083333333333333332), ((double)il2cpp_codegen_multiply(L_31, ((double)il2cpp_codegen_subtract((0.003968253968253968), ((double)il2cpp_codegen_multiply(L_32, ((double)il2cpp_codegen_subtract((0.0041666666666666666), ((double)il2cpp_codegen_multiply(L_33, (0.007575757575757576)))))))))))))))))))));
	}

IL_015b:
	{
		double L_34 = V_0;
		return L_34;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::logBeta(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_logBeta_mB5E6CC62B63FFABE9A22AA48CB0240B0B1C0ADFA (double ___x0, double ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___y1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x0;
		if ((((double)L_4) <= ((double)(0.0))))
		{
			goto IL_003c;
		}
	}
	{
		double L_5 = ___y1;
		if ((!(((double)L_5) <= ((double)(0.0)))))
		{
			goto IL_0046;
		}
	}

IL_003c:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0046:
	{
		double L_6 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_6, NULL);
		V_0 = L_7;
		double L_8 = V_0;
		bool L_9;
		L_9 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		double L_10 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = fabs(L_11);
		double L_13;
		L_13 = log(L_12);
		V_0 = L_13;
	}

IL_0066:
	{
		double L_14 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_14, NULL);
		V_1 = L_15;
		double L_16 = V_1;
		bool L_17;
		L_17 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_0086;
		}
	}
	{
		double L_18 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_19;
		L_19 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = fabs(L_19);
		double L_21;
		L_21 = log(L_20);
		V_1 = L_21;
	}

IL_0086:
	{
		double L_22 = ___x0;
		double L_23 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(((double)il2cpp_codegen_add(L_22, L_23)), NULL);
		V_2 = L_24;
		double L_25 = V_1;
		bool L_26;
		L_26 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_25, NULL);
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		double L_27 = ___x0;
		double L_28 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)il2cpp_codegen_add(L_27, L_28)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_30;
		L_30 = fabs(L_29);
		double L_31;
		L_31 = log(L_30);
		V_2 = L_31;
	}

IL_00aa:
	{
		double L_32 = V_0;
		bool L_33;
		L_33 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_32, NULL);
		if (L_33)
		{
			goto IL_00c8;
		}
	}
	{
		double L_34 = V_1;
		bool L_35;
		L_35 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_34, NULL);
		if (L_35)
		{
			goto IL_00c8;
		}
	}
	{
		double L_36 = V_2;
		bool L_37;
		L_37 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_36, NULL);
		if (L_37)
		{
			goto IL_00c8;
		}
	}
	{
		double L_38 = V_0;
		double L_39 = V_1;
		double L_40 = V_2;
		return ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_38, L_39)), L_40));
	}

IL_00c8:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::beta(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_beta_m06D6912A82FAA21732ADA5D89A87DCBC82CC838F (double ___x0, double ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___y1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x0;
		if ((((double)L_4) <= ((double)(0.0))))
		{
			goto IL_003c;
		}
	}
	{
		double L_5 = ___y1;
		if ((!(((double)L_5) <= ((double)(0.0)))))
		{
			goto IL_0046;
		}
	}

IL_003c:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0046:
	{
		double L_6 = ___x0;
		if ((((double)L_6) > ((double)(99.0))))
		{
			goto IL_005e;
		}
	}
	{
		double L_7 = ___y1;
		if ((!(((double)L_7) > ((double)(99.0)))))
		{
			goto IL_006b;
		}
	}

IL_005e:
	{
		double L_8 = ___x0;
		double L_9 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = SpecialFunctions_logBeta_mB5E6CC62B63FFABE9A22AA48CB0240B0B1C0ADFA(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = exp(L_10);
		return L_11;
	}

IL_006b:
	{
		double L_12 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_12, NULL);
		double L_14 = ___y1;
		double L_15;
		L_15 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(L_14, NULL);
		double L_16 = ___x0;
		double L_17 = ___y1;
		double L_18;
		L_18 = SpecialFunctions_gamma_mE57D2795C4500A101415CB9048F517C3C2BDA454(((double)il2cpp_codegen_add(L_16, L_17)), NULL);
		return ((double)(((double)il2cpp_codegen_multiply(L_13, L_15))/L_18));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::incompleteBeta(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_incompleteBeta_m70FC5A4D1CF54D0C68F2391F2473929D014FF371 (double ___a0, double ___b1, double ___x2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	double V_7 = 0.0;
	int64_t V_8 = 0;
	double V_9 = 0.0;
	int64_t V_10 = 0;
	double V_11 = 0.0;
	int64_t V_12 = 0;
	double V_13 = 0.0;
	int64_t V_14 = 0;
	int64_t V_15 = 0;
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_7 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_6) < ((double)((-L_7))))))
		{
			goto IL_0049;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0049:
	{
		double L_8 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_9 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_8) > ((double)((double)il2cpp_codegen_add((1.0), L_9))))))
		{
			goto IL_0065;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0065:
	{
		double L_10 = ___a0;
		if ((((double)L_10) <= ((double)(0.0))))
		{
			goto IL_007d;
		}
	}
	{
		double L_11 = ___b1;
		if ((!(((double)L_11) <= ((double)(0.0)))))
		{
			goto IL_0087;
		}
	}

IL_007d:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0087:
	{
		double L_12 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_12, (0.0), NULL);
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		return (0.0);
	}

IL_00a2:
	{
		double L_14 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_14, (1.0), NULL);
		if (!L_15)
		{
			goto IL_00bb;
		}
	}
	{
		double L_16 = ___a0;
		double L_17 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = SpecialFunctions_beta_m06D6912A82FAA21732ADA5D89A87DCBC82CC838F(L_16, L_17, NULL);
		return L_18;
	}

IL_00bb:
	{
		double L_19 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_19, (0.0), NULL);
		V_0 = L_20;
		double L_21 = ___b1;
		bool L_22;
		L_22 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_21, (0.0), NULL);
		V_1 = L_22;
		double L_23 = ___a0;
		bool L_24;
		L_24 = MathFunctions_isInteger_m395DCAA8FF434CC25085365E779AB9A592A9289D(L_23, NULL);
		V_2 = L_24;
		double L_25 = ___b1;
		bool L_26;
		L_26 = MathFunctions_isInteger_m395DCAA8FF434CC25085365E779AB9A592A9289D(L_25, NULL);
		V_3 = L_26;
		V_4 = ((int64_t)0);
		V_5 = ((int64_t)0);
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_00fd;
		}
	}
	{
		double L_28 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = MathFunctions_integerPart_m9E88CABBDB278AC0E1B0B514A207FA866314BD96(L_28, NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int64_t>(L_29);
	}

IL_00fd:
	{
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_0109;
		}
	}
	{
		double L_31 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = MathFunctions_integerPart_m9E88CABBDB278AC0E1B0B514A207FA866314BD96(L_31, NULL);
		V_5 = il2cpp_codegen_cast_double_to_int<int64_t>(L_32);
	}

IL_0109:
	{
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)((int32_t)L_33&(int32_t)L_34)))
		{
			goto IL_0121;
		}
	}
	{
		double L_35 = ___x2;
		double L_36 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = log(((double)(L_35/((double)il2cpp_codegen_subtract((1.0), L_36)))));
		return L_37;
	}

IL_0121:
	{
		bool L_38 = V_0;
		bool L_39 = V_3;
		if (!((int32_t)((int32_t)L_38&(int32_t)L_39)))
		{
			goto IL_0264;
		}
	}
	{
		int64_t L_40 = V_5;
		V_6 = L_40;
		int64_t L_41 = V_6;
		if ((((int64_t)L_41) < ((int64_t)((int64_t)1))))
		{
			goto IL_01a2;
		}
	}
	{
		int64_t L_42 = V_6;
		if ((!(((uint64_t)L_42) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_0140;
		}
	}
	{
		double L_43 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_44;
		L_44 = log(L_43);
		return L_44;
	}

IL_0140:
	{
		int64_t L_45 = V_6;
		if ((!(((uint64_t)L_45) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_014f;
		}
	}
	{
		double L_46 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = log(L_46);
		double L_48 = ___x2;
		return ((double)il2cpp_codegen_add(L_47, L_48));
	}

IL_014f:
	{
		double L_49 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_50;
		L_50 = log(L_49);
		V_7 = L_50;
		V_8 = ((int64_t)1);
		goto IL_0196;
	}

IL_015d:
	{
		double L_51 = V_7;
		int64_t L_52 = V_6;
		int64_t L_53 = V_8;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_54;
		L_54 = MathFunctions_binomCoeff_m459A53F8DB5BAF471802DDB95EADCAC7471C9876(((double)((int64_t)il2cpp_codegen_subtract(L_52, ((int64_t)1)))), L_53, NULL);
		int64_t L_55 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_56;
		L_56 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((-1.0), ((double)L_55), NULL);
		double L_57 = ___x2;
		int64_t L_58 = V_8;
		double L_59;
		L_59 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_57, ((double)L_58), NULL);
		int64_t L_60 = V_8;
		V_7 = ((double)il2cpp_codegen_subtract(L_51, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_54, L_56)), ((double)(L_59/((double)L_60)))))));
		int64_t L_61 = V_8;
		V_8 = ((int64_t)il2cpp_codegen_add(L_61, ((int64_t)1)));
	}

IL_0196:
	{
		int64_t L_62 = V_8;
		int64_t L_63 = V_6;
		if ((((int64_t)L_62) <= ((int64_t)((int64_t)il2cpp_codegen_subtract(L_63, ((int64_t)1))))))
		{
			goto IL_015d;
		}
	}
	{
		double L_64 = V_7;
		return L_64;
	}

IL_01a2:
	{
		int64_t L_65 = V_6;
		if ((((int64_t)L_65) > ((int64_t)((int64_t)(-1)))))
		{
			goto IL_0264;
		}
	}
	{
		int64_t L_66 = V_6;
		if ((!(((uint64_t)L_66) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_01e4;
		}
	}
	{
		double L_67 = ___x2;
		double L_68 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = log(((double)(L_67/((double)il2cpp_codegen_subtract((1.0), L_68)))));
		double L_70 = ___x2;
		return ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_69, ((double)((1.0)/((double)il2cpp_codegen_subtract((1.0), L_70)))))), (1.0)));
	}

IL_01e4:
	{
		int64_t L_71 = V_6;
		if ((!(((uint64_t)L_71) == ((uint64_t)((int64_t)((int32_t)-2))))))
		{
			goto IL_0222;
		}
	}
	{
		double L_72 = ___x2;
		double L_73 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_74;
		L_74 = log(((double)(L_72/((double)il2cpp_codegen_subtract((1.0), L_73)))));
		double L_75 = ___x2;
		double L_76 = ___x2;
		double L_77 = ___x2;
		return ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_74, ((double)((1.0)/L_75)))), ((double)((1.0)/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((2.0), L_76)), L_77))))));
	}

IL_0222:
	{
		double L_78 = ___x2;
		double L_79 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_80;
		L_80 = log(((double)(L_78/((double)il2cpp_codegen_subtract((1.0), L_79)))));
		V_9 = ((-L_80));
		V_10 = ((int64_t)1);
		goto IL_0257;
	}

IL_023d:
	{
		double L_81 = V_9;
		double L_82 = ___x2;
		int64_t L_83 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_84;
		L_84 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_82, ((double)((-L_83))), NULL);
		int64_t L_85 = V_10;
		V_9 = ((double)il2cpp_codegen_subtract(L_81, ((double)(L_84/((double)L_85)))));
		int64_t L_86 = V_10;
		V_10 = ((int64_t)il2cpp_codegen_add(L_86, ((int64_t)1)));
	}

IL_0257:
	{
		int64_t L_87 = V_10;
		int64_t L_88 = V_6;
		if ((((int64_t)L_87) <= ((int64_t)((int64_t)il2cpp_codegen_subtract(((-L_88)), ((int64_t)1))))))
		{
			goto IL_023d;
		}
	}
	{
		double L_89 = V_9;
		return L_89;
	}

IL_0264:
	{
		bool L_90 = V_2;
		bool L_91 = V_1;
		if (!((int32_t)((int32_t)L_90&(int32_t)L_91)))
		{
			goto IL_0393;
		}
	}
	{
		int64_t L_92 = V_4;
		V_6 = L_92;
		int64_t L_93 = V_6;
		if ((((int64_t)L_93) < ((int64_t)((int64_t)1))))
		{
			goto IL_02e6;
		}
	}
	{
		int64_t L_94 = V_6;
		if ((!(((uint64_t)L_94) == ((uint64_t)((int64_t)1)))))
		{
			goto IL_028e;
		}
	}
	{
		double L_95 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_96;
		L_96 = log(((double)il2cpp_codegen_subtract((1.0), L_95)));
		return ((-L_96));
	}

IL_028e:
	{
		int64_t L_97 = V_6;
		if ((!(((uint64_t)L_97) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_02a8;
		}
	}
	{
		double L_98 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_99;
		L_99 = log(((double)il2cpp_codegen_subtract((1.0), L_98)));
		double L_100 = ___x2;
		return ((double)il2cpp_codegen_subtract(((-L_99)), L_100));
	}

IL_02a8:
	{
		double L_101 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_102;
		L_102 = log(((double)il2cpp_codegen_subtract((1.0), L_101)));
		V_11 = ((-L_102));
		V_12 = ((int64_t)1);
		goto IL_02da;
	}

IL_02c1:
	{
		double L_103 = V_11;
		double L_104 = ___x2;
		int64_t L_105 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_106;
		L_106 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_104, ((double)L_105), NULL);
		int64_t L_107 = V_12;
		V_11 = ((double)il2cpp_codegen_subtract(L_103, ((double)(L_106/((double)L_107)))));
		int64_t L_108 = V_12;
		V_12 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)1)));
	}

IL_02da:
	{
		int64_t L_109 = V_12;
		int64_t L_110 = V_6;
		if ((((int64_t)L_109) <= ((int64_t)((int64_t)il2cpp_codegen_subtract(L_110, ((int64_t)1))))))
		{
			goto IL_02c1;
		}
	}
	{
		double L_111 = V_11;
		return L_111;
	}

IL_02e6:
	{
		int64_t L_112 = V_6;
		if ((((int64_t)L_112) > ((int64_t)((int64_t)(-1)))))
		{
			goto IL_0393;
		}
	}
	{
		int64_t L_113 = V_6;
		if ((!(((uint64_t)L_113) == ((uint64_t)((int64_t)(-1))))))
		{
			goto IL_0314;
		}
	}
	{
		double L_114 = ___x2;
		double L_115 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_116;
		L_116 = log(((double)(L_114/((double)il2cpp_codegen_subtract((1.0), L_115)))));
		double L_117 = ___x2;
		return ((double)il2cpp_codegen_subtract(L_116, ((double)((1.0)/L_117))));
	}

IL_0314:
	{
		double L_118 = ___x2;
		double L_119 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_120;
		L_120 = log(((double)(L_118/((double)il2cpp_codegen_subtract((1.0), L_119)))));
		V_13 = ((-L_120));
		V_14 = ((int64_t)1);
		goto IL_0353;
	}

IL_032f:
	{
		double L_121 = V_13;
		double L_122 = ___x2;
		int64_t L_123 = V_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_124;
		L_124 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract((1.0), L_122)), ((double)((-L_123))), NULL);
		int64_t L_125 = V_14;
		V_13 = ((double)il2cpp_codegen_add(L_121, ((double)(L_124/((double)L_125)))));
		int64_t L_126 = V_14;
		V_14 = ((int64_t)il2cpp_codegen_add(L_126, ((int64_t)1)));
	}

IL_0353:
	{
		int64_t L_127 = V_14;
		int64_t L_128 = V_6;
		if ((((int64_t)L_127) <= ((int64_t)((-L_128)))))
		{
			goto IL_032f;
		}
	}
	{
		V_15 = ((int64_t)1);
		goto IL_0389;
	}

IL_0360:
	{
		double L_129 = V_13;
		int64_t L_130 = V_15;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_131;
		L_131 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(((double)((int64_t)il2cpp_codegen_subtract(L_130, ((int64_t)1)))), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_132;
		L_132 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_131, (2.0), NULL);
		int64_t L_133 = V_15;
		V_13 = ((double)il2cpp_codegen_subtract(L_129, ((double)(L_132/((double)L_133)))));
		int64_t L_134 = V_15;
		V_15 = ((int64_t)il2cpp_codegen_add(L_134, ((int64_t)1)));
	}

IL_0389:
	{
		int64_t L_135 = V_15;
		int64_t L_136 = V_6;
		if ((((int64_t)L_135) <= ((int64_t)((-L_136)))))
		{
			goto IL_0360;
		}
	}
	{
		double L_137 = V_13;
		return L_137;
	}

IL_0393:
	{
		bool L_138 = V_2;
		if (!L_138)
		{
			goto IL_03c4;
		}
	}
	{
		int64_t L_139 = V_4;
		V_6 = L_139;
		double L_140 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		bool L_141;
		L_141 = MathFunctions_almostEqual_mDD1CEF4A370B743612EED7C3F952B852C065548F(L_140, (1.0), NULL);
		if (!L_141)
		{
			goto IL_03c4;
		}
	}
	{
		int64_t L_142 = V_6;
		if ((((int64_t)L_142) > ((int64_t)((int64_t)(-1)))))
		{
			goto IL_03c4;
		}
	}
	{
		int64_t L_143 = V_6;
		double L_144 = ___x2;
		int64_t L_145 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_146;
		L_146 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_144, ((double)L_145), NULL);
		return ((double)il2cpp_codegen_multiply(((double)((-((int64_t)(((int64_t)1)/((-L_143))))))), L_146));
	}

IL_03c4:
	{
		double L_147 = ___a0;
		double L_148 = ___b1;
		double L_149 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_150;
		L_150 = SpecialFunctions_regularizedBeta_m319A6FA708B7C27509709CCF6C6DC22818D3CDE7(L_147, L_148, L_149, NULL);
		double L_151 = ___a0;
		double L_152 = ___b1;
		double L_153;
		L_153 = SpecialFunctions_beta_m06D6912A82FAA21732ADA5D89A87DCBC82CC838F(L_151, L_152, NULL);
		return ((double)il2cpp_codegen_multiply(L_150, L_153));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::nextUp(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_nextUp_m569C138572848FF5207278DF2C8152B6A0BC0A87 (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		double L_0 = ___d0;
		bool L_1;
		L_1 = Double_IsPositiveInfinity_m6E8147B50DE6E7EDD6CAB8873F83B943E2CD74F9_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___d0;
		bool L_3;
		L_3 = Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		double L_4 = ___d0;
		return L_4;
	}

IL_0012:
	{
		double L_5 = ___d0;
		bool L_6;
		L_6 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_001c;
		}
	}
	{
		double L_7 = ___d0;
		return L_7;
	}

IL_001c:
	{
		double L_8 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_8, NULL);
		V_0 = L_9;
		uint64_t L_10 = V_0;
		V_0 = ((int64_t)((int64_t)L_10&((int64_t)-4503599627370496LL)));
		uint64_t L_11 = V_0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_11&((int64_t)9218868437227405312LL)))) > ((uint64_t)((int64_t)238690780250636288LL)))))
		{
			goto IL_0053;
		}
	}
	{
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_12, ((int64_t)238690780250636288LL)));
		goto IL_0056;
	}

IL_0053:
	{
		V_0 = ((int64_t)1);
	}

IL_0056:
	{
		uint64_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = BitConverter_Int64BitsToDouble_mC0B5F34D5389EF32DBA08916755C880EDB6838AB_inline(L_13, NULL);
		return L_14;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::regularizedBeta(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_regularizedBeta_m319A6FA708B7C27509709CCF6C6DC22818D3CDE7 (double ___a0, double ___b1, double ___x2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double G_B29_0 = 0.0;
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___x2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___a0;
		if ((((double)L_6) < ((double)(0.0))))
		{
			goto IL_004e;
		}
	}
	{
		double L_7 = ___b1;
		if ((!(((double)L_7) < ((double)(0.0)))))
		{
			goto IL_0058;
		}
	}

IL_004e:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0058:
	{
		double L_8 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_8, (0.0), NULL);
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0073:
	{
		double L_10 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_10, (0.0), NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_008e:
	{
		double L_12 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_13 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_12) < ((double)((-L_13))))))
		{
			goto IL_00a1;
		}
	}
	{
		return (0.0);
	}

IL_00a1:
	{
		double L_14 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_15 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_14) > ((double)((double)il2cpp_codegen_add((1.0), L_15))))))
		{
			goto IL_00bd;
		}
	}
	{
		return (1.0);
	}

IL_00bd:
	{
		double L_16 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_16, (0.0), NULL);
		if (!L_17)
		{
			goto IL_00d8;
		}
	}
	{
		return (0.0);
	}

IL_00d8:
	{
		double L_18 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_18, (1.0), NULL);
		if (!L_19)
		{
			goto IL_00f3;
		}
	}
	{
		return (1.0);
	}

IL_00f3:
	{
		double L_20 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_20, (1.0), NULL);
		if (!L_21)
		{
			goto IL_0120;
		}
	}
	{
		double L_22 = ___x2;
		double L_23 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract((1.0), L_22)), L_23, NULL);
		return ((double)il2cpp_codegen_subtract((1.0), L_24));
	}

IL_0120:
	{
		double L_25 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_25, (1.0), NULL);
		if (!L_26)
		{
			goto IL_0139;
		}
	}
	{
		double L_27 = ___x2;
		double L_28 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_27, L_28, NULL);
		return L_29;
	}

IL_0139:
	{
		double L_30 = ___x2;
		if ((((double)L_30) == ((double)(0.0))))
		{
			goto IL_018a;
		}
	}
	{
		double L_31 = ___x2;
		if ((((double)L_31) == ((double)(1.0))))
		{
			goto IL_018a;
		}
	}
	{
		double L_32 = ___a0;
		double L_33 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(((double)il2cpp_codegen_add(L_32, L_33)), NULL);
		double L_35 = ___a0;
		double L_36;
		L_36 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_35, NULL);
		double L_37 = ___b1;
		double L_38;
		L_38 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_37, NULL);
		double L_39 = ___a0;
		double L_40 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = log(L_40);
		double L_42 = ___b1;
		double L_43 = ___x2;
		double L_44;
		L_44 = log(((double)il2cpp_codegen_subtract((1.0), L_43)));
		double L_45;
		L_45 = exp(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract(L_34, L_36)), L_38)), ((double)il2cpp_codegen_multiply(L_39, L_41)))), ((double)il2cpp_codegen_multiply(L_42, L_44)))));
		G_B29_0 = L_45;
		goto IL_0193;
	}

IL_018a:
	{
		G_B29_0 = (0.0);
	}

IL_0193:
	{
		V_0 = G_B29_0;
		double L_46 = ___x2;
		double L_47 = ___a0;
		double L_48 = ___a0;
		double L_49 = ___b1;
		V_1 = (bool)((((int32_t)((!(((double)L_46) >= ((double)((double)(((double)il2cpp_codegen_add(L_47, (1.0)))/((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_48, L_49)), (2.0))))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_50 = ((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___doublePrecision_3;
		V_2 = L_50;
		double L_51;
		L_51 = SpecialFunctions_nextUp_m569C138572848FF5207278DF2C8152B6A0BC0A87((0.0), NULL);
		double L_52 = V_2;
		V_3 = ((double)(L_51/L_52));
		bool L_53 = V_1;
		if (!L_53)
		{
			goto IL_01e1;
		}
	}
	{
		double L_54 = ___x2;
		___x2 = ((double)il2cpp_codegen_subtract((1.0), L_54));
		double L_55 = ___a0;
		double L_56 = ___b1;
		___a0 = L_56;
		___b1 = L_55;
	}

IL_01e1:
	{
		double L_57 = ___a0;
		double L_58 = ___b1;
		V_4 = ((double)il2cpp_codegen_add(L_57, L_58));
		double L_59 = ___a0;
		V_5 = ((double)il2cpp_codegen_add(L_59, (1.0)));
		double L_60 = ___a0;
		V_6 = ((double)il2cpp_codegen_subtract(L_60, (1.0)));
		V_7 = (1.0);
		double L_61 = V_4;
		double L_62 = ___x2;
		double L_63 = V_5;
		V_8 = ((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_multiply(L_61, L_62))/L_63))));
		double L_64 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_65;
		L_65 = fabs(L_64);
		double L_66 = V_3;
		if ((!(((double)L_65) < ((double)L_66))))
		{
			goto IL_022b;
		}
	}
	{
		double L_67 = V_3;
		V_8 = L_67;
	}

IL_022b:
	{
		double L_68 = V_8;
		V_8 = ((double)((1.0)/L_68));
		double L_69 = V_8;
		V_9 = L_69;
		V_10 = 1;
		V_11 = 2;
		goto IL_0378;
	}

IL_0248:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_70)
		{
			goto IL_0259;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0259:
	{
		int32_t L_71 = V_10;
		double L_72 = ___b1;
		int32_t L_73 = V_10;
		double L_74 = ___x2;
		double L_75 = V_6;
		int32_t L_76 = V_11;
		double L_77 = ___a0;
		int32_t L_78 = V_11;
		V_12 = ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)L_71), ((double)il2cpp_codegen_subtract(L_72, ((double)L_73))))), L_74))/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_75, ((double)L_76))), ((double)il2cpp_codegen_add(L_77, ((double)L_78)))))));
		double L_79 = V_12;
		double L_80 = V_8;
		V_8 = ((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_79, L_80))));
		double L_81 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_82;
		L_82 = fabs(L_81);
		double L_83 = V_3;
		if ((!(((double)L_82) < ((double)L_83))))
		{
			goto IL_0291;
		}
	}
	{
		double L_84 = V_3;
		V_8 = L_84;
	}

IL_0291:
	{
		double L_85 = V_12;
		double L_86 = V_7;
		V_7 = ((double)il2cpp_codegen_add((1.0), ((double)(L_85/L_86))));
		double L_87 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_88;
		L_88 = fabs(L_87);
		double L_89 = V_3;
		if ((!(((double)L_88) < ((double)L_89))))
		{
			goto IL_02af;
		}
	}
	{
		double L_90 = V_3;
		V_7 = L_90;
	}

IL_02af:
	{
		double L_91 = V_8;
		V_8 = ((double)((1.0)/L_91));
		double L_92 = V_9;
		double L_93 = V_8;
		double L_94 = V_7;
		V_9 = ((double)il2cpp_codegen_multiply(L_92, ((double)il2cpp_codegen_multiply(L_93, L_94))));
		double L_95 = ___a0;
		int32_t L_96 = V_10;
		double L_97 = V_4;
		int32_t L_98 = V_10;
		double L_99 = ___x2;
		double L_100 = ___a0;
		int32_t L_101 = V_11;
		double L_102 = V_5;
		int32_t L_103 = V_11;
		V_12 = ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((-((double)il2cpp_codegen_add(L_95, ((double)L_96))))), ((double)il2cpp_codegen_add(L_97, ((double)L_98))))), L_99))/((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_100, ((double)L_101))), ((double)il2cpp_codegen_add(L_102, ((double)L_103)))))));
		double L_104 = V_12;
		double L_105 = V_8;
		V_8 = ((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_104, L_105))));
		double L_106 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_107;
		L_107 = fabs(L_106);
		double L_108 = V_3;
		if ((!(((double)L_107) < ((double)L_108))))
		{
			goto IL_0303;
		}
	}
	{
		double L_109 = V_3;
		V_8 = L_109;
	}

IL_0303:
	{
		double L_110 = V_12;
		double L_111 = V_7;
		V_7 = ((double)il2cpp_codegen_add((1.0), ((double)(L_110/L_111))));
		double L_112 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_113;
		L_113 = fabs(L_112);
		double L_114 = V_3;
		if ((!(((double)L_113) < ((double)L_114))))
		{
			goto IL_0321;
		}
	}
	{
		double L_115 = V_3;
		V_7 = L_115;
	}

IL_0321:
	{
		double L_116 = V_8;
		V_8 = ((double)((1.0)/L_116));
		double L_117 = V_8;
		double L_118 = V_7;
		V_13 = ((double)il2cpp_codegen_multiply(L_117, L_118));
		double L_119 = V_9;
		double L_120 = V_13;
		V_9 = ((double)il2cpp_codegen_multiply(L_119, L_120));
		double L_121 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_122;
		L_122 = fabs(((double)il2cpp_codegen_subtract(L_121, (1.0))));
		double L_123 = V_2;
		if ((!(((double)L_122) <= ((double)L_123))))
		{
			goto IL_036c;
		}
	}
	{
		bool L_124 = V_1;
		if (L_124)
		{
			goto IL_035b;
		}
	}
	{
		double L_125 = V_0;
		double L_126 = V_9;
		double L_127 = ___a0;
		return ((double)(((double)il2cpp_codegen_multiply(L_125, L_126))/L_127));
	}

IL_035b:
	{
		double L_128 = V_0;
		double L_129 = V_9;
		double L_130 = ___a0;
		return ((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_multiply(L_128, L_129))/L_130))));
	}

IL_036c:
	{
		int32_t L_131 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		int32_t L_132 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_132, 2));
	}

IL_0378:
	{
		int32_t L_133 = V_10;
		if ((((int32_t)L_133) <= ((int32_t)((int32_t)50000))))
		{
			goto IL_0248;
		}
	}
	{
		bool L_134 = V_1;
		if (L_134)
		{
			goto IL_038e;
		}
	}
	{
		double L_135 = V_0;
		double L_136 = V_9;
		double L_137 = ___a0;
		return ((double)(((double)il2cpp_codegen_multiply(L_135, L_136))/L_137));
	}

IL_038e:
	{
		double L_138 = V_0;
		double L_139 = V_9;
		double L_140 = ___a0;
		return ((double)il2cpp_codegen_subtract((1.0), ((double)(((double)il2cpp_codegen_multiply(L_138, L_139))/L_140))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::inverseRegularizedBeta(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_inverseRegularizedBeta_m68388C6B6D4EC39D86993D948DBDACB719D54E72 (double ___a0, double ___b1, double ___p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	double G_B28_0 = 0.0;
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___a0;
		if ((((double)L_4) < ((double)(0.0))))
		{
			goto IL_003c;
		}
	}
	{
		double L_5 = ___b1;
		if ((!(((double)L_5) < ((double)(0.0)))))
		{
			goto IL_0046;
		}
	}

IL_003c:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0046:
	{
		double L_6 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_6, (0.0), NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0061:
	{
		double L_8 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_8, (0.0), NULL);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_007c:
	{
		double L_10 = ___p2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_11 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_10) < ((double)((-L_11))))))
		{
			goto IL_008f;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_008f:
	{
		double L_12 = ___p2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_13 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_12) > ((double)((double)il2cpp_codegen_add((1.0), L_13))))))
		{
			goto IL_00ab;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00ab:
	{
		double L_14 = ___p2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_14, (0.0), NULL);
		if (!L_15)
		{
			goto IL_00c6;
		}
	}
	{
		return (0.0);
	}

IL_00c6:
	{
		double L_16 = ___p2;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_16, (1.0), NULL);
		if (!L_17)
		{
			goto IL_00e1;
		}
	}
	{
		return (1.0);
	}

IL_00e1:
	{
		double L_18 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_18, (1.0), NULL);
		if (!L_19)
		{
			goto IL_0118;
		}
	}
	{
		double L_20 = ___p2;
		double L_21 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract((1.0), L_20)), ((double)((1.0)/L_21)), NULL);
		return ((double)il2cpp_codegen_subtract((1.0), L_22));
	}

IL_0118:
	{
		double L_23 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = BinaryRelations_isEqualOrAlmost_m259C7C6B8701B14BAA9EA654D2F09D052AA18E7E(L_23, (1.0), NULL);
		if (!L_24)
		{
			goto IL_013b;
		}
	}
	{
		double L_25 = ___p2;
		double L_26 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_25, ((double)((1.0)/L_26)), NULL);
		return L_27;
	}

IL_013b:
	{
		double L_28 = ___a0;
		V_7 = ((double)il2cpp_codegen_subtract(L_28, (1.0)));
		double L_29 = ___b1;
		V_8 = ((double)il2cpp_codegen_subtract(L_29, (1.0)));
		double L_30 = ___a0;
		if ((!(((double)L_30) >= ((double)(1.0)))))
		{
			goto IL_02e3;
		}
	}
	{
		double L_31 = ___b1;
		if ((!(((double)L_31) >= ((double)(1.0)))))
		{
			goto IL_02e3;
		}
	}
	{
		double L_32 = ___p2;
		if ((((double)L_32) < ((double)(0.5))))
		{
			goto IL_018c;
		}
	}
	{
		double L_33 = ___p2;
		G_B28_0 = ((double)il2cpp_codegen_subtract((1.0), L_33));
		goto IL_018d;
	}

IL_018c:
	{
		double L_34 = ___p2;
		G_B28_0 = L_34;
	}

IL_018d:
	{
		V_0 = G_B28_0;
		double L_35 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_36;
		L_36 = log(L_35);
		double L_37;
		L_37 = sqrt(((double)il2cpp_codegen_multiply((-2.0), L_36)));
		V_1 = L_37;
		double L_38 = V_1;
		double L_39 = V_1;
		double L_40 = V_1;
		double L_41 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_add((2.3075299999999999), ((double)il2cpp_codegen_multiply(L_38, (0.27061000000000002)))))/((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_39, ((double)il2cpp_codegen_add((0.99229000000000001), ((double)il2cpp_codegen_multiply(L_40, (0.044810000000000003))))))))))), L_41));
		double L_42 = ___p2;
		if ((!(((double)L_42) < ((double)(0.5)))))
		{
			goto IL_01ed;
		}
	}
	{
		double L_43 = V_3;
		V_3 = ((-L_43));
	}

IL_01ed:
	{
		double L_44 = V_3;
		double L_45 = V_3;
		V_4 = ((double)(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_44, L_45)), (3.0)))/(6.0)));
		double L_46 = ___a0;
		double L_47 = ___b1;
		V_5 = ((double)((2.0)/((double)il2cpp_codegen_add(((double)((1.0)/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_46)), (1.0))))), ((double)((1.0)/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_47)), (1.0)))))))));
		double L_48 = V_3;
		double L_49 = V_4;
		double L_50 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_51;
		L_51 = sqrt(((double)il2cpp_codegen_add(L_49, L_50)));
		double L_52 = V_5;
		double L_53 = ___b1;
		double L_54 = ___a0;
		double L_55 = V_4;
		double L_56 = V_5;
		V_6 = ((double)il2cpp_codegen_subtract(((double)(((double)il2cpp_codegen_multiply(L_48, L_51))/L_52)), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)((1.0)/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_53)), (1.0))))), ((double)((1.0)/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_54)), (1.0))))))), ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_55, (0.83333333333333337))), ((double)((2.0)/((double)il2cpp_codegen_multiply((3.0), L_56))))))))));
		double L_57 = ___a0;
		double L_58 = ___a0;
		double L_59 = ___b1;
		double L_60 = V_6;
		double L_61;
		L_61 = exp(((double)il2cpp_codegen_multiply((2.0), L_60)));
		V_3 = ((double)(L_57/((double)il2cpp_codegen_add(L_58, ((double)il2cpp_codegen_multiply(L_59, L_61))))));
		goto IL_0363;
	}

IL_02e3:
	{
		double L_62 = ___a0;
		double L_63 = ___a0;
		double L_64 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_65;
		L_65 = log(((double)(L_62/((double)il2cpp_codegen_add(L_63, L_64)))));
		V_10 = L_65;
		double L_66 = ___b1;
		double L_67 = ___a0;
		double L_68 = ___b1;
		double L_69;
		L_69 = log(((double)(L_66/((double)il2cpp_codegen_add(L_67, L_68)))));
		V_11 = L_69;
		double L_70 = ___a0;
		double L_71 = V_10;
		double L_72;
		L_72 = exp(((double)il2cpp_codegen_multiply(L_70, L_71)));
		double L_73 = ___a0;
		V_1 = ((double)(L_72/L_73));
		double L_74 = ___b1;
		double L_75 = V_11;
		double L_76;
		L_76 = exp(((double)il2cpp_codegen_multiply(L_74, L_75)));
		double L_77 = ___b1;
		V_2 = ((double)(L_76/L_77));
		double L_78 = V_1;
		double L_79 = V_2;
		V_6 = ((double)il2cpp_codegen_add(L_78, L_79));
		double L_80 = ___p2;
		double L_81 = V_1;
		double L_82 = V_6;
		if ((!(((double)L_80) < ((double)((double)(L_81/L_82))))))
		{
			goto IL_0338;
		}
	}
	{
		double L_83 = ___a0;
		double L_84 = V_6;
		double L_85 = ___p2;
		double L_86 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_87;
		L_87 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_83, L_84)), L_85)), ((double)((1.0)/L_86)), NULL);
		V_3 = L_87;
		goto IL_0363;
	}

IL_0338:
	{
		double L_88 = ___b1;
		double L_89 = V_6;
		double L_90 = ___p2;
		double L_91 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_92;
		L_92 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_88, L_89)), ((double)il2cpp_codegen_subtract((1.0), L_90)))), ((double)((1.0)/L_91)), NULL);
		V_3 = ((double)il2cpp_codegen_subtract((1.0), L_92));
	}

IL_0363:
	{
		double L_93 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_94;
		L_94 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_93, NULL);
		double L_95 = ___b1;
		double L_96;
		L_96 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(L_95, NULL);
		double L_97 = ___a0;
		double L_98 = ___b1;
		double L_99;
		L_99 = SpecialFunctions_logGamma_m1F8D923EEC874F505D94CE3341DD27DEDFDCF181(((double)il2cpp_codegen_add(L_97, L_98)), NULL);
		V_9 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((-L_94)), L_96)), L_99));
		V_12 = 0;
		goto IL_046b;
	}

IL_0384:
	{
		double L_100 = V_3;
		if ((((double)L_100) == ((double)(0.0))))
		{
			goto IL_039c;
		}
	}
	{
		double L_101 = V_3;
		if ((!(((double)L_101) == ((double)(1.0)))))
		{
			goto IL_039e;
		}
	}

IL_039c:
	{
		double L_102 = V_3;
		return L_102;
	}

IL_039e:
	{
		double L_103 = ___a0;
		double L_104 = ___b1;
		double L_105 = V_3;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_106;
		L_106 = SpecialFunctions_regularizedBeta_m319A6FA708B7C27509709CCF6C6DC22818D3CDE7(L_103, L_104, L_105, NULL);
		double L_107 = ___p2;
		double L_108 = V_7;
		double L_109 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_110;
		L_110 = log(L_109);
		double L_111 = V_8;
		double L_112 = V_3;
		double L_113;
		L_113 = log(((double)il2cpp_codegen_subtract((1.0), L_112)));
		double L_114 = V_9;
		double L_115;
		L_115 = exp(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_108, L_110)), ((double)il2cpp_codegen_multiply(L_111, L_113)))), L_114)));
		V_1 = L_115;
		double L_116 = V_1;
		V_2 = ((double)(((double)il2cpp_codegen_subtract(L_106, L_107))/L_116));
		double L_117 = V_3;
		double L_118 = V_2;
		double L_119 = V_2;
		double L_120 = V_7;
		double L_121 = V_3;
		double L_122 = V_8;
		double L_123 = V_3;
		double L_124;
		L_124 = Math_Min_m6F49B85AE4935E4AF3AB6128B3B5E55A6C4A1716((1.0), ((double)il2cpp_codegen_multiply(L_119, ((double)il2cpp_codegen_subtract(((double)(L_120/L_121)), ((double)(L_122/((double)il2cpp_codegen_subtract((1.0), L_123)))))))), NULL);
		double L_125 = ((double)(L_118/((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply((0.5), L_124))))));
		V_1 = L_125;
		V_3 = ((double)il2cpp_codegen_subtract(L_117, L_125));
		double L_126 = V_3;
		if ((!(((double)L_126) <= ((double)(0.0)))))
		{
			goto IL_0429;
		}
	}
	{
		double L_127 = V_3;
		double L_128 = V_1;
		V_3 = ((double)il2cpp_codegen_multiply((0.5), ((double)il2cpp_codegen_add(L_127, L_128))));
	}

IL_0429:
	{
		double L_129 = V_3;
		if ((!(((double)L_129) >= ((double)(1.0)))))
		{
			goto IL_044d;
		}
	}
	{
		double L_130 = V_3;
		double L_131 = V_1;
		V_3 = ((double)il2cpp_codegen_multiply((0.5), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_130, L_131)), (1.0)))));
	}

IL_044d:
	{
		double L_132 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_133;
		L_133 = fabs(L_132);
		double L_134 = V_3;
		if ((!(((double)L_133) < ((double)((double)il2cpp_codegen_multiply((9.9999999999999994E-12), L_134))))))
		{
			goto IL_0465;
		}
	}
	{
		int32_t L_135 = V_12;
		if ((((int32_t)L_135) > ((int32_t)0)))
		{
			goto IL_0474;
		}
	}

IL_0465:
	{
		int32_t L_136 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_046b:
	{
		int32_t L_137 = V_12;
		if ((((int32_t)L_137) < ((int32_t)((int32_t)10))))
		{
			goto IL_0384;
		}
	}

IL_0474:
	{
		double L_138 = V_3;
		return L_138;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::halleyIteration(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_halleyIteration_m4FF77351D1449D56C849AC3394DEFC70C2542E25 (double ___x0, double ___wInitial1, int32_t ___maxIter2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	{
		double L_0 = ___wInitial1;
		V_0 = L_0;
		V_1 = (1.0);
		V_2 = (0.0);
		V_6 = 0;
		goto IL_00be;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_002f:
	{
		double L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = exp(L_2);
		V_4 = L_3;
		double L_4 = V_0;
		V_3 = ((double)il2cpp_codegen_add(L_4, (1.0)));
		double L_5 = V_0;
		double L_6 = V_4;
		double L_7 = ___x0;
		V_2 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_5, L_6)), L_7));
		double L_8 = V_0;
		if ((!(((double)L_8) > ((double)(0.0)))))
		{
			goto IL_005f;
		}
	}
	{
		double L_9 = V_2;
		double L_10 = V_3;
		double L_11 = V_4;
		V_2 = ((double)(((double)(L_9/L_10))/L_11));
		goto IL_0080;
	}

IL_005f:
	{
		double L_12 = V_2;
		double L_13 = V_4;
		double L_14 = V_3;
		double L_15 = V_3;
		double L_16 = V_2;
		double L_17 = V_3;
		V_2 = ((double)(L_12/((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(L_13, L_14)), ((double)(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((0.5), ((double)il2cpp_codegen_add(L_15, (1.0))))), L_16))/L_17))))));
	}

IL_0080:
	{
		double L_18 = V_0;
		double L_19 = V_2;
		V_0 = ((double)il2cpp_codegen_subtract(L_18, L_19));
		double L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = fabs(L_20);
		double L_22 = V_3;
		double L_23;
		L_23 = fabs(L_22);
		double L_24 = V_4;
		double L_25;
		L_25 = Math_Max_mD1AD971AB9981B8A59BC5B5BEB7DD6A5A5E82AD6(L_21, ((double)((1.0)/((double)il2cpp_codegen_multiply(L_23, L_24)))), NULL);
		V_1 = ((double)il2cpp_codegen_multiply((2.2204460492503131E-16), L_25));
		double L_26 = V_2;
		double L_27;
		L_27 = fabs(L_26);
		double L_28 = V_1;
		if ((!(((double)L_27) < ((double)L_28))))
		{
			goto IL_00b8;
		}
	}
	{
		double L_29 = V_0;
		return L_29;
	}

IL_00b8:
	{
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00be:
	{
		int32_t L_31 = V_6;
		int32_t L_32 = ___maxIter2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_001e;
		}
	}
	{
		double L_33 = V_2;
		double L_34 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_35;
		L_35 = fabs(((double)(L_33/L_34)));
		V_5 = L_35;
		double L_36 = V_5;
		if ((!(((double)L_36) >= ((double)(0.5)))))
		{
			goto IL_00ec;
		}
	}
	{
		double L_37 = V_5;
		if ((!(((double)L_37) <= ((double)(1.5)))))
		{
			goto IL_00ec;
		}
	}
	{
		double L_38 = V_0;
		return L_38;
	}

IL_00ec:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::seriesEval(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_seriesEval_mAC864FC515B7EFDF80E1E43A1B2BACFB18DBA460 (double ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_0);
		int32_t L_1 = 8;
		double L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)9);
		double L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		double L_7 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_8);
		int32_t L_9 = ((int32_t)10);
		double L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		double L_11 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)11);
		double L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((double)il2cpp_codegen_add(L_2, ((double)il2cpp_codegen_multiply(L_3, ((double)il2cpp_codegen_add(L_6, ((double)il2cpp_codegen_multiply(L_7, ((double)il2cpp_codegen_add(L_10, ((double)il2cpp_codegen_multiply(L_11, L_14))))))))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_15);
		int32_t L_16 = 5;
		double L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		double L_18 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_19);
		int32_t L_20 = 6;
		double L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		double L_22 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_23);
		int32_t L_24 = 7;
		double L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		double L_26 = ___r0;
		double L_27 = V_0;
		V_1 = ((double)il2cpp_codegen_add(L_17, ((double)il2cpp_codegen_multiply(L_18, ((double)il2cpp_codegen_add(L_21, ((double)il2cpp_codegen_multiply(L_22, ((double)il2cpp_codegen_add(L_25, ((double)il2cpp_codegen_multiply(L_26, L_27))))))))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_28 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_28);
		int32_t L_29 = 1;
		double L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		double L_31 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_32);
		int32_t L_33 = 2;
		double L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		double L_35 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_36 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_36);
		int32_t L_37 = 3;
		double L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		double L_39 = ___r0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_40);
		int32_t L_41 = 4;
		double L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		double L_43 = ___r0;
		double L_44 = V_1;
		V_2 = ((double)il2cpp_codegen_add(L_30, ((double)il2cpp_codegen_multiply(L_31, ((double)il2cpp_codegen_add(L_34, ((double)il2cpp_codegen_multiply(L_35, ((double)il2cpp_codegen_add(L_38, ((double)il2cpp_codegen_multiply(L_39, ((double)il2cpp_codegen_add(L_42, ((double)il2cpp_codegen_multiply(L_43, L_44))))))))))))))));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = ((Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_StaticFields*)il2cpp_codegen_static_fields_for(Coefficients_tC4F2C69FC4573F26417C81C76C721EFD98ECE4FD_il2cpp_TypeInfo_var))->___lambertWqNearZero_47;
		NullCheck(L_45);
		int32_t L_46 = 0;
		double L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		double L_48 = ___r0;
		double L_49 = V_2;
		return ((double)il2cpp_codegen_add(L_47, ((double)il2cpp_codegen_multiply(L_48, L_49))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lambertW0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lambertW0_mF474DD1884080122F272CDD94ACCF75D48731534 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = fabs(L_0);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_2 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_1) <= ((double)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		return (0.0);
	}

IL_0017:
	{
		double L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = fabs(((double)il2cpp_codegen_add(L_3, (0.36787944117144233))));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_5 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_4) <= ((double)L_5))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1.0);
	}

IL_0038:
	{
		double L_6 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = fabs(((double)il2cpp_codegen_subtract(L_6, (1.0))));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_8 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_7) <= ((double)L_8))))
		{
			goto IL_0059;
		}
	}
	{
		return (0.56714329040978384);
	}

IL_0059:
	{
		double L_9 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_subtract(L_9, (2.7182818284590451))));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_11 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_10) <= ((double)L_11))))
		{
			goto IL_007a;
		}
	}
	{
		return (1.0);
	}

IL_007a:
	{
		double L_12 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_13 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___LN_SQRT2_52;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = fabs(((double)il2cpp_codegen_add(L_12, L_13)));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_15 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_14) <= ((double)L_15))))
		{
			goto IL_009d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_16 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___LN_SQRT2_52;
		return ((double)il2cpp_codegen_multiply((-2.0), L_16));
	}

IL_009d:
	{
		double L_17 = ___x0;
		if ((!(((double)L_17) < ((double)(-0.36787944117144233)))))
		{
			goto IL_00b3;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00b3:
	{
		double L_18 = ___x0;
		V_0 = ((double)il2cpp_codegen_add(L_18, (0.36787944117144233)));
		double L_19 = V_0;
		if ((!(((double)L_19) < ((double)(0.001)))))
		{
			goto IL_00d7;
		}
	}
	{
		double L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = sqrt(L_20);
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_22;
		L_22 = SpecialFunctions_seriesEval_mAC864FC515B7EFDF80E1E43A1B2BACFB18DBA460(L_21, NULL);
		return L_22;
	}

IL_00d7:
	{
		double L_23 = ___x0;
		if ((!(((double)L_23) < ((double)(1.0)))))
		{
			goto IL_012e;
		}
	}
	{
		double L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_25;
		L_25 = sqrt(((double)il2cpp_codegen_multiply((5.4365636569180902), L_24)));
		V_2 = L_25;
		double L_26 = V_2;
		double L_27 = V_2;
		double L_28 = V_2;
		V_1 = ((double)il2cpp_codegen_add((-1.0), ((double)il2cpp_codegen_multiply(L_26, ((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_27, ((double)il2cpp_codegen_add((-0.33333333333333331), ((double)(((double)il2cpp_codegen_multiply(L_28, (11.0)))/(72.0)))))))))))));
		goto IL_014a;
	}

IL_012e:
	{
		double L_29 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_30;
		L_30 = log(L_29);
		V_1 = L_30;
		double L_31 = ___x0;
		if ((!(((double)L_31) > ((double)(3.0)))))
		{
			goto IL_014a;
		}
	}
	{
		double L_32 = V_1;
		double L_33 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = log(L_33);
		V_1 = ((double)il2cpp_codegen_subtract(L_32, L_34));
	}

IL_014a:
	{
		double L_35 = ___x0;
		double L_36 = V_1;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_37;
		L_37 = SpecialFunctions_halleyIteration_m4FF77351D1449D56C849AC3394DEFC70C2542E25(L_35, L_36, ((int32_t)100), NULL);
		return L_37;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lambertW1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lambertW1_m20ECDAE8697AF416B9EF01DA9319E301A1E846E6 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_1 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_0) >= ((double)((-L_1))))))
		{
			goto IL_0013;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0013:
	{
		double L_2 = ___x0;
		if ((!(((double)L_2) < ((double)(-0.36787944117144233)))))
		{
			goto IL_0029;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0029:
	{
		double L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = fabs(((double)il2cpp_codegen_add(L_3, (0.36787944117144233))));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_5 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_4) <= ((double)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		return (-1.0);
	}

IL_004a:
	{
		V_0 = (0.33610000000000001);
		V_1 = (-0.0041999999999999997);
		V_2 = (-0.0201);
		double L_6 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = log(((-L_6)));
		V_3 = ((double)il2cpp_codegen_subtract((-1.0), L_7));
		double L_8 = V_3;
		double L_9 = V_0;
		double L_10 = V_0;
		double L_11 = V_3;
		double L_12;
		L_12 = sqrt(((double)(L_11/(2.0))));
		double L_13 = V_1;
		double L_14 = V_3;
		double L_15 = V_2;
		double L_16 = V_3;
		double L_17;
		L_17 = sqrt(L_16);
		double L_18;
		L_18 = exp(((double)il2cpp_codegen_multiply(L_15, L_17)));
		return ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_subtract((-1.0), L_8)), ((double)il2cpp_codegen_multiply(((double)((2.0)/L_9)), ((double)il2cpp_codegen_subtract((1.0), ((double)((1.0)/((double)il2cpp_codegen_add((1.0), ((double)(((double)il2cpp_codegen_multiply(L_10, L_12))/((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_13, L_14)), L_18))))))))))))))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::lambertW(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_lambertW_mA9F28B5FD36526DFB65AF40B928738E8F79CF2B3 (double ___x0, double ___branch1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___branch1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___branch1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = fabs(L_4);
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_6 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_5) <= ((double)L_6))))
		{
			goto IL_0038;
		}
	}
	{
		double L_7 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = SpecialFunctions_lambertW0_mF474DD1884080122F272CDD94ACCF75D48731534(L_7, NULL);
		return L_8;
	}

IL_0038:
	{
		double L_9 = ___branch1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = fabs(((double)il2cpp_codegen_add(L_9, (1.0))));
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_11 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		if ((!(((double)L_10) <= ((double)L_11))))
		{
			goto IL_0056;
		}
	}
	{
		double L_12 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = SpecialFunctions_lambertW1_m20ECDAE8697AF416B9EF01DA9319E301A1E846E6(L_12, NULL);
		return L_13;
	}

IL_0056:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::hypergeometricF(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_hypergeometricF_m4106F8A14AFCC91B383C84CE95972B8BE92C7BB5 (double ___a0, double ___b1, double ___c2, double ___z3, double ___maxIterations4, double ___precision5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___c2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___z3;
		bool L_7;
		L_7 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0048:
	{
		double L_8 = ___maxIterations4;
		bool L_9;
		L_9 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_005b:
	{
		double L_10 = ___precision5;
		bool L_11;
		L_11 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_006e:
	{
		double L_12 = ___maxIterations4;
		if ((!(((double)L_12) < ((double)(1.0)))))
		{
			goto IL_0085;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0085:
	{
		double L_13 = ___precision5;
		if ((!(((double)L_13) < ((double)(0.0)))))
		{
			goto IL_009c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_009c:
	{
		double L_14 = ___z3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = fabs(L_14);
		if ((!(((double)L_15) >= ((double)(0.5)))))
		{
			goto IL_00de;
		}
	}
	{
		double L_16 = ___z3;
		double L_17 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(((double)il2cpp_codegen_subtract((1.0), L_16)), ((-L_17)), NULL);
		double L_19 = ___a0;
		double L_20 = ___c2;
		double L_21 = ___b1;
		double L_22 = ___c2;
		double L_23 = ___z3;
		double L_24 = ___z3;
		double L_25 = ___maxIterations4;
		double L_26 = ___precision5;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_27;
		L_27 = SpecialFunctions_hypergeometricFDirect_mC1FFC6B40D4F07236655EE53B243C25E92C6CC5A(L_19, ((double)il2cpp_codegen_subtract(L_20, L_21)), L_22, ((double)(L_23/((double)il2cpp_codegen_subtract(L_24, (1.0))))), L_25, L_26, NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_18, L_27));
		goto IL_00ec;
	}

IL_00de:
	{
		double L_28 = ___a0;
		double L_29 = ___b1;
		double L_30 = ___c2;
		double L_31 = ___z3;
		double L_32 = ___maxIterations4;
		double L_33 = ___precision5;
		il2cpp_codegen_runtime_class_init_inline(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = SpecialFunctions_hypergeometricFDirect_mC1FFC6B40D4F07236655EE53B243C25E92C6CC5A(L_28, L_29, L_30, L_31, L_32, L_33, NULL);
		V_0 = L_34;
	}

IL_00ec:
	{
		double L_35 = V_0;
		return L_35;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::hypergeometricFDirect(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SpecialFunctions_hypergeometricFDirect_mC1FFC6B40D4F07236655EE53B243C25E92C6CC5A (double ___a0, double ___b1, double ___c2, double ___z3, double ___maxIterations4, double ___precision5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	bool V_3 = false;
	{
		double L_0 = ___a0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0012:
	{
		double L_2 = ___b1;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0024:
	{
		double L_4 = ___c2;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0036:
	{
		double L_6 = ___z3;
		bool L_7;
		L_7 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0048:
	{
		double L_8 = ___maxIterations4;
		bool L_9;
		L_9 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_005b:
	{
		double L_10 = ___precision5;
		bool L_11;
		L_11 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_006e:
	{
		double L_12 = ___maxIterations4;
		if ((!(((double)L_12) < ((double)(1.0)))))
		{
			goto IL_0085;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0085:
	{
		double L_13 = ___precision5;
		if ((!(((double)L_13) < ((double)(0.0)))))
		{
			goto IL_009c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_009c:
	{
		V_0 = (0.0);
		V_3 = (bool)0;
		V_2 = (0.0);
		goto IL_0108;
	}

IL_00b4:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_14)
		{
			goto IL_00c5;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00c5:
	{
		double L_15 = ___a0;
		double L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = MathFunctions_factorialRising_m60CE1D45228720FA6D356FCBCE409070522F74A9(L_15, L_16, NULL);
		double L_18 = ___b1;
		double L_19 = V_2;
		double L_20;
		L_20 = MathFunctions_factorialRising_m60CE1D45228720FA6D356FCBCE409070522F74A9(L_18, L_19, NULL);
		double L_21 = ___c2;
		double L_22 = V_2;
		double L_23;
		L_23 = MathFunctions_factorialRising_m60CE1D45228720FA6D356FCBCE409070522F74A9(L_21, L_22, NULL);
		double L_24 = ___z3;
		double L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_24, L_25, NULL);
		double L_27 = V_2;
		double L_28;
		L_28 = MathFunctions_factorial_mC82AC29E5827D34DAAF4EE73E9940D7B1C0896C8(L_27, NULL);
		V_1 = ((double)(((double)il2cpp_codegen_multiply(((double)(((double)il2cpp_codegen_multiply(L_17, L_20))/L_23)), L_26))/L_28));
		double L_29 = V_1;
		double L_30;
		L_30 = fabs(L_29);
		double L_31 = ___precision5;
		if ((!(((double)L_30) < ((double)L_31))))
		{
			goto IL_00f8;
		}
	}
	{
		V_3 = (bool)1;
	}

IL_00f8:
	{
		double L_32 = V_0;
		double L_33 = V_1;
		V_0 = ((double)il2cpp_codegen_add(L_32, L_33));
		double L_34 = V_2;
		V_2 = ((double)il2cpp_codegen_add(L_34, (1.0)));
	}

IL_0108:
	{
		double L_35 = V_2;
		double L_36 = ___maxIterations4;
		if ((!(((double)L_35) < ((double)L_36))))
		{
			goto IL_0110;
		}
	}
	{
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_00b4;
		}
	}

IL_0110:
	{
		double L_38 = V_0;
		return L_38;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialFunctions__ctor_m827C2B09D2BB2E1627BB04AF97804F8987CB4F84 (SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialFunctions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialFunctions__cctor_mC8031610D1B6B12BD70E1F3D4892DBF681F68770 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_0;
		L_0 = MathFunctions_ulp_mA3EFB52F5600883829DA7488B80EB4A0E7FF9EA6((1.0), NULL);
		((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___EI_DBL_EPSILON_0 = L_0;
		double L_1 = ((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___EI_DBL_EPSILON_0;
		((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___EI_EPSILON_1 = ((double)il2cpp_codegen_multiply((10.0), L_1));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((2.0), (-53.0), NULL);
		((SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_StaticFields*)il2cpp_codegen_static_fields_for(SpecialFunctions_t248378E3060E53D236472E068E68B556A3A46DE3_il2cpp_TypeInfo_var))->___doublePrecision_3 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValue__ctor_mD2F4CB494F0821C1889E5DAEDC16C5B3D940303C (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* __this, double ___x0, double ___fv1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = ___x0;
		__this->___x_1 = L_0;
		double L_1 = ___fv1;
		__this->___fv_4 = L_1;
		double L_2 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		double L_3 = ((SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var))->___EPSILON_0;
		__this->___xFrom_2 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		double L_4 = ___x0;
		double L_5 = ((SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var))->___EPSILON_0;
		__this->___xTo_3 = ((double)il2cpp_codegen_add(L_4, L_5));
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* __this, double ___x0, double ___fv1, double ___fvdeg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = ___x0;
		__this->___x_1 = L_0;
		double L_1 = ___fv1;
		__this->___fv_4 = L_1;
		double L_2 = ___fvdeg2;
		__this->___fvdeg_5 = L_2;
		double L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		double L_4 = ((SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var))->___EPSILON_0;
		__this->___xFrom_2 = ((double)il2cpp_codegen_subtract(L_3, L_4));
		double L_5 = ___x0;
		double L_6 = ((SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var))->___EPSILON_0;
		__this->___xTo_3 = ((double)il2cpp_codegen_add(L_5, L_6));
		return;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValue__cctor_m270A6BCC3AA38277CE59BACF5801C7592741C0BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_0 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		((SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var))->___EPSILON_0 = ((double)il2cpp_codegen_multiply((10.0), L_0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8 (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* __this, double ___factor0, double ___sin1, double ___cos2, double ___tan3, double ___ctan4, double ___sec5, double ___csc6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = ___factor0;
		__this->___factor_110 = L_0;
		double L_1 = ___factor0;
		__this->___xrad_111 = ((double)il2cpp_codegen_multiply(L_1, (3.1415926535897931)));
		double L_2 = ___factor0;
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = MathFunctions_round_mF44AB2B728A16C367B4F1C639AE994A39EEBE0A1(((double)il2cpp_codegen_multiply(L_2, (180.0))), 0, NULL);
		__this->___xdeg_112 = L_3;
		double L_4 = ___sin1;
		__this->___sin_115 = L_4;
		double L_5 = ___cos2;
		__this->___cos_116 = L_5;
		double L_6 = ___tan3;
		__this->___tan_117 = L_6;
		double L_7 = ___ctan4;
		__this->___ctan_118 = L_7;
		double L_8 = ___sec5;
		__this->___sec_119 = L_8;
		double L_9 = ___csc6;
		__this->___csc_120 = L_9;
		double L_10 = __this->___xrad_111;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		double L_11 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0;
		__this->___xradFrom_113 = ((double)il2cpp_codegen_subtract(L_10, L_11));
		double L_12 = __this->___xrad_111;
		double L_13 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0;
		__this->___xradTo_114 = ((double)il2cpp_codegen_add(L_12, L_13));
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_14 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___PIBY2_1;
		double L_15 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0;
		double L_16 = __this->___xrad_111;
		if ((!(((double)((double)il2cpp_codegen_subtract(((-L_14)), L_15))) <= ((double)L_16))))
		{
			goto IL_013d;
		}
	}
	{
		double L_17 = __this->___xrad_111;
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_18 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___PIBY2_1;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		double L_19 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0;
		if ((!(((double)L_17) <= ((double)((double)il2cpp_codegen_add(L_18, L_19))))))
		{
			goto IL_013d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_20 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsin_104;
		if (L_20)
		{
			goto IL_00c5;
		}
	}
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_21 = (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*)il2cpp_codegen_object_new(List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2(L_21, List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsin_104 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsin_104), (void*)L_21);
	}

IL_00c5:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_22 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAtan_106;
		if (L_22)
		{
			goto IL_00d6;
		}
	}
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_23 = (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*)il2cpp_codegen_object_new(List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2(L_23, List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAtan_106 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAtan_106), (void*)L_23);
	}

IL_00d6:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_24 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcsc_109;
		if (L_24)
		{
			goto IL_00e7;
		}
	}
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_25 = (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*)il2cpp_codegen_object_new(List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2(L_25, List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcsc_109 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcsc_109), (void*)L_25);
	}

IL_00e7:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_26 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsin_104;
		double L_27 = ___sin1;
		double L_28 = __this->___xrad_111;
		double L_29 = __this->___xdeg_112;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_30 = (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)il2cpp_codegen_object_new(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F(L_30, L_27, L_28, L_29, NULL);
		NullCheck(L_26);
		List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline(L_26, L_30, List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_31 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAtan_106;
		double L_32 = ___tan3;
		double L_33 = __this->___xrad_111;
		double L_34 = __this->___xdeg_112;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_35 = (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)il2cpp_codegen_object_new(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F(L_35, L_32, L_33, L_34, NULL);
		NullCheck(L_31);
		List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline(L_31, L_35, List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_36 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcsc_109;
		double L_37 = ___csc6;
		double L_38 = __this->___xrad_111;
		double L_39 = __this->___xdeg_112;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_40 = (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)il2cpp_codegen_object_new(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F(L_40, L_37, L_38, L_39, NULL);
		NullCheck(L_36);
		List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline(L_36, L_40, List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
	}

IL_013d:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		double L_41 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0;
		double L_42 = __this->___xrad_111;
		if ((!(((double)((-L_41))) <= ((double)L_42))))
		{
			goto IL_01f1;
		}
	}
	{
		double L_43 = __this->___xrad_111;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		double L_44 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0;
		if ((!(((double)L_43) <= ((double)((double)il2cpp_codegen_add((3.1415926535897931), L_44))))))
		{
			goto IL_01f1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_45 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcos_105;
		if (L_45)
		{
			goto IL_0179;
		}
	}
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_46 = (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*)il2cpp_codegen_object_new(List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2(L_46, List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcos_105 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcos_105), (void*)L_46);
	}

IL_0179:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_47 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListActan_107;
		if (L_47)
		{
			goto IL_018a;
		}
	}
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_48 = (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*)il2cpp_codegen_object_new(List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2(L_48, List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListActan_107 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListActan_107), (void*)L_48);
	}

IL_018a:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_49 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsec_108;
		if (L_49)
		{
			goto IL_019b;
		}
	}
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_50 = (List_1_t1066F23710B975B7F8366D381935E50E21D1418A*)il2cpp_codegen_object_new(List_1_t1066F23710B975B7F8366D381935E50E21D1418A_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2(L_50, List_1__ctor_mD6AA4B186AA22429AF10461FF54926DFC0E3A7D2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsec_108 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsec_108), (void*)L_50);
	}

IL_019b:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_51 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcos_105;
		double L_52 = ___cos2;
		double L_53 = __this->___xrad_111;
		double L_54 = __this->___xdeg_112;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_55 = (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)il2cpp_codegen_object_new(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F(L_55, L_52, L_53, L_54, NULL);
		NullCheck(L_51);
		List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline(L_51, L_55, List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_56 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListActan_107;
		double L_57 = ___ctan4;
		double L_58 = __this->___xrad_111;
		double L_59 = __this->___xdeg_112;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_60 = (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)il2cpp_codegen_object_new(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F(L_60, L_57, L_58, L_59, NULL);
		NullCheck(L_56);
		List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline(L_56, L_60, List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_61 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsec_108;
		double L_62 = ___sec5;
		double L_63 = __this->___xrad_111;
		double L_64 = __this->___xdeg_112;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_65 = (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)il2cpp_codegen_object_new(SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		SpecialValue__ctor_m621DB13322C183B756AA6131B9321E96C9319F4F(L_65, L_62, L_63, L_64, NULL);
		NullCheck(L_61);
		List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_inline(L_61, L_65, List_1_Add_m1A0C0F205CD97C4CCB00A82D115B41E600F28D43_RuntimeMethod_var);
	}

IL_01f1:
	{
		return;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueTrigonometric(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* SpecialValueTrigonometric_getSpecialValueTrigonometric_m31BA66D814A7B56E645C109FD082DED010EEDE28 (double ___xrad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* V_0 = NULL;
	int32_t V_1 = 0;
	SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* V_2 = NULL;
	{
		double L_0 = ___xrad0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)NULL;
	}

IL_000a:
	{
		double L_2 = ___xrad0;
		bool L_3;
		L_3 = Double_IsInfinity_mFA158CA8247818AE2FEB5B11158A354CA5B4FCC5_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)NULL;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_4 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListTrig_103;
		V_0 = L_4;
		V_1 = 0;
		goto IL_003a;
	}

IL_001e:
	{
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_9 = V_2;
		NullCheck(L_9);
		double L_10 = L_9->___xradFrom_113;
		double L_11 = ___xrad0;
		if ((!(((double)L_10) <= ((double)L_11))))
		{
			goto IL_0036;
		}
	}
	{
		double L_12 = ___xrad0;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_13 = V_2;
		NullCheck(L_13);
		double L_14 = L_13->___xradTo_114;
		if ((!(((double)L_12) <= ((double)L_14))))
		{
			goto IL_0036;
		}
	}
	{
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_15 = V_2;
		return L_15;
	}

IL_0036:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003a:
	{
		int32_t L_17 = V_1;
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		return (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)NULL;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueAsin(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValueAsin_m35207CC5A73C6208414E5AD6D656CBF60C501E79 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_1 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsin_104;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_2;
		L_2 = SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F(L_0, L_1, NULL);
		return L_2;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueAcos(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValueAcos_mD70AA29BC43BA4B57AD5DE3029A7A5A636598B20 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_1 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcos_105;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_2;
		L_2 = SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F(L_0, L_1, NULL);
		return L_2;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueAtan(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValueAtan_mC5ADB4BE97374C3DCF46CF9D6BFBC647472CAA7C (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_1 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAtan_106;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_2;
		L_2 = SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F(L_0, L_1, NULL);
		return L_2;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueActan(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValueActan_m2BEC7C42F7FBB64AF410F0B714724C100A62FABC (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_1 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListActan_107;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_2;
		L_2 = SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F(L_0, L_1, NULL);
		return L_2;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueAsec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValueAsec_m30B3D147055CDA5DFD52326809915443CD52B5A6 (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_1 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAsec_108;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_2;
		L_2 = SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F(L_0, L_1, NULL);
		return L_2;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValueAcsc(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValueAcsc_mB8CE030726654D67B3AD29DA768F8123F049AC2C (double ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_1 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListAcsc_109;
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_2;
		L_2 = SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F(L_0, L_1, NULL);
		return L_2;
	}
}
// org.mariuszgromada.math.mxparser.mathcollection.SpecialValue org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::getSpecialValue(System.Double,System.Collections.Generic.List`1<org.mariuszgromada.math.mxparser.mathcollection.SpecialValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* SpecialValueTrigonometric_getSpecialValue_mACF951D7A0B1A5C65E28555AE181E79565EC911F (double ___x0, List_1_t1066F23710B975B7F8366D381935E50E21D1418A* ___valuesList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFD36EDC4C7125CBCEC9A4C409AE10A62FB2AAE4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD27B0F21298B57BC99EF1CA57488E0EB29BF23EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mED5D57CC27CE7B1A31B4F4BBF702E27E36F66767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA27B29129107C505D7C7C80A302D0806599108FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* V_1 = NULL;
	SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* V_2 = NULL;
	{
		double L_0 = ___x0;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)NULL;
	}

IL_000a:
	{
		double L_2 = ___x0;
		bool L_3;
		L_3 = Double_IsInfinity_mFA158CA8247818AE2FEB5B11158A354CA5B4FCC5_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)NULL;
	}

IL_0014:
	{
		List_1_t1066F23710B975B7F8366D381935E50E21D1418A* L_4 = ___valuesList1;
		NullCheck(L_4);
		Enumerator_tFABBE84B8F3266AE85EE0A7129F74AA80C531EC8 L_5;
		L_5 = List_1_GetEnumerator_mA27B29129107C505D7C7C80A302D0806599108FB(L_4, List_1_GetEnumerator_mA27B29129107C505D7C7C80A302D0806599108FB_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFD36EDC4C7125CBCEC9A4C409AE10A62FB2AAE4A((&V_0), Enumerator_Dispose_mFD36EDC4C7125CBCEC9A4C409AE10A62FB2AAE4A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_001d_1:
			{
				SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_6;
				L_6 = Enumerator_get_Current_mED5D57CC27CE7B1A31B4F4BBF702E27E36F66767_inline((&V_0), Enumerator_get_Current_mED5D57CC27CE7B1A31B4F4BBF702E27E36F66767_RuntimeMethod_var);
				V_1 = L_6;
				SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_7 = V_1;
				NullCheck(L_7);
				double L_8 = L_7->___xFrom_2;
				double L_9 = ___x0;
				if ((!(((double)L_8) <= ((double)L_9))))
				{
					goto IL_003b_1;
				}
			}
			{
				double L_10 = ___x0;
				SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_11 = V_1;
				NullCheck(L_11);
				double L_12 = L_11->___xTo_3;
				if ((!(((double)L_10) <= ((double)L_12))))
				{
					goto IL_003b_1;
				}
			}
			{
				SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_13 = V_1;
				V_2 = L_13;
				goto IL_0056;
			}

IL_003b_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mD27B0F21298B57BC99EF1CA57488E0EB29BF23EC((&V_0), Enumerator_MoveNext_mD27B0F21298B57BC99EF1CA57488E0EB29BF23EC_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		return (SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE*)NULL;
	}

IL_0056:
	{
		SpecialValue_tA73BFB34E8EB29029C37C82982E01389F907AFBE* L_15 = V_2;
		return L_15;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.SpecialValueTrigonometric::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpecialValueTrigonometric__cctor_m2121F9DF75AA4CA3EBEBEA55D069977C902DE2B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var);
		double L_0 = ((BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_StaticFields*)il2cpp_codegen_static_fields_for(BinaryRelations_t4BAC161B144F1FAB7B2817F9DE0DD7FED0571F33_il2cpp_TypeInfo_var))->___DEFAULT_COMPARISON_EPSILON_0;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___EPSILON_0 = ((double)il2cpp_codegen_multiply((10.0), L_0));
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1 = (0.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2 = (1.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3 = (0.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4 = (std::numeric_limits<double>::quiet_NaN());
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5 = (1.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6 = (std::numeric_limits<double>::quiet_NaN());
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7 = (0.5);
		il2cpp_codegen_runtime_class_init_inline(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var);
		double L_1 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3BY2_55;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8 = L_1;
		double L_2 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3BY3_57;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9 = L_2;
		double L_3 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3_54;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10 = L_3;
		double L_4 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___D2BYSQRT3_56;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11 = L_4;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12 = (2.0);
		double L_5 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2BY2_53;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13 = L_5;
		double L_6 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2BY2_53;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14 = L_6;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15 = (1.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16 = (1.0);
		double L_7 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17 = L_7;
		double L_8 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT2_45;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18 = L_8;
		double L_9 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3BY2_55;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19 = L_9;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20 = (0.5);
		double L_10 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3_54;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21 = L_10;
		double L_11 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___SQRT3BY3_57;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22 = L_11;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23 = (2.0);
		double L_12 = ((MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_StaticFields*)il2cpp_codegen_static_fields_for(MathConstants_t3DB5ECEAF38B237A17A81A6533F98C8E823D7DF9_il2cpp_TypeInfo_var))->___D2BYSQRT3_56;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24 = L_12;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25 = (1.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26 = (0.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27 = (std::numeric_limits<double>::quiet_NaN());
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28 = (0.0);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29 = (std::numeric_limits<double>::quiet_NaN());
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30 = (1.0);
		double L_13 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_120_31 = L_13;
		double L_14 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_120_32 = ((-L_14));
		double L_15 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_120_33 = ((-L_15));
		double L_16 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_120_34 = ((-L_16));
		double L_17 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_120_35 = ((-L_17));
		double L_18 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_120_36 = L_18;
		double L_19 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_135_37 = L_19;
		double L_20 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_135_38 = ((-L_20));
		double L_21 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_135_39 = ((-L_21));
		double L_22 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_135_40 = ((-L_22));
		double L_23 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_135_41 = ((-L_23));
		double L_24 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_135_42 = L_24;
		double L_25 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_150_43 = L_25;
		double L_26 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_150_44 = ((-L_26));
		double L_27 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_150_45 = ((-L_27));
		double L_28 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_150_46 = ((-L_28));
		double L_29 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_150_47 = ((-L_29));
		double L_30 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_150_48 = L_30;
		double L_31 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_180_49 = L_31;
		double L_32 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_180_50 = ((-L_32));
		double L_33 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_180_51 = L_33;
		double L_34 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_180_52 = L_34;
		double L_35 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_180_53 = ((-L_35));
		double L_36 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_180_54 = L_36;
		double L_37 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_210_55 = ((-L_37));
		double L_38 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_210_56 = ((-L_38));
		double L_39 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_210_57 = L_39;
		double L_40 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_210_58 = L_40;
		double L_41 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_210_59 = ((-L_41));
		double L_42 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_210_60 = ((-L_42));
		double L_43 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_225_61 = ((-L_43));
		double L_44 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_225_62 = ((-L_44));
		double L_45 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_225_63 = L_45;
		double L_46 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_225_64 = L_46;
		double L_47 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_225_65 = ((-L_47));
		double L_48 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_225_66 = ((-L_48));
		double L_49 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_240_67 = ((-L_49));
		double L_50 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_240_68 = ((-L_50));
		double L_51 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_240_69 = L_51;
		double L_52 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_240_70 = L_52;
		double L_53 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_240_71 = ((-L_53));
		double L_54 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_240_72 = ((-L_54));
		double L_55 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_270_73 = ((-L_55));
		double L_56 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_270_74 = L_56;
		double L_57 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_270_75 = L_57;
		double L_58 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_270_76 = L_58;
		double L_59 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_270_77 = L_59;
		double L_60 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_270_78 = ((-L_60));
		double L_61 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_300_79 = ((-L_61));
		double L_62 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_300_80 = L_62;
		double L_63 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_300_81 = ((-L_63));
		double L_64 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_300_82 = ((-L_64));
		double L_65 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_300_83 = L_65;
		double L_66 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_300_84 = ((-L_66));
		double L_67 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_315_85 = ((-L_67));
		double L_68 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_315_86 = L_68;
		double L_69 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_315_87 = ((-L_69));
		double L_70 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_315_88 = ((-L_70));
		double L_71 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_315_89 = L_71;
		double L_72 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_315_90 = ((-L_72));
		double L_73 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_330_91 = ((-L_73));
		double L_74 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_330_92 = L_74;
		double L_75 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_330_93 = ((-L_75));
		double L_76 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_330_94 = ((-L_76));
		double L_77 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_330_95 = L_77;
		double L_78 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_330_96 = ((-L_78));
		double L_79 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_360_97 = L_79;
		double L_80 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_360_98 = L_80;
		double L_81 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_360_99 = L_81;
		double L_82 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_360_100 = L_82;
		double L_83 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_360_101 = L_83;
		double L_84 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_360_102 = L_84;
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_85 = (SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754*)(SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754*)SZArrayNew(SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754_il2cpp_TypeInfo_var, (uint32_t)((int32_t)81));
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_86 = L_85;
		double L_87 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		double L_88 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		double L_89 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		double L_90 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		double L_91 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		double L_92 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_93 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_93, (0.0), L_87, L_88, L_89, L_90, L_91, L_92, NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_93);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_93);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_94 = L_86;
		double L_95 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		double L_96 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		double L_97 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		double L_98 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		double L_99 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		double L_100 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_101 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_101);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_101, (2.0), L_95, L_96, L_97, L_98, L_99, L_100, NULL);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_101);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(1), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_101);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_102 = L_94;
		double L_103 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		double L_104 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		double L_105 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		double L_106 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		double L_107 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		double L_108 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_109 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_109);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_109, (-2.0), L_103, L_104, L_105, L_106, L_107, L_108, NULL);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_109);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(2), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_109);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_110 = L_102;
		double L_111 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		double L_112 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		double L_113 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		double L_114 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		double L_115 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		double L_116 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_117 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_117, (4.0), L_111, L_112, L_113, L_114, L_115, L_116, NULL);
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, L_117);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(3), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_117);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_118 = L_110;
		double L_119 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_0_1;
		double L_120 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_0_2;
		double L_121 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_0_3;
		double L_122 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_0_4;
		double L_123 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_0_5;
		double L_124 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_0_6;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_125 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_125);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_125, (-4.0), L_119, L_120, L_121, L_122, L_123, L_124, NULL);
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_125);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(4), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_125);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_126 = L_118;
		double L_127 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		double L_128 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		double L_129 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		double L_130 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		double L_131 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		double L_132 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_133 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_133);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_133, (0.16666666666666666), L_127, L_128, L_129, L_130, L_131, L_132, NULL);
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, L_133);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(5), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_133);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_134 = L_126;
		double L_135 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		double L_136 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		double L_137 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		double L_138 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		double L_139 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		double L_140 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_141 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_141);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_141, (2.1666666666666665), L_135, L_136, L_137, L_138, L_139, L_140, NULL);
		NullCheck(L_134);
		ArrayElementTypeCheck (L_134, L_141);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(6), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_141);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_142 = L_134;
		double L_143 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		double L_144 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		double L_145 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		double L_146 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		double L_147 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		double L_148 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_149 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_149);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_149, (-1.8333333333333333), L_143, L_144, L_145, L_146, L_147, L_148, NULL);
		NullCheck(L_142);
		ArrayElementTypeCheck (L_142, L_149);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(7), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_149);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_150 = L_142;
		double L_151 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		double L_152 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		double L_153 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		double L_154 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		double L_155 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		double L_156 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_157 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_157);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_157, (4.166666666666667), L_151, L_152, L_153, L_154, L_155, L_156, NULL);
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, L_157);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(8), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_157);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_158 = L_150;
		double L_159 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_30_7;
		double L_160 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_30_8;
		double L_161 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_30_9;
		double L_162 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_30_10;
		double L_163 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_30_11;
		double L_164 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_30_12;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_165 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_165);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_165, (-3.8333333333333335), L_159, L_160, L_161, L_162, L_163, L_164, NULL);
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_165);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_165);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_166 = L_158;
		double L_167 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		double L_168 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		double L_169 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		double L_170 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		double L_171 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		double L_172 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_173 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_173);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_173, (0.25), L_167, L_168, L_169, L_170, L_171, L_172, NULL);
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, L_173);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_173);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_174 = L_166;
		double L_175 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		double L_176 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		double L_177 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		double L_178 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		double L_179 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		double L_180 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_181 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_181);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_181, (2.25), L_175, L_176, L_177, L_178, L_179, L_180, NULL);
		NullCheck(L_174);
		ArrayElementTypeCheck (L_174, L_181);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_181);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_182 = L_174;
		double L_183 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		double L_184 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		double L_185 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		double L_186 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		double L_187 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		double L_188 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_189 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_189);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_189, (-1.75), L_183, L_184, L_185, L_186, L_187, L_188, NULL);
		NullCheck(L_182);
		ArrayElementTypeCheck (L_182, L_189);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_189);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_190 = L_182;
		double L_191 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		double L_192 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		double L_193 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		double L_194 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		double L_195 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		double L_196 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_197 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_197);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_197, (4.25), L_191, L_192, L_193, L_194, L_195, L_196, NULL);
		NullCheck(L_190);
		ArrayElementTypeCheck (L_190, L_197);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_197);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_198 = L_190;
		double L_199 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_45_13;
		double L_200 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_45_14;
		double L_201 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_45_15;
		double L_202 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_45_16;
		double L_203 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_45_17;
		double L_204 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_45_18;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_205 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_205);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_205, (-3.75), L_199, L_200, L_201, L_202, L_203, L_204, NULL);
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, L_205);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_205);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_206 = L_198;
		double L_207 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		double L_208 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		double L_209 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		double L_210 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		double L_211 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		double L_212 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_213 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_213);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_213, (0.33333333333333331), L_207, L_208, L_209, L_210, L_211, L_212, NULL);
		NullCheck(L_206);
		ArrayElementTypeCheck (L_206, L_213);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_213);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_214 = L_206;
		double L_215 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		double L_216 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		double L_217 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		double L_218 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		double L_219 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		double L_220 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_221 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_221);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_221, (2.3333333333333335), L_215, L_216, L_217, L_218, L_219, L_220, NULL);
		NullCheck(L_214);
		ArrayElementTypeCheck (L_214, L_221);
		(L_214)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_221);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_222 = L_214;
		double L_223 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		double L_224 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		double L_225 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		double L_226 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		double L_227 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		double L_228 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_229 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_229);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_229, (-1.6666666666666667), L_223, L_224, L_225, L_226, L_227, L_228, NULL);
		NullCheck(L_222);
		ArrayElementTypeCheck (L_222, L_229);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_229);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_230 = L_222;
		double L_231 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		double L_232 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		double L_233 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		double L_234 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		double L_235 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		double L_236 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_237 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_237);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_237, (4.333333333333333), L_231, L_232, L_233, L_234, L_235, L_236, NULL);
		NullCheck(L_230);
		ArrayElementTypeCheck (L_230, L_237);
		(L_230)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_237);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_238 = L_230;
		double L_239 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_60_19;
		double L_240 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_60_20;
		double L_241 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_60_21;
		double L_242 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_60_22;
		double L_243 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_60_23;
		double L_244 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_60_24;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_245 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_245);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_245, (-3.6666666666666665), L_239, L_240, L_241, L_242, L_243, L_244, NULL);
		NullCheck(L_238);
		ArrayElementTypeCheck (L_238, L_245);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_245);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_246 = L_238;
		double L_247 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25;
		double L_248 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26;
		double L_249 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27;
		double L_250 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28;
		double L_251 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29;
		double L_252 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_253 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_253);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_253, (0.5), L_247, L_248, L_249, L_250, L_251, L_252, NULL);
		NullCheck(L_246);
		ArrayElementTypeCheck (L_246, L_253);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_253);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_254 = L_246;
		double L_255 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25;
		double L_256 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26;
		double L_257 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27;
		double L_258 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28;
		double L_259 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29;
		double L_260 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_261 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_261);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_261, (2.5), L_255, L_256, L_257, L_258, L_259, L_260, NULL);
		NullCheck(L_254);
		ArrayElementTypeCheck (L_254, L_261);
		(L_254)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_261);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_262 = L_254;
		double L_263 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25;
		double L_264 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26;
		double L_265 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27;
		double L_266 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28;
		double L_267 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29;
		double L_268 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_269 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_269);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_269, (-1.5), L_263, L_264, L_265, L_266, L_267, L_268, NULL);
		NullCheck(L_262);
		ArrayElementTypeCheck (L_262, L_269);
		(L_262)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_269);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_270 = L_262;
		double L_271 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25;
		double L_272 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26;
		double L_273 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27;
		double L_274 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28;
		double L_275 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29;
		double L_276 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_277 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_277);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_277, (4.5), L_271, L_272, L_273, L_274, L_275, L_276, NULL);
		NullCheck(L_270);
		ArrayElementTypeCheck (L_270, L_277);
		(L_270)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_277);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_278 = L_270;
		double L_279 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_90_25;
		double L_280 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_90_26;
		double L_281 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_90_27;
		double L_282 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_90_28;
		double L_283 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_90_29;
		double L_284 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_90_30;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_285 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_285);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_285, (-3.5), L_279, L_280, L_281, L_282, L_283, L_284, NULL);
		NullCheck(L_278);
		ArrayElementTypeCheck (L_278, L_285);
		(L_278)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_285);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_286 = L_278;
		double L_287 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_120_31;
		double L_288 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_120_32;
		double L_289 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_120_33;
		double L_290 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_120_34;
		double L_291 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_120_35;
		double L_292 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_120_36;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_293 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_293);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_293, (0.66666666666666663), L_287, L_288, L_289, L_290, L_291, L_292, NULL);
		NullCheck(L_286);
		ArrayElementTypeCheck (L_286, L_293);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_293);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_294 = L_286;
		double L_295 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_120_31;
		double L_296 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_120_32;
		double L_297 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_120_33;
		double L_298 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_120_34;
		double L_299 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_120_35;
		double L_300 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_120_36;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_301 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_301);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_301, (2.6666666666666665), L_295, L_296, L_297, L_298, L_299, L_300, NULL);
		NullCheck(L_294);
		ArrayElementTypeCheck (L_294, L_301);
		(L_294)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_301);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_302 = L_294;
		double L_303 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_120_31;
		double L_304 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_120_32;
		double L_305 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_120_33;
		double L_306 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_120_34;
		double L_307 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_120_35;
		double L_308 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_120_36;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_309 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_309);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_309, (-1.3333333333333333), L_303, L_304, L_305, L_306, L_307, L_308, NULL);
		NullCheck(L_302);
		ArrayElementTypeCheck (L_302, L_309);
		(L_302)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_309);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_310 = L_302;
		double L_311 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_120_31;
		double L_312 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_120_32;
		double L_313 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_120_33;
		double L_314 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_120_34;
		double L_315 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_120_35;
		double L_316 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_120_36;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_317 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_317);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_317, (4.666666666666667), L_311, L_312, L_313, L_314, L_315, L_316, NULL);
		NullCheck(L_310);
		ArrayElementTypeCheck (L_310, L_317);
		(L_310)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_317);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_318 = L_310;
		double L_319 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_120_31;
		double L_320 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_120_32;
		double L_321 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_120_33;
		double L_322 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_120_34;
		double L_323 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_120_35;
		double L_324 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_120_36;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_325 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_325);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_325, (-3.3333333333333335), L_319, L_320, L_321, L_322, L_323, L_324, NULL);
		NullCheck(L_318);
		ArrayElementTypeCheck (L_318, L_325);
		(L_318)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_325);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_326 = L_318;
		double L_327 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_135_37;
		double L_328 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_135_38;
		double L_329 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_135_39;
		double L_330 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_135_40;
		double L_331 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_135_41;
		double L_332 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_135_42;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_333 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_333);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_333, (0.75), L_327, L_328, L_329, L_330, L_331, L_332, NULL);
		NullCheck(L_326);
		ArrayElementTypeCheck (L_326, L_333);
		(L_326)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_333);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_334 = L_326;
		double L_335 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_135_37;
		double L_336 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_135_38;
		double L_337 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_135_39;
		double L_338 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_135_40;
		double L_339 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_135_41;
		double L_340 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_135_42;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_341 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_341);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_341, (2.75), L_335, L_336, L_337, L_338, L_339, L_340, NULL);
		NullCheck(L_334);
		ArrayElementTypeCheck (L_334, L_341);
		(L_334)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_341);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_342 = L_334;
		double L_343 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_135_37;
		double L_344 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_135_38;
		double L_345 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_135_39;
		double L_346 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_135_40;
		double L_347 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_135_41;
		double L_348 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_135_42;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_349 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_349);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_349, (-1.25), L_343, L_344, L_345, L_346, L_347, L_348, NULL);
		NullCheck(L_342);
		ArrayElementTypeCheck (L_342, L_349);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_349);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_350 = L_342;
		double L_351 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_135_37;
		double L_352 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_135_38;
		double L_353 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_135_39;
		double L_354 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_135_40;
		double L_355 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_135_41;
		double L_356 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_135_42;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_357 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_357);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_357, (4.75), L_351, L_352, L_353, L_354, L_355, L_356, NULL);
		NullCheck(L_350);
		ArrayElementTypeCheck (L_350, L_357);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_357);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_358 = L_350;
		double L_359 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_135_37;
		double L_360 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_135_38;
		double L_361 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_135_39;
		double L_362 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_135_40;
		double L_363 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_135_41;
		double L_364 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_135_42;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_365 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_365);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_365, (-3.25), L_359, L_360, L_361, L_362, L_363, L_364, NULL);
		NullCheck(L_358);
		ArrayElementTypeCheck (L_358, L_365);
		(L_358)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_365);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_366 = L_358;
		double L_367 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_150_43;
		double L_368 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_150_44;
		double L_369 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_150_45;
		double L_370 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_150_46;
		double L_371 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_150_47;
		double L_372 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_150_48;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_373 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_373);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_373, (0.83333333333333337), L_367, L_368, L_369, L_370, L_371, L_372, NULL);
		NullCheck(L_366);
		ArrayElementTypeCheck (L_366, L_373);
		(L_366)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_373);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_374 = L_366;
		double L_375 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_150_43;
		double L_376 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_150_44;
		double L_377 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_150_45;
		double L_378 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_150_46;
		double L_379 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_150_47;
		double L_380 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_150_48;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_381 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_381);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_381, (2.8333333333333335), L_375, L_376, L_377, L_378, L_379, L_380, NULL);
		NullCheck(L_374);
		ArrayElementTypeCheck (L_374, L_381);
		(L_374)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_381);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_382 = L_374;
		double L_383 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_150_43;
		double L_384 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_150_44;
		double L_385 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_150_45;
		double L_386 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_150_46;
		double L_387 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_150_47;
		double L_388 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_150_48;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_389 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_389);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_389, (-1.1666666666666667), L_383, L_384, L_385, L_386, L_387, L_388, NULL);
		NullCheck(L_382);
		ArrayElementTypeCheck (L_382, L_389);
		(L_382)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_389);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_390 = L_382;
		double L_391 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_150_43;
		double L_392 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_150_44;
		double L_393 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_150_45;
		double L_394 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_150_46;
		double L_395 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_150_47;
		double L_396 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_150_48;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_397 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_397);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_397, (4.833333333333333), L_391, L_392, L_393, L_394, L_395, L_396, NULL);
		NullCheck(L_390);
		ArrayElementTypeCheck (L_390, L_397);
		(L_390)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_397);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_398 = L_390;
		double L_399 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_150_43;
		double L_400 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_150_44;
		double L_401 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_150_45;
		double L_402 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_150_46;
		double L_403 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_150_47;
		double L_404 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_150_48;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_405 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_405);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_405, (-3.1666666666666665), L_399, L_400, L_401, L_402, L_403, L_404, NULL);
		NullCheck(L_398);
		ArrayElementTypeCheck (L_398, L_405);
		(L_398)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_405);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_406 = L_398;
		double L_407 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_180_49;
		double L_408 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_180_50;
		double L_409 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_180_51;
		double L_410 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_180_52;
		double L_411 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_180_53;
		double L_412 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_180_54;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_413 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_413);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_413, (1.0), L_407, L_408, L_409, L_410, L_411, L_412, NULL);
		NullCheck(L_406);
		ArrayElementTypeCheck (L_406, L_413);
		(L_406)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_413);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_414 = L_406;
		double L_415 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_180_49;
		double L_416 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_180_50;
		double L_417 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_180_51;
		double L_418 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_180_52;
		double L_419 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_180_53;
		double L_420 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_180_54;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_421 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_421);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_421, (3.0), L_415, L_416, L_417, L_418, L_419, L_420, NULL);
		NullCheck(L_414);
		ArrayElementTypeCheck (L_414, L_421);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_421);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_422 = L_414;
		double L_423 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_180_49;
		double L_424 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_180_50;
		double L_425 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_180_51;
		double L_426 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_180_52;
		double L_427 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_180_53;
		double L_428 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_180_54;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_429 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_429);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_429, (-1.0), L_423, L_424, L_425, L_426, L_427, L_428, NULL);
		NullCheck(L_422);
		ArrayElementTypeCheck (L_422, L_429);
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_429);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_430 = L_422;
		double L_431 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_180_49;
		double L_432 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_180_50;
		double L_433 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_180_51;
		double L_434 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_180_52;
		double L_435 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_180_53;
		double L_436 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_180_54;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_437 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_437);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_437, (5.0), L_431, L_432, L_433, L_434, L_435, L_436, NULL);
		NullCheck(L_430);
		ArrayElementTypeCheck (L_430, L_437);
		(L_430)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_437);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_438 = L_430;
		double L_439 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_180_49;
		double L_440 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_180_50;
		double L_441 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_180_51;
		double L_442 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_180_52;
		double L_443 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_180_53;
		double L_444 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_180_54;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_445 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_445);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_445, (-3.0), L_439, L_440, L_441, L_442, L_443, L_444, NULL);
		NullCheck(L_438);
		ArrayElementTypeCheck (L_438, L_445);
		(L_438)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_445);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_446 = L_438;
		double L_447 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_210_55;
		double L_448 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_210_56;
		double L_449 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_210_57;
		double L_450 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_210_58;
		double L_451 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_210_59;
		double L_452 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_210_60;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_453 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_453);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_453, (1.1666666666666667), L_447, L_448, L_449, L_450, L_451, L_452, NULL);
		NullCheck(L_446);
		ArrayElementTypeCheck (L_446, L_453);
		(L_446)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_453);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_454 = L_446;
		double L_455 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_210_55;
		double L_456 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_210_56;
		double L_457 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_210_57;
		double L_458 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_210_58;
		double L_459 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_210_59;
		double L_460 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_210_60;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_461 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_461);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_461, (3.1666666666666665), L_455, L_456, L_457, L_458, L_459, L_460, NULL);
		NullCheck(L_454);
		ArrayElementTypeCheck (L_454, L_461);
		(L_454)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_461);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_462 = L_454;
		double L_463 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_210_55;
		double L_464 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_210_56;
		double L_465 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_210_57;
		double L_466 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_210_58;
		double L_467 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_210_59;
		double L_468 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_210_60;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_469 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_469);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_469, (-0.83333333333333337), L_463, L_464, L_465, L_466, L_467, L_468, NULL);
		NullCheck(L_462);
		ArrayElementTypeCheck (L_462, L_469);
		(L_462)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_469);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_470 = L_462;
		double L_471 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_210_55;
		double L_472 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_210_56;
		double L_473 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_210_57;
		double L_474 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_210_58;
		double L_475 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_210_59;
		double L_476 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_210_60;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_477 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_477);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_477, (5.166666666666667), L_471, L_472, L_473, L_474, L_475, L_476, NULL);
		NullCheck(L_470);
		ArrayElementTypeCheck (L_470, L_477);
		(L_470)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_477);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_478 = L_470;
		double L_479 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_210_55;
		double L_480 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_210_56;
		double L_481 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_210_57;
		double L_482 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_210_58;
		double L_483 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_210_59;
		double L_484 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_210_60;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_485 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_485);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_485, (-2.8333333333333335), L_479, L_480, L_481, L_482, L_483, L_484, NULL);
		NullCheck(L_478);
		ArrayElementTypeCheck (L_478, L_485);
		(L_478)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_485);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_486 = L_478;
		double L_487 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_225_61;
		double L_488 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_225_62;
		double L_489 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_225_63;
		double L_490 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_225_64;
		double L_491 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_225_65;
		double L_492 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_225_66;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_493 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_493);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_493, (1.25), L_487, L_488, L_489, L_490, L_491, L_492, NULL);
		NullCheck(L_486);
		ArrayElementTypeCheck (L_486, L_493);
		(L_486)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_493);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_494 = L_486;
		double L_495 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_225_61;
		double L_496 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_225_62;
		double L_497 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_225_63;
		double L_498 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_225_64;
		double L_499 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_225_65;
		double L_500 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_225_66;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_501 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_501);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_501, (3.25), L_495, L_496, L_497, L_498, L_499, L_500, NULL);
		NullCheck(L_494);
		ArrayElementTypeCheck (L_494, L_501);
		(L_494)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_501);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_502 = L_494;
		double L_503 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_225_61;
		double L_504 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_225_62;
		double L_505 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_225_63;
		double L_506 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_225_64;
		double L_507 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_225_65;
		double L_508 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_225_66;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_509 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_509);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_509, (-0.75), L_503, L_504, L_505, L_506, L_507, L_508, NULL);
		NullCheck(L_502);
		ArrayElementTypeCheck (L_502, L_509);
		(L_502)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_509);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_510 = L_502;
		double L_511 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_225_61;
		double L_512 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_225_62;
		double L_513 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_225_63;
		double L_514 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_225_64;
		double L_515 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_225_65;
		double L_516 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_225_66;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_517 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_517);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_517, (5.25), L_511, L_512, L_513, L_514, L_515, L_516, NULL);
		NullCheck(L_510);
		ArrayElementTypeCheck (L_510, L_517);
		(L_510)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_517);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_518 = L_510;
		double L_519 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_225_61;
		double L_520 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_225_62;
		double L_521 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_225_63;
		double L_522 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_225_64;
		double L_523 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_225_65;
		double L_524 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_225_66;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_525 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_525);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_525, (-2.75), L_519, L_520, L_521, L_522, L_523, L_524, NULL);
		NullCheck(L_518);
		ArrayElementTypeCheck (L_518, L_525);
		(L_518)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_525);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_526 = L_518;
		double L_527 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_240_67;
		double L_528 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_240_68;
		double L_529 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_240_69;
		double L_530 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_240_70;
		double L_531 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_240_71;
		double L_532 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_240_72;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_533 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_533);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_533, (1.3333333333333333), L_527, L_528, L_529, L_530, L_531, L_532, NULL);
		NullCheck(L_526);
		ArrayElementTypeCheck (L_526, L_533);
		(L_526)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_533);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_534 = L_526;
		double L_535 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_240_67;
		double L_536 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_240_68;
		double L_537 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_240_69;
		double L_538 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_240_70;
		double L_539 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_240_71;
		double L_540 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_240_72;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_541 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_541);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_541, (3.3333333333333335), L_535, L_536, L_537, L_538, L_539, L_540, NULL);
		NullCheck(L_534);
		ArrayElementTypeCheck (L_534, L_541);
		(L_534)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_541);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_542 = L_534;
		double L_543 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_240_67;
		double L_544 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_240_68;
		double L_545 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_240_69;
		double L_546 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_240_70;
		double L_547 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_240_71;
		double L_548 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_240_72;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_549 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_549);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_549, (-0.66666666666666663), L_543, L_544, L_545, L_546, L_547, L_548, NULL);
		NullCheck(L_542);
		ArrayElementTypeCheck (L_542, L_549);
		(L_542)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_549);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_550 = L_542;
		double L_551 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_240_67;
		double L_552 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_240_68;
		double L_553 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_240_69;
		double L_554 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_240_70;
		double L_555 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_240_71;
		double L_556 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_240_72;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_557 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_557);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_557, (5.333333333333333), L_551, L_552, L_553, L_554, L_555, L_556, NULL);
		NullCheck(L_550);
		ArrayElementTypeCheck (L_550, L_557);
		(L_550)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_557);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_558 = L_550;
		double L_559 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_240_67;
		double L_560 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_240_68;
		double L_561 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_240_69;
		double L_562 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_240_70;
		double L_563 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_240_71;
		double L_564 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_240_72;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_565 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_565);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_565, (-2.6666666666666665), L_559, L_560, L_561, L_562, L_563, L_564, NULL);
		NullCheck(L_558);
		ArrayElementTypeCheck (L_558, L_565);
		(L_558)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_565);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_566 = L_558;
		double L_567 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_270_73;
		double L_568 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_270_74;
		double L_569 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_270_75;
		double L_570 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_270_76;
		double L_571 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_270_77;
		double L_572 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_270_78;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_573 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_573);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_573, (1.5), L_567, L_568, L_569, L_570, L_571, L_572, NULL);
		NullCheck(L_566);
		ArrayElementTypeCheck (L_566, L_573);
		(L_566)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_573);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_574 = L_566;
		double L_575 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_270_73;
		double L_576 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_270_74;
		double L_577 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_270_75;
		double L_578 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_270_76;
		double L_579 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_270_77;
		double L_580 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_270_78;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_581 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_581);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_581, (3.5), L_575, L_576, L_577, L_578, L_579, L_580, NULL);
		NullCheck(L_574);
		ArrayElementTypeCheck (L_574, L_581);
		(L_574)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_581);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_582 = L_574;
		double L_583 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_270_73;
		double L_584 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_270_74;
		double L_585 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_270_75;
		double L_586 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_270_76;
		double L_587 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_270_77;
		double L_588 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_270_78;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_589 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_589);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_589, (-0.5), L_583, L_584, L_585, L_586, L_587, L_588, NULL);
		NullCheck(L_582);
		ArrayElementTypeCheck (L_582, L_589);
		(L_582)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_589);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_590 = L_582;
		double L_591 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_270_73;
		double L_592 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_270_74;
		double L_593 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_270_75;
		double L_594 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_270_76;
		double L_595 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_270_77;
		double L_596 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_270_78;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_597 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_597);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_597, (5.5), L_591, L_592, L_593, L_594, L_595, L_596, NULL);
		NullCheck(L_590);
		ArrayElementTypeCheck (L_590, L_597);
		(L_590)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_597);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_598 = L_590;
		double L_599 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_270_73;
		double L_600 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_270_74;
		double L_601 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_270_75;
		double L_602 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_270_76;
		double L_603 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_270_77;
		double L_604 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_270_78;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_605 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_605);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_605, (-2.5), L_599, L_600, L_601, L_602, L_603, L_604, NULL);
		NullCheck(L_598);
		ArrayElementTypeCheck (L_598, L_605);
		(L_598)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_605);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_606 = L_598;
		double L_607 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_300_79;
		double L_608 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_300_80;
		double L_609 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_300_81;
		double L_610 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_300_82;
		double L_611 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_300_83;
		double L_612 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_300_84;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_613 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_613);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_613, (1.6666666666666667), L_607, L_608, L_609, L_610, L_611, L_612, NULL);
		NullCheck(L_606);
		ArrayElementTypeCheck (L_606, L_613);
		(L_606)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_613);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_614 = L_606;
		double L_615 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_300_79;
		double L_616 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_300_80;
		double L_617 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_300_81;
		double L_618 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_300_82;
		double L_619 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_300_83;
		double L_620 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_300_84;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_621 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_621);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_621, (3.6666666666666665), L_615, L_616, L_617, L_618, L_619, L_620, NULL);
		NullCheck(L_614);
		ArrayElementTypeCheck (L_614, L_621);
		(L_614)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_621);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_622 = L_614;
		double L_623 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_300_79;
		double L_624 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_300_80;
		double L_625 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_300_81;
		double L_626 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_300_82;
		double L_627 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_300_83;
		double L_628 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_300_84;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_629 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_629);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_629, (-0.33333333333333331), L_623, L_624, L_625, L_626, L_627, L_628, NULL);
		NullCheck(L_622);
		ArrayElementTypeCheck (L_622, L_629);
		(L_622)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_629);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_630 = L_622;
		double L_631 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_300_79;
		double L_632 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_300_80;
		double L_633 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_300_81;
		double L_634 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_300_82;
		double L_635 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_300_83;
		double L_636 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_300_84;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_637 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_637);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_637, (5.666666666666667), L_631, L_632, L_633, L_634, L_635, L_636, NULL);
		NullCheck(L_630);
		ArrayElementTypeCheck (L_630, L_637);
		(L_630)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_637);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_638 = L_630;
		double L_639 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_300_79;
		double L_640 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_300_80;
		double L_641 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_300_81;
		double L_642 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_300_82;
		double L_643 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_300_83;
		double L_644 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_300_84;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_645 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_645);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_645, (-2.3333333333333335), L_639, L_640, L_641, L_642, L_643, L_644, NULL);
		NullCheck(L_638);
		ArrayElementTypeCheck (L_638, L_645);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_645);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_646 = L_638;
		double L_647 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_315_85;
		double L_648 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_315_86;
		double L_649 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_315_87;
		double L_650 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_315_88;
		double L_651 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_315_89;
		double L_652 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_315_90;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_653 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_653);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_653, (1.75), L_647, L_648, L_649, L_650, L_651, L_652, NULL);
		NullCheck(L_646);
		ArrayElementTypeCheck (L_646, L_653);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_653);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_654 = L_646;
		double L_655 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_315_85;
		double L_656 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_315_86;
		double L_657 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_315_87;
		double L_658 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_315_88;
		double L_659 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_315_89;
		double L_660 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_315_90;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_661 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_661);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_661, (3.75), L_655, L_656, L_657, L_658, L_659, L_660, NULL);
		NullCheck(L_654);
		ArrayElementTypeCheck (L_654, L_661);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_661);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_662 = L_654;
		double L_663 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_315_85;
		double L_664 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_315_86;
		double L_665 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_315_87;
		double L_666 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_315_88;
		double L_667 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_315_89;
		double L_668 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_315_90;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_669 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_669);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_669, (-0.25), L_663, L_664, L_665, L_666, L_667, L_668, NULL);
		NullCheck(L_662);
		ArrayElementTypeCheck (L_662, L_669);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_669);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_670 = L_662;
		double L_671 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_315_85;
		double L_672 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_315_86;
		double L_673 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_315_87;
		double L_674 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_315_88;
		double L_675 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_315_89;
		double L_676 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_315_90;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_677 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_677);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_677, (5.75), L_671, L_672, L_673, L_674, L_675, L_676, NULL);
		NullCheck(L_670);
		ArrayElementTypeCheck (L_670, L_677);
		(L_670)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_677);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_678 = L_670;
		double L_679 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_315_85;
		double L_680 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_315_86;
		double L_681 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_315_87;
		double L_682 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_315_88;
		double L_683 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_315_89;
		double L_684 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_315_90;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_685 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_685);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_685, (-2.25), L_679, L_680, L_681, L_682, L_683, L_684, NULL);
		NullCheck(L_678);
		ArrayElementTypeCheck (L_678, L_685);
		(L_678)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_685);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_686 = L_678;
		double L_687 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_330_91;
		double L_688 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_330_92;
		double L_689 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_330_93;
		double L_690 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_330_94;
		double L_691 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_330_95;
		double L_692 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_330_96;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_693 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_693);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_693, (1.8333333333333333), L_687, L_688, L_689, L_690, L_691, L_692, NULL);
		NullCheck(L_686);
		ArrayElementTypeCheck (L_686, L_693);
		(L_686)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_693);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_694 = L_686;
		double L_695 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_330_91;
		double L_696 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_330_92;
		double L_697 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_330_93;
		double L_698 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_330_94;
		double L_699 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_330_95;
		double L_700 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_330_96;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_701 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_701);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_701, (3.8333333333333335), L_695, L_696, L_697, L_698, L_699, L_700, NULL);
		NullCheck(L_694);
		ArrayElementTypeCheck (L_694, L_701);
		(L_694)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_701);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_702 = L_694;
		double L_703 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_330_91;
		double L_704 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_330_92;
		double L_705 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_330_93;
		double L_706 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_330_94;
		double L_707 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_330_95;
		double L_708 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_330_96;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_709 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_709);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_709, (-0.16666666666666666), L_703, L_704, L_705, L_706, L_707, L_708, NULL);
		NullCheck(L_702);
		ArrayElementTypeCheck (L_702, L_709);
		(L_702)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_709);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_710 = L_702;
		double L_711 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_330_91;
		double L_712 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_330_92;
		double L_713 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_330_93;
		double L_714 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_330_94;
		double L_715 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_330_95;
		double L_716 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_330_96;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_717 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_717);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_717, (5.833333333333333), L_711, L_712, L_713, L_714, L_715, L_716, NULL);
		NullCheck(L_710);
		ArrayElementTypeCheck (L_710, L_717);
		(L_710)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_717);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_718 = L_710;
		double L_719 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_330_91;
		double L_720 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_330_92;
		double L_721 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_330_93;
		double L_722 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_330_94;
		double L_723 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_330_95;
		double L_724 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_330_96;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_725 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_725);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_725, (-2.1666666666666665), L_719, L_720, L_721, L_722, L_723, L_724, NULL);
		NullCheck(L_718);
		ArrayElementTypeCheck (L_718, L_725);
		(L_718)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_725);
		SpecialValueTrigonometricU5BU5D_tCDE990BAC09F02D0A71548C54B160EB5AE0A8754* L_726 = L_718;
		double L_727 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SIN_360_97;
		double L_728 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___COS_360_98;
		double L_729 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___TAN_360_99;
		double L_730 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CTAN_360_100;
		double L_731 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___SEC_360_101;
		double L_732 = ((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___CSC_360_102;
		SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811* L_733 = (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)il2cpp_codegen_object_new(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var);
		NullCheck(L_733);
		SpecialValueTrigonometric__ctor_m3989DEFB00BD76D2AD2A99D25FD23AE83ACF3CB8(L_733, (6.0), L_727, L_728, L_729, L_730, L_731, L_732, NULL);
		NullCheck(L_726);
		ArrayElementTypeCheck (L_726, L_733);
		(L_726)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811*)L_733);
		((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListTrig_103 = L_726;
		Il2CppCodeGenWriteBarrier((void**)(&((SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_StaticFields*)il2cpp_codegen_static_fields_for(SpecialValueTrigonometric_tC3496BADBAFD5F189DB7E49921D448D9F8735811_il2cpp_TypeInfo_var))->___valuesListTrig_103), (void*)L_726);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::avg(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_avg_mAD36EB6AF21C1E399884B29EF38E2999CC087DAF (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___f0, Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* ___index1, double ___from2, double ___to3, double ___delta4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		double L_0 = ___delta4;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		double L_2 = ___from2;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		double L_4 = ___to3;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		double L_6 = ___delta4;
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0030;
		}
	}

IL_0026:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0030:
	{
		V_0 = (0.0);
		V_1 = 0;
		double L_7 = ___to3;
		double L_8 = ___from2;
		if ((!(((double)L_7) >= ((double)L_8))))
		{
			goto IL_00b6;
		}
	}
	{
		double L_9 = ___delta4;
		if ((!(((double)L_9) > ((double)(0.0)))))
		{
			goto IL_00b6;
		}
	}
	{
		double L_10 = ___from2;
		V_2 = L_10;
		goto IL_0076;
	}

IL_0051:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0062:
	{
		double L_12 = V_0;
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_13 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_14 = ___index1;
		double L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = mXparser_getFunctionValue_m5063DF197081CC692BA1A0D599DEC78E06B5F795(L_13, L_14, L_15, NULL);
		V_0 = ((double)il2cpp_codegen_add(L_12, L_16));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		double L_18 = V_2;
		double L_19 = ___delta4;
		V_2 = ((double)il2cpp_codegen_add(L_18, L_19));
	}

IL_0076:
	{
		double L_20 = V_2;
		double L_21 = ___to3;
		if ((((double)L_20) < ((double)L_21)))
		{
			goto IL_0051;
		}
	}
	{
		double L_22 = ___delta4;
		double L_23 = V_2;
		double L_24 = ___to3;
		double L_25 = ___delta4;
		if ((!(((double)((double)il2cpp_codegen_subtract(L_22, ((double)il2cpp_codegen_subtract(L_23, L_24))))) > ((double)((double)il2cpp_codegen_multiply((0.5), L_25))))))
		{
			goto IL_0138;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_26)
		{
			goto IL_00a2;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00a2:
	{
		double L_27 = V_0;
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_28 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_29 = ___index1;
		double L_30 = ___to3;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		double L_31;
		L_31 = mXparser_getFunctionValue_m5063DF197081CC692BA1A0D599DEC78E06B5F795(L_28, L_29, L_30, NULL);
		V_0 = ((double)il2cpp_codegen_add(L_27, L_31));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_0138;
	}

IL_00b6:
	{
		double L_33 = ___to3;
		double L_34 = ___from2;
		if ((!(((double)L_33) <= ((double)L_34))))
		{
			goto IL_012b;
		}
	}
	{
		double L_35 = ___delta4;
		if ((!(((double)L_35) < ((double)(0.0)))))
		{
			goto IL_012b;
		}
	}
	{
		double L_36 = ___from2;
		V_3 = L_36;
		goto IL_00f0;
	}

IL_00cb:
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_37)
		{
			goto IL_00dc;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_00dc:
	{
		double L_38 = V_0;
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_39 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_40 = ___index1;
		double L_41 = V_3;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		double L_42;
		L_42 = mXparser_getFunctionValue_m5063DF197081CC692BA1A0D599DEC78E06B5F795(L_39, L_40, L_41, NULL);
		V_0 = ((double)il2cpp_codegen_add(L_38, L_42));
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		double L_44 = V_3;
		double L_45 = ___delta4;
		V_3 = ((double)il2cpp_codegen_add(L_44, L_45));
	}

IL_00f0:
	{
		double L_46 = V_3;
		double L_47 = ___to3;
		if ((((double)L_46) > ((double)L_47)))
		{
			goto IL_00cb;
		}
	}
	{
		double L_48 = ___delta4;
		double L_49 = ___to3;
		double L_50 = V_3;
		double L_51 = ___delta4;
		if ((!(((double)((double)il2cpp_codegen_subtract(((-L_48)), ((double)il2cpp_codegen_subtract(L_49, L_50))))) > ((double)((double)il2cpp_codegen_multiply((-0.5), L_51))))))
		{
			goto IL_0138;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_52)
		{
			goto IL_011a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_011a:
	{
		double L_53 = V_0;
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_54 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_55 = ___index1;
		double L_56 = ___to3;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		double L_57;
		L_57 = mXparser_getFunctionValue_m5063DF197081CC692BA1A0D599DEC78E06B5F795(L_54, L_55, L_56, NULL);
		V_0 = ((double)il2cpp_codegen_add(L_53, L_57));
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		goto IL_0138;
	}

IL_012b:
	{
		double L_59 = ___from2;
		double L_60 = ___to3;
		if ((!(((double)L_59) == ((double)L_60))))
		{
			goto IL_0138;
		}
	}
	{
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_61 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_62 = ___index1;
		double L_63 = ___from2;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		double L_64;
		L_64 = mXparser_getFunctionValue_m5063DF197081CC692BA1A0D599DEC78E06B5F795(L_61, L_62, L_63, NULL);
		return L_64;
	}

IL_0138:
	{
		double L_65 = V_0;
		int32_t L_66 = V_1;
		return ((double)(L_65/((double)L_66)));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::var(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_var_m40813FD70F8E173C1CA085F5ADC37E7C2F38D5D0 (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___f0, Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* ___index1, double ___from2, double ___to3, double ___delta4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___delta4;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		double L_2 = ___from2;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		double L_4 = ___to3;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		double L_6 = ___delta4;
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0030;
		}
	}

IL_0026:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0030:
	{
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_7 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_8 = ___index1;
		double L_9 = ___from2;
		double L_10 = ___to3;
		double L_11 = ___delta4;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12;
		L_12 = mXparser_getFunctionValues_m9D0AAEFB81F50153DCC4CBFEEA900AE500821C55(L_7, L_8, L_9, L_10, L_11, NULL);
		double L_13;
		L_13 = Statistics_var_mF1C4F1F927FD7EECE1CBF7C2C061759D75FC9712(L_12, NULL);
		return L_13;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::std(org.mariuszgromada.math.mxparser.Expression,org.mariuszgromada.math.mxparser.Argument,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_std_mD4BEE87CFD7137CA9F7D5D6484BFA5C55D62D6F5 (Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* ___f0, Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* ___index1, double ___from2, double ___to3, double ___delta4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___delta4;
		bool L_1;
		L_1 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		double L_2 = ___from2;
		bool L_3;
		L_3 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		double L_4 = ___to3;
		bool L_5;
		L_5 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		double L_6 = ___delta4;
		if ((!(((double)L_6) == ((double)(0.0)))))
		{
			goto IL_0030;
		}
	}

IL_0026:
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0030:
	{
		Expression_tD5F96270B8AA2DE6BCD7F7AE5F69AA1E24D8F280* L_7 = ___f0;
		Argument_t797E8AEE1A05851F6C0C6F9FC6ECC306561A59C3* L_8 = ___index1;
		double L_9 = ___from2;
		double L_10 = ___to3;
		double L_11 = ___delta4;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12;
		L_12 = mXparser_getFunctionValues_m9D0AAEFB81F50153DCC4CBFEEA900AE500821C55(L_7, L_8, L_9, L_10, L_11, NULL);
		double L_13;
		L_13 = Statistics_std_mA3F86D56C60511A6661778E3A7CF4A0FCA81A7EA(L_12, NULL);
		return L_13;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::avg(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_avg_m7AB2A73B9752B4140419E1CBF8C462BCF53D4B39 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_1 = NULL;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___numbers0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_000d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___numbers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___numbers0;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___numbers0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_0025:
	{
		V_0 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___numbers0;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0064;
	}

IL_0035:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		double L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_004a:
	{
		double L_12 = V_3;
		bool L_13;
		L_13 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_005c:
	{
		double L_14 = V_0;
		double L_15 = V_3;
		V_0 = ((double)il2cpp_codegen_add(L_14, L_15));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0064:
	{
		int32_t L_17 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		double L_19 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = ___numbers0;
		NullCheck(L_20);
		return ((double)(L_19/((double)((int32_t)(((RuntimeArray*)L_20)->max_length)))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::var(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_var_mF1C4F1F927FD7EECE1CBF7C2C061759D75FC9712 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___numbers0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_000d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___numbers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___numbers0;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___numbers0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0035:
	{
		return (0.0);
	}

IL_003f:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___numbers0;
		double L_8;
		L_8 = Statistics_avg_m7AB2A73B9752B4140419E1CBF8C462BCF53D4B39(L_7, NULL);
		V_0 = L_8;
		V_1 = (0.0);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = ___numbers0;
		V_2 = L_9;
		V_3 = 0;
		goto IL_008f;
	}

IL_0056:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		double L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_006c:
	{
		double L_15 = V_4;
		bool L_16;
		L_16 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_15, NULL);
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_007f:
	{
		double L_17 = V_1;
		double L_18 = V_4;
		double L_19 = V_0;
		double L_20 = V_4;
		double L_21 = V_0;
		V_1 = ((double)il2cpp_codegen_add(L_17, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_18, L_19)), ((double)il2cpp_codegen_subtract(L_20, L_21))))));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_008f:
	{
		int32_t L_23 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0056;
		}
	}
	{
		double L_25 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = ___numbers0;
		NullCheck(L_26);
		return ((double)(L_25/((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1)))));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::std(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_std_mA3F86D56C60511A6661778E3A7CF4A0FCA81A7EA (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___numbers0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_000d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___numbers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___numbers0;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___numbers0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0035:
	{
		return (0.0);
	}

IL_003f:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___numbers0;
		double L_8;
		L_8 = Statistics_var_mF1C4F1F927FD7EECE1CBF7C2C061759D75FC9712(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(MathFunctions_t9F1B1625D209EF8EC598F6A29E8913F85D199613_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = MathFunctions_sqrt_m33F74C654C6CC80277FDE11AFD581050E440200D(L_8, NULL);
		return L_9;
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::median(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_median_m57A3856EF55C366981652B3D79FDD6D954A7DA9D (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberTheory_tDB8B84BB7209E2A62467F31121733CC1A7DBEED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___numbers0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_000d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___numbers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___numbers0;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___numbers0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_0025:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___numbers0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((uint32_t)2))))
		{
			goto IL_003d;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = ___numbers0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		double L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ___numbers0;
		NullCheck(L_10);
		int32_t L_11 = 1;
		double L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return ((double)(((double)il2cpp_codegen_add(L_9, L_12))/(2.0)));
	}

IL_003d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = ___numbers0;
		V_0 = L_13;
		V_1 = 0;
		goto IL_006e;
	}

IL_0043:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		double L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_18)
		{
			goto IL_0058;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0058:
	{
		double L_19 = V_2;
		bool L_20;
		L_20 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_006a;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_006a:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006e:
	{
		int32_t L_22 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = ___numbers0;
		il2cpp_codegen_runtime_class_init_inline(NumberTheory_tDB8B84BB7209E2A62467F31121733CC1A7DBEED6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25;
		L_25 = NumberTheory_sortAsc_mF4AA4AB9C8B31BB96E278DEFB662B8A5AB17F375(L_24, NULL);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_26 = ___numbers0;
		NullCheck(L_26);
		if ((!(((uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_26)->max_length))%2))) == ((uint32_t)1))))
		{
			goto IL_008f;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27 = ___numbers0;
		NullCheck(L_27);
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1))/2));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_28 = ___numbers0;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		double L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		return L_31;
	}

IL_008f:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = ___numbers0;
		NullCheck(L_32);
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))/2)), 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_33 = ___numbers0;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		double L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_37 = ___numbers0;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		double L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		return ((double)(((double)il2cpp_codegen_add(L_36, L_40))/(2.0)));
	}
}
// System.Double org.mariuszgromada.math.mxparser.mathcollection.Statistics::mode(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Statistics_mode_mCCA16C6CC8D216657C73FD3ABE7EDFB5D75B1619 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___numbers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberTheory_tDB8B84BB7209E2A62467F31121733CC1A7DBEED6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___numbers0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_000d:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ___numbers0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_001b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = ___numbers0;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___numbers0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_0025:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___numbers0;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0056;
	}

IL_002b:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		double L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		il2cpp_codegen_runtime_class_init_inline(mXparser_t0E0EA678C4D0C2C0BA270B2C5BB50B2B8FD3220E_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = mXparser_isCurrentCalculationCancelled_mCF57F3A299C0055D971C59D71B8F850CEB3F94B4(NULL);
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0040:
	{
		double L_12 = V_2;
		bool L_13;
		L_13 = Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0052;
		}
	}
	{
		return (std::numeric_limits<double>::quiet_NaN());
	}

IL_0052:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0056:
	{
		int32_t L_15 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = ___numbers0;
		il2cpp_codegen_runtime_class_init_inline(NumberTheory_tDB8B84BB7209E2A62467F31121733CC1A7DBEED6_il2cpp_TypeInfo_var);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_18;
		L_18 = NumberTheory_getDistValues_mC3EBE6B0B5D7F49339A05B971DECED65DC0945D7(L_17, (bool)1, NULL);
		NullCheck(L_18);
		double L_19;
		L_19 = (L_18)->GetAt(0, 0);
		return L_19;
	}
}
// System.Void org.mariuszgromada.math.mxparser.mathcollection.Statistics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statistics__ctor_mBFCE937CA094687FF0527B01F2ED7D5301641AA8 (Statistics_t1745F87FF3826D0E109FA0D02BA525E1948ECCCD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void org.mariuszgromada.math.mxparser.mathcollection.Units::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Units__ctor_m89972D4348BF43D2530D390A61E188B8D2FDABBF (Units_t75D974EAA4EC8D2739F13E5C53D6F0A00FD64793* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_m752DA1554CE1712F292DAC4AEC30869AD7234E18_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Constant_setConstantValue_mB6DC23E29846DC26A76081A11F9FA1D09FA290B4_inline (Constant_tBDE590208935032ABAA6CD4AD6E533ACF1E4D2DC* __this, double ___constantValue0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___constantValue0;
		__this->___constantValue_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_m6E8147B50DE6E7EDD6CAB8873F83B943E2CD74F9_inline (double ___d0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___d0;
		return (bool)((((double)L_0) == ((double)(std::numeric_limits<double>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNegativeInfinity_mA198BA3110327CA9E3298794F07E4772E660FDA5_inline (double ___d0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___d0;
		return (bool)((((double)L_0) == ((double)(-std::numeric_limits<double>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double BitConverter_Int64BitsToDouble_mC0B5F34D5389EF32DBA08916755C880EDB6838AB_inline (int64_t ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = *((double*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mFA158CA8247818AE2FEB5B11158A354CA5B4FCC5_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) == ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
