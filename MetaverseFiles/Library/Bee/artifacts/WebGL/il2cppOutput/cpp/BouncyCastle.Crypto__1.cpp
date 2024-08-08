#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475;
struct ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755;
struct AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53;
struct AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12;
struct ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0;
struct ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484;
struct ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F;
struct ECLookupTable_t8E6079E76EE7C69E1F353F4649E0888F0D8B02EB;
struct ECMultiplier_tCD1F45EE7084B55F6FB7A8C0E0DB2CCBE0E8DF19;
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70;
struct ECPointMap_t7AE183EBB2029035F8CDC9062C46D9A526F942AD;
struct FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0;
struct FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF;
struct GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C;
struct GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342;
struct GlvEndomorphism_tAF8CFFC11F44EE723A1A306F261BF6CE4B089452;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56;
struct IPolynomial_t1FAE77D9DAAD96C34E76CCFCB09FE960D9546DFF;
struct IPolynomialExtensionField_tC73BC92F76DC73951E550038684E7761F6DAE3F3;
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A;

IL2CPP_EXTERN_C RuntimeClass* AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECLookupTable_t8E6079E76EE7C69E1F353F4649E0888F0D8B02EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedPointUtilities_t697D8BD2A5BBB30818656F21D521C4CB3F7135E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlvEndomorphism_tAF8CFFC11F44EE723A1A306F261BF6CE4B089452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPolynomialExtensionField_tC73BC92F76DC73951E550038684E7761F6DAE3F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPolynomial_t1FAE77D9DAAD96C34E76CCFCB09FE960D9546DFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11458CB676B17FDBC854E855460B86C0F96BD86E;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A997B3A9A8B12CFDBF937AF62469873CB6FAADD;
IL2CPP_EXTERN_C String_t* _stringLiteral2242A971260FDDF13502E03EB2347D27E4CE120D;
IL2CPP_EXTERN_C String_t* _stringLiteral585CF08E04D87F8AB3503D265DC35F27051D3DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralB0BEF69A813BCD0186640BBA1D1D22A28DED77D7;
IL2CPP_EXTERN_C String_t* _stringLiteralBC418DF12EFC3347B9249DB32348AF09079D4B8F;
IL2CPP_EXTERN_C String_t* _stringLiteralC85DD4565B10A03E31F133210FF2614019176D85;
IL2CPP_EXTERN_C String_t* _stringLiteralDC124196B821FEEA4E6C89B04C026563A557FFB2;
IL2CPP_EXTERN_C String_t* _stringLiteralE11BB2EC92497F06D810622C4B9C8DE86B281569;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_CleanPoint_mF63DFFDB144C83F767EDBD2EEED7198753CF0732_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_ImplShamirsTrickFixedPoint_mC6E9A9049C276E7AB0A9A55F2D5170DE34148908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_ImportPoint_mEE924D1F4A0429E82EEE180478E82144BF656B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FiniteFields_GetBinaryExtensionField_mA56E48D57A777FE4D3F50598FBC72BAAD52D5C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FiniteFields_GetPrimeField_mACE3AFF889470C64716C02497F82B5F4DC24A332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mod_CheckedModOddInverse_mB19082631EDD6CB1517861C574451305DACA114A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat_FromBigInteger64_mC47345974202CF431EC827B619032C5D86A712C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475;
struct ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53  : public RuntimeObject
{
};
struct AbstractECMultiplier_t4282AB551F51759A9F137A03C5CF4D3806A20462  : public RuntimeObject
{
};
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude;
	int32_t ___sign;
	int32_t ___nBits;
	int32_t ___nBitLength;
	int32_t ___mQuote;
};
struct Bits_t406A3DF1ADA9DD2AD489C39B3914EE289E8DAF4A  : public RuntimeObject
{
};
struct ECAlgorithms_t178F54D7B11D904E05E8907416EF99E80AD7DE20  : public RuntimeObject
{
};
struct ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0  : public RuntimeObject
{
	RuntimeObject* ___m_field;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_a;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_b;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m_order;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m_cofactor;
	int32_t ___m_coord;
	RuntimeObject* ___m_endomorphism;
	RuntimeObject* ___m_multiplier;
};
struct ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F  : public RuntimeObject
{
};
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70  : public RuntimeObject
{
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___m_curve;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_x;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_y;
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___m_zs;
	bool ___m_withCompression;
	RuntimeObject* ___m_preCompTable;
};
struct FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E  : public RuntimeObject
{
};
struct FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF  : public RuntimeObject
{
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___m_offset;
	RuntimeObject* ___m_lookupTable;
	int32_t ___m_width;
};
struct GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___exponents;
};
struct GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342  : public RuntimeObject
{
	RuntimeObject* ___subfield;
	RuntimeObject* ___minimalPolynomial;
};
struct Interleave_t449220AA75D18711F76D1D874C40E6883FB04688  : public RuntimeObject
{
};
struct Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944  : public RuntimeObject
{
};
struct Nat_tAE025EBE2B546FABFF4A747AE643A7B4B94F7FEC  : public RuntimeObject
{
};
struct Nat128_t2B39CF703F479F23640D43ED56A634A5B4BB0D83  : public RuntimeObject
{
};
struct Nat160_t5420056636FE09B61935090833116054E2F42E91  : public RuntimeObject
{
};
struct Nat192_t91816B9E4BB8C0267E35E77C60453B08115FC664  : public RuntimeObject
{
};
struct Nat224_tE4989E4FDEC48A897D95BBF293B3A3CE1702B1C6  : public RuntimeObject
{
};
struct Nat256_t6E448B27843D3BD3584D2BB19FEE8C88F036786A  : public RuntimeObject
{
};
struct Nat320_t7049B58F63054775DB13AA905B5CDC50DCB12387  : public RuntimeObject
{
};
struct Nat384_t19F4E275A4D64C1850B1A138120C03FA6EC7AFFE  : public RuntimeObject
{
};
struct Nat448_t7340C62A7D5C1C6BF65ADD2EB87CEFE3FF073BD1  : public RuntimeObject
{
};
struct Nat512_t68C3B8F088003BC98D3E7264A8DFAA6A6F22337D  : public RuntimeObject
{
};
struct Nat576_t05ECB931DE4408DD04BD7ED7D289B27885BDA8D6  : public RuntimeObject
{
};
struct PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4  : public RuntimeObject
{
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___characteristic;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A  : public RuntimeObject
{
	int32_t ___m_promotionCountdown;
	int32_t ___m_confWidth;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___m_preComp;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___m_preCompNeg;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___m_twice;
	int32_t ___m_width;
};
struct AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493  : public ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0
{
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___si;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0  : public AbstractECMultiplier_t4282AB551F51759A9F137A03C5CF4D3806A20462
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	RuntimeObject* ___generator;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding;
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___SMALL_CONSTANTS;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Zero;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___One;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Two;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Three;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Four;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Ten;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2E;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8E;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10E;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16E;
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___RandomSource;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds;
};
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70_StaticFields
{
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___Random;
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___EMPTY_ZS;
};
struct FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields
{
	RuntimeObject* ___GF_2;
	RuntimeObject* ___GF_3;
};
struct Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_StaticFields
{
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___RandomSource;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	int64_t ___counter;
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___master;
	double ___DoubleScale;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44  : public RuntimeArray
{
	ALIGN_FIELD (8) ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* m_Items[1];

	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* m_Items[1];

	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475  : public RuntimeArray
{
	ALIGN_FIELD (8) ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* m_Items[1];

	inline ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755  : public RuntimeArray
{
	ALIGN_FIELD (8) WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* m_Items[1];

	inline WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210 (uint32_t ___0_x, uint32_t ___1_m, int32_t ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399 (uint64_t ___0_x, uint64_t ___1_m, int32_t ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interleave_Expand64To128_m75821FA0AD7433ECBAC48B0EE11BABA9CCBB068A (uint64_t ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mod_ModOddInverse_m0996C21F1DDDAE1E0B6E792384DB140272997ADE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_m, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Integers_NumberOfLeadingZeros_m82B737A99578B3D0324EC78A8C8F4201FB19609A (int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_Encode30_m03C052786F317AFC9C81FE23C5B29031890B207F (int32_t ___0_bits, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mod_Inverse32_mF04DC2C225FC152805464A1631704DA8C8446501 (uint32_t ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_GetMaximumDivsteps_m707DB930F446320392FCEFE283DE5B23E6C5E975 (int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Divsteps30_m80956ABDA849BE55623F314E82E658036ADFED17 (int32_t ___0_eta, int32_t ___1_f0, int32_t ___2_g0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_UpdateDE30_m26385DE27B8FBA3A515C63DF947D38678FC8F3BF (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_D, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_E, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, int32_t ___4_m0Inv32, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_M, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_UpdateFG30_m15EC44660FEB70C67BF84F45A560FACBBCF3786F (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_F, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_G, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_CNegate30_mA1163EC10846D6742ABD2909518787363AB7F1BE (int32_t ___0_len30, int32_t ___1_cond, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_D, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_CNormalize30_m88FACB463604A18139235B6480E055EA49D7E741 (int32_t ___0_len30, int32_t ___1_condNegate, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_D, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_M, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_Decode30_m36E48432AC4BEEEA673B7FEA493810B20E7F743A (int32_t ___0_bits, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_EqualTo_m4F58AA99A57304C466E1E2ABD9C93161A06DD51A (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_EqualToZero_m94DE5959DCA94ACB1EE2476DEA3782B93AF314F4 (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Divsteps30Var_m76A3EB2D9E38DAFB598F7314929F42592D650FE7 (int32_t ___0_eta, int32_t ___1_f0, int32_t ___2_g0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mod_IsZero_mD822261ED1B5DCFD79C33128653FF7519875026B (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Add30_m9E368C18C94F4FA8105D8820BE60C607A1C66B89 (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_D, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_M, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Negate30_m3E4E978C23453FAF47B6BCF899E3C65F6F029773 (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_D, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mod_IsOne_mCD72B886434CA7419F4039A31126517201FC3700 (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat_Create_mB13654B804EA8487B6F8C78FD4B3326327533074 (int32_t ___0_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt32_m717B3FE3B230E50D7A584EA3E345606FDD3773F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_ns, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_Gte_m0AB9084A9A6D11BE869652D2FBCB3D24FC3F3135 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Integers_NumberOfTrailingZeros_mA4DC24C3FD2B03B0E7AD1F682FFCD3B8AF8ED100 (int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_IncAt_m761D6FC8730812D9FD59CD2E59F70457653528A9 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_IntValue_m51372C2C24032F9378F895580BB3CD5821CCC1D7 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ShiftRight_mC1242A0E5B8DAB62B6D63EE44FC1E35D170C5268 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat_Create64_m5DBB7EDB905EBA60DDEBE951977B5BBED7BEB97F (int32_t ___0_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_get_LongValue_mB898FF65507542EF5A3A01CFF020993AE392A76E (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_DecAt_m6DE1D479B034EB39675818B1DB0CACFED6D56AFC (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___0_sign, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zOff, int32_t ___3_zPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Gte_m0BDBE96AB71D92AE438EB91B5CE08EE08CF6AAFA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_Sub_mD6E3D13B71E6E218E8E7730D0E80CA771BD84F20 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_mB347757FA0E16ABE65A670A0A08E388B9259880E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_Sub_m632B841EC1A092C0FCD1B936E7EA4037C6CA023D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_m1110336F8C51C175E8C3CB2936AEEAF800ECC4AA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_mECD309C9E6CD8A3DFD67EB260D8C3DCFB3AA3C24 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddToEachOther_mA20AB37302E6653AA90531CAC497F3E7F9AD611B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddTo_m643229DD5A369427B1439A03ACDB2515C47FE36D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_Create_m080244D08AA36F401220A2C103FF8869E1F813F6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Diff_m0A5BFDB7BC50400472B408FE32A513390581C3FD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_CreateExt_m25BB599D6E4AA0456D937EF17973F603C916ED04 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_SubFrom_m3574A843E61B7A8F9204829B8DE9E350FFC04A2B (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddTo_mFC93824AD1EFEF9B8BF65FAA1B194C52C41484D1 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddWordAt_m69287D723F9D58E8ECA2E7004BAA4E33D95BDCA7 (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m4E97D60DA1266BF2FED4943BCAB5942583DD2337 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m37DC59412923DE029C4643ABC311534CC04EE7BF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_mCB0842227FF347701C81D8435E04B4EA4F58572C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_mEA400AFA0A023E52E87AF1F16B9F897D9F663677 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddToEachOther_m3C6E6286B07DF6EC9F75BAAA754A0C317FECF5F0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddTo_mC1FA070B52B5F92E27028E5F65F5E5A715556E01 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_Create_mA8B40672EFEF44EF1770D8C921F3962D80CC947D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Diff_m4F1E93F214A03A7E52136A592C5AD8AA297A58AE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_CreateExt_mFC7487BD1A4E9CDE02D4435E806BE2E108E8A667 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_m48F45D274C5A1A33F0F319901325B5D5DD8865A9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_mA1CBFC0AB9685DAD6C6496741DEC5E4A1014F1A5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF2Polynomial__ctor_m49F4DB3E81E964110F17B1BD35DD039C75AB139A (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_exponents, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPolynomialExtensionField__ctor_mFE6811861A4164BA7E90A15295308054E3ABAB28 (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, RuntimeObject* ___0_subfield, RuntimeObject* ___1_polynomial, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeField__ctor_mF38953FD6B2A2AE52BD3BE030C5D61C23A8F7884 (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___0_characteristic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ValueOf_mC471D30E47D935710EF0E6847A39ADD6F11D6680 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Integers_RotateLeft_m84BF6C029834132A285328BB10896FD716A21805 (int32_t ___0_i, int32_t ___1_distance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Clone_mB027E844AC5571D8EFDC245398C886E57D334599 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m96D17AA85659B352E56F38F926355029142E6618 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_a, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mC6B0E8DF0FDCB6CB5CF19B5FF595DF23142FE5A2 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsF2mField_mC95566613E6C39AE5ADC62084E47A90BB5104F11 (RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsFpField_mF2DD77F8766FB29ED5203A2B006501C41C169959 (RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImportPoint_mEE924D1F4A0429E82EEE180478E82144BF656B52 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___1_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultipliesGlv_m1F9E8C9D2070F2028329209211CC159123449E94 (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_ps, BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___1_ks, RuntimeObject* ___2_glvEndomorphism, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickWNaf_m6D40DD0EE6B572D9D378F4C5C2FC52816458993A (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_P, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_k, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___2_Q, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___3_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_mD3655C31934118D5E8BC966669AF2523ED6E5D5E (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECPoint_IsValidPartial_m866F611C9E2B2E2ED886EDC37C20A9616D6DA24B (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WNafUtilities_GetWindowSize_m7E747A4F1A7F5CBCE4B57B8A464EA5177463BF0C (int32_t ___0_bits, int32_t ___1_maxWidth, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* WNafUtilities_Precompute_m1A12AA67A2EA77983BD811E616B48BB9A7E9B87E (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, int32_t ___1_minWidth, bool ___2_includeNegated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedPointUtilities_GetCombSize_m60D05F775C8723768605C81D0506C8AEF3231DC0 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickFixedPoint_mC6E9A9049C276E7AB0A9A55F2D5170DE34148908 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_k, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___2_q, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___3_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65 (int32_t ___0_width, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickWNaf_mF486F7936AC06C4EDAA834AB2991688461982DC1 (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_preCompP, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___1_preCompNegP, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_wnafP, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___3_preCompQ, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___4_preCompNegQ, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_wnafQ, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* EndoUtilities_MapPoint_m12311EFDFF3332F72BD7AC0D03E941E6C96EE90F (RuntimeObject* ___0_endomorphism, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___1_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* WNafUtilities_PrecomputeWithPointMap_mC96A20623F2B1348AE751A3028A02F125EF0AF74 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, RuntimeObject* ___1_pointMap, WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* ___2_fromWNaf, bool ___3_includeNegated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultiplies_m976B17754429119973A46ABF171954EA96A7C023 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_negs, WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* ___1_infos, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___2_wnafs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___0_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultiplies_m3435E00D80CF7B1D5E7232D2891C59FA6E898958 (RuntimeObject* ___0_endomorphism, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___1_ps, BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___2_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultiplies_mCFD406BDE0B82FC9D23815CF844505323CB2EB3E (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_ps, BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___1_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* FixedPointUtilities_Precompute_m1897CFD9E9FD9ADBC0579E4C276095295E80FD3D (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedPointCombMultiplier__ctor_mAFE67CAE2A59C5C037DA2230C8EB04475F8E2EBD (FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD (int32_t ___0_bits, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_x, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210 (uint32_t ___0_x, uint32_t ___1_m, int32_t ___2_s, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1 = ___0_x;
		int32_t L_2 = ___2_s;
		uint32_t L_3 = ___1_m;
		int32_t L_4 = ((int32_t)(((int32_t)((int32_t)L_0^((int32_t)((uint32_t)L_1>>((int32_t)(L_2&((int32_t)31)))))))&(int32_t)L_3));
		int32_t L_5 = ___2_s;
		uint32_t L_6 = ___0_x;
		return ((int32_t)(((int32_t)(L_4^((int32_t)(L_4<<((int32_t)(L_5&((int32_t)31)))))))^(int32_t)L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399 (uint64_t ___0_x, uint64_t ___1_m, int32_t ___2_s, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___0_x;
		int32_t L_2 = ___2_s;
		uint64_t L_3 = ___1_m;
		int64_t L_4 = ((int64_t)(((int64_t)((int64_t)L_0^((int64_t)((uint64_t)L_1>>((int32_t)(L_2&((int32_t)63)))))))&(int64_t)L_3));
		int32_t L_5 = ___2_s;
		uint64_t L_6 = ___0_x;
		return ((int64_t)(((int64_t)(L_4^((int64_t)(L_4<<((int32_t)(L_5&((int32_t)63)))))))^(int64_t)L_6));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bits_BitPermuteStepSimple_m3CA8C10A2BA45B55032A1E26889A4645F5E62CE8 (uint64_t ___0_x, uint64_t ___1_m, int32_t ___2_s, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1 = ___1_m;
		int32_t L_2 = ___2_s;
		uint64_t L_3 = ___0_x;
		int32_t L_4 = ___2_s;
		uint64_t L_5 = ___1_m;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))<<((int32_t)(L_2&((int32_t)63)))))|((int64_t)(((int64_t)((uint64_t)L_3>>((int32_t)(L_4&((int32_t)63)))))&(int64_t)L_5))));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Interleave_Expand8to16_m84ABC1D01B9736190A438CE0A8719DAD691D05BF (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_0&((int32_t)255)));
		uint32_t L_1 = ___0_x;
		uint32_t L_2 = ___0_x;
		___0_x = ((int32_t)(((int32_t)((int32_t)L_1|((int32_t)((int32_t)L_2<<4))))&((int32_t)3855)));
		uint32_t L_3 = ___0_x;
		uint32_t L_4 = ___0_x;
		___0_x = ((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_4<<2))))&((int32_t)13107)));
		uint32_t L_5 = ___0_x;
		uint32_t L_6 = ___0_x;
		___0_x = ((int32_t)(((int32_t)((int32_t)L_5|((int32_t)((int32_t)L_6<<1))))&((int32_t)21845)));
		uint32_t L_7 = ___0_x;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Interleave_Expand32to64_m6F3D49DADA3AF084B8F58889B0AFC5936AEBFFEC (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1;
		L_1 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_0, ((int32_t)65280), 8, NULL);
		___0_x = L_1;
		uint32_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_2, ((int32_t)15728880), 4, NULL);
		___0_x = L_3;
		uint32_t L_4 = ___0_x;
		uint32_t L_5;
		L_5 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_4, ((int32_t)202116108), 2, NULL);
		___0_x = L_5;
		uint32_t L_6 = ___0_x;
		uint32_t L_7;
		L_7 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_6, ((int32_t)572662306), 1, NULL);
		___0_x = L_7;
		uint32_t L_8 = ___0_x;
		uint32_t L_9 = ___0_x;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((uint32_t)L_8>>1))))&((int64_t)((int32_t)1431655765))))<<((int32_t)32)))|((int64_t)(((int64_t)(uint64_t)L_9)&((int64_t)((int32_t)1431655765))))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interleave_Expand64To128_m75821FA0AD7433ECBAC48B0EE11BABA9CCBB068A (uint64_t ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1;
		L_1 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_0, ((int64_t)(uint64_t)((uint32_t)((int32_t)-65536))), ((int32_t)16), NULL);
		___0_x = L_1;
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_2, ((int64_t)280375465148160LL), 8, NULL);
		___0_x = L_3;
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_4, ((int64_t)67555025218437360LL), 4, NULL);
		___0_x = L_5;
		uint64_t L_6 = ___0_x;
		uint64_t L_7;
		L_7 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_6, ((int64_t)868082074056920076LL), 2, NULL);
		___0_x = L_7;
		uint64_t L_8 = ___0_x;
		uint64_t L_9;
		L_9 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_8, ((int64_t)2459565876494606882LL), 1, NULL);
		___0_x = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = ___1_z;
		int32_t L_11 = ___2_zOff;
		uint64_t L_12 = ___0_x;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint64_t)((int64_t)((int64_t)L_12&((int64_t)6148914691236517205LL))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___1_z;
		int32_t L_14 = ___2_zOff;
		uint64_t L_15 = ___0_x;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, 1))), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_15>>1))&((int64_t)6148914691236517205LL))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interleave_Expand64To128_mE5411298805953ECE65243872C7D1402BB809769 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_xs, int32_t ___1_xsOff, int32_t ___2_xsLen, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___3_zs, int32_t ___4_zsOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_xs;
		int32_t L_1 = ___1_xsOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int64_t L_4 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___3_zs;
		int32_t L_6 = ___4_zsOff;
		Interleave_Expand64To128_m75821FA0AD7433ECBAC48B0EE11BABA9CCBB068A(L_4, L_5, L_6, NULL);
		int32_t L_7 = ___4_zsOff;
		___4_zsOff = ((int32_t)il2cpp_codegen_add(L_7, 2));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001b:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_xsLen;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interleave_Expand64To128Rev_mB251AEA050C8F062E44D30D1E79A75D50F975BC5 (uint64_t ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1;
		L_1 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_0, ((int64_t)(uint64_t)((uint32_t)((int32_t)-65536))), ((int32_t)16), NULL);
		___0_x = L_1;
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_2, ((int64_t)280375465148160LL), 8, NULL);
		___0_x = L_3;
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_4, ((int64_t)67555025218437360LL), 4, NULL);
		___0_x = L_5;
		uint64_t L_6 = ___0_x;
		uint64_t L_7;
		L_7 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_6, ((int64_t)868082074056920076LL), 2, NULL);
		___0_x = L_7;
		uint64_t L_8 = ___0_x;
		uint64_t L_9;
		L_9 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_8, ((int64_t)2459565876494606882LL), 1, NULL);
		___0_x = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = ___1_z;
		int32_t L_11 = ___2_zOff;
		uint64_t L_12 = ___0_x;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint64_t)((int64_t)((int64_t)L_12&((int64_t)-6148914691236517206LL))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___1_z;
		int32_t L_14 = ___2_zOff;
		uint64_t L_15 = ___0_x;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, 1))), (uint64_t)((int64_t)(((int64_t)((int64_t)L_15<<1))&((int64_t)-6148914691236517206LL))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Interleave_Shuffle2_mD9042F86AFE5D72683F9827BBA6B3B3B7607F9D1 (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		uint32_t L_1;
		L_1 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_0, ((int32_t)11141290), 7, NULL);
		___0_x = L_1;
		uint32_t L_2 = ___0_x;
		uint32_t L_3;
		L_3 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_2, ((int32_t)52428), ((int32_t)14), NULL);
		___0_x = L_3;
		uint32_t L_4 = ___0_x;
		uint32_t L_5;
		L_5 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_4, ((int32_t)15728880), 4, NULL);
		___0_x = L_5;
		uint32_t L_6 = ___0_x;
		uint32_t L_7;
		L_7 = Bits_BitPermuteStep_m60B5CB2A727143D8488B233E1CC629397AA9E210(L_6, ((int32_t)65280), 8, NULL);
		___0_x = L_7;
		uint32_t L_8 = ___0_x;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Interleave_Unshuffle_m53EE36C3ECA0BA8FE4A4C1BBFF4AE17774B2A6B2 (uint64_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_x;
		uint64_t L_1;
		L_1 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_0, ((int64_t)2459565876494606882LL), 1, NULL);
		___0_x = L_1;
		uint64_t L_2 = ___0_x;
		uint64_t L_3;
		L_3 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_2, ((int64_t)868082074056920076LL), 2, NULL);
		___0_x = L_3;
		uint64_t L_4 = ___0_x;
		uint64_t L_5;
		L_5 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_4, ((int64_t)67555025218437360LL), 4, NULL);
		___0_x = L_5;
		uint64_t L_6 = ___0_x;
		uint64_t L_7;
		L_7 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_6, ((int64_t)280375465148160LL), 8, NULL);
		___0_x = L_7;
		uint64_t L_8 = ___0_x;
		uint64_t L_9;
		L_9 = Bits_BitPermuteStep_m9CEE7AE665E4D1D39E1E4115F82CFAB244624399(L_8, ((int64_t)(uint64_t)((uint32_t)((int32_t)-65536))), ((int32_t)16), NULL);
		___0_x = L_9;
		uint64_t L_10 = ___0_x;
		return L_10;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_CheckedModOddInverse_mB19082631EDD6CB1517861C574451305DACA114A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_m, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_m;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_z;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		uint32_t L_3;
		L_3 = Mod_ModOddInverse_m0996C21F1DDDAE1E0B6E792384DB140272997ADE(L_0, L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_4 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0BEF69A813BCD0186640BBA1D1D22A28DED77D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Mod_CheckedModOddInverse_mB19082631EDD6CB1517861C574451305DACA114A_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mod_Inverse32_mF04DC2C225FC152805464A1631704DA8C8446501 (uint32_t ___0_d, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_d;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = ___0_d;
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3))))));
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___0_d;
		uint32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6))))));
		uint32_t L_7 = V_0;
		uint32_t L_8 = ___0_d;
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))))));
		uint32_t L_10 = V_0;
		uint32_t L_11 = ___0_d;
		uint32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)il2cpp_codegen_subtract(2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_12))))));
		uint32_t L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mod_ModOddInverse_m0996C21F1DDDAE1E0B6E792384DB140272997ADE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_m, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_m;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_m;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Integers_NumberOfLeadingZeros_m82B737A99578B3D0324EC78A8C8F4201FB19609A(L_5, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1<<5)), L_6));
		int32_t L_7 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, ((int32_t)29)))/((int32_t)30)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_8;
		int32_t L_9 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_4 = L_10;
		int32_t L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_5 = L_12;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_6 = L_14;
		int32_t L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_7 = L_16;
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_8 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_5;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		int32_t L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		Mod_Encode30_m03C052786F317AFC9C81FE23C5B29031890B207F(L_20, L_21, 0, L_22, 0, NULL);
		int32_t L_23 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_8;
		Mod_Encode30_m03C052786F317AFC9C81FE23C5B29031890B207F(L_23, L_24, 0, L_25, 0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_6;
		int32_t L_28 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, 0, (RuntimeArray*)L_27, 0, L_28, NULL);
		V_9 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_8;
		NullCheck(L_29);
		int32_t L_30 = 0;
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		uint32_t L_32;
		L_32 = Mod_Inverse32_mF04DC2C225FC152805464A1631704DA8C8446501(L_31, NULL);
		V_10 = L_32;
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = Mod_GetMaximumDivsteps_m707DB930F446320392FCEFE283DE5B23E6C5E975(L_33, NULL);
		V_11 = L_34;
		V_13 = 0;
		goto IL_00bf;
	}

IL_008c:
	{
		int32_t L_35 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_6;
		NullCheck(L_36);
		int32_t L_37 = 0;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_7;
		NullCheck(L_39);
		int32_t L_40 = 0;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		int32_t L_43;
		L_43 = Mod_Divsteps30_m80956ABDA849BE55623F314E82E658036ADFED17(L_35, L_38, L_41, L_42, NULL);
		V_9 = L_43;
		int32_t L_44 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_3;
		int32_t L_48 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_8;
		Mod_UpdateDE30_m26385DE27B8FBA3A515C63DF947D38678FC8F3BF(L_44, L_45, L_46, L_47, L_48, L_49, NULL);
		int32_t L_50 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_3;
		Mod_UpdateFG30_m15EC44660FEB70C67BF84F45A560FACBBCF3786F(L_50, L_51, L_52, L_53, NULL);
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, ((int32_t)30)));
	}

IL_00bf:
	{
		int32_t L_55 = V_13;
		int32_t L_56 = V_11;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_6;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_12 = ((int32_t)(L_60>>((int32_t)31)));
		int32_t L_61 = V_2;
		int32_t L_62 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		Mod_CNegate30_mA1163EC10846D6742ABD2909518787363AB7F1BE(L_61, L_62, L_63, NULL);
		int32_t L_64 = V_2;
		int32_t L_65 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_8;
		Mod_CNormalize30_m88FACB463604A18139235B6480E055EA49D7E741(L_64, L_65, L_66, L_67, NULL);
		int32_t L_68 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_z;
		Mod_Decode30_m36E48432AC4BEEEA673B7FEA493810B20E7F743A(L_68, L_69, 0, L_70, 0, NULL);
		int32_t L_71 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_6;
		int32_t L_73;
		L_73 = Mod_EqualTo_m4F58AA99A57304C466E1E2ABD9C93161A06DD51A(L_71, L_72, 1, NULL);
		int32_t L_74 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_7;
		int32_t L_76;
		L_76 = Mod_EqualToZero_m94DE5959DCA94ACB1EE2476DEA3782B93AF314F4(L_74, L_75, NULL);
		return ((int32_t)(L_73&L_76));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mod_ModOddInverseVar_mC0040C4C173B24A3ABDDA9AD82E6FBD85D815360 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_m, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_m;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_m;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Integers_NumberOfLeadingZeros_m82B737A99578B3D0324EC78A8C8F4201FB19609A(L_5, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1<<5)), L_6));
		int32_t L_7 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, ((int32_t)29)))/((int32_t)30)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_8;
		int32_t L_9 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_4 = L_10;
		int32_t L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_5 = L_12;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_6 = L_14;
		int32_t L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_7 = L_16;
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_8 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_5;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		int32_t L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		Mod_Encode30_m03C052786F317AFC9C81FE23C5B29031890B207F(L_20, L_21, 0, L_22, 0, NULL);
		int32_t L_23 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_m;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_8;
		Mod_Encode30_m03C052786F317AFC9C81FE23C5B29031890B207F(L_23, L_24, 0, L_25, 0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_6;
		int32_t L_28 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, 0, (RuntimeArray*)L_27, 0, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_7;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33;
		L_33 = Integers_NumberOfLeadingZeros_m82B737A99578B3D0324EC78A8C8F4201FB19609A(((int32_t)(L_32|1)), NULL);
		int32_t L_34 = V_2;
		int32_t L_35 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_33, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)30))), 2)), L_35))));
		int32_t L_36 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_subtract((-1), L_36));
		int32_t L_37 = V_2;
		V_11 = L_37;
		int32_t L_38 = V_2;
		V_12 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_8;
		NullCheck(L_39);
		int32_t L_40 = 0;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		uint32_t L_42;
		L_42 = Mod_Inverse32_mF04DC2C225FC152805464A1631704DA8C8446501(L_41, NULL);
		V_13 = L_42;
		int32_t L_43 = V_1;
		int32_t L_44;
		L_44 = Mod_GetMaximumDivsteps_m707DB930F446320392FCEFE283DE5B23E6C5E975(L_43, NULL);
		V_14 = L_44;
		V_15 = 0;
		goto IL_0148;
	}

IL_00b0:
	{
		int32_t L_45 = V_15;
		int32_t L_46 = V_14;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_47 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)30)));
		int32_t L_48 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_6;
		NullCheck(L_49);
		int32_t L_50 = 0;
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_7;
		NullCheck(L_52);
		int32_t L_53 = 0;
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		int32_t L_56;
		L_56 = Mod_Divsteps30Var_m76A3EB2D9E38DAFB598F7314929F42592D650FE7(L_48, L_51, L_54, L_55, NULL);
		V_10 = L_56;
		int32_t L_57 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_8;
		Mod_UpdateDE30_m26385DE27B8FBA3A515C63DF947D38678FC8F3BF(L_57, L_58, L_59, L_60, L_61, L_62, NULL);
		int32_t L_63 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_3;
		Mod_UpdateFG30_m15EC44660FEB70C67BF84F45A560FACBBCF3786F(L_63, L_64, L_65, L_66, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_6;
		int32_t L_68 = V_12;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_17 = L_70;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_7;
		int32_t L_72 = V_12;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		int32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_18 = L_74;
		int32_t L_75 = V_12;
		int32_t L_76 = V_17;
		int32_t L_77 = V_17;
		int32_t L_78 = V_18;
		int32_t L_79 = V_18;
		if (((int32_t)(((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_75, 2))>>((int32_t)31)))|((int32_t)(L_76^((int32_t)(L_77>>((int32_t)31)))))))|((int32_t)(L_78^((int32_t)(L_79>>((int32_t)31))))))))
		{
			goto IL_0148;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_6;
		int32_t L_81 = V_12;
		NullCheck(L_80);
		int32_t* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_81, 2)))));
		int32_t L_83 = *((int32_t*)L_82);
		int32_t L_84 = V_17;
		*((int32_t*)L_82) = (int32_t)((int32_t)(L_83|((int32_t)(L_84<<((int32_t)30)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_7;
		int32_t L_86 = V_12;
		NullCheck(L_85);
		int32_t* L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_86, 2)))));
		int32_t L_88 = *((int32_t*)L_87);
		int32_t L_89 = V_18;
		*((int32_t*)L_87) = (int32_t)((int32_t)(L_88|((int32_t)(L_89<<((int32_t)30)))));
		int32_t L_90 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_90, 1));
	}

IL_0148:
	{
		int32_t L_91 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Mod_IsZero_mD822261ED1B5DCFD79C33128653FF7519875026B(L_91, L_92, NULL);
		if (!L_93)
		{
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = V_6;
		int32_t L_95 = V_12;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_4;
		int32_t L_99 = V_11;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		int32_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_16 = ((int32_t)(L_101>>((int32_t)31)));
		int32_t L_102 = V_16;
		if ((((int32_t)L_102) >= ((int32_t)0)))
		{
			G_B8_0 = ((int32_t)(L_97>>((int32_t)31)));
			goto IL_017e;
		}
		G_B7_0 = ((int32_t)(L_97>>((int32_t)31)));
	}
	{
		int32_t L_103 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		int32_t L_106;
		L_106 = Mod_Add30_m9E368C18C94F4FA8105D8820BE60C607A1C66B89(L_103, L_104, L_105, NULL);
		V_16 = L_106;
		G_B8_0 = G_B7_0;
	}

IL_017e:
	{
		if ((((int32_t)G_B8_0) >= ((int32_t)0)))
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_107 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		int32_t L_109;
		L_109 = Mod_Negate30_m3E4E978C23453FAF47B6BCF899E3C65F6F029773(L_107, L_108, NULL);
		V_16 = L_109;
		int32_t L_110 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = V_6;
		int32_t L_112;
		L_112 = Mod_Negate30_m3E4E978C23453FAF47B6BCF899E3C65F6F029773(L_110, L_111, NULL);
	}

IL_0196:
	{
		int32_t L_113 = V_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Mod_IsOne_mCD72B886434CA7419F4039A31126517201FC3700(L_113, L_114, NULL);
		if (L_115)
		{
			goto IL_01a3;
		}
	}
	{
		return (bool)0;
	}

IL_01a3:
	{
		int32_t L_116 = V_16;
		if ((((int32_t)L_116) >= ((int32_t)0)))
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_117 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		int32_t L_120;
		L_120 = Mod_Add30_m9E368C18C94F4FA8105D8820BE60C607A1C66B89(L_117, L_118, L_119, NULL);
		V_16 = L_120;
	}

IL_01b5:
	{
		int32_t L_121 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___2_z;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		Mod_Decode30_m36E48432AC4BEEEA673B7FEA493810B20E7F743A(L_121, L_122, 0, L_123, 0, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Mod_Random_mE778A8497D32E6CC52F526B0BFE3762BD33494F9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_p;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = Nat_Create_mB13654B804EA8487B6F8C78FD4B3326327533074(L_1, NULL);
		V_1 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_p;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		uint32_t L_7 = V_2;
		uint32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>1))));
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>2))));
		uint32_t L_11 = V_2;
		uint32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_11|((int32_t)((uint32_t)L_12>>4))));
		uint32_t L_13 = V_2;
		uint32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_13|((int32_t)((uint32_t)L_14>>8))));
		uint32_t L_15 = V_2;
		uint32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_15|((int32_t)((uint32_t)L_16>>((int32_t)16)))));
	}

IL_0030:
	{
		int32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_17<<2)));
		V_3 = L_18;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_19 = ((Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_StaticFields*)il2cpp_codegen_static_fields_for(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var))->___RandomSource;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		NullCheck(L_19);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_19, L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_1;
		Pack_BE_To_UInt32_m717B3FE3B230E50D7A584EA3E345606FDD3773F0(L_21, 0, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		uint32_t* L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_24, 1)))));
		int32_t L_26 = *((uint32_t*)L_25);
		uint32_t L_27 = V_2;
		*((int32_t*)L_25) = (int32_t)((int32_t)(L_26&(int32_t)L_27));
		int32_t L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_p;
		bool L_31;
		L_31 = Nat_Gte_m0AB9084A9A6D11BE869652D2FBCB3D24FC3F3135(L_28, L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_1;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Add30_m9E368C18C94F4FA8105D8820BE60C607A1C66B89 (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_D, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_M, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_len30;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___1_D;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___2_M;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_5, L_9))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___1_D;
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)((int32_t)(L_12&((int32_t)1073741823))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)(L_13>>((int32_t)30)));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0027:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_D;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___2_M;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_add(L_21, L_25))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___1_D;
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)L_28);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)(L_29>>((int32_t)30)));
		int32_t L_30 = V_0;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_CNegate30_mA1163EC10846D6742ABD2909518787363AB7F1BE (int32_t ___0_len30, int32_t ___1_cond, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_D, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_len30;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = 0;
		goto IL_0027;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___2_D;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ___1_cond;
		int32_t L_7 = ___1_cond;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_5^L_6)), L_7))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___2_D;
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)((int32_t)(L_10&((int32_t)1073741823))));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)(L_11>>((int32_t)30)));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0027:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___2_D;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = ___1_cond;
		int32_t L_21 = ___1_cond;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_19^L_20)), L_21))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ___2_D;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_24);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_CNormalize30_m88FACB463604A18139235B6480E055EA49D7E741 (int32_t ___0_len30, int32_t ___1_condNegate, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_D, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_M, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		int32_t L_0 = ___0_len30;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_1 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___2_D;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)(L_4>>((int32_t)31)));
		V_3 = 0;
		goto IL_003c;
	}

IL_0011:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___2_D;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___3_M;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(L_12&L_13))));
		int32_t L_14 = V_4;
		int32_t L_15 = ___1_condNegate;
		int32_t L_16 = ___1_condNegate;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_14^L_15)), L_16));
		int32_t L_17 = V_1;
		int32_t L_18 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___2_D;
		int32_t L_20 = V_3;
		int32_t L_21 = V_1;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (int32_t)((int32_t)(L_21&((int32_t)1073741823))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)(L_22>>((int32_t)30)));
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_003c:
	{
		int32_t L_24 = V_3;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0011;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___2_D;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ___3_M;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, ((int32_t)(L_33&L_34))));
		int32_t L_35 = V_5;
		int32_t L_36 = ___1_condNegate;
		int32_t L_37 = ___1_condNegate;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_35^L_36)), L_37));
		int32_t L_38 = V_1;
		int32_t L_39 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___2_D;
		int32_t L_41 = V_0;
		int32_t L_42 = V_1;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)L_42);
		V_6 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ___2_D;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_7 = ((int32_t)(L_46>>((int32_t)31)));
		V_8 = 0;
		goto IL_009a;
	}

IL_006c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___2_D;
		int32_t L_48 = V_8;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___3_M;
		int32_t L_52 = V_8;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)(L_54&L_55))));
		int32_t L_56 = V_6;
		int32_t L_57 = V_9;
		V_6 = ((int32_t)il2cpp_codegen_add(L_56, L_57));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ___2_D;
		int32_t L_59 = V_8;
		int32_t L_60 = V_6;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (int32_t)((int32_t)(L_60&((int32_t)1073741823))));
		int32_t L_61 = V_6;
		V_6 = ((int32_t)(L_61>>((int32_t)30)));
		int32_t L_62 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_009a:
	{
		int32_t L_63 = V_8;
		int32_t L_64 = V_0;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_006c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___2_D;
		int32_t L_66 = V_0;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ___3_M;
		int32_t L_70 = V_0;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		int32_t L_73 = V_7;
		V_10 = ((int32_t)il2cpp_codegen_add(L_68, ((int32_t)(L_72&L_73))));
		int32_t L_74 = V_6;
		int32_t L_75 = V_10;
		V_6 = ((int32_t)il2cpp_codegen_add(L_74, L_75));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ___2_D;
		int32_t L_77 = V_0;
		int32_t L_78 = V_6;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (int32_t)L_78);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_Decode30_m36E48432AC4BEEEA673B7FEA493810B20E7F743A (int32_t ___0_bits, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int64_t)0);
		goto IL_0043;
	}

IL_0007:
	{
		uint64_t L_0 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		int32_t L_3 = L_2;
		___2_xOff = ((int32_t)il2cpp_codegen_add(L_3, 1));
		NullCheck(L_1);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_0;
		V_1 = ((int64_t)((int64_t)L_0|((int64_t)(((int64_t)L_5)<<((int32_t)(L_6&((int32_t)63)))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)30)));
	}

IL_001d:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_bits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)32), L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___3_z;
		int32_t L_12 = ___4_zOff;
		int32_t L_13 = L_12;
		___4_zOff = ((int32_t)il2cpp_codegen_add(L_13, 1));
		uint64_t L_14 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_1;
		V_1 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)32)));
		int32_t L_17 = ___0_bits;
		___0_bits = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)32)));
	}

IL_0043:
	{
		int32_t L_18 = ___0_bits;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Divsteps30_m80956ABDA849BE55623F314E82E658036ADFED17 (int32_t ___0_eta, int32_t ___1_f0, int32_t ___2_g0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		V_3 = 1;
		int32_t L_0 = ___1_f0;
		V_4 = L_0;
		int32_t L_1 = ___2_g0;
		V_5 = L_1;
		V_6 = 0;
		goto IL_0097;
	}

IL_0016:
	{
		int32_t L_2 = ___0_eta;
		V_7 = ((int32_t)(L_2>>((int32_t)31)));
		int32_t L_3 = V_5;
		V_8 = ((-((int32_t)(L_3&1))));
		int32_t L_4 = V_4;
		int32_t L_5 = V_7;
		int32_t L_6 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_4^L_5)), L_6));
		int32_t L_7 = V_0;
		int32_t L_8 = V_7;
		int32_t L_9 = V_7;
		V_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_7^L_8)), L_9));
		int32_t L_10 = V_1;
		int32_t L_11 = V_7;
		int32_t L_12 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_10^L_11)), L_12));
		int32_t L_13 = V_5;
		int32_t L_14 = V_9;
		int32_t L_15 = V_8;
		V_5 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)(L_14&L_15))));
		int32_t L_16 = V_2;
		int32_t L_17 = V_10;
		int32_t L_18 = V_8;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)(L_17&L_18))));
		int32_t L_19 = V_3;
		int32_t L_20 = V_11;
		int32_t L_21 = V_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)(L_20&L_21))));
		int32_t L_22 = V_7;
		int32_t L_23 = V_8;
		V_7 = ((int32_t)(L_22&L_23));
		int32_t L_24 = ___0_eta;
		int32_t L_25 = V_7;
		int32_t L_26 = V_7;
		___0_eta = ((int32_t)il2cpp_codegen_subtract(((int32_t)(L_24^L_25)), ((int32_t)il2cpp_codegen_add(L_26, 1))));
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = V_7;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)(L_28&L_29))));
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		int32_t L_32 = V_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)(L_31&L_32))));
		int32_t L_33 = V_1;
		int32_t L_34 = V_3;
		int32_t L_35 = V_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)(L_34&L_35))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)(L_36>>1));
		int32_t L_37 = V_0;
		V_0 = ((int32_t)(L_37<<1));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)(L_38<<1));
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0097:
	{
		int32_t L_40 = V_6;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)30))))
		{
			goto IL_0016;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___3_t;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ___3_t;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___3_t;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_46);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___3_t;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_48);
		int32_t L_49 = ___0_eta;
		return L_49;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Divsteps30Var_m76A3EB2D9E38DAFB598F7314929F42592D650FE7 (int32_t ___0_eta, int32_t ___1_f0, int32_t ___2_g0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		V_3 = 1;
		int32_t L_0 = ___1_f0;
		V_4 = L_0;
		int32_t L_1 = ___2_g0;
		V_5 = L_1;
		V_8 = ((int32_t)30);
	}

IL_0012:
	{
		int32_t L_2 = V_5;
		int32_t L_3 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Integers_NumberOfTrailingZeros_mA4DC24C3FD2B03B0E7AD1F682FFCD3B8AF8ED100(((int32_t)(L_2|((int32_t)((-1)<<((int32_t)(L_3&((int32_t)31))))))), NULL);
		V_10 = L_4;
		int32_t L_5 = V_5;
		int32_t L_6 = V_10;
		V_5 = ((int32_t)(L_5>>((int32_t)(L_6&((int32_t)31)))));
		int32_t L_7 = V_0;
		int32_t L_8 = V_10;
		V_0 = ((int32_t)(L_7<<((int32_t)(L_8&((int32_t)31)))));
		int32_t L_9 = V_1;
		int32_t L_10 = V_10;
		V_1 = ((int32_t)(L_9<<((int32_t)(L_10&((int32_t)31)))));
		int32_t L_11 = ___0_eta;
		int32_t L_12 = V_10;
		___0_eta = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		int32_t L_13 = V_8;
		int32_t L_14 = V_10;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
		int32_t L_15 = V_8;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_16 = ___0_eta;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_17 = ___0_eta;
		___0_eta = ((-L_17));
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		V_4 = L_19;
		V_5 = ((-L_18));
		int32_t L_20 = V_0;
		int32_t L_21 = V_2;
		V_0 = L_21;
		V_2 = ((-L_20));
		int32_t L_22 = V_1;
		int32_t L_23 = V_3;
		V_1 = L_23;
		V_3 = ((-L_22));
		int32_t L_24 = ___0_eta;
		int32_t L_25 = V_8;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_24, 1))) > ((int32_t)L_25)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_26 = ___0_eta;
		G_B6_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_007b;
	}

IL_0079:
	{
		int32_t L_27 = V_8;
		G_B6_0 = L_27;
	}

IL_007b:
	{
		V_9 = G_B6_0;
		int32_t L_28 = V_9;
		V_6 = ((int32_t)(((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_28))&((int32_t)31)))))&((int32_t)63)));
		int32_t L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = V_4;
		int32_t L_32 = V_4;
		int32_t L_33 = V_6;
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_29, L_30)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_31, L_32)), 2))))&L_33));
		goto IL_00d7;
	}

IL_00a0:
	{
		int32_t L_34 = ___0_eta;
		int32_t L_35 = V_8;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_34, 1))) > ((int32_t)L_35)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_36 = ___0_eta;
		G_B10_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		goto IL_00ae;
	}

IL_00ac:
	{
		int32_t L_37 = V_8;
		G_B10_0 = L_37;
	}

IL_00ae:
	{
		V_9 = G_B10_0;
		int32_t L_38 = V_9;
		V_6 = ((int32_t)(((int32_t)((uint32_t)(-1)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_38))&((int32_t)31)))))&((int32_t)15)));
		int32_t L_39 = V_4;
		int32_t L_40 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_add(L_40, 1))&4))<<1))));
		int32_t L_41 = V_7;
		int32_t L_42 = V_5;
		int32_t L_43 = V_6;
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((-L_41)), L_42))&L_43));
	}

IL_00d7:
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_4;
		int32_t L_46 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_multiply(L_45, L_46))));
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		int32_t L_49 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)il2cpp_codegen_multiply(L_48, L_49))));
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_multiply(L_51, L_52))));
		goto IL_0012;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___3_t;
		int32_t L_54 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_54);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___3_t;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_56);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ___3_t;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_58);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = ___3_t;
		int32_t L_60 = V_3;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_60);
		int32_t L_61 = ___0_eta;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_Encode30_m03C052786F317AFC9C81FE23C5B29031890B207F (int32_t ___0_bits, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int64_t)0);
		goto IL_004c;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___0_bits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)30), L_1, NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_x;
		int32_t L_5 = ___2_xOff;
		int32_t L_6 = L_5;
		___2_xOff = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_0;
		V_1 = ((int64_t)((int64_t)L_3|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_8)&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)(L_9&((int32_t)63)))))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)32)));
	}

IL_002b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___3_z;
		int32_t L_12 = ___4_zOff;
		int32_t L_13 = L_12;
		___4_zOff = ((int32_t)il2cpp_codegen_add(L_13, 1));
		uint64_t L_14 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)(((int32_t)L_14)&((int32_t)1073741823))));
		uint64_t L_15 = V_1;
		V_1 = ((int64_t)((uint64_t)L_15>>((int32_t)30)));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)30)));
		int32_t L_17 = ___0_bits;
		___0_bits = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)30)));
	}

IL_004c:
	{
		int32_t L_18 = ___0_bits;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_EqualTo_m4F58AA99A57304C466E1E2ABD9C93161A06DD51A (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___1_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = ___2_y;
		V_0 = ((int32_t)(L_2^L_3));
		V_1 = 1;
		goto IL_0014;
	}

IL_000a:
	{
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_x;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)(L_4|L_8));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0014:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___0_len;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_12>>1))|((int32_t)(L_13&1))));
		int32_t L_14 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_14, 1))>>((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_EqualToZero_m94DE5959DCA94ACB1EE2476DEA3782B93AF314F4 (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___1_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)(L_0|L_4));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = ___0_len;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_8>>1))|((int32_t)(L_9&1))));
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_10, 1))>>((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_GetMaximumDivsteps_m707DB930F446320392FCEFE283DE5B23E6C5E975 (int32_t ___0_bits, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_bits;
		int32_t L_1 = ___0_bits;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)46))))
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)49), L_0));
			goto IL_000d;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)49), L_0));
	}
	{
		G_B3_0 = ((int32_t)47);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)80);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		return ((int32_t)(((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0))/((int32_t)17)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mod_IsOne_mCD72B886434CA7419F4039A31126517201FC3700 (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___1_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_len;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mod_IsZero_mD822261ED1B5DCFD79C33128653FF7519875026B (int32_t ___0_len, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___1_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}

IL_0007:
	{
		V_0 = 1;
		goto IL_0016;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_len;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mod_Negate30_m3E4E978C23453FAF47B6BCF899E3C65F6F029773 (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_D, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___0_len30;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_2 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___1_D;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_D;
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)((int32_t)(L_8&((int32_t)1073741823))));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)(L_9>>((int32_t)30)));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0023:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___1_D;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_D;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)L_20);
		int32_t L_21 = V_0;
		V_0 = ((int32_t)(L_21>>((int32_t)30)));
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_UpdateDE30_m26385DE27B8FBA3A515C63DF947D38678FC8F3BF (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_D, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_E, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, int32_t ___4_m0Inv32, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___5_M, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int64_t V_12 = 0;
	int64_t V_13 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___3_t;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___3_t;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___3_t;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___3_t;
		NullCheck(L_9);
		int32_t L_10 = 3;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_D;
		int32_t L_13 = ___0_len30;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_10 = ((int32_t)(L_15>>((int32_t)31)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___2_E;
		int32_t L_17 = ___0_len30;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_11 = ((int32_t)(L_19>>((int32_t)31)));
		int32_t L_20 = V_0;
		int32_t L_21 = V_10;
		int32_t L_22 = V_1;
		int32_t L_23 = V_11;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_20&L_21)), ((int32_t)(L_22&L_23))));
		int32_t L_24 = V_2;
		int32_t L_25 = V_10;
		int32_t L_26 = V_3;
		int32_t L_27 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_24&L_25)), ((int32_t)(L_26&L_27))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___5_M;
		NullCheck(L_28);
		int32_t L_29 = 0;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_9 = L_30;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = ___1_D;
		NullCheck(L_31);
		int32_t L_32 = 0;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_4 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___2_E;
		NullCheck(L_34);
		int32_t L_35 = 0;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_5 = L_36;
		int32_t L_37 = V_0;
		int32_t L_38 = V_4;
		int32_t L_39 = V_1;
		int32_t L_40 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_37), ((int64_t)L_38))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_39), ((int64_t)L_40)))));
		int32_t L_41 = V_2;
		int32_t L_42 = V_4;
		int32_t L_43 = V_3;
		int32_t L_44 = V_5;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_41), ((int64_t)L_42))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_43), ((int64_t)L_44)))));
		int32_t L_45 = V_7;
		int32_t L_46 = ___4_m0Inv32;
		int64_t L_47 = V_12;
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_45, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)L_47))), L_48))&((int32_t)1073741823)))));
		int32_t L_49 = V_8;
		int32_t L_50 = ___4_m0Inv32;
		int64_t L_51 = V_13;
		int32_t L_52 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_49, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_50, ((int32_t)L_51))), L_52))&((int32_t)1073741823)))));
		int64_t L_53 = V_12;
		int32_t L_54 = V_9;
		int32_t L_55 = V_7;
		V_12 = ((int64_t)il2cpp_codegen_add(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_54), ((int64_t)L_55)))));
		int64_t L_56 = V_13;
		int32_t L_57 = V_9;
		int32_t L_58 = V_8;
		V_13 = ((int64_t)il2cpp_codegen_add(L_56, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_57), ((int64_t)L_58)))));
		int64_t L_59 = V_12;
		V_12 = ((int64_t)(L_59>>((int32_t)30)));
		int64_t L_60 = V_13;
		V_13 = ((int64_t)(L_60>>((int32_t)30)));
		V_6 = 1;
		goto IL_0134;
	}

IL_00bb:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ___5_M;
		int32_t L_62 = V_6;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		int32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_9 = L_64;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___1_D;
		int32_t L_66 = V_6;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = L_68;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ___2_E;
		int32_t L_70 = V_6;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_5 = L_72;
		int64_t L_73 = V_12;
		int32_t L_74 = V_0;
		int32_t L_75 = V_4;
		int32_t L_76 = V_1;
		int32_t L_77 = V_5;
		int32_t L_78 = V_9;
		int32_t L_79 = V_7;
		V_12 = ((int64_t)il2cpp_codegen_add(L_73, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_74), ((int64_t)L_75))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_76), ((int64_t)L_77))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_78), ((int64_t)L_79)))))));
		int64_t L_80 = V_13;
		int32_t L_81 = V_2;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		int32_t L_84 = V_5;
		int32_t L_85 = V_9;
		int32_t L_86 = V_8;
		V_13 = ((int64_t)il2cpp_codegen_add(L_80, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_81), ((int64_t)L_82))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_83), ((int64_t)L_84))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_85), ((int64_t)L_86)))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = ___1_D;
		int32_t L_88 = V_6;
		int64_t L_89 = V_12;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_88, 1))), (int32_t)((int32_t)(((int32_t)L_89)&((int32_t)1073741823))));
		int64_t L_90 = V_12;
		V_12 = ((int64_t)(L_90>>((int32_t)30)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = ___2_E;
		int32_t L_92 = V_6;
		int64_t L_93 = V_13;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_92, 1))), (int32_t)((int32_t)(((int32_t)L_93)&((int32_t)1073741823))));
		int64_t L_94 = V_13;
		V_13 = ((int64_t)(L_94>>((int32_t)30)));
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_0134:
	{
		int32_t L_96 = V_6;
		int32_t L_97 = ___0_len30;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_00bb;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = ___1_D;
		int32_t L_99 = ___0_len30;
		int64_t L_100 = V_12;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_99, 1))), (int32_t)((int32_t)L_100));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ___2_E;
		int32_t L_102 = ___0_len30;
		int64_t L_103 = V_13;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_102, 1))), (int32_t)((int32_t)L_103));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod_UpdateFG30_m15EC44660FEB70C67BF84F45A560FACBBCF3786F (int32_t ___0_len30, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_F, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_G, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_t, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___3_t;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___3_t;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___3_t;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___3_t;
		NullCheck(L_9);
		int32_t L_10 = 3;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_F;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___2_G;
		NullCheck(L_15);
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		int32_t L_18 = V_0;
		int32_t L_19 = V_4;
		int32_t L_20 = V_1;
		int32_t L_21 = V_5;
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_18), ((int64_t)L_19))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_20), ((int64_t)L_21)))));
		int32_t L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		int32_t L_25 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_22), ((int64_t)L_23))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_24), ((int64_t)L_25)))));
		int64_t L_26 = V_7;
		V_7 = ((int64_t)(L_26>>((int32_t)30)));
		int64_t L_27 = V_8;
		V_8 = ((int64_t)(L_27>>((int32_t)30)));
		V_6 = 1;
		goto IL_00ad;
	}

IL_004b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___1_F;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = L_31;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___2_G;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_5 = L_35;
		int64_t L_36 = V_7;
		int32_t L_37 = V_0;
		int32_t L_38 = V_4;
		int32_t L_39 = V_1;
		int32_t L_40 = V_5;
		V_7 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_37), ((int64_t)L_38))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_39), ((int64_t)L_40)))))));
		int64_t L_41 = V_8;
		int32_t L_42 = V_2;
		int32_t L_43 = V_4;
		int32_t L_44 = V_3;
		int32_t L_45 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_add(L_41, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_42), ((int64_t)L_43))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_44), ((int64_t)L_45)))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = ___1_F;
		int32_t L_47 = V_6;
		int64_t L_48 = V_7;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_47, 1))), (int32_t)((int32_t)(((int32_t)L_48)&((int32_t)1073741823))));
		int64_t L_49 = V_7;
		V_7 = ((int64_t)(L_49>>((int32_t)30)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ___2_G;
		int32_t L_51 = V_6;
		int64_t L_52 = V_8;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_51, 1))), (int32_t)((int32_t)(((int32_t)L_52)&((int32_t)1073741823))));
		int64_t L_53 = V_8;
		V_8 = ((int64_t)(L_53>>((int32_t)30)));
		int32_t L_54 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00ad:
	{
		int32_t L_55 = V_6;
		int32_t L_56 = ___0_len30;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_004b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ___1_F;
		int32_t L_58 = ___0_len30;
		int64_t L_59 = V_7;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_58, 1))), (int32_t)((int32_t)L_59));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ___2_G;
		int32_t L_61 = ___0_len30;
		int64_t L_62 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_61, 1))), (int32_t)((int32_t)L_62));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mod__cctor_m4ADFFD8D63483BB75A0327103C021AD690734FA3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_0, NULL);
		((Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_StaticFields*)il2cpp_codegen_static_fields_for(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var))->___RandomSource = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_StaticFields*)il2cpp_codegen_static_fields_for(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var))->___RandomSource), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_Add_m056DC97726A0EF6306144D6DF082169EF6A23993 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___3_z;
		int32_t L_10 = V_1;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0021:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___0_len;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		uint64_t L_16 = V_0;
		return ((int32_t)(uint32_t)L_16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_Add33To_mC7A24F7EB1B4CBE62EA3007967AE5751D99F00A0 (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint32_t L_3 = ___1_x;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_2), ((int64_t)(uint64_t)L_3)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		uint64_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_5));
		uint64_t L_6 = V_0;
		V_0 = ((int64_t)((uint64_t)L_6>>((int32_t)32)));
		uint64_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_10), ((int64_t)1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_z;
		uint64_t L_12 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_12));
		uint64_t L_13 = V_0;
		V_0 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_15 = ___0_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_z;
		uint32_t L_17;
		L_17 = Nat_IncAt_m761D6FC8730812D9FD59CD2E59F70457653528A9(L_15, L_16, 2, NULL);
		return L_17;
	}

IL_0032:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddBothTo_m3C5EE4185EB34C26B674C324AE8815A7B5CC305A (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0026;
	}

IL_0007:
	{
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___3_z;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8))), ((int64_t)(uint64_t)L_12)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___3_z;
		int32_t L_14 = V_1;
		uint64_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)(uint32_t)L_15));
		uint64_t L_16 = V_0;
		V_0 = ((int64_t)((uint64_t)L_16>>((int32_t)32)));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0026:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ___0_len;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0007;
		}
	}
	{
		uint64_t L_20 = V_0;
		return ((int32_t)(uint32_t)L_20);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddTo_mD07CFA3A37AE56F1CE624F5D3830B7E9C88A5BBF (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = V_1;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0021:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___0_len;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		uint64_t L_16 = V_0;
		return ((int32_t)(uint32_t)L_16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddTo_mFC93824AD1EFEF9B8BF65FAA1B194C52C41484D1 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0029;
	}

IL_0007:
	{
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___3_z;
		int32_t L_7 = ___4_zOff;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_10)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___3_z;
		int32_t L_12 = ___4_zOff;
		int32_t L_13 = V_1;
		uint64_t L_14 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13))), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0029:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = ___0_len;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		uint64_t L_19 = V_0;
		return ((int32_t)(uint32_t)L_19);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddWordAt_m69287D723F9D58E8ECA2E7004BAA4E33D95BDCA7 (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zPos, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___1_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		int32_t L_2 = ___3_zPos;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_0), ((int64_t)(uint64_t)L_4)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zPos;
		uint64_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((int32_t)(uint32_t)L_7));
		uint64_t L_8 = V_0;
		V_0 = ((int64_t)((uint64_t)L_8>>((int32_t)32)));
		uint64_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_10 = ___0_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_z;
		int32_t L_12 = ___3_zPos;
		uint32_t L_13;
		L_13 = Nat_IncAt_m761D6FC8730812D9FD59CD2E59F70457653528A9(L_10, L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		return L_13;
	}

IL_0020:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddWordTo_m9C68EB5C1C69AEF8CCBC6604E8B07DF16202824B (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___1_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_0), ((int64_t)(uint64_t)L_3)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		uint64_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_5));
		uint64_t L_6 = V_0;
		V_0 = ((int64_t)((uint64_t)L_6>>((int32_t)32)));
		uint64_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = ___0_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		uint32_t L_10;
		L_10 = Nat_IncAt_m761D6FC8730812D9FD59CD2E59F70457653528A9(L_8, L_9, 1, NULL);
		return L_10;
	}

IL_001e:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_CAdd_m6E497E6974AED75B020BE8C26449592FEEE12A4D (int32_t ___0_len, int32_t ___1_mask, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_mask;
		V_0 = ((-((int32_t)(L_0&1))));
		V_1 = ((int64_t)0);
		V_2 = 0;
		goto IL_0029;
	}

IL_000c:
	{
		uint64_t L_1 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_x;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___3_y;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_9&(int32_t)L_10))))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___4_z;
		int32_t L_12 = V_2;
		uint64_t L_13 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((int32_t)(uint32_t)L_13));
		uint64_t L_14 = V_1;
		V_1 = ((int64_t)((uint64_t)L_14>>((int32_t)32)));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0029:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___0_len;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000c;
		}
	}
	{
		uint64_t L_18 = V_1;
		return ((int32_t)(uint32_t)L_18);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat_Copy_m15D675BF52484CA2790F8D3ECE626D2C7EB23232 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		int32_t L_1 = ___2_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___3_z;
		int32_t L_3 = ___4_zOff;
		int32_t L_4 = ___0_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat_Create_mB13654B804EA8487B6F8C78FD4B3326327533074 (int32_t ___0_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat_Create64_m5DBB7EDB905EBA60DDEBE951977B5BBED7BEB97F (int32_t ___0_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_len;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_Dec_m24A99C28E08D635B72D4168B175F72AD566DC0CF (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint32_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint32_t*)L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_4 = V_1;
		*((int32_t*)L_2) = (int32_t)L_4;
		uint32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_len;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_DecAt_m6DE1D479B034EB39675818B1DB0CACFED6D56AFC (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zPos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = ___2_zPos;
		V_0 = L_0;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint32_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int32_t L_4 = *((uint32_t*)L_3);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		uint32_t L_5 = V_1;
		*((int32_t*)L_3) = (int32_t)L_5;
		uint32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_len;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_Eq_m63EDC9A5D8DAD49F20D6675A658B7A1B906F41B9 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_len;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0014;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_4) == ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0014:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD (int32_t ___0_bits, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_bits;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD_RuntimeMethod_var)));
	}

IL_000a:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___1_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_2, NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ___1_x;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_4, NULL);
		int32_t L_6 = ___0_bits;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_8 = ___0_bits;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, ((int32_t)31)))>>5));
		int32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10;
		L_10 = Nat_Create_mB13654B804EA8487B6F8C78FD4B3326327533074(L_9, NULL);
		V_1 = L_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = ___1_x;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = BigInteger_get_IntValue_m51372C2C24032F9378F895580BB3CD5821CCC1D7(L_12, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_13);
		V_2 = 1;
		goto IL_0054;
	}

IL_003d:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = ___1_x;
		NullCheck(L_14);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15;
		L_15 = BigInteger_ShiftRight_mC1242A0E5B8DAB62B6D63EE44FC1E35D170C5268(L_14, ((int32_t)32), NULL);
		___1_x = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		int32_t L_17 = V_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_18 = ___1_x;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = BigInteger_get_IntValue_m51372C2C24032F9378F895580BB3CD5821CCC1D7(L_18, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0054:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat_FromBigInteger64_mC47345974202CF431EC827B619032C5D86A712C4 (int32_t ___0_bits, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_bits;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat_FromBigInteger64_mC47345974202CF431EC827B619032C5D86A712C4_RuntimeMethod_var)));
	}

IL_000a:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___1_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_2, NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ___1_x;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_4, NULL);
		int32_t L_6 = ___0_bits;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_001c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat_FromBigInteger64_mC47345974202CF431EC827B619032C5D86A712C4_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_8 = ___0_bits;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, ((int32_t)63)))>>6));
		int32_t L_9 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10;
		L_10 = Nat_Create64_m5DBB7EDB905EBA60DDEBE951977B5BBED7BEB97F(L_9, NULL);
		V_1 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = ___1_x;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = BigInteger_get_LongValue_mB898FF65507542EF5A3A01CFF020993AE392A76E(L_12, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_13);
		V_2 = 1;
		goto IL_0054;
	}

IL_003d:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = ___1_x;
		NullCheck(L_14);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15;
		L_15 = BigInteger_ShiftRight_mC1242A0E5B8DAB62B6D63EE44FC1E35D170C5268(L_14, ((int32_t)64), NULL);
		___1_x = L_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_1;
		int32_t L_17 = V_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_18 = ___1_x;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = BigInteger_get_LongValue_mB898FF65507542EF5A3A01CFF020993AE392A76E(L_18, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint64_t)L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0054:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_003d;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_GetBit_mFFFB320175A938895A724B67B77F489B9711BCC5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		V_0 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_x;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_8 = ___1_bit;
		V_1 = ((int32_t)(L_8&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_12>>((int32_t)(L_13&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_Gte_m0AB9084A9A6D11BE869652D2FBCB3D24FC3F3135 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = ___0_len;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_001e;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_2;
		if ((!(((uint32_t)L_9) < ((uint32_t)L_10))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		uint32_t L_11 = V_1;
		uint32_t L_12 = V_2;
		if ((!(((uint32_t)L_11) > ((uint32_t)L_12))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)1;
	}

IL_001a:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_001e:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_Inc_m08091C23575B6AED83781189440548833AC0A79C (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint32_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint32_t*)L_2);
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		uint32_t L_4 = V_1;
		*((int32_t*)L_2) = (int32_t)L_4;
		uint32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001b:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_len;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_Inc_mB862EDB43B31A3928F6DF085BBE881620B894D1E (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		uint32_t L_8 = V_1;
		if (!L_8)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0021;
	}

IL_0017:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_x;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)L_14);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0021:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___0_len;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0027:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = ___0_len;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_IncAt_m761D6FC8730812D9FD59CD2E59F70457653528A9 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zPos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = ___2_zPos;
		V_0 = L_0;
		goto IL_001b;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint32_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int32_t L_4 = *((uint32_t*)L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		uint32_t L_5 = V_1;
		*((int32_t*)L_3) = (int32_t)L_5;
		uint32_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_len;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zOff, int32_t ___3_zPos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = ___3_zPos;
		V_0 = L_0;
		goto IL_001d;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		int32_t L_2 = ___2_zOff;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		uint32_t* L_4 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_2, L_3)))));
		int32_t L_5 = *((uint32_t*)L_4);
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_6 = V_1;
		*((int32_t*)L_4) = (int32_t)L_6;
		uint32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___0_len;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_IsOne_m6F06B4E5BC2A56F4D9B0EBD05193DE53C6E3F0B1 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_len;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_IsZero_m1C559481E0B2E69CA4CCAE5C7AFC823E3DDF3E96 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}

IL_0007:
	{
		V_0 = 1;
		goto IL_0016;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0016:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___0_len;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_LessThan_mAB320F1667CA7D6B223F64D9F0F73F4F8D6C7D4E (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___0_len;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0007;
		}
	}
	{
		int64_t L_13 = V_0;
		return ((int32_t)L_13);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_Mul31BothAdd_mC286FDC6A9C049EEB4BB924FFB774B16D952F1A8 (int32_t ___0_len, uint32_t ___1_a, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, uint32_t ___3_b, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_a;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint32_t L_1 = ___3_b;
		V_2 = ((int64_t)(uint64_t)L_1);
		V_3 = 0;
	}

IL_000b:
	{
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_x;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		uint64_t L_8 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_y;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___5_z;
		int32_t L_14 = ___6_zOff;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		uint32_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, ((int64_t)(uint64_t)L_7))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_8, ((int64_t)(uint64_t)L_12))))), ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___5_z;
		int32_t L_19 = ___6_zOff;
		int32_t L_20 = V_3;
		uint64_t L_21 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, L_20))), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		int32_t L_23 = V_3;
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		V_3 = L_24;
		int32_t L_25 = ___0_len;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_000b;
		}
	}
	{
		uint64_t L_26 = V_0;
		return ((int32_t)(uint32_t)L_26);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_MulWordAddTo_m742DCD26B977DDCCE898A564903737E2307F7CC8 (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		V_2 = 0;
	}

IL_0008:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___2_y;
		int32_t L_4 = ___3_yOff;
		int32_t L_5 = V_2;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___4_z;
		int32_t L_9 = ___5_zOff;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		uint32_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_7))), ((int64_t)(uint64_t)L_12)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___4_z;
		int32_t L_14 = ___5_zOff;
		int32_t L_15 = V_2;
		uint64_t L_16 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, L_15))), (uint32_t)((int32_t)(uint32_t)L_16));
		uint64_t L_17 = V_0;
		V_0 = ((int64_t)((uint64_t)L_17>>((int32_t)32)));
		int32_t L_18 = V_2;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		V_2 = L_19;
		int32_t L_20 = ___0_len;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0008;
		}
	}
	{
		uint64_t L_21 = V_0;
		return ((int32_t)(uint32_t)L_21);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftDownBit_m3CE84243637D1040BEAA3950386F0923D09CC613 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, uint32_t ___2_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = ___0_len;
		V_0 = L_0;
		goto IL_0016;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_z;
		int32_t L_6 = V_0;
		uint32_t L_7 = V_1;
		uint32_t L_8 = ___2_c;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_7>>1))|((int32_t)((int32_t)L_8<<((int32_t)31))))));
		uint32_t L_9 = V_1;
		___2_c = L_9;
	}

IL_0016:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		uint32_t L_12 = ___2_c;
		return ((int32_t)((int32_t)L_12<<((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftDownBits_mC8A3814810DA4A940F99ABFDDAB8B0EE16262204 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, int32_t ___3_bits, uint32_t ___4_c, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = ___0_len;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___5_z;
		int32_t L_7 = ___6_zOff;
		int32_t L_8 = V_0;
		uint32_t L_9 = V_1;
		int32_t L_10 = ___3_bits;
		uint32_t L_11 = ___4_c;
		int32_t L_12 = ___3_bits;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, L_8))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)(L_10&((int32_t)31)))))|((int32_t)((int32_t)L_11<<((int32_t)(((-L_12))&((int32_t)31))))))));
		uint32_t L_13 = V_1;
		___4_c = L_13;
	}

IL_0023:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		V_0 = L_15;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		uint32_t L_16 = ___4_c;
		int32_t L_17 = ___3_bits;
		return ((int32_t)((int32_t)L_16<<((int32_t)(((-L_17))&((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftUpBit_m4C4F54CF340CC7A0F00B03EFA616F1CDB6BE579E (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, uint32_t ___2_c, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___3_z;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		uint32_t L_7 = ___2_c;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_6<<1))|((int32_t)((uint32_t)L_7>>((int32_t)31))))));
		uint32_t L_8 = V_1;
		___2_c = L_8;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001a:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_len;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		uint32_t L_12 = ___2_c;
		return ((int32_t)((uint32_t)L_12>>((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftUpBit_m785636DB8FB579613F0B33C2507729FCD5962AB4 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, uint32_t ___3_c, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		int32_t L_1 = ___2_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___4_z;
		int32_t L_6 = ___5_zOff;
		int32_t L_7 = V_0;
		uint32_t L_8 = V_1;
		uint32_t L_9 = ___3_c;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, L_7))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_8<<1))|((int32_t)((uint32_t)L_9>>((int32_t)31))))));
		uint32_t L_10 = V_1;
		___3_c = L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0020:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		uint32_t L_14 = ___3_c;
		return ((int32_t)((uint32_t)L_14>>((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat_ShiftUpBit64_m240498B281AE31C269247E96A1362562CA86CCE2 (int32_t ___0_len, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_x, int32_t ___2_xOff, uint64_t ___3_c, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_x;
		int32_t L_1 = ___2_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int64_t L_4 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___4_z;
		int32_t L_6 = ___5_zOff;
		int32_t L_7 = V_0;
		uint64_t L_8 = V_1;
		uint64_t L_9 = ___3_c;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, L_7))), (uint64_t)((int64_t)(((int64_t)((int64_t)L_8<<1))|((int64_t)((uint64_t)L_9>>((int32_t)63))))));
		uint64_t L_10 = V_1;
		___3_c = L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0020:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		uint64_t L_14 = ___3_c;
		return ((int64_t)((uint64_t)L_14>>((int32_t)63)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftUpBits_mEC8E6B19EA0E42769E6E4A27D57F32BB1B26B9BB (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_bits, uint32_t ___3_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		int32_t L_7 = ___2_bits;
		uint32_t L_8 = ___3_c;
		int32_t L_9 = ___2_bits;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_6<<((int32_t)(L_7&((int32_t)31)))))|((int32_t)((uint32_t)L_8>>((int32_t)(((-L_9))&((int32_t)31))))))));
		uint32_t L_10 = V_1;
		___3_c = L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0020:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		uint32_t L_14 = ___3_c;
		int32_t L_15 = ___2_bits;
		return ((int32_t)((uint32_t)L_14>>((int32_t)(((-L_15))&((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat_ShiftUpBits64_mC56D21211BB8B63808F0AAEBF8B34267BE435796 (int32_t ___0_len, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, int32_t ___2_zOff, int32_t ___3_bits, uint64_t ___4_c, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		int32_t L_1 = ___2_zOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int64_t L_4 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___1_z;
		int32_t L_6 = ___2_zOff;
		int32_t L_7 = V_0;
		uint64_t L_8 = V_1;
		int32_t L_9 = ___3_bits;
		uint64_t L_10 = ___4_c;
		int32_t L_11 = ___3_bits;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, L_7))), (uint64_t)((int64_t)(((int64_t)((int64_t)L_8<<((int32_t)(L_9&((int32_t)63)))))|((int64_t)((uint64_t)L_10>>((int32_t)(((-L_11))&((int32_t)63))))))));
		uint64_t L_12 = V_1;
		___4_c = L_12;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0025:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_len;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		uint64_t L_16 = ___4_c;
		int32_t L_17 = ___3_bits;
		return ((int64_t)((uint64_t)L_16>>((int32_t)(((-L_17))&((int32_t)63)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftUpBits_mA911CF74DE8B560F777B17AC959152A9F832A184 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_bits, uint32_t ___3_c, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___4_z;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		int32_t L_7 = ___2_bits;
		uint32_t L_8 = ___3_c;
		int32_t L_9 = ___2_bits;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_6<<((int32_t)(L_7&((int32_t)31)))))|((int32_t)((uint32_t)L_8>>((int32_t)(((-L_9))&((int32_t)31))))))));
		uint32_t L_10 = V_1;
		___3_c = L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0021:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		uint32_t L_14 = ___3_c;
		int32_t L_15 = ___2_bits;
		return ((int32_t)((uint32_t)L_14>>((int32_t)(((-L_15))&((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat_ShiftUpBits64_m32AA19B660AD948900F831D43F092A3A03334A38 (int32_t ___0_len, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_x, int32_t ___2_xOff, int32_t ___3_bits, uint64_t ___4_c, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_x;
		int32_t L_1 = ___2_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int64_t L_4 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___5_z;
		int32_t L_6 = ___6_zOff;
		int32_t L_7 = V_0;
		uint64_t L_8 = V_1;
		int32_t L_9 = ___3_bits;
		uint64_t L_10 = ___4_c;
		int32_t L_11 = ___3_bits;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_6, L_7))), (uint64_t)((int64_t)(((int64_t)((int64_t)L_8<<((int32_t)(L_9&((int32_t)63)))))|((int64_t)((uint64_t)L_10>>((int32_t)(((-L_11))&((int32_t)63))))))));
		uint64_t L_12 = V_1;
		___4_c = L_12;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0027:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___0_len;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		uint64_t L_16 = ___4_c;
		int32_t L_17 = ___3_bits;
		return ((int64_t)((uint64_t)L_16>>((int32_t)(((-L_17))&((int32_t)63)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_Sub_mE858074A8C6E7113837E753A05870039F3641B16 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___3_z;
		int32_t L_10 = V_1;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0021:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___0_len;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		int64_t L_16 = V_0;
		return ((int32_t)L_16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_Sub33From_mBC9470AFE37F0C388D84DAB15E0F4B147E477C33 (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint32_t L_3 = ___1_x;
		V_0 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_2), ((int64_t)(uint64_t)L_3)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int64_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_5));
		int64_t L_6 = V_0;
		V_0 = ((int64_t)(L_6>>((int32_t)32)));
		int64_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_10), ((int64_t)1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_z;
		int64_t L_12 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_12));
		int64_t L_13 = V_0;
		V_0 = ((int64_t)(L_13>>((int32_t)32)));
		int64_t L_14 = V_0;
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_15 = ___0_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_z;
		int32_t L_17;
		L_17 = Nat_DecAt_m6DE1D479B034EB39675818B1DB0CACFED6D56AFC(L_15, L_16, 2, NULL);
		return L_17;
	}

IL_0032:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_SubFrom_mAD3F1EF5EACC5FC21E39EC35A2A9EDD8CCF00087 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_x;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = V_1;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0021:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___0_len;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0007;
		}
	}
	{
		int64_t L_16 = V_0;
		return ((int32_t)L_16);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_SubFrom_m3574A843E61B7A8F9204829B8DE9E350FFC04A2B (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = 0;
		goto IL_0029;
	}

IL_0007:
	{
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___3_z;
		int32_t L_2 = ___4_zOff;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_x;
		int32_t L_7 = ___2_xOff;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		uint32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_10)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___3_z;
		int32_t L_12 = ___4_zOff;
		int32_t L_13 = V_1;
		int64_t L_14 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13))), (uint32_t)((int32_t)(uint32_t)L_14));
		int64_t L_15 = V_0;
		V_0 = ((int64_t)(L_15>>((int32_t)32)));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0029:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = ___0_len;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0007;
		}
	}
	{
		int64_t L_19 = V_0;
		return ((int32_t)L_19);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_SubWordFrom_m67A604D166D033EDD060DB104E5B6AFBEF21809F (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint32_t L_3 = ___1_x;
		V_0 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_2), ((int64_t)(uint64_t)L_3)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int64_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_5));
		int64_t L_6 = V_0;
		V_0 = ((int64_t)(L_6>>((int32_t)32)));
		int64_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = ___0_len;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10;
		L_10 = Nat_DecAt_m6DE1D479B034EB39675818B1DB0CACFED6D56AFC(L_8, L_9, 1, NULL);
		return L_10;
	}

IL_001e:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat_ToBigInteger_mBC1B7ABADB999C0D597C8989D1F974A8029F7B5C (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		int32_t L_0 = ___0_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_0<<2)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_000d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_x;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		uint32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = ___0_len;
		int32_t L_10 = V_1;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_7, L_8, ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_9, 1)), L_10))<<2)), NULL);
	}

IL_0022:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___0_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_15, 1, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat_Zero_m0B5379975288C073AC02CB2C4B755640E1794424 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_len;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat128_Add_mC6FFBFE739F7F15D24D43F4DD9AF529B7F2EC0A7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		return ((int32_t)(uint32_t)L_40);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat128_AddBothTo_m96C11990CB9523E760879098B78C9BAA074628B2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		return ((int32_t)(uint32_t)L_52);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat128_Copy_m91530103534EDD69398B1E08437397C0A57FDEF3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint32_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint32_t)L_23);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat128_Copy64_mB0F4BA0C57EB6AE95457EBAA3C0CED4F5ADA9C50 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat128_Copy64_mB475A86056AD49638F98059ECB525C33E26990A0 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, int32_t ___1_xOff, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat128_Create_m3ABDB0012334E65CD00E4F6EC5C8E1988870E118 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat128_Create64_m23DE5CD06604A1A74CF0C7656B0CA1F376A292EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat128_CreateExt_m2D1988B036B776C7DFFE0E865EFA1B158847242A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat128_CreateExt64_m1A0A67B1B8C1674C61BEEC602BEDA90A1252601A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_Eq_mCF9EFD2829FBAA88D577D3AA70E9FF60EB9030DB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 3;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_Eq64_m345AD77149C49ADF014142F9CD5117A9C940A48D (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat128_GetBit_mF85FB679895CAA743A35C5AF6DE018C2EC60F4E5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		int32_t L_5 = ___1_bit;
		if ((((int32_t)((int32_t)(L_4&((int32_t)127)))) == ((int32_t)L_5)))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_6 = ___1_bit;
		V_0 = ((int32_t)(L_6>>5));
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_Gte_m34CB9B08ACB435BB66F68820A1578667FCE2383F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 3;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_IsOne_m1BB3AA185FDE0E57F20126D422FBE51CFA7A343D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_IsOne64_m7DC32ACB6B9F44ACE09CDD511E54A068A71326B9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_IsZero_m614119A6D8C0A1401FCEF767F09707E5A067A6FF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat128_IsZero64_mB9C228387B86949239124138A0D6063CC206435D (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat128_Mul_mF0F2913959E23F8E7C5AA0231DBF66612C9CED13 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		V_4 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = ((int64_t)(uint64_t)L_14);
		uint64_t L_15 = V_4;
		uint64_t L_16 = V_5;
		uint64_t L_17 = V_0;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_zz;
		uint64_t L_19 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_19));
		uint64_t L_20 = V_4;
		V_4 = ((int64_t)((uint64_t)L_20>>((int32_t)32)));
		uint64_t L_21 = V_4;
		uint64_t L_22 = V_5;
		uint64_t L_23 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)il2cpp_codegen_multiply((int64_t)L_22, (int64_t)L_23))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_zz;
		uint64_t L_25 = V_4;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_4;
		V_4 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_4;
		uint64_t L_28 = V_5;
		uint64_t L_29 = V_2;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_zz;
		uint64_t L_31 = V_4;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_4;
		V_4 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_4;
		uint64_t L_34 = V_5;
		uint64_t L_35 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		uint64_t L_37 = V_4;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_4;
		V_4 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_zz;
		uint64_t L_40 = V_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_40));
		V_6 = 1;
		goto IL_011e;
	}

IL_0084:
	{
		V_7 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_8 = ((int64_t)(uint64_t)L_44);
		uint64_t L_45 = V_7;
		uint64_t L_46 = V_8;
		uint64_t L_47 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_46, (int64_t)L_47)), ((int64_t)(uint64_t)L_51)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___2_zz;
		int32_t L_53 = V_6;
		uint64_t L_54 = V_7;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint32_t)((int32_t)(uint32_t)L_54));
		uint64_t L_55 = V_7;
		V_7 = ((int64_t)((uint64_t)L_55>>((int32_t)32)));
		uint64_t L_56 = V_7;
		uint64_t L_57 = V_8;
		uint64_t L_58 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = V_6;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_57, (int64_t)L_58)), ((int64_t)(uint64_t)L_62)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___2_zz;
		int32_t L_64 = V_6;
		uint64_t L_65 = V_7;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 1))), (uint32_t)((int32_t)(uint32_t)L_65));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((uint64_t)L_66>>((int32_t)32)));
		uint64_t L_67 = V_7;
		uint64_t L_68 = V_8;
		uint64_t L_69 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_zz;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_67, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_68, (int64_t)L_69)), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___2_zz;
		int32_t L_75 = V_6;
		uint64_t L_76 = V_7;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 2))), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_7;
		V_7 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_7;
		uint64_t L_79 = V_8;
		uint64_t L_80 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___2_zz;
		int32_t L_82 = V_6;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 3));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80)), ((int64_t)(uint64_t)L_84)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_zz;
		int32_t L_86 = V_6;
		uint64_t L_87 = V_7;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_86, 3))), (uint32_t)((int32_t)(uint32_t)L_87));
		uint64_t L_88 = V_7;
		V_7 = ((int64_t)((uint64_t)L_88>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___2_zz;
		int32_t L_90 = V_6;
		uint64_t L_91 = V_7;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 4))), (uint32_t)((int32_t)(uint32_t)L_91));
		int32_t L_92 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_011e:
	{
		int32_t L_93 = V_6;
		if ((((int32_t)L_93) < ((int32_t)4)))
		{
			goto IL_0084;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat128_MulAddTo_m86C38E9F833C9D1A9BDD65998BE31C79109349F9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		V_4 = ((int64_t)0);
		V_5 = 0;
		goto IL_00d0;
	}

IL_0020:
	{
		V_6 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = ((int64_t)(uint64_t)L_15);
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_7;
		uint64_t L_18 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_zz;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_17, (int64_t)L_18)), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_zz;
		int32_t L_24 = V_5;
		uint64_t L_25 = V_6;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_6;
		V_6 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_6;
		uint64_t L_28 = V_7;
		uint64_t L_29 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_zz;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint32_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29)), ((int64_t)(uint64_t)L_33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___2_zz;
		int32_t L_35 = V_5;
		uint64_t L_36 = V_6;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, 1))), (uint32_t)((int32_t)(uint32_t)L_36));
		uint64_t L_37 = V_6;
		V_6 = ((int64_t)((uint64_t)L_37>>((int32_t)32)));
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		uint64_t L_40 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_zz;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 2));
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_38, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_39, (int64_t)L_40)), ((int64_t)(uint64_t)L_44)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_zz;
		int32_t L_46 = V_5;
		uint64_t L_47 = V_6;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, 2))), (uint32_t)((int32_t)(uint32_t)L_47));
		uint64_t L_48 = V_6;
		V_6 = ((int64_t)((uint64_t)L_48>>((int32_t)32)));
		uint64_t L_49 = V_6;
		uint64_t L_50 = V_7;
		uint64_t L_51 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___2_zz;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 3));
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_50, (int64_t)L_51)), ((int64_t)(uint64_t)L_55)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___2_zz;
		int32_t L_57 = V_5;
		uint64_t L_58 = V_6;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_57, 3))), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_6;
		V_6 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_4;
		uint64_t L_61 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_zz;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 4));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add((int64_t)L_61, ((int64_t)(uint64_t)L_65)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		int32_t L_67 = V_5;
		uint64_t L_68 = V_4;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 4))), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_4;
		V_4 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		int32_t L_70 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_00d0:
	{
		int32_t L_71 = V_5;
		if ((((int32_t)L_71) < ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		uint64_t L_72 = V_4;
		return ((int32_t)(uint32_t)L_72);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat128_Square_m31C58920732C6ECE9B2ADCD037D7CC8B27B906CF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_12 = 3;
		V_13 = 8;
	}

IL_000d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_12;
		int32_t L_5 = L_4;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_14 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_13;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_13 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_14;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_13;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_13 = L_16;
		uint64_t L_17 = V_14;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_14;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_12;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_15 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_15;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_15;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_15;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint64_t L_73 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)((uint64_t)L_73>>((int32_t)32)))));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((int64_t)L_74&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_zz;
		NullCheck(L_75);
		int32_t L_76 = 6;
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint64_t L_78 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_77), ((int64_t)((uint64_t)L_78>>((int32_t)32)))));
		uint64_t L_79 = V_10;
		V_10 = ((int64_t)((int64_t)L_79&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_9;
		uint64_t L_82 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82))));
		uint64_t L_83 = V_7;
		V_3 = ((int32_t)(uint32_t)L_83);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_zz;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_2;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_85<<1))|(int32_t)L_86)));
		uint32_t L_87 = V_3;
		V_2 = ((int32_t)((uint32_t)L_87>>((int32_t)31)));
		uint64_t L_88 = V_8;
		uint64_t L_89 = V_7;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_8;
		uint64_t L_94 = V_9;
		uint64_t L_95 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_93>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, (int64_t)L_95))))));
		uint64_t L_96 = V_11;
		uint64_t L_97 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)((uint64_t)L_97>>((int32_t)32)))));
		uint64_t L_98 = V_8;
		V_3 = ((int32_t)(uint32_t)L_98);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___1_zz;
		uint32_t L_100 = V_3;
		uint32_t L_101 = V_2;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_100<<1))|(int32_t)L_101)));
		uint32_t L_102 = V_3;
		V_2 = ((int32_t)((uint32_t)L_102>>((int32_t)31)));
		uint64_t L_103 = V_10;
		V_3 = ((int32_t)(uint32_t)L_103);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___1_zz;
		uint32_t L_105 = V_3;
		uint32_t L_106 = V_2;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_105<<1))|(int32_t)L_106)));
		uint32_t L_107 = V_3;
		V_2 = ((int32_t)((uint32_t)L_107>>((int32_t)31)));
		uint64_t L_108 = V_11;
		V_3 = ((int32_t)(uint32_t)L_108);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___1_zz;
		uint32_t L_110 = V_3;
		uint32_t L_111 = V_2;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_110<<1))|(int32_t)L_111)));
		uint32_t L_112 = V_3;
		V_2 = ((int32_t)((uint32_t)L_112>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = ___1_zz;
		NullCheck(L_113);
		int32_t L_114 = 7;
		uint32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		uint64_t L_116 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_116>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___1_zz;
		uint32_t L_118 = V_3;
		uint32_t L_119 = V_2;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_118<<1))|(int32_t)L_119)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat128_Sub_m5935BB42C7892DD3BEC366030929EDE175CE18F7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		return ((int32_t)L_40);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat128_SubFrom_m965D431882BD203F18E3AB1CDA81EF9AB5AA3573 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		return ((int32_t)L_40);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat128_ToBigInteger_m09DF06B791738CA667B4DB81FA8D9DD3FACD0EFB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(3, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat128_ToBigInteger64_mCE262092E30B954E72FFA4475F9525CCFA3E9580 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(1, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_Add_m6380B6491E1E79FE18FF66A401C8D309772B6C9B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		return ((int32_t)(uint32_t)L_50);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_AddBothTo_m9A63500428FE9FFF0E7DAAAF1CBC9E1B83784BBF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		return ((int32_t)(uint32_t)L_65);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat160_Copy_m409918D0026B0BCB8B9A364A2BECB1D9FF19A9A0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint32_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint32_t)L_29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat160_Create_m64D3E230A73409EE86C0E9BBC2AB512EC61BDAEE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)5);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat160_CreateExt_mE7FF3D1DD563DAA9478E9485095660C4FF70A677 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat160_Eq_m2B3024BDF6E555BF3BADD40BF65F64F285BDD3EA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 4;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_GetBit_m637AB7A3E633E7B99A226FED274648AE45E5E694 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		V_0 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)5)))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat160_Gte_m4979F7F6C7E8BD1AE8940D6397389C4AB14CE5CF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 4;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat160_IsOne_m82512E77DE290FDAFE768EF2DA0D1AD447F8B844 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat160_IsZero_m8D473A86479BE41983F0863BBD6277E436E72C47 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat160_Mul_mAF752414C97307F98C72C91020506DB3DD409075 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		V_5 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = ((int64_t)(uint64_t)L_17);
		uint64_t L_18 = V_5;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_zz;
		uint64_t L_22 = V_5;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_22));
		uint64_t L_23 = V_5;
		V_5 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		uint64_t L_24 = V_5;
		uint64_t L_25 = V_6;
		uint64_t L_26 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)il2cpp_codegen_multiply((int64_t)L_25, (int64_t)L_26))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_zz;
		uint64_t L_28 = V_5;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_5;
		V_5 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_5;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_multiply((int64_t)L_31, (int64_t)L_32))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_zz;
		uint64_t L_34 = V_5;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_5;
		V_5 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_5;
		uint64_t L_37 = V_6;
		uint64_t L_38 = V_3;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_zz;
		uint64_t L_40 = V_5;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_40));
		uint64_t L_41 = V_5;
		V_5 = ((int64_t)((uint64_t)L_41>>((int32_t)32)));
		uint64_t L_42 = V_5;
		uint64_t L_43 = V_6;
		uint64_t L_44 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_42, ((int64_t)il2cpp_codegen_multiply((int64_t)L_43, (int64_t)L_44))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_zz;
		uint64_t L_46 = V_5;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_5;
		V_5 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		uint64_t L_49 = V_5;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_49));
		V_7 = 1;
		goto IL_015d;
	}

IL_00a1:
	{
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___0_x;
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_9 = ((int64_t)(uint64_t)L_53);
		uint64_t L_54 = V_8;
		uint64_t L_55 = V_9;
		uint64_t L_56 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_54, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_55, (int64_t)L_56)), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___2_zz;
		int32_t L_62 = V_7;
		uint64_t L_63 = V_8;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_8;
		V_8 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_8;
		uint64_t L_66 = V_9;
		uint64_t L_67 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___2_zz;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_66, (int64_t)L_67)), ((int64_t)(uint64_t)L_71)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_zz;
		int32_t L_73 = V_7;
		uint64_t L_74 = V_8;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 1))), (uint32_t)((int32_t)(uint32_t)L_74));
		uint64_t L_75 = V_8;
		V_8 = ((int64_t)((uint64_t)L_75>>((int32_t)32)));
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_9;
		uint64_t L_78 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_zz;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_77, (int64_t)L_78)), ((int64_t)(uint64_t)L_82)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = V_7;
		uint64_t L_85 = V_8;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_84, 2))), (uint32_t)((int32_t)(uint32_t)L_85));
		uint64_t L_86 = V_8;
		V_8 = ((int64_t)((uint64_t)L_86>>((int32_t)32)));
		uint64_t L_87 = V_8;
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_7;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 3));
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_88, (int64_t)L_89)), ((int64_t)(uint64_t)L_93)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___2_zz;
		int32_t L_95 = V_7;
		uint64_t L_96 = V_8;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_95, 3))), (uint32_t)((int32_t)(uint32_t)L_96));
		uint64_t L_97 = V_8;
		V_8 = ((int64_t)((uint64_t)L_97>>((int32_t)32)));
		uint64_t L_98 = V_8;
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_zz;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_102, 4));
		uint32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_98, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), ((int64_t)(uint64_t)L_104)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___2_zz;
		int32_t L_106 = V_7;
		uint64_t L_107 = V_8;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_106, 4))), (uint32_t)((int32_t)(uint32_t)L_107));
		uint64_t L_108 = V_8;
		V_8 = ((int64_t)((uint64_t)L_108>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___2_zz;
		int32_t L_110 = V_7;
		uint64_t L_111 = V_8;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_110, 5))), (uint32_t)((int32_t)(uint32_t)L_111));
		int32_t L_112 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_015d:
	{
		int32_t L_113 = V_7;
		if ((((int32_t)L_113) < ((int32_t)5)))
		{
			goto IL_00a1;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_MulAddTo_m66A858281187D98E843D44353717253ED3FF6F71 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		V_5 = ((int64_t)0);
		V_6 = 0;
		goto IL_00f8;
	}

IL_0026:
	{
		V_7 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = V_6;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_8 = ((int64_t)(uint64_t)L_18);
		uint64_t L_19 = V_7;
		uint64_t L_20 = V_8;
		uint64_t L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_zz;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21)), ((int64_t)(uint64_t)L_25)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___2_zz;
		int32_t L_27 = V_6;
		uint64_t L_28 = V_7;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_7;
		V_7 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_7;
		uint64_t L_31 = V_8;
		uint64_t L_32 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_zz;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_31, (int64_t)L_32)), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_zz;
		int32_t L_38 = V_6;
		uint64_t L_39 = V_7;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, 1))), (uint32_t)((int32_t)(uint32_t)L_39));
		uint64_t L_40 = V_7;
		V_7 = ((int64_t)((uint64_t)L_40>>((int32_t)32)));
		uint64_t L_41 = V_7;
		uint64_t L_42 = V_8;
		uint64_t L_43 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_zz;
		int32_t L_45 = V_6;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 2));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_42, (int64_t)L_43)), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		int32_t L_49 = V_6;
		uint64_t L_50 = V_7;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 2))), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_7;
		V_7 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_7;
		uint64_t L_53 = V_8;
		uint64_t L_54 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___2_zz;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), ((int64_t)(uint64_t)L_58)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = V_6;
		uint64_t L_61 = V_7;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_60, 3))), (uint32_t)((int32_t)(uint32_t)L_61));
		uint64_t L_62 = V_7;
		V_7 = ((int64_t)((uint64_t)L_62>>((int32_t)32)));
		uint64_t L_63 = V_7;
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		int32_t L_67 = V_6;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 4));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65)), ((int64_t)(uint64_t)L_69)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_zz;
		int32_t L_71 = V_6;
		uint64_t L_72 = V_7;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 4))), (uint32_t)((int32_t)(uint32_t)L_72));
		uint64_t L_73 = V_7;
		V_7 = ((int64_t)((uint64_t)L_73>>((int32_t)32)));
		uint64_t L_74 = V_5;
		uint64_t L_75 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_zz;
		int32_t L_77 = V_6;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add(L_77, 5));
		uint32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_add((int64_t)L_75, ((int64_t)(uint64_t)L_79)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___2_zz;
		int32_t L_81 = V_6;
		uint64_t L_82 = V_5;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, 5))), (uint32_t)((int32_t)(uint32_t)L_82));
		uint64_t L_83 = V_5;
		V_5 = ((int64_t)((uint64_t)L_83>>((int32_t)32)));
		int32_t L_84 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_00f8:
	{
		int32_t L_85 = V_6;
		if ((((int32_t)L_85) < ((int32_t)5)))
		{
			goto IL_0026;
		}
	}
	{
		uint64_t L_86 = V_5;
		return ((int32_t)(uint32_t)L_86);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat160_Mul33Add_mDE5CA5DD50F161E06FC799B2C6BF8C263D224C40 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		uint64_t L_81 = V_6;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, (int64_t)L_81));
		uint64_t L_82 = V_0;
		return L_82;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_Mul33DWordAdd_mC82B4422203920E3978AF62B5943606EF4EDA4C6 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(5, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_Mul33WordAdd_mCE5140A1E6431C0E2E42667D8E19924636B92912 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(5, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat160_MulWordsAdd_m28FB603855BDC29403CD3FAD40228DC39E58F964 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint32_t L_1 = ___1_y;
		V_2 = ((int64_t)(uint64_t)L_1);
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_2;
		uint64_t L_4 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		if (!L_22)
		{
			goto IL_0040;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint32_t L_25;
		L_25 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(5, L_23, L_24, 2, NULL);
		return L_25;
	}

IL_0040:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat160_Square_mB3871E7D4A95D58718BD036705CD7B5365D9552B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_15 = 4;
		V_16 = ((int32_t)10);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_15;
		int32_t L_5 = L_4;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_17 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_16;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_16 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_17;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_16;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_16 = L_16;
		uint64_t L_17 = V_17;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_17;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_15;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_18 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_18;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_18;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_18;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint64_t L_73 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)((uint64_t)L_73>>((int32_t)32)))));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((int64_t)L_74&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_zz;
		NullCheck(L_75);
		int32_t L_76 = 6;
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint64_t L_78 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_77), ((int64_t)((uint64_t)L_78>>((int32_t)32)))));
		uint64_t L_79 = V_10;
		V_10 = ((int64_t)((int64_t)L_79&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_9;
		uint64_t L_82 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82))));
		uint64_t L_83 = V_7;
		V_3 = ((int32_t)(uint32_t)L_83);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_zz;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_2;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_85<<1))|(int32_t)L_86)));
		uint32_t L_87 = V_3;
		V_2 = ((int32_t)((uint32_t)L_87>>((int32_t)31)));
		uint64_t L_88 = V_8;
		uint64_t L_89 = V_7;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_8;
		uint64_t L_94 = V_9;
		uint64_t L_95 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_93>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, (int64_t)L_95))))));
		uint64_t L_96 = V_8;
		V_8 = ((int64_t)((int64_t)L_96&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_97 = V_11;
		uint64_t L_98 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)((uint64_t)L_98>>((int32_t)32)))));
		uint64_t L_99 = V_10;
		V_10 = ((int64_t)((int64_t)L_99&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___0_x;
		NullCheck(L_100);
		int32_t L_101 = 4;
		uint32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_12 = ((int64_t)(uint64_t)L_102);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___1_zz;
		NullCheck(L_103);
		int32_t L_104 = 7;
		uint32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		uint64_t L_106 = V_11;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_105), ((int64_t)((uint64_t)L_106>>((int32_t)32)))));
		uint64_t L_107 = V_11;
		V_11 = ((int64_t)((int64_t)L_107&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___1_zz;
		NullCheck(L_108);
		int32_t L_109 = 8;
		uint32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint64_t L_111 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_110), ((int64_t)((uint64_t)L_111>>((int32_t)32)))));
		uint64_t L_112 = V_13;
		V_13 = ((int64_t)((int64_t)L_112&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_113 = V_8;
		uint64_t L_114 = V_12;
		uint64_t L_115 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, (int64_t)L_115))));
		uint64_t L_116 = V_8;
		V_3 = ((int32_t)(uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___1_zz;
		uint32_t L_118 = V_3;
		uint32_t L_119 = V_2;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_118<<1))|(int32_t)L_119)));
		uint32_t L_120 = V_3;
		V_2 = ((int32_t)((uint32_t)L_120>>((int32_t)31)));
		uint64_t L_121 = V_10;
		uint64_t L_122 = V_8;
		uint64_t L_123 = V_12;
		uint64_t L_124 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_121, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_122>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, (int64_t)L_124))))));
		uint64_t L_125 = V_11;
		uint64_t L_126 = V_10;
		uint64_t L_127 = V_12;
		uint64_t L_128 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_126>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, (int64_t)L_128))))));
		uint64_t L_129 = V_13;
		uint64_t L_130 = V_11;
		uint64_t L_131 = V_12;
		uint64_t L_132 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_129, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_130>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_131, (int64_t)L_132))))));
		uint64_t L_133 = V_14;
		uint64_t L_134 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_133, ((int64_t)((uint64_t)L_134>>((int32_t)32)))));
		uint64_t L_135 = V_10;
		V_3 = ((int32_t)(uint32_t)L_135);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ___1_zz;
		uint32_t L_137 = V_3;
		uint32_t L_138 = V_2;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_137<<1))|(int32_t)L_138)));
		uint32_t L_139 = V_3;
		V_2 = ((int32_t)((uint32_t)L_139>>((int32_t)31)));
		uint64_t L_140 = V_11;
		V_3 = ((int32_t)(uint32_t)L_140);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___1_zz;
		uint32_t L_142 = V_3;
		uint32_t L_143 = V_2;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_142<<1))|(int32_t)L_143)));
		uint32_t L_144 = V_3;
		V_2 = ((int32_t)((uint32_t)L_144>>((int32_t)31)));
		uint64_t L_145 = V_13;
		V_3 = ((int32_t)(uint32_t)L_145);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = ___1_zz;
		uint32_t L_147 = V_3;
		uint32_t L_148 = V_2;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_147<<1))|(int32_t)L_148)));
		uint32_t L_149 = V_3;
		V_2 = ((int32_t)((uint32_t)L_149>>((int32_t)31)));
		uint64_t L_150 = V_14;
		V_3 = ((int32_t)(uint32_t)L_150);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_151 = ___1_zz;
		uint32_t L_152 = V_3;
		uint32_t L_153 = V_2;
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_152<<1))|(int32_t)L_153)));
		uint32_t L_154 = V_3;
		V_2 = ((int32_t)((uint32_t)L_154>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = ___1_zz;
		NullCheck(L_155);
		int32_t L_156 = ((int32_t)9);
		uint32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		uint64_t L_158 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_158>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = ___1_zz;
		uint32_t L_160 = V_3;
		uint32_t L_161 = V_2;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_160<<1))|(int32_t)L_161)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat160_Sub_m7496732520BD5BF9F6F5A47E41AF179DD9F0CD7F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		return ((int32_t)L_50);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat160_SubFrom_m0EF64E85014E04444A7E0B5F084F7B0C8FCD8F36 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		return ((int32_t)L_50);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat160_ToBigInteger_m4CFD552E30020666635B39E1B2A6794AF3D7EF67 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(4, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)5)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_Add_m4ABE62D826AEE07A98BE8BB4D259EDD270735A9F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		return ((int32_t)(uint32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddBothTo_m2A51D9DE35B16A2D55952BA99FA41F5A4F439107 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		return ((int32_t)(uint32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddTo_m643229DD5A369427B1439A03ACDB2515C47FE36D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___4_cIn;
		V_0 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int32_t L_11 = ___3_zOff;
		uint64_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)L_12));
		uint64_t L_13 = V_0;
		V_0 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_18), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint64_t L_25 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_0;
		V_0 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_31), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		uint64_t L_38 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 2))), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		int32_t L_42 = ___1_xOff;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 3));
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_z;
		int32_t L_46 = ___3_zOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_44), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int32_t L_50 = ___3_zOff;
		uint64_t L_51 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 3))), (uint32_t)((int32_t)(uint32_t)L_51));
		uint64_t L_52 = V_0;
		V_0 = ((int64_t)((uint64_t)L_52>>((int32_t)32)));
		uint64_t L_53 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		int32_t L_55 = ___1_xOff;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		int32_t L_59 = ___3_zOff;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_57), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int32_t L_63 = ___3_zOff;
		uint64_t L_64 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 4))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_0;
		V_0 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		int32_t L_68 = ___1_xOff;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 5));
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___2_z;
		int32_t L_72 = ___3_zOff;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 5));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_70), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int32_t L_76 = ___3_zOff;
		uint64_t L_77 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 5))), (uint32_t)((int32_t)(uint32_t)L_77));
		uint64_t L_78 = V_0;
		V_0 = ((int64_t)((uint64_t)L_78>>((int32_t)32)));
		uint64_t L_79 = V_0;
		return ((int32_t)(uint32_t)L_79);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddToEachOther_mA20AB37302E6653AA90531CAC497F3E7F9AD611B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_u;
		int32_t L_2 = ___1_uOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_v;
		int32_t L_6 = ___3_vOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_u;
		int32_t L_10 = ___1_uOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_v;
		int32_t L_13 = ___3_vOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		uint64_t L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_u;
		int32_t L_18 = ___1_uOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_v;
		int32_t L_22 = ___3_vOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_20), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_u;
		int32_t L_26 = ___1_uOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_v;
		int32_t L_29 = ___3_vOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_u;
		int32_t L_34 = ___1_uOff;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 2));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_v;
		int32_t L_38 = ___3_vOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_36), ((int64_t)(uint64_t)L_40)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_u;
		int32_t L_42 = ___1_uOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (uint32_t)((int32_t)(uint32_t)L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_v;
		int32_t L_45 = ___3_vOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_u;
		int32_t L_50 = ___1_uOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_v;
		int32_t L_54 = ___3_vOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 3));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_u;
		int32_t L_58 = ___1_uOff;
		uint64_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 3))), (uint32_t)((int32_t)(uint32_t)L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_v;
		int32_t L_61 = ___3_vOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___0_u;
		int32_t L_66 = ___1_uOff;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 4));
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_v;
		int32_t L_70 = ___3_vOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___0_u;
		int32_t L_74 = ___1_uOff;
		uint64_t L_75 = V_0;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_v;
		int32_t L_77 = ___3_vOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___0_u;
		int32_t L_82 = ___1_uOff;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 5));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_v;
		int32_t L_86 = ___3_vOff;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_84), ((int64_t)(uint64_t)L_88)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___0_u;
		int32_t L_90 = ___1_uOff;
		uint64_t L_91 = V_0;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 5))), (uint32_t)((int32_t)(uint32_t)L_91));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_v;
		int32_t L_93 = ___3_vOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		return ((int32_t)(uint32_t)L_96);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Copy_m665C376BD5921F61F1ABA5E575255665922720B6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint32_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint32_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_z;
		int32_t L_31 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 5))), (uint32_t)L_35);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Copy64_m0FE2111E07F23E85EB9AF06976D3C383223F2661 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Copy64_m7950BEFE563064DE081A1E41E99FB4F2743759D4 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, int32_t ___1_xOff, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint64_t)L_17);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_Create_m080244D08AA36F401220A2C103FF8869E1F813F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)6);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat192_Create64_m627E533BD623A47B7EB775A8E56D5254CD0EC83D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)3);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_CreateExt_m25BB599D6E4AA0456D937EF17973F603C916ED04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat192_CreateExt64_m3BB1585B8DD3516E1697D0F1C6C2B7BDB8328D23 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)6);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Diff_m0A5BFDB7BC50400472B408FE32A513390581C3FD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_y;
		int32_t L_3 = ___3_yOff;
		bool L_4;
		L_4 = Nat192_Gte_m0BDBE96AB71D92AE438EB91B5CE08EE08CF6AAFA(L_0, L_1, L_2, L_3, NULL);
		bool L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_001b;
		}
		G_B1_0 = L_5;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___4_z;
		int32_t L_11 = ___5_zOff;
		int32_t L_12;
		L_12 = Nat192_Sub_mD6E3D13B71E6E218E8E7730D0E80CA771BD84F20(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return G_B1_0;
	}

IL_001b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___2_y;
		int32_t L_14 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___4_z;
		int32_t L_18 = ___5_zOff;
		int32_t L_19;
		L_19 = Nat192_Sub_mD6E3D13B71E6E218E8E7730D0E80CA771BD84F20(L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Eq_m057D3D1FCA4A878904726EF281BD8E65EC5C8D14 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 5;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Eq64_m2DD1CB86D167285C140F969FE148DAA701F85653 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_GetBit_mEC3EC37B34BC42AE85282732BD771BAD86D938C9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		V_0 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Gte_m7229B34818D8A74C4FE3744B73F04649D2168EFA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 5;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Gte_m0BDBE96AB71D92AE438EB91B5CE08EE08CF6AAFA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 5;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) < ((uint32_t)L_11))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) > ((uint32_t)L_13))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0020:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsOne_m3854DFA8BF73F7EF2178609CBAA196373357404B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsOne64_m5351FB1A463A65A7C234736104D88DD06ADDADFA (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsZero_mB9F9571B40A30930869A1D6EB1766615770B8263 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsZero64_m087250B4A4FF06E6BC5F61BAD95BC3224FFC339C (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_m1110336F8C51C175E8C3CB2936AEEAF800ECC4AA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		V_6 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = ((int64_t)(uint64_t)L_20);
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_7;
		uint64_t L_23 = V_0;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)il2cpp_codegen_multiply((int64_t)L_22, (int64_t)L_23))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_zz;
		uint64_t L_25 = V_6;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_6;
		V_6 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_6;
		uint64_t L_28 = V_7;
		uint64_t L_29 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_zz;
		uint64_t L_31 = V_6;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_6;
		V_6 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_6;
		uint64_t L_34 = V_7;
		uint64_t L_35 = V_2;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		uint64_t L_37 = V_6;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_6;
		V_6 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_6;
		uint64_t L_40 = V_7;
		uint64_t L_41 = V_3;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_zz;
		uint64_t L_43 = V_6;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_6;
		V_6 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_6;
		uint64_t L_46 = V_7;
		uint64_t L_47 = V_4;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_multiply((int64_t)L_46, (int64_t)L_47))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		uint64_t L_49 = V_6;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_6;
		V_6 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_7;
		uint64_t L_53 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_multiply((int64_t)L_52, (int64_t)L_53))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___2_zz;
		uint64_t L_55 = V_6;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_6;
		V_6 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		uint64_t L_58 = V_6;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_58));
		V_8 = 1;
		goto IL_019c;
	}

IL_00be:
	{
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___0_x;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_10 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_9;
		uint64_t L_64 = V_10;
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		int32_t L_67 = V_8;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65)), ((int64_t)(uint64_t)L_69)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_zz;
		int32_t L_71 = V_8;
		uint64_t L_72 = V_9;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (uint32_t)((int32_t)(uint32_t)L_72));
		uint64_t L_73 = V_9;
		V_9 = ((int64_t)((uint64_t)L_73>>((int32_t)32)));
		uint64_t L_74 = V_9;
		uint64_t L_75 = V_10;
		uint64_t L_76 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___2_zz;
		int32_t L_78 = V_8;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_75, (int64_t)L_76)), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___2_zz;
		int32_t L_82 = V_8;
		uint64_t L_83 = V_9;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 1))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_9;
		V_9 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_9;
		uint64_t L_86 = V_10;
		uint64_t L_87 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_zz;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 2));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_zz;
		int32_t L_93 = V_8;
		uint64_t L_94 = V_9;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 2))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_9;
		V_9 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_9;
		uint64_t L_97 = V_10;
		uint64_t L_98 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___2_zz;
		int32_t L_100 = V_8;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 3));
		uint32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_97, (int64_t)L_98)), ((int64_t)(uint64_t)L_102)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___2_zz;
		int32_t L_104 = V_8;
		uint64_t L_105 = V_9;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_104, 3))), (uint32_t)((int32_t)(uint32_t)L_105));
		uint64_t L_106 = V_9;
		V_9 = ((int64_t)((uint64_t)L_106>>((int32_t)32)));
		uint64_t L_107 = V_9;
		uint64_t L_108 = V_10;
		uint64_t L_109 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___2_zz;
		int32_t L_111 = V_8;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 4));
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_107, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_108, (int64_t)L_109)), ((int64_t)(uint64_t)L_113)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = ___2_zz;
		int32_t L_115 = V_8;
		uint64_t L_116 = V_9;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_115, 4))), (uint32_t)((int32_t)(uint32_t)L_116));
		uint64_t L_117 = V_9;
		V_9 = ((int64_t)((uint64_t)L_117>>((int32_t)32)));
		uint64_t L_118 = V_9;
		uint64_t L_119 = V_10;
		uint64_t L_120 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___2_zz;
		int32_t L_122 = V_8;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 5));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_118, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_119, (int64_t)L_120)), ((int64_t)(uint64_t)L_124)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = ___2_zz;
		int32_t L_126 = V_8;
		uint64_t L_127 = V_9;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_126, 5))), (uint32_t)((int32_t)(uint32_t)L_127));
		uint64_t L_128 = V_9;
		V_9 = ((int64_t)((uint64_t)L_128>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = ___2_zz;
		int32_t L_130 = V_8;
		uint64_t L_131 = V_9;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_130, 6))), (uint32_t)((int32_t)(uint32_t)L_131));
		int32_t L_132 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_132, 1));
	}

IL_019c:
	{
		int32_t L_133 = V_8;
		if ((((int32_t)L_133) < ((int32_t)6)))
		{
			goto IL_00be;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_mECD309C9E6CD8A3DFD67EB260D8C3DCFB3AA3C24 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		V_6 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		int32_t L_25 = ___1_xOff;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_7 = ((int64_t)(uint64_t)L_27);
		uint64_t L_28 = V_6;
		uint64_t L_29 = V_7;
		uint64_t L_30 = V_0;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, ((int64_t)il2cpp_codegen_multiply((int64_t)L_29, (int64_t)L_30))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___4_zz;
		int32_t L_32 = ___5_zzOff;
		uint64_t L_33 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)(uint32_t)L_33));
		uint64_t L_34 = V_6;
		V_6 = ((int64_t)((uint64_t)L_34>>((int32_t)32)));
		uint64_t L_35 = V_6;
		uint64_t L_36 = V_7;
		uint64_t L_37 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_35, ((int64_t)il2cpp_codegen_multiply((int64_t)L_36, (int64_t)L_37))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___4_zz;
		int32_t L_39 = ___5_zzOff;
		uint64_t L_40 = V_6;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 1))), (uint32_t)((int32_t)(uint32_t)L_40));
		uint64_t L_41 = V_6;
		V_6 = ((int64_t)((uint64_t)L_41>>((int32_t)32)));
		uint64_t L_42 = V_6;
		uint64_t L_43 = V_7;
		uint64_t L_44 = V_2;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_42, ((int64_t)il2cpp_codegen_multiply((int64_t)L_43, (int64_t)L_44))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___4_zz;
		int32_t L_46 = ___5_zzOff;
		uint64_t L_47 = V_6;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, 2))), (uint32_t)((int32_t)(uint32_t)L_47));
		uint64_t L_48 = V_6;
		V_6 = ((int64_t)((uint64_t)L_48>>((int32_t)32)));
		uint64_t L_49 = V_6;
		uint64_t L_50 = V_7;
		uint64_t L_51 = V_3;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)il2cpp_codegen_multiply((int64_t)L_50, (int64_t)L_51))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___4_zz;
		int32_t L_53 = ___5_zzOff;
		uint64_t L_54 = V_6;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 3))), (uint32_t)((int32_t)(uint32_t)L_54));
		uint64_t L_55 = V_6;
		V_6 = ((int64_t)((uint64_t)L_55>>((int32_t)32)));
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_7;
		uint64_t L_58 = V_4;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, ((int64_t)il2cpp_codegen_multiply((int64_t)L_57, (int64_t)L_58))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___4_zz;
		int32_t L_60 = ___5_zzOff;
		uint64_t L_61 = V_6;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_60, 4))), (uint32_t)((int32_t)(uint32_t)L_61));
		uint64_t L_62 = V_6;
		V_6 = ((int64_t)((uint64_t)L_62>>((int32_t)32)));
		uint64_t L_63 = V_6;
		uint64_t L_64 = V_7;
		uint64_t L_65 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___4_zz;
		int32_t L_67 = ___5_zzOff;
		uint64_t L_68 = V_6;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 5))), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_6;
		V_6 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___4_zz;
		int32_t L_71 = ___5_zzOff;
		uint64_t L_72 = V_6;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 6))), (uint32_t)((int32_t)(uint32_t)L_72));
		V_8 = 1;
		goto IL_01d5;
	}

IL_00e2:
	{
		int32_t L_73 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_73, 1));
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___0_x;
		int32_t L_75 = ___1_xOff;
		int32_t L_76 = V_8;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
		uint32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_10 = ((int64_t)(uint64_t)L_78);
		uint64_t L_79 = V_9;
		uint64_t L_80 = V_10;
		uint64_t L_81 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___4_zz;
		int32_t L_83 = ___5_zzOff;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_80, (int64_t)L_81)), ((int64_t)(uint64_t)L_85)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___4_zz;
		int32_t L_87 = ___5_zzOff;
		uint64_t L_88 = V_9;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (uint32_t)((int32_t)(uint32_t)L_88));
		uint64_t L_89 = V_9;
		V_9 = ((int64_t)((uint64_t)L_89>>((int32_t)32)));
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_10;
		uint64_t L_92 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___4_zz;
		int32_t L_94 = ___5_zzOff;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		uint32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_91, (int64_t)L_92)), ((int64_t)(uint64_t)L_96)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___4_zz;
		int32_t L_98 = ___5_zzOff;
		uint64_t L_99 = V_9;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_98, 1))), (uint32_t)((int32_t)(uint32_t)L_99));
		uint64_t L_100 = V_9;
		V_9 = ((int64_t)((uint64_t)L_100>>((int32_t)32)));
		uint64_t L_101 = V_9;
		uint64_t L_102 = V_10;
		uint64_t L_103 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___4_zz;
		int32_t L_105 = ___5_zzOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 2));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___4_zz;
		int32_t L_109 = ___5_zzOff;
		uint64_t L_110 = V_9;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 2))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_9;
		V_9 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_9;
		uint64_t L_113 = V_10;
		uint64_t L_114 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_zz;
		int32_t L_116 = ___5_zzOff;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 3));
		uint32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_113, (int64_t)L_114)), ((int64_t)(uint64_t)L_118)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___4_zz;
		int32_t L_120 = ___5_zzOff;
		uint64_t L_121 = V_9;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_120, 3))), (uint32_t)((int32_t)(uint32_t)L_121));
		uint64_t L_122 = V_9;
		V_9 = ((int64_t)((uint64_t)L_122>>((int32_t)32)));
		uint64_t L_123 = V_9;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___4_zz;
		int32_t L_127 = ___5_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 4));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125)), ((int64_t)(uint64_t)L_129)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___4_zz;
		int32_t L_131 = ___5_zzOff;
		uint64_t L_132 = V_9;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_131, 4))), (uint32_t)((int32_t)(uint32_t)L_132));
		uint64_t L_133 = V_9;
		V_9 = ((int64_t)((uint64_t)L_133>>((int32_t)32)));
		uint64_t L_134 = V_9;
		uint64_t L_135 = V_10;
		uint64_t L_136 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___4_zz;
		int32_t L_138 = ___5_zzOff;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 5));
		uint32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136)), ((int64_t)(uint64_t)L_140)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___4_zz;
		int32_t L_142 = ___5_zzOff;
		uint64_t L_143 = V_9;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_142, 5))), (uint32_t)((int32_t)(uint32_t)L_143));
		uint64_t L_144 = V_9;
		V_9 = ((int64_t)((uint64_t)L_144>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ___4_zz;
		int32_t L_146 = ___5_zzOff;
		uint64_t L_147 = V_9;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_146, 6))), (uint32_t)((int32_t)(uint32_t)L_147));
		int32_t L_148 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_01d5:
	{
		int32_t L_149 = V_8;
		if ((((int32_t)L_149) < ((int32_t)6)))
		{
			goto IL_00e2;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_MulAddTo_m311FB6E69F904029C871D6DA867CC30F16D94CFF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		V_6 = ((int64_t)0);
		V_7 = 0;
		goto IL_0120;
	}

IL_002c:
	{
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_9 = ((int64_t)(uint64_t)L_21);
		uint64_t L_22 = V_8;
		uint64_t L_23 = V_9;
		uint64_t L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___2_zz;
		int32_t L_26 = V_7;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_23, (int64_t)L_24)), ((int64_t)(uint64_t)L_28)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___2_zz;
		int32_t L_30 = V_7;
		uint64_t L_31 = V_8;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_8;
		V_8 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_8;
		uint64_t L_34 = V_9;
		uint64_t L_35 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35)), ((int64_t)(uint64_t)L_39)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_zz;
		int32_t L_41 = V_7;
		uint64_t L_42 = V_8;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, 1))), (uint32_t)((int32_t)(uint32_t)L_42));
		uint64_t L_43 = V_8;
		V_8 = ((int64_t)((uint64_t)L_43>>((int32_t)32)));
		uint64_t L_44 = V_8;
		uint64_t L_45 = V_9;
		uint64_t L_46 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_zz;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_45, (int64_t)L_46)), ((int64_t)(uint64_t)L_50)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___2_zz;
		int32_t L_52 = V_7;
		uint64_t L_53 = V_8;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_52, 2))), (uint32_t)((int32_t)(uint32_t)L_53));
		uint64_t L_54 = V_8;
		V_8 = ((int64_t)((uint64_t)L_54>>((int32_t)32)));
		uint64_t L_55 = V_8;
		uint64_t L_56 = V_9;
		uint64_t L_57 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_zz;
		int32_t L_59 = V_7;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 3));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_56, (int64_t)L_57)), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_zz;
		int32_t L_63 = V_7;
		uint64_t L_64 = V_8;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 3))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_8;
		V_8 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_8;
		uint64_t L_67 = V_9;
		uint64_t L_68 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_zz;
		int32_t L_70 = V_7;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_67, (int64_t)L_68)), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___2_zz;
		int32_t L_74 = V_7;
		uint64_t L_75 = V_8;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		uint64_t L_76 = V_8;
		V_8 = ((int64_t)((uint64_t)L_76>>((int32_t)32)));
		uint64_t L_77 = V_8;
		uint64_t L_78 = V_9;
		uint64_t L_79 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___2_zz;
		int32_t L_81 = V_7;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_78, (int64_t)L_79)), ((int64_t)(uint64_t)L_83)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_zz;
		int32_t L_85 = V_7;
		uint64_t L_86 = V_8;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_85, 5))), (uint32_t)((int32_t)(uint32_t)L_86));
		uint64_t L_87 = V_8;
		V_8 = ((int64_t)((uint64_t)L_87>>((int32_t)32)));
		uint64_t L_88 = V_6;
		uint64_t L_89 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_7;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add((int64_t)L_89, ((int64_t)(uint64_t)L_93)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___2_zz;
		int32_t L_95 = V_7;
		uint64_t L_96 = V_6;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_95, 6))), (uint32_t)((int32_t)(uint32_t)L_96));
		uint64_t L_97 = V_6;
		V_6 = ((int64_t)((uint64_t)L_97>>((int32_t)32)));
		int32_t L_98 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0120:
	{
		int32_t L_99 = V_7;
		if ((((int32_t)L_99) < ((int32_t)6)))
		{
			goto IL_002c;
		}
	}
	{
		uint64_t L_100 = V_6;
		return ((int32_t)(uint32_t)L_100);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat192_Mul33Add_mEE7B706F9AF82BE2414CA03871D0B6EBA87C3D41 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_x;
		int32_t L_81 = ___2_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)(uint64_t)L_83);
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_1;
		uint64_t L_86 = V_7;
		uint64_t L_87 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___3_y;
		int32_t L_89 = ___4_yOff;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 5));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___5_z;
		int32_t L_93 = ___6_zOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		uint64_t L_97 = V_7;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, (int64_t)L_97));
		uint64_t L_98 = V_0;
		return L_98;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_Mul33DWordAdd_mB8D8593B673A19F3B99EB137BA5BADDEDDB3511B (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(6, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_Mul33WordAdd_m0DA2DB2FE1C2CB91809B9C8F1DB6CB8E604F6F30 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(6, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m4E97D60DA1266BF2FED4943BCAB5942583DD2337 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_18 = 5;
		V_19 = ((int32_t)12);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_18;
		int32_t L_5 = L_4;
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_20 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_19;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_19 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_20;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_19;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_19 = L_16;
		uint64_t L_17 = V_20;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_20;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_18;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_21 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_21;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_21;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_21;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint64_t L_73 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)((uint64_t)L_73>>((int32_t)32)))));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((int64_t)L_74&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_zz;
		NullCheck(L_75);
		int32_t L_76 = 6;
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint64_t L_78 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_77), ((int64_t)((uint64_t)L_78>>((int32_t)32)))));
		uint64_t L_79 = V_10;
		V_10 = ((int64_t)((int64_t)L_79&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_9;
		uint64_t L_82 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82))));
		uint64_t L_83 = V_7;
		V_3 = ((int32_t)(uint32_t)L_83);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_zz;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_2;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_85<<1))|(int32_t)L_86)));
		uint32_t L_87 = V_3;
		V_2 = ((int32_t)((uint32_t)L_87>>((int32_t)31)));
		uint64_t L_88 = V_8;
		uint64_t L_89 = V_7;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_8;
		uint64_t L_94 = V_9;
		uint64_t L_95 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_93>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, (int64_t)L_95))))));
		uint64_t L_96 = V_8;
		V_8 = ((int64_t)((int64_t)L_96&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_97 = V_11;
		uint64_t L_98 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)((uint64_t)L_98>>((int32_t)32)))));
		uint64_t L_99 = V_10;
		V_10 = ((int64_t)((int64_t)L_99&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___0_x;
		NullCheck(L_100);
		int32_t L_101 = 4;
		uint32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_12 = ((int64_t)(uint64_t)L_102);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___1_zz;
		NullCheck(L_103);
		int32_t L_104 = 7;
		uint32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		uint64_t L_106 = V_11;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_105), ((int64_t)((uint64_t)L_106>>((int32_t)32)))));
		uint64_t L_107 = V_11;
		V_11 = ((int64_t)((int64_t)L_107&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___1_zz;
		NullCheck(L_108);
		int32_t L_109 = 8;
		uint32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint64_t L_111 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_110), ((int64_t)((uint64_t)L_111>>((int32_t)32)))));
		uint64_t L_112 = V_13;
		V_13 = ((int64_t)((int64_t)L_112&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_113 = V_8;
		uint64_t L_114 = V_12;
		uint64_t L_115 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, (int64_t)L_115))));
		uint64_t L_116 = V_8;
		V_3 = ((int32_t)(uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___1_zz;
		uint32_t L_118 = V_3;
		uint32_t L_119 = V_2;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_118<<1))|(int32_t)L_119)));
		uint32_t L_120 = V_3;
		V_2 = ((int32_t)((uint32_t)L_120>>((int32_t)31)));
		uint64_t L_121 = V_10;
		uint64_t L_122 = V_8;
		uint64_t L_123 = V_12;
		uint64_t L_124 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_121, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_122>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, (int64_t)L_124))))));
		uint64_t L_125 = V_11;
		uint64_t L_126 = V_10;
		uint64_t L_127 = V_12;
		uint64_t L_128 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_126>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, (int64_t)L_128))))));
		uint64_t L_129 = V_10;
		V_10 = ((int64_t)((int64_t)L_129&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_130 = V_13;
		uint64_t L_131 = V_11;
		uint64_t L_132 = V_12;
		uint64_t L_133 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_131>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_132, (int64_t)L_133))))));
		uint64_t L_134 = V_11;
		V_11 = ((int64_t)((int64_t)L_134&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_135 = V_14;
		uint64_t L_136 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, ((int64_t)((uint64_t)L_136>>((int32_t)32)))));
		uint64_t L_137 = V_13;
		V_13 = ((int64_t)((int64_t)L_137&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ___0_x;
		NullCheck(L_138);
		int32_t L_139 = 5;
		uint32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_15 = ((int64_t)(uint64_t)L_140);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___1_zz;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)9);
		uint32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		uint64_t L_144 = V_14;
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_143), ((int64_t)((uint64_t)L_144>>((int32_t)32)))));
		uint64_t L_145 = V_14;
		V_14 = ((int64_t)((int64_t)L_145&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = ___1_zz;
		NullCheck(L_146);
		int32_t L_147 = ((int32_t)10);
		uint32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		uint64_t L_149 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_148), ((int64_t)((uint64_t)L_149>>((int32_t)32)))));
		uint64_t L_150 = V_16;
		V_16 = ((int64_t)((int64_t)L_150&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_151 = V_10;
		uint64_t L_152 = V_15;
		uint64_t L_153 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_multiply((int64_t)L_152, (int64_t)L_153))));
		uint64_t L_154 = V_10;
		V_3 = ((int32_t)(uint32_t)L_154);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = ___1_zz;
		uint32_t L_156 = V_3;
		uint32_t L_157 = V_2;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_156<<1))|(int32_t)L_157)));
		uint32_t L_158 = V_3;
		V_2 = ((int32_t)((uint32_t)L_158>>((int32_t)31)));
		uint64_t L_159 = V_11;
		uint64_t L_160 = V_10;
		uint64_t L_161 = V_15;
		uint64_t L_162 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_160>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)L_162))))));
		uint64_t L_163 = V_13;
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_15;
		uint64_t L_166 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_164>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_165, (int64_t)L_166))))));
		uint64_t L_167 = V_14;
		uint64_t L_168 = V_13;
		uint64_t L_169 = V_15;
		uint64_t L_170 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_167, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_168>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_169, (int64_t)L_170))))));
		uint64_t L_171 = V_16;
		uint64_t L_172 = V_14;
		uint64_t L_173 = V_15;
		uint64_t L_174 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_172>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_173, (int64_t)L_174))))));
		uint64_t L_175 = V_17;
		uint64_t L_176 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)((uint64_t)L_176>>((int32_t)32)))));
		uint64_t L_177 = V_11;
		V_3 = ((int32_t)(uint32_t)L_177);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = ___1_zz;
		uint32_t L_179 = V_3;
		uint32_t L_180 = V_2;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_179<<1))|(int32_t)L_180)));
		uint32_t L_181 = V_3;
		V_2 = ((int32_t)((uint32_t)L_181>>((int32_t)31)));
		uint64_t L_182 = V_13;
		V_3 = ((int32_t)(uint32_t)L_182);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_183 = ___1_zz;
		uint32_t L_184 = V_3;
		uint32_t L_185 = V_2;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_184<<1))|(int32_t)L_185)));
		uint32_t L_186 = V_3;
		V_2 = ((int32_t)((uint32_t)L_186>>((int32_t)31)));
		uint64_t L_187 = V_14;
		V_3 = ((int32_t)(uint32_t)L_187);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_188 = ___1_zz;
		uint32_t L_189 = V_3;
		uint32_t L_190 = V_2;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_189<<1))|(int32_t)L_190)));
		uint32_t L_191 = V_3;
		V_2 = ((int32_t)((uint32_t)L_191>>((int32_t)31)));
		uint64_t L_192 = V_16;
		V_3 = ((int32_t)(uint32_t)L_192);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = ___1_zz;
		uint32_t L_194 = V_3;
		uint32_t L_195 = V_2;
		NullCheck(L_193);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_194<<1))|(int32_t)L_195)));
		uint32_t L_196 = V_3;
		V_2 = ((int32_t)((uint32_t)L_196>>((int32_t)31)));
		uint64_t L_197 = V_17;
		V_3 = ((int32_t)(uint32_t)L_197);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___1_zz;
		uint32_t L_199 = V_3;
		uint32_t L_200 = V_2;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_199<<1))|(int32_t)L_200)));
		uint32_t L_201 = V_3;
		V_2 = ((int32_t)((uint32_t)L_201>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = ___1_zz;
		NullCheck(L_202);
		int32_t L_203 = ((int32_t)11);
		uint32_t L_204 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		uint64_t L_205 = V_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_204, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_205>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = ___1_zz;
		uint32_t L_207 = V_3;
		uint32_t L_208 = V_2;
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_207<<1))|(int32_t)L_208)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m37DC59412923DE029C4643ABC311534CC04EE7BF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		V_2 = 0;
		V_18 = 5;
		V_19 = ((int32_t)12);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		int32_t L_6 = V_18;
		int32_t L_7 = L_6;
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		uint32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int64_t L_10 = ((int64_t)(uint64_t)L_9);
		V_20 = ((int64_t)il2cpp_codegen_multiply(L_10, L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		int32_t L_12 = ___3_zzOff;
		int32_t L_13 = V_19;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_19 = L_14;
		uint32_t L_15 = V_2;
		uint64_t L_16 = V_20;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_14))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_15<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_16>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_zz;
		int32_t L_18 = ___3_zzOff;
		int32_t L_19 = V_19;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_19 = L_20;
		uint64_t L_21 = V_20;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_20))), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_21>>1))));
		uint64_t L_22 = V_20;
		V_2 = ((int32_t)(uint32_t)L_22);
		int32_t L_23 = V_18;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_0;
		V_21 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_24, (int64_t)L_25));
		uint32_t L_26 = V_2;
		uint64_t L_27 = V_21;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_26<<((int32_t)31)))))|((int64_t)((uint64_t)L_27>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = ___3_zzOff;
		uint64_t L_30 = V_21;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_21;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_31>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = ___3_zzOff;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 2));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)(uint64_t)L_39);
		uint64_t L_40 = V_1;
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_multiply((int64_t)L_41, (int64_t)L_42))));
		uint64_t L_43 = V_1;
		V_3 = ((int32_t)(uint32_t)L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_zz;
		int32_t L_45 = ___3_zzOff;
		uint32_t L_46 = V_3;
		uint32_t L_47 = V_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_46<<1))|(int32_t)L_47)));
		uint32_t L_48 = V_3;
		V_2 = ((int32_t)((uint32_t)L_48>>((int32_t)31)));
		uint64_t L_49 = V_5;
		uint64_t L_50 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)((uint64_t)L_50>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		int32_t L_52 = ___1_xOff;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)(uint64_t)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___2_zz;
		int32_t L_56 = ___3_zzOff;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_7 = ((int64_t)(uint64_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = ___3_zzOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_8 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_5;
		uint64_t L_64 = V_6;
		uint64_t L_65 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		uint64_t L_66 = V_5;
		V_3 = ((int32_t)(uint32_t)L_66);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_zz;
		int32_t L_68 = ___3_zzOff;
		uint32_t L_69 = V_3;
		uint32_t L_70 = V_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 2))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_69<<1))|(int32_t)L_70)));
		uint32_t L_71 = V_3;
		V_2 = ((int32_t)((uint32_t)L_71>>((int32_t)31)));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_5;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_73>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75))))));
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)((uint64_t)L_77>>((int32_t)32)))));
		uint64_t L_78 = V_7;
		V_7 = ((int64_t)((int64_t)L_78&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 3));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_9 = ((int64_t)(uint64_t)L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = ___3_zzOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		uint64_t L_87 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_86), ((int64_t)((uint64_t)L_87>>((int32_t)32)))));
		uint64_t L_88 = V_8;
		V_8 = ((int64_t)((int64_t)L_88&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___2_zz;
		int32_t L_90 = ___3_zzOff;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 6));
		uint32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		uint64_t L_93 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_92), ((int64_t)((uint64_t)L_93>>((int32_t)32)))));
		uint64_t L_94 = V_10;
		V_10 = ((int64_t)((int64_t)L_94&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_95 = V_7;
		uint64_t L_96 = V_9;
		uint64_t L_97 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_multiply((int64_t)L_96, (int64_t)L_97))));
		uint64_t L_98 = V_7;
		V_3 = ((int32_t)(uint32_t)L_98);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___2_zz;
		int32_t L_100 = ___3_zzOff;
		uint32_t L_101 = V_3;
		uint32_t L_102 = V_2;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 3))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_101<<1))|(int32_t)L_102)));
		uint32_t L_103 = V_3;
		V_2 = ((int32_t)((uint32_t)L_103>>((int32_t)31)));
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_7;
		uint64_t L_106 = V_9;
		uint64_t L_107 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_105>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))))));
		uint64_t L_108 = V_10;
		uint64_t L_109 = V_8;
		uint64_t L_110 = V_9;
		uint64_t L_111 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_109>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_110, (int64_t)L_111))))));
		uint64_t L_112 = V_8;
		V_8 = ((int64_t)((int64_t)L_112&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_113 = V_11;
		uint64_t L_114 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)((uint64_t)L_114>>((int32_t)32)))));
		uint64_t L_115 = V_10;
		V_10 = ((int64_t)((int64_t)L_115&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___0_x;
		int32_t L_117 = ___1_xOff;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 4));
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_12 = ((int64_t)(uint64_t)L_119);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___2_zz;
		int32_t L_121 = ___3_zzOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 7));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		uint64_t L_124 = V_11;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_123), ((int64_t)((uint64_t)L_124>>((int32_t)32)))));
		uint64_t L_125 = V_11;
		V_11 = ((int64_t)((int64_t)L_125&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___2_zz;
		int32_t L_127 = ___3_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 8));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint64_t L_130 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_129), ((int64_t)((uint64_t)L_130>>((int32_t)32)))));
		uint64_t L_131 = V_13;
		V_13 = ((int64_t)((int64_t)L_131&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_132 = V_8;
		uint64_t L_133 = V_12;
		uint64_t L_134 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_132, ((int64_t)il2cpp_codegen_multiply((int64_t)L_133, (int64_t)L_134))));
		uint64_t L_135 = V_8;
		V_3 = ((int32_t)(uint32_t)L_135);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ___2_zz;
		int32_t L_137 = ___3_zzOff;
		uint32_t L_138 = V_3;
		uint32_t L_139 = V_2;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_137, 4))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_138<<1))|(int32_t)L_139)));
		uint32_t L_140 = V_3;
		V_2 = ((int32_t)((uint32_t)L_140>>((int32_t)31)));
		uint64_t L_141 = V_10;
		uint64_t L_142 = V_8;
		uint64_t L_143 = V_12;
		uint64_t L_144 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_141, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_142>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_143, (int64_t)L_144))))));
		uint64_t L_145 = V_11;
		uint64_t L_146 = V_10;
		uint64_t L_147 = V_12;
		uint64_t L_148 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_146>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_147, (int64_t)L_148))))));
		uint64_t L_149 = V_10;
		V_10 = ((int64_t)((int64_t)L_149&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_150 = V_13;
		uint64_t L_151 = V_11;
		uint64_t L_152 = V_12;
		uint64_t L_153 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_151>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_152, (int64_t)L_153))))));
		uint64_t L_154 = V_11;
		V_11 = ((int64_t)((int64_t)L_154&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_155 = V_14;
		uint64_t L_156 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)((uint64_t)L_156>>((int32_t)32)))));
		uint64_t L_157 = V_13;
		V_13 = ((int64_t)((int64_t)L_157&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = ___0_x;
		int32_t L_159 = ___1_xOff;
		NullCheck(L_158);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_159, 5));
		uint32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_15 = ((int64_t)(uint64_t)L_161);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = ___2_zz;
		int32_t L_163 = ___3_zzOff;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, ((int32_t)9)));
		uint32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		uint64_t L_166 = V_14;
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_165), ((int64_t)((uint64_t)L_166>>((int32_t)32)))));
		uint64_t L_167 = V_14;
		V_14 = ((int64_t)((int64_t)L_167&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = ___2_zz;
		int32_t L_169 = ___3_zzOff;
		NullCheck(L_168);
		int32_t L_170 = ((int32_t)il2cpp_codegen_add(L_169, ((int32_t)10)));
		uint32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		uint64_t L_172 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_171), ((int64_t)((uint64_t)L_172>>((int32_t)32)))));
		uint64_t L_173 = V_16;
		V_16 = ((int64_t)((int64_t)L_173&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_174 = V_10;
		uint64_t L_175 = V_15;
		uint64_t L_176 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_174, ((int64_t)il2cpp_codegen_multiply((int64_t)L_175, (int64_t)L_176))));
		uint64_t L_177 = V_10;
		V_3 = ((int32_t)(uint32_t)L_177);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = ___2_zz;
		int32_t L_179 = ___3_zzOff;
		uint32_t L_180 = V_3;
		uint32_t L_181 = V_2;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_179, 5))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_180<<1))|(int32_t)L_181)));
		uint32_t L_182 = V_3;
		V_2 = ((int32_t)((uint32_t)L_182>>((int32_t)31)));
		uint64_t L_183 = V_11;
		uint64_t L_184 = V_10;
		uint64_t L_185 = V_15;
		uint64_t L_186 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_184>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_185, (int64_t)L_186))))));
		uint64_t L_187 = V_13;
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_15;
		uint64_t L_190 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_187, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_188>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_189, (int64_t)L_190))))));
		uint64_t L_191 = V_14;
		uint64_t L_192 = V_13;
		uint64_t L_193 = V_15;
		uint64_t L_194 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_191, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_192>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_193, (int64_t)L_194))))));
		uint64_t L_195 = V_16;
		uint64_t L_196 = V_14;
		uint64_t L_197 = V_15;
		uint64_t L_198 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_196>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_197, (int64_t)L_198))))));
		uint64_t L_199 = V_17;
		uint64_t L_200 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_199, ((int64_t)((uint64_t)L_200>>((int32_t)32)))));
		uint64_t L_201 = V_11;
		V_3 = ((int32_t)(uint32_t)L_201);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = ___2_zz;
		int32_t L_203 = ___3_zzOff;
		uint32_t L_204 = V_3;
		uint32_t L_205 = V_2;
		NullCheck(L_202);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_203, 6))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_204<<1))|(int32_t)L_205)));
		uint32_t L_206 = V_3;
		V_2 = ((int32_t)((uint32_t)L_206>>((int32_t)31)));
		uint64_t L_207 = V_13;
		V_3 = ((int32_t)(uint32_t)L_207);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = ___2_zz;
		int32_t L_209 = ___3_zzOff;
		uint32_t L_210 = V_3;
		uint32_t L_211 = V_2;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, 7))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_210<<1))|(int32_t)L_211)));
		uint32_t L_212 = V_3;
		V_2 = ((int32_t)((uint32_t)L_212>>((int32_t)31)));
		uint64_t L_213 = V_14;
		V_3 = ((int32_t)(uint32_t)L_213);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = ___2_zz;
		int32_t L_215 = ___3_zzOff;
		uint32_t L_216 = V_3;
		uint32_t L_217 = V_2;
		NullCheck(L_214);
		(L_214)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_215, 8))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_216<<1))|(int32_t)L_217)));
		uint32_t L_218 = V_3;
		V_2 = ((int32_t)((uint32_t)L_218>>((int32_t)31)));
		uint64_t L_219 = V_16;
		V_3 = ((int32_t)(uint32_t)L_219);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = ___2_zz;
		int32_t L_221 = ___3_zzOff;
		uint32_t L_222 = V_3;
		uint32_t L_223 = V_2;
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_221, ((int32_t)9)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_222<<1))|(int32_t)L_223)));
		uint32_t L_224 = V_3;
		V_2 = ((int32_t)((uint32_t)L_224>>((int32_t)31)));
		uint64_t L_225 = V_17;
		V_3 = ((int32_t)(uint32_t)L_225);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = ___2_zz;
		int32_t L_227 = ___3_zzOff;
		uint32_t L_228 = V_3;
		uint32_t L_229 = V_2;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_227, ((int32_t)10)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_228<<1))|(int32_t)L_229)));
		uint32_t L_230 = V_3;
		V_2 = ((int32_t)((uint32_t)L_230>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_231 = ___2_zz;
		int32_t L_232 = ___3_zzOff;
		NullCheck(L_231);
		int32_t L_233 = ((int32_t)il2cpp_codegen_add(L_232, ((int32_t)11)));
		uint32_t L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		uint64_t L_235 = V_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_235>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_236 = ___2_zz;
		int32_t L_237 = ___3_zzOff;
		uint32_t L_238 = V_3;
		uint32_t L_239 = V_2;
		NullCheck(L_236);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_237, ((int32_t)11)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_238<<1))|(int32_t)L_239)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_Sub_m435A3BE529FADB9682BE9DBF67AD6ED25A9D024C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		return ((int32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_Sub_mD6E3D13B71E6E218E8E7730D0E80CA771BD84F20 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		return ((int32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_SubFrom_m01D46DAB9FBDF2D09E76D2C21A7A10640D513BEB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		return ((int32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat192_ToBigInteger_mFE6789B097388349BA4234CB89A1EEED36872270 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(5, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat192_ToBigInteger64_m514825317579C3574E9F3CCEDC0CAC5665969181 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(2, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Add_m4282EA0E64CC725A9BBA2892F580E41A6DC707FC (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		return ((int32_t)(uint32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_AddBothTo_mFFE4C631978E6F6A60055FEA15C2501A7F9B400D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		NullCheck(L_79);
		int32_t L_80 = 6;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___1_y;
		NullCheck(L_82);
		int32_t L_83 = 6;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_z;
		NullCheck(L_85);
		int32_t L_86 = 6;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_81), ((int64_t)(uint64_t)L_84))), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		uint64_t L_89 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_0;
		V_0 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_0;
		return ((int32_t)(uint32_t)L_91);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Copy_mDC4EB3F79F7FF7DA29241A15F81570D112CD9B80 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Copy_mDF2350EF8B96949138AE3523AFFC5B4DDC66AD91 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint32_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint32_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_z;
		int32_t L_31 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 5))), (uint32_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___0_x;
		int32_t L_39 = ___1_xOff;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 6));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 6))), (uint32_t)L_41);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat224_Create_m905996CF0C04DE421AF7465FE9C266DD2D45F4D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)7);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat224_CreateExt_m49B0DE9609E0DBBD5F7F08F4B35297CD0FFCCAC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Eq_m10066E44F206C23F75F7532F1AB92A83426C7BE9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 6;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_GetBit_mA1949FAA9D687F315096DC435A031A0B3A49822B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		V_0 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Gte_m93F36EC30A3CB4323C7B119CD02CBD7A91B46544 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 6;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_IsOne_mF2189F1FF4F575E1B7E947FDCCC955C55B2810BD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_IsZero_mEC939157E78867D02C2BBB85068C931E8210747D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)7)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Mul_mB5E4D0EB6B1E6B29AD1B91BE9439847F5D9F27CA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		V_7 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 0;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_8 = ((int64_t)(uint64_t)L_23);
		uint64_t L_24 = V_7;
		uint64_t L_25 = V_8;
		uint64_t L_26 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)il2cpp_codegen_multiply((int64_t)L_25, (int64_t)L_26))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_zz;
		uint64_t L_28 = V_7;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_7;
		V_7 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_7;
		uint64_t L_31 = V_8;
		uint64_t L_32 = V_1;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_multiply((int64_t)L_31, (int64_t)L_32))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_zz;
		uint64_t L_34 = V_7;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_7;
		V_7 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_7;
		uint64_t L_37 = V_8;
		uint64_t L_38 = V_2;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_zz;
		uint64_t L_40 = V_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_40));
		uint64_t L_41 = V_7;
		V_7 = ((int64_t)((uint64_t)L_41>>((int32_t)32)));
		uint64_t L_42 = V_7;
		uint64_t L_43 = V_8;
		uint64_t L_44 = V_3;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_42, ((int64_t)il2cpp_codegen_multiply((int64_t)L_43, (int64_t)L_44))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_zz;
		uint64_t L_46 = V_7;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_7;
		V_7 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_7;
		uint64_t L_49 = V_8;
		uint64_t L_50 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_multiply((int64_t)L_49, (int64_t)L_50))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___2_zz;
		uint64_t L_52 = V_7;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_52));
		uint64_t L_53 = V_7;
		V_7 = ((int64_t)((uint64_t)L_53>>((int32_t)32)));
		uint64_t L_54 = V_7;
		uint64_t L_55 = V_8;
		uint64_t L_56 = V_5;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_54, ((int64_t)il2cpp_codegen_multiply((int64_t)L_55, (int64_t)L_56))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		uint64_t L_58 = V_7;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_7;
		V_7 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_8;
		uint64_t L_62 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___2_zz;
		uint64_t L_64 = V_7;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_7;
		V_7 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		uint64_t L_67 = V_7;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_67));
		V_9 = 1;
		goto IL_01db;
	}

IL_00db:
	{
		V_10 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___0_x;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_11 = ((int64_t)(uint64_t)L_71);
		uint64_t L_72 = V_10;
		uint64_t L_73 = V_11;
		uint64_t L_74 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_zz;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_73, (int64_t)L_74)), ((int64_t)(uint64_t)L_78)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_zz;
		int32_t L_80 = V_9;
		uint64_t L_81 = V_10;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint32_t)((int32_t)(uint32_t)L_81));
		uint64_t L_82 = V_10;
		V_10 = ((int64_t)((uint64_t)L_82>>((int32_t)32)));
		uint64_t L_83 = V_10;
		uint64_t L_84 = V_11;
		uint64_t L_85 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___2_zz;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_84, (int64_t)L_85)), ((int64_t)(uint64_t)L_89)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_9;
		uint64_t L_92 = V_10;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 1))), (uint32_t)((int32_t)(uint32_t)L_92));
		uint64_t L_93 = V_10;
		V_10 = ((int64_t)((uint64_t)L_93>>((int32_t)32)));
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		uint64_t L_96 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___2_zz;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 2));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_95, (int64_t)L_96)), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_zz;
		int32_t L_102 = V_9;
		uint64_t L_103 = V_10;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 2))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_10;
		V_10 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		uint64_t L_105 = V_10;
		uint64_t L_106 = V_11;
		uint64_t L_107 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_zz;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 3));
		uint32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107)), ((int64_t)(uint64_t)L_111)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___2_zz;
		int32_t L_113 = V_9;
		uint64_t L_114 = V_10;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_113, 3))), (uint32_t)((int32_t)(uint32_t)L_114));
		uint64_t L_115 = V_10;
		V_10 = ((int64_t)((uint64_t)L_115>>((int32_t)32)));
		uint64_t L_116 = V_10;
		uint64_t L_117 = V_11;
		uint64_t L_118 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___2_zz;
		int32_t L_120 = V_9;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 4));
		uint32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_117, (int64_t)L_118)), ((int64_t)(uint64_t)L_122)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___2_zz;
		int32_t L_124 = V_9;
		uint64_t L_125 = V_10;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_124, 4))), (uint32_t)((int32_t)(uint32_t)L_125));
		uint64_t L_126 = V_10;
		V_10 = ((int64_t)((uint64_t)L_126>>((int32_t)32)));
		uint64_t L_127 = V_10;
		uint64_t L_128 = V_11;
		uint64_t L_129 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___2_zz;
		int32_t L_131 = V_9;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 5));
		uint32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_127, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_128, (int64_t)L_129)), ((int64_t)(uint64_t)L_133)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = ___2_zz;
		int32_t L_135 = V_9;
		uint64_t L_136 = V_10;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_135, 5))), (uint32_t)((int32_t)(uint32_t)L_136));
		uint64_t L_137 = V_10;
		V_10 = ((int64_t)((uint64_t)L_137>>((int32_t)32)));
		uint64_t L_138 = V_10;
		uint64_t L_139 = V_11;
		uint64_t L_140 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___2_zz;
		int32_t L_142 = V_9;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(L_142, 6));
		uint32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_138, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_139, (int64_t)L_140)), ((int64_t)(uint64_t)L_144)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ___2_zz;
		int32_t L_146 = V_9;
		uint64_t L_147 = V_10;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_146, 6))), (uint32_t)((int32_t)(uint32_t)L_147));
		uint64_t L_148 = V_10;
		V_10 = ((int64_t)((uint64_t)L_148>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = ___2_zz;
		int32_t L_150 = V_9;
		uint64_t L_151 = V_10;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_150, 7))), (uint32_t)((int32_t)(uint32_t)L_151));
		int32_t L_152 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_01db:
	{
		int32_t L_153 = V_9;
		if ((((int32_t)L_153) < ((int32_t)7)))
		{
			goto IL_00db;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulAddTo_m268074459E01310144DF18A718B17DD51F1674AA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		V_7 = ((int64_t)0);
		V_8 = 0;
		goto IL_0148;
	}

IL_0032:
	{
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_10 = ((int64_t)(uint64_t)L_24);
		uint64_t L_25 = V_9;
		uint64_t L_26 = V_10;
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = V_8;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_25, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_26, (int64_t)L_27)), ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_zz;
		int32_t L_33 = V_8;
		uint64_t L_34 = V_9;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_9;
		V_9 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_9;
		uint64_t L_37 = V_10;
		uint64_t L_38 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_zz;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), ((int64_t)(uint64_t)L_42)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___2_zz;
		int32_t L_44 = V_8;
		uint64_t L_45 = V_9;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 1))), (uint32_t)((int32_t)(uint32_t)L_45));
		uint64_t L_46 = V_9;
		V_9 = ((int64_t)((uint64_t)L_46>>((int32_t)32)));
		uint64_t L_47 = V_9;
		uint64_t L_48 = V_10;
		uint64_t L_49 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___2_zz;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 2));
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_47, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_48, (int64_t)L_49)), ((int64_t)(uint64_t)L_53)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___2_zz;
		int32_t L_55 = V_8;
		uint64_t L_56 = V_9;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_55, 2))), (uint32_t)((int32_t)(uint32_t)L_56));
		uint64_t L_57 = V_9;
		V_9 = ((int64_t)((uint64_t)L_57>>((int32_t)32)));
		uint64_t L_58 = V_9;
		uint64_t L_59 = V_10;
		uint64_t L_60 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___2_zz;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 3));
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_58, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_59, (int64_t)L_60)), ((int64_t)(uint64_t)L_64)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___2_zz;
		int32_t L_66 = V_8;
		uint64_t L_67 = V_9;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_66, 3))), (uint32_t)((int32_t)(uint32_t)L_67));
		uint64_t L_68 = V_9;
		V_9 = ((int64_t)((uint64_t)L_68>>((int32_t)32)));
		uint64_t L_69 = V_9;
		uint64_t L_70 = V_10;
		uint64_t L_71 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_zz;
		int32_t L_73 = V_8;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_69, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_70, (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_zz;
		int32_t L_77 = V_8;
		uint64_t L_78 = V_9;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_9;
		V_9 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_9;
		uint64_t L_81 = V_10;
		uint64_t L_82 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82)), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_zz;
		int32_t L_88 = V_8;
		uint64_t L_89 = V_9;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 5))), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_9;
		V_9 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_9;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___2_zz;
		int32_t L_95 = V_8;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 6));
		uint32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_92, (int64_t)L_93)), ((int64_t)(uint64_t)L_97)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___2_zz;
		int32_t L_99 = V_8;
		uint64_t L_100 = V_9;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_99, 6))), (uint32_t)((int32_t)(uint32_t)L_100));
		uint64_t L_101 = V_9;
		V_9 = ((int64_t)((uint64_t)L_101>>((int32_t)32)));
		uint64_t L_102 = V_7;
		uint64_t L_103 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___2_zz;
		int32_t L_105 = V_8;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 7));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_102, ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_zz;
		int32_t L_109 = V_8;
		uint64_t L_110 = V_7;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 7))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_7;
		V_7 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		int32_t L_112 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_0148:
	{
		int32_t L_113 = V_8;
		if ((((int32_t)L_113) < ((int32_t)7)))
		{
			goto IL_0032;
		}
	}
	{
		uint64_t L_114 = V_7;
		return ((int32_t)(uint32_t)L_114);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat224_Mul33Add_m05F1634856B823CCB9B4412AF56694D4BC811422 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_x;
		int32_t L_81 = ___2_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)(uint64_t)L_83);
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_1;
		uint64_t L_86 = V_7;
		uint64_t L_87 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___3_y;
		int32_t L_89 = ___4_yOff;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 5));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___5_z;
		int32_t L_93 = ___6_zOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___1_x;
		int32_t L_97 = ___2_xOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 6));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_8 = ((int64_t)(uint64_t)L_99);
		uint64_t L_100 = V_0;
		uint64_t L_101 = V_1;
		uint64_t L_102 = V_8;
		uint64_t L_103 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___3_y;
		int32_t L_105 = ___4_yOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 6));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_101, (int64_t)L_102)), (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___5_z;
		int32_t L_109 = ___6_zOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_0;
		uint64_t L_113 = V_8;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_0;
		return L_114;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Mul33DWordAdd_m9EEE9339C23C414164E6B7337EF1EF6DC2F9E09B (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(7, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Mul33WordAdd_mAA340B92B128ED15A701DCB7E6B15A36F1E45FD8 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(7, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Square_m71BA09DF8E815F1BC21535BEBD26B3E7602A2A80 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	uint64_t V_23 = 0;
	uint64_t V_24 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_21 = 6;
		V_22 = ((int32_t)14);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_21;
		int32_t L_5 = L_4;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_23 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_22;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_22 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_23;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_22;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_22 = L_16;
		uint64_t L_17 = V_23;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_23;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_21;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_24 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_24;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_24;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_24;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint64_t L_73 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)((uint64_t)L_73>>((int32_t)32)))));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((int64_t)L_74&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_zz;
		NullCheck(L_75);
		int32_t L_76 = 6;
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint64_t L_78 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_77), ((int64_t)((uint64_t)L_78>>((int32_t)32)))));
		uint64_t L_79 = V_10;
		V_10 = ((int64_t)((int64_t)L_79&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_9;
		uint64_t L_82 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82))));
		uint64_t L_83 = V_7;
		V_3 = ((int32_t)(uint32_t)L_83);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_zz;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_2;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_85<<1))|(int32_t)L_86)));
		uint32_t L_87 = V_3;
		V_2 = ((int32_t)((uint32_t)L_87>>((int32_t)31)));
		uint64_t L_88 = V_8;
		uint64_t L_89 = V_7;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_8;
		uint64_t L_94 = V_9;
		uint64_t L_95 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_93>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, (int64_t)L_95))))));
		uint64_t L_96 = V_8;
		V_8 = ((int64_t)((int64_t)L_96&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_97 = V_11;
		uint64_t L_98 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)((uint64_t)L_98>>((int32_t)32)))));
		uint64_t L_99 = V_10;
		V_10 = ((int64_t)((int64_t)L_99&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___0_x;
		NullCheck(L_100);
		int32_t L_101 = 4;
		uint32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_12 = ((int64_t)(uint64_t)L_102);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___1_zz;
		NullCheck(L_103);
		int32_t L_104 = 7;
		uint32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		uint64_t L_106 = V_11;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_105), ((int64_t)((uint64_t)L_106>>((int32_t)32)))));
		uint64_t L_107 = V_11;
		V_11 = ((int64_t)((int64_t)L_107&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___1_zz;
		NullCheck(L_108);
		int32_t L_109 = 8;
		uint32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint64_t L_111 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_110), ((int64_t)((uint64_t)L_111>>((int32_t)32)))));
		uint64_t L_112 = V_13;
		V_13 = ((int64_t)((int64_t)L_112&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_113 = V_8;
		uint64_t L_114 = V_12;
		uint64_t L_115 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, (int64_t)L_115))));
		uint64_t L_116 = V_8;
		V_3 = ((int32_t)(uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___1_zz;
		uint32_t L_118 = V_3;
		uint32_t L_119 = V_2;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_118<<1))|(int32_t)L_119)));
		uint32_t L_120 = V_3;
		V_2 = ((int32_t)((uint32_t)L_120>>((int32_t)31)));
		uint64_t L_121 = V_10;
		uint64_t L_122 = V_8;
		uint64_t L_123 = V_12;
		uint64_t L_124 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_121, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_122>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, (int64_t)L_124))))));
		uint64_t L_125 = V_11;
		uint64_t L_126 = V_10;
		uint64_t L_127 = V_12;
		uint64_t L_128 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_126>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, (int64_t)L_128))))));
		uint64_t L_129 = V_10;
		V_10 = ((int64_t)((int64_t)L_129&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_130 = V_13;
		uint64_t L_131 = V_11;
		uint64_t L_132 = V_12;
		uint64_t L_133 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_131>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_132, (int64_t)L_133))))));
		uint64_t L_134 = V_11;
		V_11 = ((int64_t)((int64_t)L_134&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_135 = V_14;
		uint64_t L_136 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, ((int64_t)((uint64_t)L_136>>((int32_t)32)))));
		uint64_t L_137 = V_13;
		V_13 = ((int64_t)((int64_t)L_137&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ___0_x;
		NullCheck(L_138);
		int32_t L_139 = 5;
		uint32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_15 = ((int64_t)(uint64_t)L_140);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___1_zz;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)9);
		uint32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		uint64_t L_144 = V_14;
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_143), ((int64_t)((uint64_t)L_144>>((int32_t)32)))));
		uint64_t L_145 = V_14;
		V_14 = ((int64_t)((int64_t)L_145&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = ___1_zz;
		NullCheck(L_146);
		int32_t L_147 = ((int32_t)10);
		uint32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		uint64_t L_149 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_148), ((int64_t)((uint64_t)L_149>>((int32_t)32)))));
		uint64_t L_150 = V_16;
		V_16 = ((int64_t)((int64_t)L_150&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_151 = V_10;
		uint64_t L_152 = V_15;
		uint64_t L_153 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_multiply((int64_t)L_152, (int64_t)L_153))));
		uint64_t L_154 = V_10;
		V_3 = ((int32_t)(uint32_t)L_154);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = ___1_zz;
		uint32_t L_156 = V_3;
		uint32_t L_157 = V_2;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_156<<1))|(int32_t)L_157)));
		uint32_t L_158 = V_3;
		V_2 = ((int32_t)((uint32_t)L_158>>((int32_t)31)));
		uint64_t L_159 = V_11;
		uint64_t L_160 = V_10;
		uint64_t L_161 = V_15;
		uint64_t L_162 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_160>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)L_162))))));
		uint64_t L_163 = V_13;
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_15;
		uint64_t L_166 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_164>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_165, (int64_t)L_166))))));
		uint64_t L_167 = V_11;
		V_11 = ((int64_t)((int64_t)L_167&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_168 = V_14;
		uint64_t L_169 = V_13;
		uint64_t L_170 = V_15;
		uint64_t L_171 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_169>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_170, (int64_t)L_171))))));
		uint64_t L_172 = V_13;
		V_13 = ((int64_t)((int64_t)L_172&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_173 = V_16;
		uint64_t L_174 = V_14;
		uint64_t L_175 = V_15;
		uint64_t L_176 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_174>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_175, (int64_t)L_176))))));
		uint64_t L_177 = V_14;
		V_14 = ((int64_t)((int64_t)L_177&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_178 = V_17;
		uint64_t L_179 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, ((int64_t)((uint64_t)L_179>>((int32_t)32)))));
		uint64_t L_180 = V_16;
		V_16 = ((int64_t)((int64_t)L_180&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___0_x;
		NullCheck(L_181);
		int32_t L_182 = 6;
		uint32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_18 = ((int64_t)(uint64_t)L_183);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = ___1_zz;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)11);
		uint32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		uint64_t L_187 = V_17;
		V_19 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_186), ((int64_t)((uint64_t)L_187>>((int32_t)32)))));
		uint64_t L_188 = V_17;
		V_17 = ((int64_t)((int64_t)L_188&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = ___1_zz;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)12);
		uint32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		uint64_t L_192 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_191), ((int64_t)((uint64_t)L_192>>((int32_t)32)))));
		uint64_t L_193 = V_19;
		V_19 = ((int64_t)((int64_t)L_193&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_18;
		uint64_t L_196 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_multiply((int64_t)L_195, (int64_t)L_196))));
		uint64_t L_197 = V_11;
		V_3 = ((int32_t)(uint32_t)L_197);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___1_zz;
		uint32_t L_199 = V_3;
		uint32_t L_200 = V_2;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_199<<1))|(int32_t)L_200)));
		uint32_t L_201 = V_3;
		V_2 = ((int32_t)((uint32_t)L_201>>((int32_t)31)));
		uint64_t L_202 = V_13;
		uint64_t L_203 = V_11;
		uint64_t L_204 = V_18;
		uint64_t L_205 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_203>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_204, (int64_t)L_205))))));
		uint64_t L_206 = V_14;
		uint64_t L_207 = V_13;
		uint64_t L_208 = V_18;
		uint64_t L_209 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_206, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_207>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_208, (int64_t)L_209))))));
		uint64_t L_210 = V_16;
		uint64_t L_211 = V_14;
		uint64_t L_212 = V_18;
		uint64_t L_213 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_211>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_212, (int64_t)L_213))))));
		uint64_t L_214 = V_17;
		uint64_t L_215 = V_16;
		uint64_t L_216 = V_18;
		uint64_t L_217 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_214, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_215>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_216, (int64_t)L_217))))));
		uint64_t L_218 = V_19;
		uint64_t L_219 = V_17;
		uint64_t L_220 = V_18;
		uint64_t L_221 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_219>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_220, (int64_t)L_221))))));
		uint64_t L_222 = V_20;
		uint64_t L_223 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_222, ((int64_t)((uint64_t)L_223>>((int32_t)32)))));
		uint64_t L_224 = V_13;
		V_3 = ((int32_t)(uint32_t)L_224);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_225 = ___1_zz;
		uint32_t L_226 = V_3;
		uint32_t L_227 = V_2;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_226<<1))|(int32_t)L_227)));
		uint32_t L_228 = V_3;
		V_2 = ((int32_t)((uint32_t)L_228>>((int32_t)31)));
		uint64_t L_229 = V_14;
		V_3 = ((int32_t)(uint32_t)L_229);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_230 = ___1_zz;
		uint32_t L_231 = V_3;
		uint32_t L_232 = V_2;
		NullCheck(L_230);
		(L_230)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_231<<1))|(int32_t)L_232)));
		uint32_t L_233 = V_3;
		V_2 = ((int32_t)((uint32_t)L_233>>((int32_t)31)));
		uint64_t L_234 = V_16;
		V_3 = ((int32_t)(uint32_t)L_234);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_235 = ___1_zz;
		uint32_t L_236 = V_3;
		uint32_t L_237 = V_2;
		NullCheck(L_235);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_236<<1))|(int32_t)L_237)));
		uint32_t L_238 = V_3;
		V_2 = ((int32_t)((uint32_t)L_238>>((int32_t)31)));
		uint64_t L_239 = V_17;
		V_3 = ((int32_t)(uint32_t)L_239);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = ___1_zz;
		uint32_t L_241 = V_3;
		uint32_t L_242 = V_2;
		NullCheck(L_240);
		(L_240)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_241<<1))|(int32_t)L_242)));
		uint32_t L_243 = V_3;
		V_2 = ((int32_t)((uint32_t)L_243>>((int32_t)31)));
		uint64_t L_244 = V_19;
		V_3 = ((int32_t)(uint32_t)L_244);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = ___1_zz;
		uint32_t L_246 = V_3;
		uint32_t L_247 = V_2;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_246<<1))|(int32_t)L_247)));
		uint32_t L_248 = V_3;
		V_2 = ((int32_t)((uint32_t)L_248>>((int32_t)31)));
		uint64_t L_249 = V_20;
		V_3 = ((int32_t)(uint32_t)L_249);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_250 = ___1_zz;
		uint32_t L_251 = V_3;
		uint32_t L_252 = V_2;
		NullCheck(L_250);
		(L_250)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_251<<1))|(int32_t)L_252)));
		uint32_t L_253 = V_3;
		V_2 = ((int32_t)((uint32_t)L_253>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_254 = ___1_zz;
		NullCheck(L_254);
		int32_t L_255 = ((int32_t)13);
		uint32_t L_256 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		uint64_t L_257 = V_20;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_257>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_258 = ___1_zz;
		uint32_t L_259 = V_3;
		uint32_t L_260 = V_2;
		NullCheck(L_258);
		(L_258)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_259<<1))|(int32_t)L_260)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_Sub_mCD3664EDA1586076C17709C57E828A1BE4DB35D0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		return ((int32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_SubFrom_m3356CC018B547091FAE6E89224F1B848A946D1B1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_z;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___0_x;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		return ((int32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat224_ToBigInteger_m4731D872D900576D223D38C94E1F3E9E78CD8AA7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(6, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)7)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Add_m9344C079C86DBF149A92FD5CF2C1EC7E5C7D6B4C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___0_x;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___1_y;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___2_z;
		uint64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		return ((int32_t)(uint32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddBothTo_mCE3EAF920F6EBF2AF2578012580991D5E2927147 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		NullCheck(L_79);
		int32_t L_80 = 6;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___1_y;
		NullCheck(L_82);
		int32_t L_83 = 6;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_z;
		NullCheck(L_85);
		int32_t L_86 = 6;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_81), ((int64_t)(uint64_t)L_84))), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		uint64_t L_89 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_0;
		V_0 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___0_x;
		NullCheck(L_92);
		int32_t L_93 = 7;
		uint32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___1_y;
		NullCheck(L_95);
		int32_t L_96 = 7;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___2_z;
		NullCheck(L_98);
		int32_t L_99 = 7;
		uint32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_94), ((int64_t)(uint64_t)L_97))), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_z;
		uint64_t L_102 = V_0;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_102));
		uint64_t L_103 = V_0;
		V_0 = ((int64_t)((uint64_t)L_103>>((int32_t)32)));
		uint64_t L_104 = V_0;
		return ((int32_t)(uint32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddTo_m1E49EE707FFDC2E2EC408A32691B52D41C94D896 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_z;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_z;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_z;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_z;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___0_x;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___1_z;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___1_z;
		uint64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		return ((int32_t)(uint32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddTo_mC1FA070B52B5F92E27028E5F65F5E5A715556E01 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___4_cIn;
		V_0 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int32_t L_11 = ___3_zOff;
		uint64_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)L_12));
		uint64_t L_13 = V_0;
		V_0 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_18), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint64_t L_25 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_0;
		V_0 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_31), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		uint64_t L_38 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 2))), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		int32_t L_42 = ___1_xOff;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 3));
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_z;
		int32_t L_46 = ___3_zOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_44), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int32_t L_50 = ___3_zOff;
		uint64_t L_51 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 3))), (uint32_t)((int32_t)(uint32_t)L_51));
		uint64_t L_52 = V_0;
		V_0 = ((int64_t)((uint64_t)L_52>>((int32_t)32)));
		uint64_t L_53 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		int32_t L_55 = ___1_xOff;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		int32_t L_59 = ___3_zOff;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_57), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int32_t L_63 = ___3_zOff;
		uint64_t L_64 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 4))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_0;
		V_0 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		int32_t L_68 = ___1_xOff;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 5));
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___2_z;
		int32_t L_72 = ___3_zOff;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 5));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_70), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int32_t L_76 = ___3_zOff;
		uint64_t L_77 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 5))), (uint32_t)((int32_t)(uint32_t)L_77));
		uint64_t L_78 = V_0;
		V_0 = ((int64_t)((uint64_t)L_78>>((int32_t)32)));
		uint64_t L_79 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___0_x;
		int32_t L_81 = ___1_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 6));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_z;
		int32_t L_85 = ___3_zOff;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 6));
		uint32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_83), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		int32_t L_89 = ___3_zOff;
		uint64_t L_90 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 6))), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_0;
		V_0 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		uint64_t L_92 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___0_x;
		int32_t L_94 = ___1_xOff;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 7));
		uint32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___2_z;
		int32_t L_98 = ___3_zOff;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 7));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_96), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_z;
		int32_t L_102 = ___3_zOff;
		uint64_t L_103 = V_0;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 7))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_0;
		V_0 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		uint64_t L_105 = V_0;
		return ((int32_t)(uint32_t)L_105);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddToEachOther_m3C6E6286B07DF6EC9F75BAAA754A0C317FECF5F0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_u;
		int32_t L_2 = ___1_uOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_v;
		int32_t L_6 = ___3_vOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_u;
		int32_t L_10 = ___1_uOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_v;
		int32_t L_13 = ___3_vOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		uint64_t L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_u;
		int32_t L_18 = ___1_uOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_v;
		int32_t L_22 = ___3_vOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_20), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_u;
		int32_t L_26 = ___1_uOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_v;
		int32_t L_29 = ___3_vOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_u;
		int32_t L_34 = ___1_uOff;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 2));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_v;
		int32_t L_38 = ___3_vOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_36), ((int64_t)(uint64_t)L_40)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_u;
		int32_t L_42 = ___1_uOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (uint32_t)((int32_t)(uint32_t)L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_v;
		int32_t L_45 = ___3_vOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_u;
		int32_t L_50 = ___1_uOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_v;
		int32_t L_54 = ___3_vOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 3));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_u;
		int32_t L_58 = ___1_uOff;
		uint64_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 3))), (uint32_t)((int32_t)(uint32_t)L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_v;
		int32_t L_61 = ___3_vOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___0_u;
		int32_t L_66 = ___1_uOff;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 4));
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_v;
		int32_t L_70 = ___3_vOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___0_u;
		int32_t L_74 = ___1_uOff;
		uint64_t L_75 = V_0;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_v;
		int32_t L_77 = ___3_vOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___0_u;
		int32_t L_82 = ___1_uOff;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 5));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_v;
		int32_t L_86 = ___3_vOff;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_84), ((int64_t)(uint64_t)L_88)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___0_u;
		int32_t L_90 = ___1_uOff;
		uint64_t L_91 = V_0;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 5))), (uint32_t)((int32_t)(uint32_t)L_91));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_v;
		int32_t L_93 = ___3_vOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___0_u;
		int32_t L_98 = ___1_uOff;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 6));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_v;
		int32_t L_102 = ___3_vOff;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_102, 6));
		uint32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_100), ((int64_t)(uint64_t)L_104)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___0_u;
		int32_t L_106 = ___1_uOff;
		uint64_t L_107 = V_0;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_106, 6))), (uint32_t)((int32_t)(uint32_t)L_107));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_v;
		int32_t L_109 = ___3_vOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = ___0_u;
		int32_t L_114 = ___1_uOff;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 7));
		uint32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___2_v;
		int32_t L_118 = ___3_vOff;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_118, 7));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_116), ((int64_t)(uint64_t)L_120)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___0_u;
		int32_t L_122 = ___1_uOff;
		uint64_t L_123 = V_0;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_122, 7))), (uint32_t)((int32_t)(uint32_t)L_123));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ___2_v;
		int32_t L_125 = ___3_vOff;
		uint64_t L_126 = V_0;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_125, 7))), (uint32_t)((int32_t)(uint32_t)L_126));
		uint64_t L_127 = V_0;
		V_0 = ((int64_t)((uint64_t)L_127>>((int32_t)32)));
		uint64_t L_128 = V_0;
		return ((int32_t)(uint32_t)L_128);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Copy_mB3AF50D2ECB1222FF5E913148BA77D0FAE358AAF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint32_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint32_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_z;
		int32_t L_31 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 5))), (uint32_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___0_x;
		int32_t L_39 = ___1_xOff;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 6));
		uint32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 6))), (uint32_t)L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_z;
		int32_t L_43 = ___3_zOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		int32_t L_45 = ___1_xOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 7));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, 7))), (uint32_t)L_47);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Copy64_mBE30F43842E1DA25CE74A25C92479FA208F827A7 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Copy64_m708BF7054E38E42187DF3867CAF30FA69C3328C0 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, int32_t ___1_xOff, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint64_t)L_17);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint64_t)L_23);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_Create_mA8B40672EFEF44EF1770D8C921F3962D80CC947D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat256_Create64_m8E1959E35507E723AF99B305B339186C4C02FBA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_CreateExt_mFC7487BD1A4E9CDE02D4435E806BE2E108E8A667 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat256_CreateExt64_m58453033A0320CEF557098F4862E3F558B34F8BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Diff_m4F1E93F214A03A7E52136A592C5AD8AA297A58AE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_y;
		int32_t L_3 = ___3_yOff;
		bool L_4;
		L_4 = Nat256_Gte_mB347757FA0E16ABE65A670A0A08E388B9259880E(L_0, L_1, L_2, L_3, NULL);
		bool L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_001b;
		}
		G_B1_0 = L_5;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___4_z;
		int32_t L_11 = ___5_zOff;
		int32_t L_12;
		L_12 = Nat256_Sub_m632B841EC1A092C0FCD1B936E7EA4037C6CA023D(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return G_B1_0;
	}

IL_001b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___2_y;
		int32_t L_14 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___4_z;
		int32_t L_18 = ___5_zOff;
		int32_t L_19;
		L_19 = Nat256_Sub_m632B841EC1A092C0FCD1B936E7EA4037C6CA023D(L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Eq_m6E38B5FEA4B8FD4AA607D0C778FBCEB0A8AF167D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 7;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Eq64_m998E1FB7C20129CD8B6AFA3D829C2C6E40A6DE7D (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 3;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_GetBit_mD9C22234A30E2763B3B054FC351094AAA37A9B41 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		int32_t L_5 = ___1_bit;
		if ((((int32_t)((int32_t)(L_4&((int32_t)255)))) == ((int32_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		int32_t L_6 = ___1_bit;
		V_0 = ((int32_t)(L_6>>5));
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m7264B79F77188C4F0E44AC64F8258B3121EDB331 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 7;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_mB347757FA0E16ABE65A670A0A08E388B9259880E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 7;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) < ((uint32_t)L_11))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) > ((uint32_t)L_13))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0020:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsOne_mD5A6E72D314364471AB83956EFDB12E38A3A158C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsOne64_m1470801C6A33126FE04CF2F2772BD3F95946EF77 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsZero_m359DF165CCD0398484BF065CF652C806C9850FA9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsZero64_m5F9B4A3B841B34E9E6B49CC7C21C25CD7832B297 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_mCB0842227FF347701C81D8435E04B4EA4F58572C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_y;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = ((int64_t)(uint64_t)L_23);
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_9 = ((int64_t)(uint64_t)L_26);
		uint64_t L_27 = V_8;
		uint64_t L_28 = V_9;
		uint64_t L_29 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_zz;
		uint64_t L_31 = V_8;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_8;
		V_8 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_8;
		uint64_t L_34 = V_9;
		uint64_t L_35 = V_1;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		uint64_t L_37 = V_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_8;
		V_8 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_8;
		uint64_t L_40 = V_9;
		uint64_t L_41 = V_2;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_zz;
		uint64_t L_43 = V_8;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_8;
		V_8 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_8;
		uint64_t L_46 = V_9;
		uint64_t L_47 = V_3;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_multiply((int64_t)L_46, (int64_t)L_47))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		uint64_t L_49 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_8;
		V_8 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_8;
		uint64_t L_52 = V_9;
		uint64_t L_53 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_multiply((int64_t)L_52, (int64_t)L_53))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___2_zz;
		uint64_t L_55 = V_8;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_8;
		V_8 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_8;
		uint64_t L_58 = V_9;
		uint64_t L_59 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_multiply((int64_t)L_58, (int64_t)L_59))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_zz;
		uint64_t L_61 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_61));
		uint64_t L_62 = V_8;
		V_8 = ((int64_t)((uint64_t)L_62>>((int32_t)32)));
		uint64_t L_63 = V_8;
		uint64_t L_64 = V_9;
		uint64_t L_65 = V_6;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		uint64_t L_67 = V_8;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_67));
		uint64_t L_68 = V_8;
		V_8 = ((int64_t)((uint64_t)L_68>>((int32_t)32)));
		uint64_t L_69 = V_8;
		uint64_t L_70 = V_9;
		uint64_t L_71 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_69, ((int64_t)il2cpp_codegen_multiply((int64_t)L_70, (int64_t)L_71))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_zz;
		uint64_t L_73 = V_8;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_73));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((uint64_t)L_74>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_zz;
		uint64_t L_76 = V_8;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(uint32_t)L_76));
		V_10 = 1;
		goto IL_021a;
	}

IL_00f8:
	{
		V_11 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___0_x;
		int32_t L_78 = V_10;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_12 = ((int64_t)(uint64_t)L_80);
		uint64_t L_81 = V_11;
		uint64_t L_82 = V_12;
		uint64_t L_83 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_zz;
		int32_t L_85 = V_10;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		uint32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_zz;
		int32_t L_89 = V_10;
		uint64_t L_90 = V_11;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_11;
		V_11 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		uint64_t L_92 = V_11;
		uint64_t L_93 = V_12;
		uint64_t L_94 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___2_zz;
		int32_t L_96 = V_10;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_93, (int64_t)L_94)), ((int64_t)(uint64_t)L_98)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___2_zz;
		int32_t L_100 = V_10;
		uint64_t L_101 = V_11;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 1))), (uint32_t)((int32_t)(uint32_t)L_101));
		uint64_t L_102 = V_11;
		V_11 = ((int64_t)((uint64_t)L_102>>((int32_t)32)));
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_12;
		uint64_t L_105 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ___2_zz;
		int32_t L_107 = V_10;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 2));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_104, (int64_t)L_105)), ((int64_t)(uint64_t)L_109)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___2_zz;
		int32_t L_111 = V_10;
		uint64_t L_112 = V_11;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_111, 2))), (uint32_t)((int32_t)(uint32_t)L_112));
		uint64_t L_113 = V_11;
		V_11 = ((int64_t)((uint64_t)L_113>>((int32_t)32)));
		uint64_t L_114 = V_11;
		uint64_t L_115 = V_12;
		uint64_t L_116 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___2_zz;
		int32_t L_118 = V_10;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_118, 3));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_115, (int64_t)L_116)), ((int64_t)(uint64_t)L_120)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___2_zz;
		int32_t L_122 = V_10;
		uint64_t L_123 = V_11;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_122, 3))), (uint32_t)((int32_t)(uint32_t)L_123));
		uint64_t L_124 = V_11;
		V_11 = ((int64_t)((uint64_t)L_124>>((int32_t)32)));
		uint64_t L_125 = V_11;
		uint64_t L_126 = V_12;
		uint64_t L_127 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___2_zz;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 4));
		uint32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_126, (int64_t)L_127)), ((int64_t)(uint64_t)L_131)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = ___2_zz;
		int32_t L_133 = V_10;
		uint64_t L_134 = V_11;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_133, 4))), (uint32_t)((int32_t)(uint32_t)L_134));
		uint64_t L_135 = V_11;
		V_11 = ((int64_t)((uint64_t)L_135>>((int32_t)32)));
		uint64_t L_136 = V_11;
		uint64_t L_137 = V_12;
		uint64_t L_138 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = ___2_zz;
		int32_t L_140 = V_10;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 5));
		uint32_t L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_136, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_137, (int64_t)L_138)), ((int64_t)(uint64_t)L_142)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___2_zz;
		int32_t L_144 = V_10;
		uint64_t L_145 = V_11;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_144, 5))), (uint32_t)((int32_t)(uint32_t)L_145));
		uint64_t L_146 = V_11;
		V_11 = ((int64_t)((uint64_t)L_146>>((int32_t)32)));
		uint64_t L_147 = V_11;
		uint64_t L_148 = V_12;
		uint64_t L_149 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___2_zz;
		int32_t L_151 = V_10;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 6));
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_148, (int64_t)L_149)), ((int64_t)(uint64_t)L_153)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ___2_zz;
		int32_t L_155 = V_10;
		uint64_t L_156 = V_11;
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_155, 6))), (uint32_t)((int32_t)(uint32_t)L_156));
		uint64_t L_157 = V_11;
		V_11 = ((int64_t)((uint64_t)L_157>>((int32_t)32)));
		uint64_t L_158 = V_11;
		uint64_t L_159 = V_12;
		uint64_t L_160 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = ___2_zz;
		int32_t L_162 = V_10;
		NullCheck(L_161);
		int32_t L_163 = ((int32_t)il2cpp_codegen_add(L_162, 7));
		uint32_t L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_159, (int64_t)L_160)), ((int64_t)(uint64_t)L_164)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = ___2_zz;
		int32_t L_166 = V_10;
		uint64_t L_167 = V_11;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_166, 7))), (uint32_t)((int32_t)(uint32_t)L_167));
		uint64_t L_168 = V_11;
		V_11 = ((int64_t)((uint64_t)L_168>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = ___2_zz;
		int32_t L_170 = V_10;
		uint64_t L_171 = V_11;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_170, 8))), (uint32_t)((int32_t)(uint32_t)L_171));
		int32_t L_172 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_021a:
	{
		int32_t L_173 = V_10;
		if ((((int32_t)L_173) < ((int32_t)8)))
		{
			goto IL_00f8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_mEA400AFA0A023E52E87AF1F16B9F897D9F663677 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_y;
		int32_t L_25 = ___3_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = ((int64_t)(uint64_t)L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_y;
		int32_t L_29 = ___3_yOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_7 = ((int64_t)(uint64_t)L_31);
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_8;
		uint64_t L_37 = V_9;
		uint64_t L_38 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___4_zz;
		int32_t L_40 = ___5_zzOff;
		uint64_t L_41 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint32_t)((int32_t)(uint32_t)L_41));
		uint64_t L_42 = V_8;
		V_8 = ((int64_t)((uint64_t)L_42>>((int32_t)32)));
		uint64_t L_43 = V_8;
		uint64_t L_44 = V_9;
		uint64_t L_45 = V_1;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)il2cpp_codegen_multiply((int64_t)L_44, (int64_t)L_45))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___4_zz;
		int32_t L_47 = ___5_zzOff;
		uint64_t L_48 = V_8;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 1))), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_8;
		V_8 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_8;
		uint64_t L_51 = V_9;
		uint64_t L_52 = V_2;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_multiply((int64_t)L_51, (int64_t)L_52))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___4_zz;
		int32_t L_54 = ___5_zzOff;
		uint64_t L_55 = V_8;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, 2))), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_8;
		V_8 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_8;
		uint64_t L_58 = V_9;
		uint64_t L_59 = V_3;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_multiply((int64_t)L_58, (int64_t)L_59))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___4_zz;
		int32_t L_61 = ___5_zzOff;
		uint64_t L_62 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_8;
		V_8 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_9;
		uint64_t L_66 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_multiply((int64_t)L_65, (int64_t)L_66))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___4_zz;
		int32_t L_68 = ___5_zzOff;
		uint64_t L_69 = V_8;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 4))), (uint32_t)((int32_t)(uint32_t)L_69));
		uint64_t L_70 = V_8;
		V_8 = ((int64_t)((uint64_t)L_70>>((int32_t)32)));
		uint64_t L_71 = V_8;
		uint64_t L_72 = V_9;
		uint64_t L_73 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)il2cpp_codegen_multiply((int64_t)L_72, (int64_t)L_73))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_zz;
		int32_t L_75 = ___5_zzOff;
		uint64_t L_76 = V_8;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_8;
		V_8 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_8;
		uint64_t L_79 = V_9;
		uint64_t L_80 = V_6;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___4_zz;
		int32_t L_82 = ___5_zzOff;
		uint64_t L_83 = V_8;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 6))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_8;
		V_8 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_8;
		uint64_t L_86 = V_9;
		uint64_t L_87 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___4_zz;
		int32_t L_89 = ___5_zzOff;
		uint64_t L_90 = V_8;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 7))), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_8;
		V_8 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___4_zz;
		int32_t L_93 = ___5_zzOff;
		uint64_t L_94 = V_8;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 8))), (uint32_t)((int32_t)(uint32_t)L_94));
		V_10 = 1;
		goto IL_0263;
	}

IL_0128:
	{
		int32_t L_95 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_95, 1));
		V_11 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___0_x;
		int32_t L_97 = ___1_xOff;
		int32_t L_98 = V_10;
		NullCheck(L_96);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_97, L_98));
		uint32_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_12 = ((int64_t)(uint64_t)L_100);
		uint64_t L_101 = V_11;
		uint64_t L_102 = V_12;
		uint64_t L_103 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___4_zz;
		int32_t L_105 = ___5_zzOff;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___4_zz;
		int32_t L_109 = ___5_zzOff;
		uint64_t L_110 = V_11;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_11;
		V_11 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_11;
		uint64_t L_113 = V_12;
		uint64_t L_114 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_zz;
		int32_t L_116 = ___5_zzOff;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		uint32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_113, (int64_t)L_114)), ((int64_t)(uint64_t)L_118)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___4_zz;
		int32_t L_120 = ___5_zzOff;
		uint64_t L_121 = V_11;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_120, 1))), (uint32_t)((int32_t)(uint32_t)L_121));
		uint64_t L_122 = V_11;
		V_11 = ((int64_t)((uint64_t)L_122>>((int32_t)32)));
		uint64_t L_123 = V_11;
		uint64_t L_124 = V_12;
		uint64_t L_125 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___4_zz;
		int32_t L_127 = ___5_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 2));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125)), ((int64_t)(uint64_t)L_129)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___4_zz;
		int32_t L_131 = ___5_zzOff;
		uint64_t L_132 = V_11;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_131, 2))), (uint32_t)((int32_t)(uint32_t)L_132));
		uint64_t L_133 = V_11;
		V_11 = ((int64_t)((uint64_t)L_133>>((int32_t)32)));
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_12;
		uint64_t L_136 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___4_zz;
		int32_t L_138 = ___5_zzOff;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 3));
		uint32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136)), ((int64_t)(uint64_t)L_140)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___4_zz;
		int32_t L_142 = ___5_zzOff;
		uint64_t L_143 = V_11;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_142, 3))), (uint32_t)((int32_t)(uint32_t)L_143));
		uint64_t L_144 = V_11;
		V_11 = ((int64_t)((uint64_t)L_144>>((int32_t)32)));
		uint64_t L_145 = V_11;
		uint64_t L_146 = V_12;
		uint64_t L_147 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = ___4_zz;
		int32_t L_149 = ___5_zzOff;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, 4));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_146, (int64_t)L_147)), ((int64_t)(uint64_t)L_151)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = ___4_zz;
		int32_t L_153 = ___5_zzOff;
		uint64_t L_154 = V_11;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_153, 4))), (uint32_t)((int32_t)(uint32_t)L_154));
		uint64_t L_155 = V_11;
		V_11 = ((int64_t)((uint64_t)L_155>>((int32_t)32)));
		uint64_t L_156 = V_11;
		uint64_t L_157 = V_12;
		uint64_t L_158 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = ___4_zz;
		int32_t L_160 = ___5_zzOff;
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add(L_160, 5));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_156, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_157, (int64_t)L_158)), ((int64_t)(uint64_t)L_162)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = ___4_zz;
		int32_t L_164 = ___5_zzOff;
		uint64_t L_165 = V_11;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_164, 5))), (uint32_t)((int32_t)(uint32_t)L_165));
		uint64_t L_166 = V_11;
		V_11 = ((int64_t)((uint64_t)L_166>>((int32_t)32)));
		uint64_t L_167 = V_11;
		uint64_t L_168 = V_12;
		uint64_t L_169 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = ___4_zz;
		int32_t L_171 = ___5_zzOff;
		NullCheck(L_170);
		int32_t L_172 = ((int32_t)il2cpp_codegen_add(L_171, 6));
		uint32_t L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_167, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_168, (int64_t)L_169)), ((int64_t)(uint64_t)L_173)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_174 = ___4_zz;
		int32_t L_175 = ___5_zzOff;
		uint64_t L_176 = V_11;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_175, 6))), (uint32_t)((int32_t)(uint32_t)L_176));
		uint64_t L_177 = V_11;
		V_11 = ((int64_t)((uint64_t)L_177>>((int32_t)32)));
		uint64_t L_178 = V_11;
		uint64_t L_179 = V_12;
		uint64_t L_180 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___4_zz;
		int32_t L_182 = ___5_zzOff;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 7));
		uint32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_179, (int64_t)L_180)), ((int64_t)(uint64_t)L_184)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___4_zz;
		int32_t L_186 = ___5_zzOff;
		uint64_t L_187 = V_11;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_186, 7))), (uint32_t)((int32_t)(uint32_t)L_187));
		uint64_t L_188 = V_11;
		V_11 = ((int64_t)((uint64_t)L_188>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = ___4_zz;
		int32_t L_190 = ___5_zzOff;
		uint64_t L_191 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_190, 8))), (uint32_t)((int32_t)(uint32_t)L_191));
		int32_t L_192 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_192, 1));
	}

IL_0263:
	{
		int32_t L_193 = V_10;
		if ((((int32_t)L_193) < ((int32_t)8)))
		{
			goto IL_0128;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulAddTo_m8B3C898A440E622C1272DCD8EB8227B1829414D2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_y;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = ((int64_t)(uint64_t)L_23);
		V_8 = ((int64_t)0);
		V_9 = 0;
		goto IL_0170;
	}

IL_0038:
	{
		V_10 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		int32_t L_25 = V_9;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_11 = ((int64_t)(uint64_t)L_27);
		uint64_t L_28 = V_10;
		uint64_t L_29 = V_11;
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_zz;
		int32_t L_32 = V_9;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_29, (int64_t)L_30)), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_zz;
		int32_t L_36 = V_9;
		uint64_t L_37 = V_10;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_10;
		V_10 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_10;
		uint64_t L_40 = V_11;
		uint64_t L_41 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_zz;
		int32_t L_43 = V_9;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		uint32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41)), ((int64_t)(uint64_t)L_45)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_zz;
		int32_t L_47 = V_9;
		uint64_t L_48 = V_10;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 1))), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_10;
		V_10 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_10;
		uint64_t L_51 = V_11;
		uint64_t L_52 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_zz;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 2));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_51, (int64_t)L_52)), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		int32_t L_58 = V_9;
		uint64_t L_59 = V_10;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 2))), (uint32_t)((int32_t)(uint32_t)L_59));
		uint64_t L_60 = V_10;
		V_10 = ((int64_t)((uint64_t)L_60>>((int32_t)32)));
		uint64_t L_61 = V_10;
		uint64_t L_62 = V_11;
		uint64_t L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___2_zz;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 3));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63)), ((int64_t)(uint64_t)L_67)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___2_zz;
		int32_t L_69 = V_9;
		uint64_t L_70 = V_10;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 3))), (uint32_t)((int32_t)(uint32_t)L_70));
		uint64_t L_71 = V_10;
		V_10 = ((int64_t)((uint64_t)L_71>>((int32_t)32)));
		uint64_t L_72 = V_10;
		uint64_t L_73 = V_11;
		uint64_t L_74 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_zz;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 4));
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_73, (int64_t)L_74)), ((int64_t)(uint64_t)L_78)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_zz;
		int32_t L_80 = V_9;
		uint64_t L_81 = V_10;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 4))), (uint32_t)((int32_t)(uint32_t)L_81));
		uint64_t L_82 = V_10;
		V_10 = ((int64_t)((uint64_t)L_82>>((int32_t)32)));
		uint64_t L_83 = V_10;
		uint64_t L_84 = V_11;
		uint64_t L_85 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___2_zz;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 5));
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_84, (int64_t)L_85)), ((int64_t)(uint64_t)L_89)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_9;
		uint64_t L_92 = V_10;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 5))), (uint32_t)((int32_t)(uint32_t)L_92));
		uint64_t L_93 = V_10;
		V_10 = ((int64_t)((uint64_t)L_93>>((int32_t)32)));
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		uint64_t L_96 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___2_zz;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 6));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_95, (int64_t)L_96)), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_zz;
		int32_t L_102 = V_9;
		uint64_t L_103 = V_10;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 6))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_10;
		V_10 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		uint64_t L_105 = V_10;
		uint64_t L_106 = V_11;
		uint64_t L_107 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_zz;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 7));
		uint32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107)), ((int64_t)(uint64_t)L_111)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___2_zz;
		int32_t L_113 = V_9;
		uint64_t L_114 = V_10;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_113, 7))), (uint32_t)((int32_t)(uint32_t)L_114));
		uint64_t L_115 = V_10;
		V_10 = ((int64_t)((uint64_t)L_115>>((int32_t)32)));
		uint64_t L_116 = V_8;
		uint64_t L_117 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = ___2_zz;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 8));
		uint32_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)(uint64_t)L_121)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = ___2_zz;
		int32_t L_123 = V_9;
		uint64_t L_124 = V_8;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_123, 8))), (uint32_t)((int32_t)(uint32_t)L_124));
		uint64_t L_125 = V_8;
		V_8 = ((int64_t)((uint64_t)L_125>>((int32_t)32)));
		int32_t L_126 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0170:
	{
		int32_t L_127 = V_9;
		if ((((int32_t)L_127) < ((int32_t)8)))
		{
			goto IL_0038;
		}
	}
	{
		uint64_t L_128 = V_8;
		return ((int32_t)(uint32_t)L_128);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat256_Mul33Add_m455D5A1A72CA3E94F5E28F81EEEF08E62C83E8E6 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_x;
		int32_t L_81 = ___2_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)(uint64_t)L_83);
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_1;
		uint64_t L_86 = V_7;
		uint64_t L_87 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___3_y;
		int32_t L_89 = ___4_yOff;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 5));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___5_z;
		int32_t L_93 = ___6_zOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___1_x;
		int32_t L_97 = ___2_xOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 6));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_8 = ((int64_t)(uint64_t)L_99);
		uint64_t L_100 = V_0;
		uint64_t L_101 = V_1;
		uint64_t L_102 = V_8;
		uint64_t L_103 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___3_y;
		int32_t L_105 = ___4_yOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 6));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_101, (int64_t)L_102)), (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___5_z;
		int32_t L_109 = ___6_zOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___1_x;
		int32_t L_113 = ___2_xOff;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 7));
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_9 = ((int64_t)(uint64_t)L_115);
		uint64_t L_116 = V_0;
		uint64_t L_117 = V_1;
		uint64_t L_118 = V_9;
		uint64_t L_119 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___3_y;
		int32_t L_121 = ___4_yOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 7));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_117, (int64_t)L_118)), (int64_t)L_119)), ((int64_t)(uint64_t)L_123)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ___5_z;
		int32_t L_125 = ___6_zOff;
		uint64_t L_126 = V_0;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_125, 7))), (uint32_t)((int32_t)(uint32_t)L_126));
		uint64_t L_127 = V_0;
		V_0 = ((int64_t)((uint64_t)L_127>>((int32_t)32)));
		uint64_t L_128 = V_0;
		uint64_t L_129 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_128, (int64_t)L_129));
		uint64_t L_130 = V_0;
		return L_130;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulByWordAddTo_mB3313BA5696B71160007C5C06485B70C7814915C (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___2_z;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_5))), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		uint64_t L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_13, ((int64_t)(uint64_t)L_16))), ((int64_t)(uint64_t)L_19)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		uint64_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		uint64_t L_23 = V_0;
		uint64_t L_24 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___2_z;
		NullCheck(L_25);
		int32_t L_26 = 2;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___1_y;
		NullCheck(L_28);
		int32_t L_29 = 2;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_24, ((int64_t)(uint64_t)L_27))), ((int64_t)(uint64_t)L_30)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_z;
		uint64_t L_32 = V_0;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_32));
		uint64_t L_33 = V_0;
		V_0 = ((int64_t)((uint64_t)L_33>>((int32_t)32)));
		uint64_t L_34 = V_0;
		uint64_t L_35 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		NullCheck(L_36);
		int32_t L_37 = 3;
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___1_y;
		NullCheck(L_39);
		int32_t L_40 = 3;
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_35, ((int64_t)(uint64_t)L_38))), ((int64_t)(uint64_t)L_41)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_z;
		uint64_t L_43 = V_0;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		uint64_t L_46 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		NullCheck(L_47);
		int32_t L_48 = 4;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___1_y;
		NullCheck(L_50);
		int32_t L_51 = 4;
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_46, ((int64_t)(uint64_t)L_49))), ((int64_t)(uint64_t)L_52)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		uint64_t L_54 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_54));
		uint64_t L_55 = V_0;
		V_0 = ((int64_t)((uint64_t)L_55>>((int32_t)32)));
		uint64_t L_56 = V_0;
		uint64_t L_57 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		NullCheck(L_58);
		int32_t L_59 = 5;
		uint32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_y;
		NullCheck(L_61);
		int32_t L_62 = 5;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_57, ((int64_t)(uint64_t)L_60))), ((int64_t)(uint64_t)L_63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___2_z;
		uint64_t L_65 = V_0;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_65));
		uint64_t L_66 = V_0;
		V_0 = ((int64_t)((uint64_t)L_66>>((int32_t)32)));
		uint64_t L_67 = V_0;
		uint64_t L_68 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_z;
		NullCheck(L_69);
		int32_t L_70 = 6;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 6;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_67, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_68, ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		uint64_t L_79 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___2_z;
		NullCheck(L_80);
		int32_t L_81 = 7;
		uint32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___1_y;
		NullCheck(L_83);
		int32_t L_84 = 7;
		uint32_t L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_79, ((int64_t)(uint64_t)L_82))), ((int64_t)(uint64_t)L_85)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___2_z;
		uint64_t L_87 = V_0;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_87));
		uint64_t L_88 = V_0;
		V_0 = ((int64_t)((uint64_t)L_88>>((int32_t)32)));
		uint64_t L_89 = V_0;
		return ((int32_t)(uint32_t)L_89);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Mul33DWordAdd_m68C93F122DB30B89A001CB99E04D8169971F81F6 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(8, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Mul33WordAdd_m285A520BE133DC5C2FAED6D11703CA087D945827 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m7E6C35E5110B95A53B309BC65A4C9AB9FB56BB1E(8, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_m48F45D274C5A1A33F0F319901325B5D5DD8865A9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_24 = 7;
		V_25 = ((int32_t)16);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_24;
		int32_t L_5 = L_4;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_26 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_25;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_25 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_26;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_25;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_25 = L_16;
		uint64_t L_17 = V_26;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_26;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_24;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_27 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_27;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_27;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_27;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		uint64_t L_73 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)((uint64_t)L_73>>((int32_t)32)))));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((int64_t)L_74&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_zz;
		NullCheck(L_75);
		int32_t L_76 = 6;
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint64_t L_78 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_77), ((int64_t)((uint64_t)L_78>>((int32_t)32)))));
		uint64_t L_79 = V_10;
		V_10 = ((int64_t)((int64_t)L_79&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_80 = V_7;
		uint64_t L_81 = V_9;
		uint64_t L_82 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82))));
		uint64_t L_83 = V_7;
		V_3 = ((int32_t)(uint32_t)L_83);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_zz;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_2;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_85<<1))|(int32_t)L_86)));
		uint32_t L_87 = V_3;
		V_2 = ((int32_t)((uint32_t)L_87>>((int32_t)31)));
		uint64_t L_88 = V_8;
		uint64_t L_89 = V_7;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_8;
		uint64_t L_94 = V_9;
		uint64_t L_95 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_93>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, (int64_t)L_95))))));
		uint64_t L_96 = V_8;
		V_8 = ((int64_t)((int64_t)L_96&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_97 = V_11;
		uint64_t L_98 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)((uint64_t)L_98>>((int32_t)32)))));
		uint64_t L_99 = V_10;
		V_10 = ((int64_t)((int64_t)L_99&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___0_x;
		NullCheck(L_100);
		int32_t L_101 = 4;
		uint32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_12 = ((int64_t)(uint64_t)L_102);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___1_zz;
		NullCheck(L_103);
		int32_t L_104 = 7;
		uint32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		uint64_t L_106 = V_11;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_105), ((int64_t)((uint64_t)L_106>>((int32_t)32)))));
		uint64_t L_107 = V_11;
		V_11 = ((int64_t)((int64_t)L_107&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___1_zz;
		NullCheck(L_108);
		int32_t L_109 = 8;
		uint32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		uint64_t L_111 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_110), ((int64_t)((uint64_t)L_111>>((int32_t)32)))));
		uint64_t L_112 = V_13;
		V_13 = ((int64_t)((int64_t)L_112&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_113 = V_8;
		uint64_t L_114 = V_12;
		uint64_t L_115 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, (int64_t)L_115))));
		uint64_t L_116 = V_8;
		V_3 = ((int32_t)(uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___1_zz;
		uint32_t L_118 = V_3;
		uint32_t L_119 = V_2;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_118<<1))|(int32_t)L_119)));
		uint32_t L_120 = V_3;
		V_2 = ((int32_t)((uint32_t)L_120>>((int32_t)31)));
		uint64_t L_121 = V_10;
		uint64_t L_122 = V_8;
		uint64_t L_123 = V_12;
		uint64_t L_124 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_121, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_122>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, (int64_t)L_124))))));
		uint64_t L_125 = V_11;
		uint64_t L_126 = V_10;
		uint64_t L_127 = V_12;
		uint64_t L_128 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_126>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, (int64_t)L_128))))));
		uint64_t L_129 = V_10;
		V_10 = ((int64_t)((int64_t)L_129&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_130 = V_13;
		uint64_t L_131 = V_11;
		uint64_t L_132 = V_12;
		uint64_t L_133 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_131>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_132, (int64_t)L_133))))));
		uint64_t L_134 = V_11;
		V_11 = ((int64_t)((int64_t)L_134&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_135 = V_14;
		uint64_t L_136 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, ((int64_t)((uint64_t)L_136>>((int32_t)32)))));
		uint64_t L_137 = V_13;
		V_13 = ((int64_t)((int64_t)L_137&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ___0_x;
		NullCheck(L_138);
		int32_t L_139 = 5;
		uint32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_15 = ((int64_t)(uint64_t)L_140);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___1_zz;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)9);
		uint32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		uint64_t L_144 = V_14;
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_143), ((int64_t)((uint64_t)L_144>>((int32_t)32)))));
		uint64_t L_145 = V_14;
		V_14 = ((int64_t)((int64_t)L_145&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = ___1_zz;
		NullCheck(L_146);
		int32_t L_147 = ((int32_t)10);
		uint32_t L_148 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		uint64_t L_149 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_148), ((int64_t)((uint64_t)L_149>>((int32_t)32)))));
		uint64_t L_150 = V_16;
		V_16 = ((int64_t)((int64_t)L_150&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_151 = V_10;
		uint64_t L_152 = V_15;
		uint64_t L_153 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_multiply((int64_t)L_152, (int64_t)L_153))));
		uint64_t L_154 = V_10;
		V_3 = ((int32_t)(uint32_t)L_154);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = ___1_zz;
		uint32_t L_156 = V_3;
		uint32_t L_157 = V_2;
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_156<<1))|(int32_t)L_157)));
		uint32_t L_158 = V_3;
		V_2 = ((int32_t)((uint32_t)L_158>>((int32_t)31)));
		uint64_t L_159 = V_11;
		uint64_t L_160 = V_10;
		uint64_t L_161 = V_15;
		uint64_t L_162 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_160>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)L_162))))));
		uint64_t L_163 = V_13;
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_15;
		uint64_t L_166 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_164>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_165, (int64_t)L_166))))));
		uint64_t L_167 = V_11;
		V_11 = ((int64_t)((int64_t)L_167&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_168 = V_14;
		uint64_t L_169 = V_13;
		uint64_t L_170 = V_15;
		uint64_t L_171 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_169>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_170, (int64_t)L_171))))));
		uint64_t L_172 = V_13;
		V_13 = ((int64_t)((int64_t)L_172&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_173 = V_16;
		uint64_t L_174 = V_14;
		uint64_t L_175 = V_15;
		uint64_t L_176 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_174>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_175, (int64_t)L_176))))));
		uint64_t L_177 = V_14;
		V_14 = ((int64_t)((int64_t)L_177&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_178 = V_17;
		uint64_t L_179 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, ((int64_t)((uint64_t)L_179>>((int32_t)32)))));
		uint64_t L_180 = V_16;
		V_16 = ((int64_t)((int64_t)L_180&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___0_x;
		NullCheck(L_181);
		int32_t L_182 = 6;
		uint32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_18 = ((int64_t)(uint64_t)L_183);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = ___1_zz;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)11);
		uint32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		uint64_t L_187 = V_17;
		V_19 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_186), ((int64_t)((uint64_t)L_187>>((int32_t)32)))));
		uint64_t L_188 = V_17;
		V_17 = ((int64_t)((int64_t)L_188&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = ___1_zz;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)12);
		uint32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		uint64_t L_192 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_191), ((int64_t)((uint64_t)L_192>>((int32_t)32)))));
		uint64_t L_193 = V_19;
		V_19 = ((int64_t)((int64_t)L_193&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_18;
		uint64_t L_196 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_multiply((int64_t)L_195, (int64_t)L_196))));
		uint64_t L_197 = V_11;
		V_3 = ((int32_t)(uint32_t)L_197);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___1_zz;
		uint32_t L_199 = V_3;
		uint32_t L_200 = V_2;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_199<<1))|(int32_t)L_200)));
		uint32_t L_201 = V_3;
		V_2 = ((int32_t)((uint32_t)L_201>>((int32_t)31)));
		uint64_t L_202 = V_13;
		uint64_t L_203 = V_11;
		uint64_t L_204 = V_18;
		uint64_t L_205 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_203>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_204, (int64_t)L_205))))));
		uint64_t L_206 = V_14;
		uint64_t L_207 = V_13;
		uint64_t L_208 = V_18;
		uint64_t L_209 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_206, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_207>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_208, (int64_t)L_209))))));
		uint64_t L_210 = V_13;
		V_13 = ((int64_t)((int64_t)L_210&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_211 = V_16;
		uint64_t L_212 = V_14;
		uint64_t L_213 = V_18;
		uint64_t L_214 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_211, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_212>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_213, (int64_t)L_214))))));
		uint64_t L_215 = V_14;
		V_14 = ((int64_t)((int64_t)L_215&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_216 = V_17;
		uint64_t L_217 = V_16;
		uint64_t L_218 = V_18;
		uint64_t L_219 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_216, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_217>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_218, (int64_t)L_219))))));
		uint64_t L_220 = V_16;
		V_16 = ((int64_t)((int64_t)L_220&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_221 = V_19;
		uint64_t L_222 = V_17;
		uint64_t L_223 = V_18;
		uint64_t L_224 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_221, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_222>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_223, (int64_t)L_224))))));
		uint64_t L_225 = V_17;
		V_17 = ((int64_t)((int64_t)L_225&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_226 = V_20;
		uint64_t L_227 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_226, ((int64_t)((uint64_t)L_227>>((int32_t)32)))));
		uint64_t L_228 = V_19;
		V_19 = ((int64_t)((int64_t)L_228&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = ___0_x;
		NullCheck(L_229);
		int32_t L_230 = 7;
		uint32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		V_21 = ((int64_t)(uint64_t)L_231);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_232 = ___1_zz;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)13);
		uint32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		uint64_t L_235 = V_20;
		V_22 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_234), ((int64_t)((uint64_t)L_235>>((int32_t)32)))));
		uint64_t L_236 = V_20;
		V_20 = ((int64_t)((int64_t)L_236&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_237 = ___1_zz;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)14);
		uint32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		uint64_t L_240 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_239), ((int64_t)((uint64_t)L_240>>((int32_t)32)))));
		uint64_t L_241 = V_22;
		V_22 = ((int64_t)((int64_t)L_241&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_242 = V_13;
		uint64_t L_243 = V_21;
		uint64_t L_244 = V_0;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, ((int64_t)il2cpp_codegen_multiply((int64_t)L_243, (int64_t)L_244))));
		uint64_t L_245 = V_13;
		V_3 = ((int32_t)(uint32_t)L_245);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_246 = ___1_zz;
		uint32_t L_247 = V_3;
		uint32_t L_248 = V_2;
		NullCheck(L_246);
		(L_246)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_247<<1))|(int32_t)L_248)));
		uint32_t L_249 = V_3;
		V_2 = ((int32_t)((uint32_t)L_249>>((int32_t)31)));
		uint64_t L_250 = V_14;
		uint64_t L_251 = V_13;
		uint64_t L_252 = V_21;
		uint64_t L_253 = V_4;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_251>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_252, (int64_t)L_253))))));
		uint64_t L_254 = V_16;
		uint64_t L_255 = V_14;
		uint64_t L_256 = V_21;
		uint64_t L_257 = V_6;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_254, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_255>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_256, (int64_t)L_257))))));
		uint64_t L_258 = V_17;
		uint64_t L_259 = V_16;
		uint64_t L_260 = V_21;
		uint64_t L_261 = V_9;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_259>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_260, (int64_t)L_261))))));
		uint64_t L_262 = V_19;
		uint64_t L_263 = V_17;
		uint64_t L_264 = V_21;
		uint64_t L_265 = V_12;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_262, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_263>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_264, (int64_t)L_265))))));
		uint64_t L_266 = V_20;
		uint64_t L_267 = V_19;
		uint64_t L_268 = V_21;
		uint64_t L_269 = V_15;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_266, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_267>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_268, (int64_t)L_269))))));
		uint64_t L_270 = V_22;
		uint64_t L_271 = V_20;
		uint64_t L_272 = V_21;
		uint64_t L_273 = V_18;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_271>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_272, (int64_t)L_273))))));
		uint64_t L_274 = V_23;
		uint64_t L_275 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_274, ((int64_t)((uint64_t)L_275>>((int32_t)32)))));
		uint64_t L_276 = V_14;
		V_3 = ((int32_t)(uint32_t)L_276);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = ___1_zz;
		uint32_t L_278 = V_3;
		uint32_t L_279 = V_2;
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_278<<1))|(int32_t)L_279)));
		uint32_t L_280 = V_3;
		V_2 = ((int32_t)((uint32_t)L_280>>((int32_t)31)));
		uint64_t L_281 = V_16;
		V_3 = ((int32_t)(uint32_t)L_281);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_282 = ___1_zz;
		uint32_t L_283 = V_3;
		uint32_t L_284 = V_2;
		NullCheck(L_282);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_283<<1))|(int32_t)L_284)));
		uint32_t L_285 = V_3;
		V_2 = ((int32_t)((uint32_t)L_285>>((int32_t)31)));
		uint64_t L_286 = V_17;
		V_3 = ((int32_t)(uint32_t)L_286);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_287 = ___1_zz;
		uint32_t L_288 = V_3;
		uint32_t L_289 = V_2;
		NullCheck(L_287);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_288<<1))|(int32_t)L_289)));
		uint32_t L_290 = V_3;
		V_2 = ((int32_t)((uint32_t)L_290>>((int32_t)31)));
		uint64_t L_291 = V_19;
		V_3 = ((int32_t)(uint32_t)L_291);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_292 = ___1_zz;
		uint32_t L_293 = V_3;
		uint32_t L_294 = V_2;
		NullCheck(L_292);
		(L_292)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_293<<1))|(int32_t)L_294)));
		uint32_t L_295 = V_3;
		V_2 = ((int32_t)((uint32_t)L_295>>((int32_t)31)));
		uint64_t L_296 = V_20;
		V_3 = ((int32_t)(uint32_t)L_296);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_297 = ___1_zz;
		uint32_t L_298 = V_3;
		uint32_t L_299 = V_2;
		NullCheck(L_297);
		(L_297)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_298<<1))|(int32_t)L_299)));
		uint32_t L_300 = V_3;
		V_2 = ((int32_t)((uint32_t)L_300>>((int32_t)31)));
		uint64_t L_301 = V_22;
		V_3 = ((int32_t)(uint32_t)L_301);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_302 = ___1_zz;
		uint32_t L_303 = V_3;
		uint32_t L_304 = V_2;
		NullCheck(L_302);
		(L_302)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_303<<1))|(int32_t)L_304)));
		uint32_t L_305 = V_3;
		V_2 = ((int32_t)((uint32_t)L_305>>((int32_t)31)));
		uint64_t L_306 = V_23;
		V_3 = ((int32_t)(uint32_t)L_306);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = ___1_zz;
		uint32_t L_308 = V_3;
		uint32_t L_309 = V_2;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_308<<1))|(int32_t)L_309)));
		uint32_t L_310 = V_3;
		V_2 = ((int32_t)((uint32_t)L_310>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_311 = ___1_zz;
		NullCheck(L_311);
		int32_t L_312 = ((int32_t)15);
		uint32_t L_313 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		uint64_t L_314 = V_23;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_313, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_314>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_315 = ___1_zz;
		uint32_t L_316 = V_3;
		uint32_t L_317 = V_2;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_316<<1))|(int32_t)L_317)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_mA1CBFC0AB9685DAD6C6496741DEC5E4A1014F1A5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		V_2 = 0;
		V_24 = 7;
		V_25 = ((int32_t)16);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		int32_t L_6 = V_24;
		int32_t L_7 = L_6;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		uint32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int64_t L_10 = ((int64_t)(uint64_t)L_9);
		V_26 = ((int64_t)il2cpp_codegen_multiply(L_10, L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		int32_t L_12 = ___3_zzOff;
		int32_t L_13 = V_25;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_25 = L_14;
		uint32_t L_15 = V_2;
		uint64_t L_16 = V_26;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_14))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_15<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_16>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_zz;
		int32_t L_18 = ___3_zzOff;
		int32_t L_19 = V_25;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_25 = L_20;
		uint64_t L_21 = V_26;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_20))), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_21>>1))));
		uint64_t L_22 = V_26;
		V_2 = ((int32_t)(uint32_t)L_22);
		int32_t L_23 = V_24;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_0;
		V_27 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_24, (int64_t)L_25));
		uint32_t L_26 = V_2;
		uint64_t L_27 = V_27;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_26<<((int32_t)31)))))|((int64_t)((uint64_t)L_27>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = ___3_zzOff;
		uint64_t L_30 = V_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_27;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_31>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = ___3_zzOff;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 2));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)(uint64_t)L_39);
		uint64_t L_40 = V_1;
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_multiply((int64_t)L_41, (int64_t)L_42))));
		uint64_t L_43 = V_1;
		V_3 = ((int32_t)(uint32_t)L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_zz;
		int32_t L_45 = ___3_zzOff;
		uint32_t L_46 = V_3;
		uint32_t L_47 = V_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_46<<1))|(int32_t)L_47)));
		uint32_t L_48 = V_3;
		V_2 = ((int32_t)((uint32_t)L_48>>((int32_t)31)));
		uint64_t L_49 = V_5;
		uint64_t L_50 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)((uint64_t)L_50>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		int32_t L_52 = ___1_xOff;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)(uint64_t)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___2_zz;
		int32_t L_56 = ___3_zzOff;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_7 = ((int64_t)(uint64_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = ___3_zzOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_8 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_5;
		uint64_t L_64 = V_6;
		uint64_t L_65 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		uint64_t L_66 = V_5;
		V_3 = ((int32_t)(uint32_t)L_66);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_zz;
		int32_t L_68 = ___3_zzOff;
		uint32_t L_69 = V_3;
		uint32_t L_70 = V_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 2))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_69<<1))|(int32_t)L_70)));
		uint32_t L_71 = V_3;
		V_2 = ((int32_t)((uint32_t)L_71>>((int32_t)31)));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_5;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_73>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75))))));
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)((uint64_t)L_77>>((int32_t)32)))));
		uint64_t L_78 = V_7;
		V_7 = ((int64_t)((int64_t)L_78&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 3));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_9 = ((int64_t)(uint64_t)L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = ___3_zzOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		uint64_t L_87 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_86), ((int64_t)((uint64_t)L_87>>((int32_t)32)))));
		uint64_t L_88 = V_8;
		V_8 = ((int64_t)((int64_t)L_88&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___2_zz;
		int32_t L_90 = ___3_zzOff;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 6));
		uint32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		uint64_t L_93 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_92), ((int64_t)((uint64_t)L_93>>((int32_t)32)))));
		uint64_t L_94 = V_10;
		V_10 = ((int64_t)((int64_t)L_94&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_95 = V_7;
		uint64_t L_96 = V_9;
		uint64_t L_97 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_multiply((int64_t)L_96, (int64_t)L_97))));
		uint64_t L_98 = V_7;
		V_3 = ((int32_t)(uint32_t)L_98);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___2_zz;
		int32_t L_100 = ___3_zzOff;
		uint32_t L_101 = V_3;
		uint32_t L_102 = V_2;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 3))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_101<<1))|(int32_t)L_102)));
		uint32_t L_103 = V_3;
		V_2 = ((int32_t)((uint32_t)L_103>>((int32_t)31)));
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_7;
		uint64_t L_106 = V_9;
		uint64_t L_107 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_105>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))))));
		uint64_t L_108 = V_10;
		uint64_t L_109 = V_8;
		uint64_t L_110 = V_9;
		uint64_t L_111 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_109>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_110, (int64_t)L_111))))));
		uint64_t L_112 = V_8;
		V_8 = ((int64_t)((int64_t)L_112&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_113 = V_11;
		uint64_t L_114 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)((uint64_t)L_114>>((int32_t)32)))));
		uint64_t L_115 = V_10;
		V_10 = ((int64_t)((int64_t)L_115&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___0_x;
		int32_t L_117 = ___1_xOff;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 4));
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_12 = ((int64_t)(uint64_t)L_119);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___2_zz;
		int32_t L_121 = ___3_zzOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 7));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		uint64_t L_124 = V_11;
		V_13 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_123), ((int64_t)((uint64_t)L_124>>((int32_t)32)))));
		uint64_t L_125 = V_11;
		V_11 = ((int64_t)((int64_t)L_125&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___2_zz;
		int32_t L_127 = ___3_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 8));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		uint64_t L_130 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_129), ((int64_t)((uint64_t)L_130>>((int32_t)32)))));
		uint64_t L_131 = V_13;
		V_13 = ((int64_t)((int64_t)L_131&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_132 = V_8;
		uint64_t L_133 = V_12;
		uint64_t L_134 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_132, ((int64_t)il2cpp_codegen_multiply((int64_t)L_133, (int64_t)L_134))));
		uint64_t L_135 = V_8;
		V_3 = ((int32_t)(uint32_t)L_135);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ___2_zz;
		int32_t L_137 = ___3_zzOff;
		uint32_t L_138 = V_3;
		uint32_t L_139 = V_2;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_137, 4))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_138<<1))|(int32_t)L_139)));
		uint32_t L_140 = V_3;
		V_2 = ((int32_t)((uint32_t)L_140>>((int32_t)31)));
		uint64_t L_141 = V_10;
		uint64_t L_142 = V_8;
		uint64_t L_143 = V_12;
		uint64_t L_144 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_141, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_142>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_143, (int64_t)L_144))))));
		uint64_t L_145 = V_11;
		uint64_t L_146 = V_10;
		uint64_t L_147 = V_12;
		uint64_t L_148 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_146>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_147, (int64_t)L_148))))));
		uint64_t L_149 = V_10;
		V_10 = ((int64_t)((int64_t)L_149&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_150 = V_13;
		uint64_t L_151 = V_11;
		uint64_t L_152 = V_12;
		uint64_t L_153 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_151>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_152, (int64_t)L_153))))));
		uint64_t L_154 = V_11;
		V_11 = ((int64_t)((int64_t)L_154&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_155 = V_14;
		uint64_t L_156 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)((uint64_t)L_156>>((int32_t)32)))));
		uint64_t L_157 = V_13;
		V_13 = ((int64_t)((int64_t)L_157&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = ___0_x;
		int32_t L_159 = ___1_xOff;
		NullCheck(L_158);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_159, 5));
		uint32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_15 = ((int64_t)(uint64_t)L_161);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = ___2_zz;
		int32_t L_163 = ___3_zzOff;
		NullCheck(L_162);
		int32_t L_164 = ((int32_t)il2cpp_codegen_add(L_163, ((int32_t)9)));
		uint32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		uint64_t L_166 = V_14;
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_165), ((int64_t)((uint64_t)L_166>>((int32_t)32)))));
		uint64_t L_167 = V_14;
		V_14 = ((int64_t)((int64_t)L_167&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_168 = ___2_zz;
		int32_t L_169 = ___3_zzOff;
		NullCheck(L_168);
		int32_t L_170 = ((int32_t)il2cpp_codegen_add(L_169, ((int32_t)10)));
		uint32_t L_171 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		uint64_t L_172 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_171), ((int64_t)((uint64_t)L_172>>((int32_t)32)))));
		uint64_t L_173 = V_16;
		V_16 = ((int64_t)((int64_t)L_173&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_174 = V_10;
		uint64_t L_175 = V_15;
		uint64_t L_176 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_174, ((int64_t)il2cpp_codegen_multiply((int64_t)L_175, (int64_t)L_176))));
		uint64_t L_177 = V_10;
		V_3 = ((int32_t)(uint32_t)L_177);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = ___2_zz;
		int32_t L_179 = ___3_zzOff;
		uint32_t L_180 = V_3;
		uint32_t L_181 = V_2;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_179, 5))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_180<<1))|(int32_t)L_181)));
		uint32_t L_182 = V_3;
		V_2 = ((int32_t)((uint32_t)L_182>>((int32_t)31)));
		uint64_t L_183 = V_11;
		uint64_t L_184 = V_10;
		uint64_t L_185 = V_15;
		uint64_t L_186 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_184>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_185, (int64_t)L_186))))));
		uint64_t L_187 = V_13;
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_15;
		uint64_t L_190 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_187, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_188>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_189, (int64_t)L_190))))));
		uint64_t L_191 = V_11;
		V_11 = ((int64_t)((int64_t)L_191&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_192 = V_14;
		uint64_t L_193 = V_13;
		uint64_t L_194 = V_15;
		uint64_t L_195 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_193>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_194, (int64_t)L_195))))));
		uint64_t L_196 = V_13;
		V_13 = ((int64_t)((int64_t)L_196&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_197 = V_16;
		uint64_t L_198 = V_14;
		uint64_t L_199 = V_15;
		uint64_t L_200 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_197, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_198>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_199, (int64_t)L_200))))));
		uint64_t L_201 = V_14;
		V_14 = ((int64_t)((int64_t)L_201&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_202 = V_17;
		uint64_t L_203 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)((uint64_t)L_203>>((int32_t)32)))));
		uint64_t L_204 = V_16;
		V_16 = ((int64_t)((int64_t)L_204&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_205 = ___0_x;
		int32_t L_206 = ___1_xOff;
		NullCheck(L_205);
		int32_t L_207 = ((int32_t)il2cpp_codegen_add(L_206, 6));
		uint32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		V_18 = ((int64_t)(uint64_t)L_208);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___2_zz;
		int32_t L_210 = ___3_zzOff;
		NullCheck(L_209);
		int32_t L_211 = ((int32_t)il2cpp_codegen_add(L_210, ((int32_t)11)));
		uint32_t L_212 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		uint64_t L_213 = V_17;
		V_19 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_212), ((int64_t)((uint64_t)L_213>>((int32_t)32)))));
		uint64_t L_214 = V_17;
		V_17 = ((int64_t)((int64_t)L_214&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_215 = ___2_zz;
		int32_t L_216 = ___3_zzOff;
		NullCheck(L_215);
		int32_t L_217 = ((int32_t)il2cpp_codegen_add(L_216, ((int32_t)12)));
		uint32_t L_218 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		uint64_t L_219 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_218), ((int64_t)((uint64_t)L_219>>((int32_t)32)))));
		uint64_t L_220 = V_19;
		V_19 = ((int64_t)((int64_t)L_220&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_221 = V_11;
		uint64_t L_222 = V_18;
		uint64_t L_223 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_221, ((int64_t)il2cpp_codegen_multiply((int64_t)L_222, (int64_t)L_223))));
		uint64_t L_224 = V_11;
		V_3 = ((int32_t)(uint32_t)L_224);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_225 = ___2_zz;
		int32_t L_226 = ___3_zzOff;
		uint32_t L_227 = V_3;
		uint32_t L_228 = V_2;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_226, 6))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_227<<1))|(int32_t)L_228)));
		uint32_t L_229 = V_3;
		V_2 = ((int32_t)((uint32_t)L_229>>((int32_t)31)));
		uint64_t L_230 = V_13;
		uint64_t L_231 = V_11;
		uint64_t L_232 = V_18;
		uint64_t L_233 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_231>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_232, (int64_t)L_233))))));
		uint64_t L_234 = V_14;
		uint64_t L_235 = V_13;
		uint64_t L_236 = V_18;
		uint64_t L_237 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_235>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_236, (int64_t)L_237))))));
		uint64_t L_238 = V_13;
		V_13 = ((int64_t)((int64_t)L_238&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_239 = V_16;
		uint64_t L_240 = V_14;
		uint64_t L_241 = V_18;
		uint64_t L_242 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_239, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_240>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_241, (int64_t)L_242))))));
		uint64_t L_243 = V_14;
		V_14 = ((int64_t)((int64_t)L_243&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_244 = V_17;
		uint64_t L_245 = V_16;
		uint64_t L_246 = V_18;
		uint64_t L_247 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_244, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_245>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_246, (int64_t)L_247))))));
		uint64_t L_248 = V_16;
		V_16 = ((int64_t)((int64_t)L_248&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_249 = V_19;
		uint64_t L_250 = V_17;
		uint64_t L_251 = V_18;
		uint64_t L_252 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_249, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_250>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_251, (int64_t)L_252))))));
		uint64_t L_253 = V_17;
		V_17 = ((int64_t)((int64_t)L_253&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_254 = V_20;
		uint64_t L_255 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_254, ((int64_t)((uint64_t)L_255>>((int32_t)32)))));
		uint64_t L_256 = V_19;
		V_19 = ((int64_t)((int64_t)L_256&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = ___0_x;
		int32_t L_258 = ___1_xOff;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add(L_258, 7));
		uint32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_21 = ((int64_t)(uint64_t)L_260);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_261 = ___2_zz;
		int32_t L_262 = ___3_zzOff;
		NullCheck(L_261);
		int32_t L_263 = ((int32_t)il2cpp_codegen_add(L_262, ((int32_t)13)));
		uint32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		uint64_t L_265 = V_20;
		V_22 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_264), ((int64_t)((uint64_t)L_265>>((int32_t)32)))));
		uint64_t L_266 = V_20;
		V_20 = ((int64_t)((int64_t)L_266&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_267 = ___2_zz;
		int32_t L_268 = ___3_zzOff;
		NullCheck(L_267);
		int32_t L_269 = ((int32_t)il2cpp_codegen_add(L_268, ((int32_t)14)));
		uint32_t L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		uint64_t L_271 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_270), ((int64_t)((uint64_t)L_271>>((int32_t)32)))));
		uint64_t L_272 = V_22;
		V_22 = ((int64_t)((int64_t)L_272&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_273 = V_13;
		uint64_t L_274 = V_21;
		uint64_t L_275 = V_0;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_273, ((int64_t)il2cpp_codegen_multiply((int64_t)L_274, (int64_t)L_275))));
		uint64_t L_276 = V_13;
		V_3 = ((int32_t)(uint32_t)L_276);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = ___2_zz;
		int32_t L_278 = ___3_zzOff;
		uint32_t L_279 = V_3;
		uint32_t L_280 = V_2;
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_278, 7))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_279<<1))|(int32_t)L_280)));
		uint32_t L_281 = V_3;
		V_2 = ((int32_t)((uint32_t)L_281>>((int32_t)31)));
		uint64_t L_282 = V_14;
		uint64_t L_283 = V_13;
		uint64_t L_284 = V_21;
		uint64_t L_285 = V_4;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_282, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_283>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_284, (int64_t)L_285))))));
		uint64_t L_286 = V_16;
		uint64_t L_287 = V_14;
		uint64_t L_288 = V_21;
		uint64_t L_289 = V_6;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_286, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_287>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_288, (int64_t)L_289))))));
		uint64_t L_290 = V_17;
		uint64_t L_291 = V_16;
		uint64_t L_292 = V_21;
		uint64_t L_293 = V_9;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_291>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_292, (int64_t)L_293))))));
		uint64_t L_294 = V_19;
		uint64_t L_295 = V_17;
		uint64_t L_296 = V_21;
		uint64_t L_297 = V_12;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_295>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_296, (int64_t)L_297))))));
		uint64_t L_298 = V_20;
		uint64_t L_299 = V_19;
		uint64_t L_300 = V_21;
		uint64_t L_301 = V_15;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_298, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_299>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_300, (int64_t)L_301))))));
		uint64_t L_302 = V_22;
		uint64_t L_303 = V_20;
		uint64_t L_304 = V_21;
		uint64_t L_305 = V_18;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_303>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_304, (int64_t)L_305))))));
		uint64_t L_306 = V_23;
		uint64_t L_307 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_306, ((int64_t)((uint64_t)L_307>>((int32_t)32)))));
		uint64_t L_308 = V_14;
		V_3 = ((int32_t)(uint32_t)L_308);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_309 = ___2_zz;
		int32_t L_310 = ___3_zzOff;
		uint32_t L_311 = V_3;
		uint32_t L_312 = V_2;
		NullCheck(L_309);
		(L_309)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_310, 8))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_311<<1))|(int32_t)L_312)));
		uint32_t L_313 = V_3;
		V_2 = ((int32_t)((uint32_t)L_313>>((int32_t)31)));
		uint64_t L_314 = V_16;
		V_3 = ((int32_t)(uint32_t)L_314);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_315 = ___2_zz;
		int32_t L_316 = ___3_zzOff;
		uint32_t L_317 = V_3;
		uint32_t L_318 = V_2;
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_316, ((int32_t)9)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_317<<1))|(int32_t)L_318)));
		uint32_t L_319 = V_3;
		V_2 = ((int32_t)((uint32_t)L_319>>((int32_t)31)));
		uint64_t L_320 = V_17;
		V_3 = ((int32_t)(uint32_t)L_320);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_321 = ___2_zz;
		int32_t L_322 = ___3_zzOff;
		uint32_t L_323 = V_3;
		uint32_t L_324 = V_2;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_322, ((int32_t)10)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_323<<1))|(int32_t)L_324)));
		uint32_t L_325 = V_3;
		V_2 = ((int32_t)((uint32_t)L_325>>((int32_t)31)));
		uint64_t L_326 = V_19;
		V_3 = ((int32_t)(uint32_t)L_326);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_327 = ___2_zz;
		int32_t L_328 = ___3_zzOff;
		uint32_t L_329 = V_3;
		uint32_t L_330 = V_2;
		NullCheck(L_327);
		(L_327)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_328, ((int32_t)11)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_329<<1))|(int32_t)L_330)));
		uint32_t L_331 = V_3;
		V_2 = ((int32_t)((uint32_t)L_331>>((int32_t)31)));
		uint64_t L_332 = V_20;
		V_3 = ((int32_t)(uint32_t)L_332);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_333 = ___2_zz;
		int32_t L_334 = ___3_zzOff;
		uint32_t L_335 = V_3;
		uint32_t L_336 = V_2;
		NullCheck(L_333);
		(L_333)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_334, ((int32_t)12)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_335<<1))|(int32_t)L_336)));
		uint32_t L_337 = V_3;
		V_2 = ((int32_t)((uint32_t)L_337>>((int32_t)31)));
		uint64_t L_338 = V_22;
		V_3 = ((int32_t)(uint32_t)L_338);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_339 = ___2_zz;
		int32_t L_340 = ___3_zzOff;
		uint32_t L_341 = V_3;
		uint32_t L_342 = V_2;
		NullCheck(L_339);
		(L_339)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_340, ((int32_t)13)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_341<<1))|(int32_t)L_342)));
		uint32_t L_343 = V_3;
		V_2 = ((int32_t)((uint32_t)L_343>>((int32_t)31)));
		uint64_t L_344 = V_23;
		V_3 = ((int32_t)(uint32_t)L_344);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_345 = ___2_zz;
		int32_t L_346 = ___3_zzOff;
		uint32_t L_347 = V_3;
		uint32_t L_348 = V_2;
		NullCheck(L_345);
		(L_345)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_346, ((int32_t)14)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_347<<1))|(int32_t)L_348)));
		uint32_t L_349 = V_3;
		V_2 = ((int32_t)((uint32_t)L_349>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_350 = ___2_zz;
		int32_t L_351 = ___3_zzOff;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_add(L_351, ((int32_t)15)));
		uint32_t L_353 = (L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		uint64_t L_354 = V_23;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_353, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_354>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_355 = ___2_zz;
		int32_t L_356 = ___3_zzOff;
		uint32_t L_357 = V_3;
		uint32_t L_358 = V_2;
		NullCheck(L_355);
		(L_355)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_356, ((int32_t)15)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_357<<1))|(int32_t)L_358)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_Sub_m4999AB2169B04631F5CBCDD21AFBD2054BCFBBB9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___0_x;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___1_y;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add(L_70, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___2_z;
		int64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)(L_79>>((int32_t)32)));
		int64_t L_80 = V_0;
		return ((int32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_Sub_m632B841EC1A092C0FCD1B936E7EA4037C6CA023D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_y;
		int32_t L_84 = ___3_yOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___4_z;
		int32_t L_88 = ___5_zOff;
		int64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___0_x;
		int32_t L_93 = ___1_xOff;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add(L_93, 7));
		uint32_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___2_y;
		int32_t L_97 = ___3_yOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 7));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_0 = ((int64_t)il2cpp_codegen_add(L_91, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_99)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___4_z;
		int32_t L_101 = ___5_zOff;
		int64_t L_102 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, 7))), (uint32_t)((int32_t)(uint32_t)L_102));
		int64_t L_103 = V_0;
		V_0 = ((int64_t)(L_103>>((int32_t)32)));
		int64_t L_104 = V_0;
		return ((int32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_SubFrom_m13D5AD72F31526B0F56D32E765711815B6C436D3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_z;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___0_x;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___1_z;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___0_x;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add(L_70, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___1_z;
		int64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)(L_79>>((int32_t)32)));
		int64_t L_80 = V_0;
		return ((int32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat256_ToBigInteger_mFD734089EE28C0220CE899E461C262A400DD1956 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(7, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat256_ToBigInteger64_m618A44B3FA1E01138F20505C35944A25197DDDF4 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(3, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat320_Copy64_mE4F89FAC91F8F723A5A1BF17BE33A1C958EE1987 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_19);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat320_Copy64_m32C471135156CE4D9ACA62E4B7259C70E1613749 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, int32_t ___1_xOff, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint64_t)L_17);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		int64_t L_29 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint64_t)L_29);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat320_Create64_mD146DD95E664598D01B6798CC66B0B46AF85E76D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat320_CreateExt64_m95FE43AB92054EE135DAE24A5A9EC468DB38CF13 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat320_Eq64_m16C0FD23DBA1DCA0BA02A2AFC0E2895F2635ED89 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 4;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat320_IsOne64_mDAD7E54A2F5A90D9A51FC22E086DD287998F5BDF (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat320_IsZero64_m4F05F5593ECCE81B9190E2D5D6CE6BFB0E0462E1 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat320_ToBigInteger64_m63063EF46CC678F51DCCD287AFD04EE5A43D05E2 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(4, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)5)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat384_Mul_m318F69F125BFF968FCC8D6F9AC6D06D7A1603CE9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	uint32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_zz;
		Nat192_Mul_m1110336F8C51C175E8C3CB2936AEEAF800ECC4AA(L_0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_zz;
		Nat192_Mul_mECD309C9E6CD8A3DFD67EB260D8C3DCFB3AA3C24(L_3, 6, L_4, 6, L_5, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_zz;
		uint32_t L_8;
		L_8 = Nat192_AddToEachOther_mA20AB37302E6653AA90531CAC497F3E7F9AD611B(L_6, 6, L_7, ((int32_t)12), NULL);
		V_0 = L_8;
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		uint32_t L_12;
		L_12 = Nat192_AddTo_m643229DD5A369427B1439A03ACDB2515C47FE36D(L_10, 0, L_11, 6, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_12));
		uint32_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_zz;
		uint32_t L_16 = V_1;
		uint32_t L_17;
		L_17 = Nat192_AddTo_m643229DD5A369427B1439A03ACDB2515C47FE36D(L_14, ((int32_t)18), L_15, ((int32_t)12), L_16, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = Nat192_Create_m080244D08AA36F401220A2C103FF8869E1F813F6(NULL);
		V_2 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19;
		L_19 = Nat192_Create_m080244D08AA36F401220A2C103FF8869E1F813F6(NULL);
		V_3 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		bool L_23;
		L_23 = Nat192_Diff_m0A5BFDB7BC50400472B408FE32A513390581C3FD(L_20, 6, L_21, 0, L_22, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		bool L_27;
		L_27 = Nat192_Diff_m0A5BFDB7BC50400472B408FE32A513390581C3FD(L_24, 6, L_25, 0, L_26, 0, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28;
		L_28 = Nat192_CreateExt_m25BB599D6E4AA0456D937EF17973F603C916ED04(NULL);
		V_5 = L_28;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_5;
		Nat192_Mul_m1110336F8C51C175E8C3CB2936AEEAF800ECC4AA(L_29, L_30, L_31, NULL);
		uint32_t L_32 = V_0;
		bool L_33 = V_4;
		if (L_33)
		{
			G_B2_0 = L_32;
			goto IL_0087;
		}
		G_B1_0 = L_32;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_zz;
		int32_t L_36;
		L_36 = Nat_SubFrom_m3574A843E61B7A8F9204829B8DE9E350FFC04A2B(((int32_t)12), L_34, 0, L_35, 6, NULL);
		G_B3_0 = ((uint32_t)(L_36));
		G_B3_1 = G_B1_0;
		goto IL_0093;
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___2_zz;
		uint32_t L_39;
		L_39 = Nat_AddTo_mFC93824AD1EFEF9B8BF65FAA1B194C52C41484D1(((int32_t)12), L_37, 0, L_38, 6, NULL);
		G_B3_0 = L_39;
		G_B3_1 = G_B2_0;
	}

IL_0093:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		uint32_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_zz;
		uint32_t L_42;
		L_42 = Nat_AddWordAt_m69287D723F9D58E8ECA2E7004BAA4E33D95BDCA7(((int32_t)24), L_40, L_41, ((int32_t)18), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat384_Square_m18BE4C84C7EE5B8F07E5320A63F208131ADE5DDE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_zz;
		Nat192_Square_m4E97D60DA1266BF2FED4943BCAB5942583DD2337(L_0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_zz;
		Nat192_Square_m37DC59412923DE029C4643ABC311534CC04EE7BF(L_2, 6, L_3, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_zz;
		uint32_t L_6;
		L_6 = Nat192_AddToEachOther_mA20AB37302E6653AA90531CAC497F3E7F9AD611B(L_4, 6, L_5, ((int32_t)12), NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		uint32_t L_10;
		L_10 = Nat192_AddTo_m643229DD5A369427B1439A03ACDB2515C47FE36D(L_8, 0, L_9, 6, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_10));
		uint32_t L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___1_zz;
		uint32_t L_14 = V_1;
		uint32_t L_15;
		L_15 = Nat192_AddTo_m643229DD5A369427B1439A03ACDB2515C47FE36D(L_12, ((int32_t)18), L_13, ((int32_t)12), L_14, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = Nat192_Create_m080244D08AA36F401220A2C103FF8869E1F813F6(NULL);
		V_2 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		bool L_20;
		L_20 = Nat192_Diff_m0A5BFDB7BC50400472B408FE32A513390581C3FD(L_17, 6, L_18, 0, L_19, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21;
		L_21 = Nat192_CreateExt_m25BB599D6E4AA0456D937EF17973F603C916ED04(NULL);
		V_3 = L_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		Nat192_Square_m4E97D60DA1266BF2FED4943BCAB5942583DD2337(L_22, L_23, NULL);
		uint32_t L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___1_zz;
		int32_t L_27;
		L_27 = Nat_SubFrom_m3574A843E61B7A8F9204829B8DE9E350FFC04A2B(((int32_t)12), L_25, 0, L_26, 6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, L_27));
		uint32_t L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___1_zz;
		uint32_t L_30;
		L_30 = Nat_AddWordAt_m69287D723F9D58E8ECA2E7004BAA4E33D95BDCA7(((int32_t)24), L_28, L_29, ((int32_t)18), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat448_Copy64_mB65CBC2B98AD589C12493955C3AE2D037AE6693B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_19);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat448_Copy64_m8D2A33E8E83272EA1615E9711DD66C53605F8527 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, int32_t ___1_xOff, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint64_t)L_17);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		int64_t L_29 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint64_t)L_29);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = ___2_z;
		int32_t L_31 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 5))), (uint64_t)L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_x;
		int32_t L_39 = ___1_xOff;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 6));
		int64_t L_41 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 6))), (uint64_t)L_41);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat448_Create64_mACE5A8F1605FD18C03A4A7EF90D1AF90CE9BD49F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat448_CreateExt64_mF3A49E6B255C9D5F7C719A15A0E7ED153FF13A85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat448_Eq64_mF04132830E4A70796228BA3AD8844887AE498A3F (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 6;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat448_IsOne64_mE8AD70020E2FD28C198877CFEF3FEA0621AC404B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)7)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat448_IsZero64_mCB39C78C3773CADD01721CF1E070D6AB3CA13F58 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)7)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat448_ToBigInteger64_mEBC641596AE9E368F24630C6369B8987BB286588 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)56));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(6, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)7)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat512_Mul_mE345DA87490C1B0A8F100751F2CF1797737D47EE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	uint32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_zz;
		Nat256_Mul_mCB0842227FF347701C81D8435E04B4EA4F58572C(L_0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_zz;
		Nat256_Mul_mEA400AFA0A023E52E87AF1F16B9F897D9F663677(L_3, 8, L_4, 8, L_5, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_zz;
		uint32_t L_8;
		L_8 = Nat256_AddToEachOther_m3C6E6286B07DF6EC9F75BAAA754A0C317FECF5F0(L_6, 8, L_7, ((int32_t)16), NULL);
		V_0 = L_8;
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		uint32_t L_12;
		L_12 = Nat256_AddTo_mC1FA070B52B5F92E27028E5F65F5E5A715556E01(L_10, 0, L_11, 8, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_12));
		uint32_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_zz;
		uint32_t L_16 = V_1;
		uint32_t L_17;
		L_17 = Nat256_AddTo_mC1FA070B52B5F92E27028E5F65F5E5A715556E01(L_14, ((int32_t)24), L_15, ((int32_t)16), L_16, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = Nat256_Create_mA8B40672EFEF44EF1770D8C921F3962D80CC947D(NULL);
		V_2 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19;
		L_19 = Nat256_Create_mA8B40672EFEF44EF1770D8C921F3962D80CC947D(NULL);
		V_3 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		bool L_23;
		L_23 = Nat256_Diff_m4F1E93F214A03A7E52136A592C5AD8AA297A58AE(L_20, 8, L_21, 0, L_22, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		bool L_27;
		L_27 = Nat256_Diff_m4F1E93F214A03A7E52136A592C5AD8AA297A58AE(L_24, 8, L_25, 0, L_26, 0, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28;
		L_28 = Nat256_CreateExt_mFC7487BD1A4E9CDE02D4435E806BE2E108E8A667(NULL);
		V_5 = L_28;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_5;
		Nat256_Mul_mCB0842227FF347701C81D8435E04B4EA4F58572C(L_29, L_30, L_31, NULL);
		uint32_t L_32 = V_0;
		bool L_33 = V_4;
		if (L_33)
		{
			G_B2_0 = L_32;
			goto IL_0087;
		}
		G_B1_0 = L_32;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_zz;
		int32_t L_36;
		L_36 = Nat_SubFrom_m3574A843E61B7A8F9204829B8DE9E350FFC04A2B(((int32_t)16), L_34, 0, L_35, 8, NULL);
		G_B3_0 = ((uint32_t)(L_36));
		G_B3_1 = G_B1_0;
		goto IL_0093;
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___2_zz;
		uint32_t L_39;
		L_39 = Nat_AddTo_mFC93824AD1EFEF9B8BF65FAA1B194C52C41484D1(((int32_t)16), L_37, 0, L_38, 8, NULL);
		G_B3_0 = L_39;
		G_B3_1 = G_B2_0;
	}

IL_0093:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		uint32_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_zz;
		uint32_t L_42;
		L_42 = Nat_AddWordAt_m69287D723F9D58E8ECA2E7004BAA4E33D95BDCA7(((int32_t)32), L_40, L_41, ((int32_t)24), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat512_Square_m6795EA9DC74EF9CC216C86874AF76D4A46DA315F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_zz;
		Nat256_Square_m48F45D274C5A1A33F0F319901325B5D5DD8865A9(L_0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_zz;
		Nat256_Square_mA1CBFC0AB9685DAD6C6496741DEC5E4A1014F1A5(L_2, 8, L_3, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_zz;
		uint32_t L_6;
		L_6 = Nat256_AddToEachOther_m3C6E6286B07DF6EC9F75BAAA754A0C317FECF5F0(L_4, 8, L_5, ((int32_t)16), NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		uint32_t L_10;
		L_10 = Nat256_AddTo_mC1FA070B52B5F92E27028E5F65F5E5A715556E01(L_8, 0, L_9, 8, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_10));
		uint32_t L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___1_zz;
		uint32_t L_14 = V_1;
		uint32_t L_15;
		L_15 = Nat256_AddTo_mC1FA070B52B5F92E27028E5F65F5E5A715556E01(L_12, ((int32_t)24), L_13, ((int32_t)16), L_14, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = Nat256_Create_mA8B40672EFEF44EF1770D8C921F3962D80CC947D(NULL);
		V_2 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		bool L_20;
		L_20 = Nat256_Diff_m4F1E93F214A03A7E52136A592C5AD8AA297A58AE(L_17, 8, L_18, 0, L_19, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21;
		L_21 = Nat256_CreateExt_mFC7487BD1A4E9CDE02D4435E806BE2E108E8A667(NULL);
		V_3 = L_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		Nat256_Square_m48F45D274C5A1A33F0F319901325B5D5DD8865A9(L_22, L_23, NULL);
		uint32_t L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___1_zz;
		int32_t L_27;
		L_27 = Nat_SubFrom_m3574A843E61B7A8F9204829B8DE9E350FFC04A2B(((int32_t)16), L_25, 0, L_26, 8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, L_27));
		uint32_t L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___1_zz;
		uint32_t L_30;
		L_30 = Nat_AddWordAt_m69287D723F9D58E8ECA2E7004BAA4E33D95BDCA7(((int32_t)32), L_28, L_29, ((int32_t)24), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat576_Copy64_m10060A4ADD44A594EA6A53F0EE54448BE895C5F0 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_19);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_27);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_x;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_31);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = ___0_x;
		NullCheck(L_33);
		int32_t L_34 = 8;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_35);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat576_Copy64_m8FBE5284A438E8FA7C50D0B0940329DD1E9140C4 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, int32_t ___1_xOff, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 2))), (uint64_t)L_17);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_x;
		int32_t L_21 = ___1_xOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		int64_t L_23 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 3))), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_x;
		int32_t L_27 = ___1_xOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		int64_t L_29 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 4))), (uint64_t)L_29);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = ___2_z;
		int32_t L_31 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 5));
		int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 5))), (uint64_t)L_35);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_x;
		int32_t L_39 = ___1_xOff;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 6));
		int64_t L_41 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 6))), (uint64_t)L_41);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_42 = ___2_z;
		int32_t L_43 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_x;
		int32_t L_45 = ___1_xOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 7));
		int64_t L_47 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, 7))), (uint64_t)L_47);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_48 = ___2_z;
		int32_t L_49 = ___3_zOff;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_x;
		int32_t L_51 = ___1_xOff;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 8));
		int64_t L_53 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 8))), (uint64_t)L_53);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat576_Create64_mAE38420E6B4593A1F79B2D7C80E43E1C432A3311 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat576_CreateExt64_m1134976AFF4A9760AEB75E658BEB55ABADECB54C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat576_Eq64_mCAEE3F1268D3A82357936F29D64E3F10F31760E6 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 8;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat576_IsOne64_m29AA5855B091F7A9AAA20ED098D8502A446FD446 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat576_IsZero64_m635EA59D16A8217F86A55FC13EE63385AE044C97 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat576_ToBigInteger64_mCCE695B14212C5380AC62640D93B86CA6C96005B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mFDDC66BDDBBBC7B46DC37F19A51848DCA75F5773(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)9))))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_12, 1, L_11, NULL);
		return L_12;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FiniteFields_GetBinaryExtensionField_mA56E48D57A777FE4D3F50598FBC72BAAD52D5C17 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_exponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_exponents;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC418DF12EFC3347B9249DB32348AF09079D4B8F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC124196B821FEEA4E6C89B04C026563A557FFB2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FiniteFields_GetBinaryExtensionField_mA56E48D57A777FE4D3F50598FBC72BAAD52D5C17_RuntimeMethod_var)));
	}

IL_0015:
	{
		V_0 = 1;
		goto IL_0037;
	}

IL_0019:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_exponents;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_exponents;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) > ((int32_t)L_11)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral585CF08E04D87F8AB3503D265DC35F27051D3DD2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC124196B821FEEA4E6C89B04C026563A557FFB2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FiniteFields_GetBinaryExtensionField_mA56E48D57A777FE4D3F50598FBC72BAAD52D5C17_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0037:
	{
		int32_t L_14 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___0_exponents;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_exponents;
		GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* L_18 = (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C*)il2cpp_codegen_object_new(GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C_il2cpp_TypeInfo_var);
		GF2Polynomial__ctor_m49F4DB3E81E964110F17B1BD35DD039C75AB139A(L_18, L_17, NULL);
		GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* L_19 = (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342*)il2cpp_codegen_object_new(GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342_il2cpp_TypeInfo_var);
		GenericPolynomialExtensionField__ctor_mFE6811861A4164BA7E90A15295308054E3ABAB28(L_19, L_16, L_18, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FiniteFields_GetPrimeField_mACE3AFF889470C64716C02497F82B5F4DC24A332 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___0_characteristic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___0_characteristic;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_0, NULL);
		V_0 = L_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___0_characteristic;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A997B3A9A8B12CFDBF937AF62469873CB6FAADD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11458CB676B17FDBC854E855460B86C0F96BD86E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FiniteFields_GetPrimeField_mACE3AFF889470C64716C02497F82B5F4DC24A332_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)3)))
		{
			goto IL_0045;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7 = ___0_characteristic;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = BigInteger_get_IntValue_m51372C2C24032F9378F895580BB3CD5821CCC1D7(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)3)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = ((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_2;
		return L_11;
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = ((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_3;
		return L_12;
	}

IL_0045:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = ___0_characteristic;
		PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* L_14 = (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4*)il2cpp_codegen_object_new(PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var);
		PrimeField__ctor_mF38953FD6B2A2AE52BD3BE030C5D61C23A8F7884(L_14, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiniteFields__cctor_mAA891F3CDF7B9EBC905D2E761222A614D6875246 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0;
		L_0 = BigInteger_ValueOf_mC471D30E47D935710EF0E6847A39ADD6F11D6680(((int64_t)2), NULL);
		PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* L_1 = (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4*)il2cpp_codegen_object_new(PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var);
		PrimeField__ctor_mF38953FD6B2A2AE52BD3BE030C5D61C23A8F7884(L_1, L_0, NULL);
		((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_2), (void*)L_1);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2;
		L_2 = BigInteger_ValueOf_mC471D30E47D935710EF0E6847A39ADD6F11D6680(((int64_t)3), NULL);
		PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* L_3 = (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4*)il2cpp_codegen_object_new(PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var);
		PrimeField__ctor_mF38953FD6B2A2AE52BD3BE030C5D61C23A8F7884(L_3, L_2, NULL);
		((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t76B7C227EB223A9A558A48B7F2E7F2554B63376E_il2cpp_TypeInfo_var))->___GF_3), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPolynomialExtensionField__ctor_mFE6811861A4164BA7E90A15295308054E3ABAB28 (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, RuntimeObject* ___0_subfield, RuntimeObject* ___1_polynomial, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_subfield;
		__this->___subfield = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subfield), (void*)L_0);
		RuntimeObject* L_1 = ___1_polynomial;
		__this->___minimalPolynomial = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minimalPolynomial), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* GenericPolynomialExtensionField_get_Characteristic_m330DFFDFBF9675B464EF8FA1C034D7F38153CC9A (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___subfield;
		NullCheck(L_0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1;
		L_1 = InterfaceFuncInvoker0< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(0, IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericPolynomialExtensionField_get_Dimension_m68684311D73E0E62485F3A460F42245618DF1529 (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPolynomial_t1FAE77D9DAAD96C34E76CCFCB09FE960D9546DFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___subfield;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = __this->___minimalPolynomial;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IPolynomial_t1FAE77D9DAAD96C34E76CCFCB09FE960D9546DFF_il2cpp_TypeInfo_var, L_2);
		return ((int32_t)il2cpp_codegen_multiply(L_1, L_3));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GenericPolynomialExtensionField_get_MinimalPolynomial_m3AF232695B55D6AA797B63B0EC7949D4AE206B4D (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___minimalPolynomial;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericPolynomialExtensionField_Equals_m244D49D323EAF4435EFCB4D671AB46573574211F (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342*)IsInstClass((RuntimeObject*)L_1, GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342_il2cpp_TypeInfo_var));
		GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		RuntimeObject* L_3 = __this->___subfield;
		GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___subfield;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_7 = __this->___minimalPolynomial;
		GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___minimalPolynomial;
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_7, L_9);
		return L_10;
	}

IL_0037:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericPolynomialExtensionField_GetHashCode_m65D61AA9FBF8D19C2026417981D15710B17F1227 (GenericPolynomialExtensionField_tD82DD9B82F5190CE6BD80792786F6D94E7249342* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___subfield;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
		RuntimeObject* L_2 = __this->___minimalPolynomial;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_2);
		il2cpp_codegen_runtime_class_init_inline(Integers_tFF8390C4A65D4DB4831BCBFD03F0D7C305B8A1D8_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Integers_RotateLeft_m84BF6C029834132A285328BB10896FD716A21805(L_3, ((int32_t)16), NULL);
		return ((int32_t)(L_1^L_4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF2Polynomial__ctor_m49F4DB3E81E964110F17B1BD35DD039C75AB139A (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_exponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_exponents;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Arrays_Clone_mB027E844AC5571D8EFDC245398C886E57D334599(L_0, NULL);
		__this->___exponents = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exponents), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GF2Polynomial_get_Degree_m11810BEC27D679C6884BCEE6E391A601A0A51D98 (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___exponents;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___exponents;
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GF2Polynomial_GetExponentsPresent_mA27AB5EC856BF70365F142AEE258336141828F8C (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___exponents;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Arrays_Clone_mB027E844AC5571D8EFDC245398C886E57D334599(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GF2Polynomial_Equals_m76E916695DC08FA159C318D9DDF722DD436C5D2D (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C*)IsInstClass((RuntimeObject*)L_1, GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C_il2cpp_TypeInfo_var));
		GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___exponents;
		GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___exponents;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Arrays_AreEqual_m96D17AA85659B352E56F38F926355029142E6618(L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GF2Polynomial_GetHashCode_m2CFD17FE68B83D6FB51EF65AF203DBD052D5C870 (GF2Polynomial_t97BA59C363AB3E33E1028DAB396FFED7EA75750C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___exponents;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Arrays_GetHashCode_mC6B0E8DF0FDCB6CB5CF19B5FF595DF23142FE5A2(L_0, NULL);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeField__ctor_mF38953FD6B2A2AE52BD3BE030C5D61C23A8F7884 (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___0_characteristic, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___0_characteristic;
		__this->___characteristic = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characteristic), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* PrimeField_get_Characteristic_mEF6E24440CA8BE5405ACD927C314884937FA0BC9 (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___characteristic;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeField_get_Dimension_m2A4ED58D01DE0F89DB76E2712A902ECEDD712F9C (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimeField_Equals_mDB29C8CC1D83934B2063F0A46F80231327E3C5CC (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4*)IsInstClass((RuntimeObject*)L_1, PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4_il2cpp_TypeInfo_var));
		PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3 = __this->___characteristic;
		PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* L_4 = V_0;
		NullCheck(L_4);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5 = L_4->___characteristic;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeField_GetHashCode_m87736D2044566359E5ECDA8505CBF055519917DC (PrimeField_t5BAFF94B36378DADED6C01D3139CE04443BCCCA4* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___characteristic;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* AbstractECLookupTable_LookupVar_m0C742F47196E753C578DE0D7570DC514265B7B6C (AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_1;
		L_1 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(7, __this, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractECLookupTable__ctor_mD310E8B45B57D68651FEA001D859AE5E4DAD60F8 (AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsF2mCurve_mBABFDD8FF66257F17DE1595B276EBDB19E44E928 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, const RuntimeMethod* method) 
{
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_0 = ___0_c;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21, L_0);
		bool L_2;
		L_2 = ECAlgorithms_IsF2mField_mC95566613E6C39AE5ADC62084E47A90BB5104F11(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsF2mField_mC95566613E6C39AE5ADC62084E47A90BB5104F11 (RuntimeObject* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPolynomialExtensionField_tC73BC92F76DC73951E550038684E7761F6DAE3F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_field;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___0_field;
		NullCheck(L_2);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3;
		L_3 = InterfaceFuncInvoker0< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(0, IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_4);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_6 = ___0_field;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IPolynomialExtensionField_tC73BC92F76DC73951E550038684E7761F6DAE3F3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsFpCurve_m05DB02EBB50AA8F9CF5D6DC18FB8766880AA1818 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, const RuntimeMethod* method) 
{
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_0 = ___0_c;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21, L_0);
		bool L_2;
		L_2 = ECAlgorithms_IsFpField_mF2DD77F8766FB29ED5203A2B006501C41C169959(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsFpField_mF2DD77F8766FB29ED5203A2B006501C41C169959 (RuntimeObject* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_field;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_SumOfTwoMultiplies_mA2774E2B0DEC573B2BF153CBB4BA6714F4FA6B4E (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_P, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_a, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___2_Q, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlvEndomorphism_tAF8CFFC11F44EE723A1A306F261BF6CE4B089452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493* V_2 = NULL;
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_P;
		NullCheck(L_0);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_0);
		V_0 = L_1;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_2 = V_0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_3 = ___2_Q;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_4;
		L_4 = ECAlgorithms_ImportPoint_mEE924D1F4A0429E82EEE180478E82144BF656B52(L_2, L_3, NULL);
		___2_Q = L_4;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_5 = V_0;
		V_2 = ((AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493*)IsInstClass((RuntimeObject*)L_5, AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493_il2cpp_TypeInfo_var));
		AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493* L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		AbstractF2mCurve_tD19BB1844711823497F281376FA1067C10B8C493* L_7 = V_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(36, L_7);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_9 = ___0_P;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = ___1_a;
		NullCheck(L_9);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_11;
		L_11 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(29, L_9, L_10);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_12 = ___2_Q;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = ___3_b;
		NullCheck(L_12);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_14;
		L_14 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(29, L_12, L_13);
		NullCheck(L_11);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_15;
		L_15 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_11, L_14);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_16;
		L_16 = ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6(L_15, NULL);
		return L_16;
	}

IL_003b:
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(32, L_17);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, GlvEndomorphism_tAF8CFFC11F44EE723A1A306F261BF6CE4B089452_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = V_1;
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_20 = (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44*)(ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44*)SZArrayNew(ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var, (uint32_t)2);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_21 = L_20;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_22 = ___0_P;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_22);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_23 = L_21;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_24 = ___2_Q;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_24);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_25 = (BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)SZArrayNew(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_26 = L_25;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27 = ___1_a;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_27);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_28 = L_26;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_29 = ___3_b;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_29);
		RuntimeObject* L_30 = V_1;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_31;
		L_31 = ECAlgorithms_ImplSumOfMultipliesGlv_m1F9E8C9D2070F2028329209211CC159123449E94(L_23, L_28, L_30, NULL);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_32;
		L_32 = ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6(L_31, NULL);
		return L_32;
	}

IL_0072:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_33 = ___0_P;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_34 = ___1_a;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_35 = ___2_Q;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_36 = ___3_b;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_37;
		L_37 = ECAlgorithms_ImplShamirsTrickWNaf_m6D40DD0EE6B572D9D378F4C5C2FC52816458993A(L_33, L_34, L_35, L_36, NULL);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_38;
		L_38 = ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6(L_37, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImportPoint_mEE924D1F4A0429E82EEE180478E82144BF656B52 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___1_p, const RuntimeMethod* method) 
{
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* V_0 = NULL;
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___1_p;
		NullCheck(L_0);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_0);
		V_0 = L_1;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_2 = ___0_c;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(30, L_2, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC85DD4565B10A03E31F133210FF2614019176D85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_ImportPoint_mEE924D1F4A0429E82EEE180478E82144BF656B52_RuntimeMethod_var)));
	}

IL_001b:
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_6 = ___0_c;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_7 = ___1_p;
		NullCheck(L_6);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_8;
		L_8 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(17, L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECAlgorithms_MontgomeryTrick_mED151590E7870BE9F56B4ACF7E762B8C28A0A364 (ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___0_zs, int32_t ___1_off, int32_t ___2_len, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___3_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* V_0 = NULL;
	int32_t V_1 = 0;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* V_2 = NULL;
	int32_t V_3 = 0;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* V_4 = NULL;
	{
		int32_t L_0 = ___2_len;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_1 = (ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475*)(ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475*)SZArrayNew(ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_2 = V_0;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_3 = ___0_zs;
		int32_t L_4 = ___1_off;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*)L_6);
		V_1 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_7 = V_0;
		int32_t L_8 = V_1;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_13 = ___0_zs;
		int32_t L_14 = ___1_off;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_18;
		L_18 = VirtualFuncInvoker1< ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(9, L_12, L_17);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_18);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*)L_18);
	}

IL_0023:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		V_1 = L_20;
		int32_t L_21 = ___2_len;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_23 = ___3_scale;
		if (!L_23)
		{
			goto IL_003e;
		}
	}
	{
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_24 = V_0;
		int32_t L_25 = V_1;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_30 = ___3_scale;
		NullCheck(L_29);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_31;
		L_31 = VirtualFuncInvoker1< ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(9, L_29, L_30);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_31);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*)L_31);
	}

IL_003e:
	{
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(13, L_35);
		V_2 = L_36;
		goto IL_006b;
	}

IL_0049:
	{
		int32_t L_37 = ___1_off;
		int32_t L_38 = V_1;
		int32_t L_39 = L_38;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, L_39));
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_40 = ___0_zs;
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_4 = L_43;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_44 = ___0_zs;
		int32_t L_45 = V_3;
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_46 = V_0;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_50 = V_2;
		NullCheck(L_49);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_51;
		L_51 = VirtualFuncInvoker1< ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(9, L_49, L_50);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_51);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*)L_51);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_52 = V_2;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_53 = V_4;
		NullCheck(L_52);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_54;
		L_54 = VirtualFuncInvoker1< ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(9, L_52, L_53);
		V_2 = L_54;
	}

IL_006b:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) > ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* L_56 = ___0_zs;
		int32_t L_57 = ___1_off;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_58 = V_2;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_58);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F*)L_58);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ReferenceMultiply_m48297AECFF76CD30A71A41659EE5B3D91485EB11 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_k, const RuntimeMethod* method) 
{
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___1_k;
		NullCheck(L_0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1;
		L_1 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_0, NULL);
		V_0 = L_1;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_2 = ___0_p;
		NullCheck(L_2);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_3;
		L_3 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_2);
		NullCheck(L_3);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_4;
		L_4 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(20, L_3);
		V_1 = L_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_5, NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = BigInteger_TestBit_mD3655C31934118D5E8BC966669AF2523ED6E5D5E(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_10 = ___0_p;
		V_1 = L_10;
	}

IL_0029:
	{
		V_3 = 1;
		goto IL_004a;
	}

IL_002d:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_11 = ___0_p;
		NullCheck(L_11);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_12;
		L_12 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(28, L_11);
		___0_p = L_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		bool L_15;
		L_15 = BigInteger_TestBit_mD3655C31934118D5E8BC966669AF2523ED6E5D5E(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0046;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_16 = V_1;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_17 = ___0_p;
		NullCheck(L_16);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_18;
		L_18 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_16, L_17);
		V_1 = L_18;
	}

IL_0046:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004a:
	{
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_002d;
		}
	}

IL_004e:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_22 = ___1_k;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_22, NULL);
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_24 = V_1;
		return L_24;
	}

IL_0059:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_25 = V_1;
		NullCheck(L_25);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_26;
		L_26 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(26, L_25);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_CleanPoint_mF63DFFDB144C83F767EDBD2EEED7198753CF0732 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___1_p, const RuntimeMethod* method) 
{
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* V_0 = NULL;
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___1_p;
		NullCheck(L_0);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_0);
		V_0 = L_1;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_2 = ___0_c;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(30, L_2, L_3);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC85DD4565B10A03E31F133210FF2614019176D85)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_CleanPoint_mF63DFFDB144C83F767EDBD2EEED7198753CF0732_RuntimeMethod_var)));
	}

IL_0020:
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_6 = ___0_c;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_7 = ___1_p;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(22, L_7, (bool)0);
		NullCheck(L_6);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_9;
		L_9 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34, L_6, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_p;
		NullCheck(L_0);
		bool L_1;
		L_1 = ECPoint_IsValidPartial_m866F611C9E2B2E2ED886EDC37C20A9616D6DA24B(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2242A971260FDDF13502E03EB2347D27E4CE120D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_ImplCheckResult_mFE1C74C276B15EFC3E8CE528B4A41665478199A6_RuntimeMethod_var)));
	}

IL_0013:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_3 = ___0_p;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickWNaf_m6D40DD0EE6B572D9D378F4C5C2FC52816458993A (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_P, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_k, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___2_Q, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___3_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedPointUtilities_t697D8BD2A5BBB30818656F21D521C4CB3F7135E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_6 = NULL;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_7 = NULL;
	int32_t V_8 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_9 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_10 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_11 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_12 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_14 = NULL;
	int32_t V_15 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B14_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B17_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___1_k;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___3_l;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ___1_k;
		NullCheck(L_4);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5;
		L_5 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_4, NULL);
		V_2 = L_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = ___3_l;
		NullCheck(L_6);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_6, NULL);
		V_3 = L_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = WNafUtilities_GetWindowSize_m7E747A4F1A7F5CBCE4B57B8A464EA5177463BF0C(L_9, 8, NULL);
		V_4 = L_10;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_11, NULL);
		int32_t L_13;
		L_13 = WNafUtilities_GetWindowSize_m7E747A4F1A7F5CBCE4B57B8A464EA5177463BF0C(L_12, 8, NULL);
		V_5 = L_13;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_14 = ___0_P;
		int32_t L_15 = V_4;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_16;
		L_16 = WNafUtilities_Precompute_m1A12AA67A2EA77983BD811E616B48BB9A7E9B87E(L_14, L_15, (bool)1, NULL);
		V_6 = L_16;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_17 = ___2_Q;
		int32_t L_18 = V_5;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_19;
		L_19 = WNafUtilities_Precompute_m1A12AA67A2EA77983BD811E616B48BB9A7E9B87E(L_17, L_18, (bool)1, NULL);
		V_7 = L_19;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_20 = ___0_P;
		NullCheck(L_20);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_21;
		L_21 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_20);
		il2cpp_codegen_runtime_class_init_inline(FixedPointUtilities_t697D8BD2A5BBB30818656F21D521C4CB3F7135E8_il2cpp_TypeInfo_var);
		int32_t L_22;
		L_22 = FixedPointUtilities_GetCombSize_m60D05F775C8723768605C81D0506C8AEF3231DC0(L_21, NULL);
		V_15 = L_22;
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_0097;
		}
	}
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_0097;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_25 = ___1_k;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_25, NULL);
		int32_t L_27 = V_15;
		if ((((int32_t)L_26) > ((int32_t)L_27)))
		{
			goto IL_0097;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_28 = ___3_l;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_28, NULL);
		int32_t L_30 = V_15;
		if ((((int32_t)L_29) > ((int32_t)L_30)))
		{
			goto IL_0097;
		}
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_31 = V_6;
		NullCheck(L_31);
		bool L_32;
		L_32 = VirtualFuncInvoker0< bool >::Invoke(4, L_31);
		if (!L_32)
		{
			goto IL_0097;
		}
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_33 = V_7;
		NullCheck(L_33);
		bool L_34;
		L_34 = VirtualFuncInvoker0< bool >::Invoke(4, L_33);
		if (!L_34)
		{
			goto IL_0097;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_35 = ___0_P;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_36 = ___1_k;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_37 = ___2_Q;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_38 = ___3_l;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_39;
		L_39 = ECAlgorithms_ImplShamirsTrickFixedPoint_mC6E9A9049C276E7AB0A9A55F2D5170DE34148908(L_35, L_36, L_37, L_38, NULL);
		return L_39;
	}

IL_0097:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_40 = V_6;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_40);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_42;
		L_42 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_41, NULL);
		V_8 = L_42;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_43 = V_7;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_43);
		int32_t L_45;
		L_45 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_44, NULL);
		bool L_46 = V_0;
		if (L_46)
		{
			G_B9_0 = L_45;
			goto IL_00bf;
		}
		G_B8_0 = L_45;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_47 = V_6;
		NullCheck(L_47);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_48;
		L_48 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_47);
		G_B10_0 = L_48;
		G_B10_1 = G_B8_0;
		goto IL_00c6;
	}

IL_00bf:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_49 = V_6;
		NullCheck(L_49);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_50;
		L_50 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_49);
		G_B10_0 = L_50;
		G_B10_1 = G_B9_0;
	}

IL_00c6:
	{
		V_9 = G_B10_0;
		bool L_51 = V_1;
		if (L_51)
		{
			G_B12_0 = G_B10_1;
			goto IL_00d4;
		}
		G_B11_0 = G_B10_1;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_52 = V_7;
		NullCheck(L_52);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_53;
		L_53 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_52);
		G_B13_0 = L_53;
		G_B13_1 = G_B11_0;
		goto IL_00db;
	}

IL_00d4:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_54 = V_7;
		NullCheck(L_54);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_55;
		L_55 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_54);
		G_B13_0 = L_55;
		G_B13_1 = G_B12_0;
	}

IL_00db:
	{
		V_10 = G_B13_0;
		bool L_56 = V_0;
		if (L_56)
		{
			G_B15_0 = G_B13_1;
			goto IL_00e9;
		}
		G_B14_0 = G_B13_1;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_57 = V_6;
		NullCheck(L_57);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_58;
		L_58 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_57);
		G_B16_0 = L_58;
		G_B16_1 = G_B14_0;
		goto IL_00f0;
	}

IL_00e9:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_59 = V_6;
		NullCheck(L_59);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_60;
		L_60 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_59);
		G_B16_0 = L_60;
		G_B16_1 = G_B15_0;
	}

IL_00f0:
	{
		V_11 = G_B16_0;
		bool L_61 = V_1;
		if (L_61)
		{
			G_B18_0 = G_B16_1;
			goto IL_00fe;
		}
		G_B17_0 = G_B16_1;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_62 = V_7;
		NullCheck(L_62);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_63;
		L_63 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_62);
		G_B19_0 = L_63;
		G_B19_1 = G_B17_0;
		goto IL_0105;
	}

IL_00fe:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_64 = V_7;
		NullCheck(L_64);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_65;
		L_65 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_64);
		G_B19_0 = L_65;
		G_B19_1 = G_B18_0;
	}

IL_0105:
	{
		V_12 = G_B19_0;
		int32_t L_66 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_67 = V_2;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68;
		L_68 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(L_66, L_67, NULL);
		V_13 = L_68;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_69 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70;
		L_70 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(G_B19_1, L_69, NULL);
		V_14 = L_70;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_71 = V_9;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_72 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_13;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_74 = V_10;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_75 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_14;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_77;
		L_77 = ECAlgorithms_ImplShamirsTrickWNaf_mF486F7936AC06C4EDAA834AB2991688461982DC1(L_71, L_72, L_73, L_74, L_75, L_76, NULL);
		return L_77;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickWNaf_m79351B0311EB583704F92956BE927B599ABFD117 (RuntimeObject* ___0_endomorphism, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___1_P, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___2_k, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___3_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_3 = NULL;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_4 = NULL;
	int32_t V_5 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_6 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_7 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_8 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___2_k;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___3_l;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ___2_k;
		NullCheck(L_4);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5;
		L_5 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_4, NULL);
		___2_k = L_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = ___3_l;
		NullCheck(L_6);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_6, NULL);
		___3_l = L_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = ___2_k;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_8, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = ___3_l;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_9, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = WNafUtilities_GetWindowSize_m7E747A4F1A7F5CBCE4B57B8A464EA5177463BF0C(L_12, 8, NULL);
		V_2 = L_13;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_14 = ___1_P;
		int32_t L_15 = V_2;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_16;
		L_16 = WNafUtilities_Precompute_m1A12AA67A2EA77983BD811E616B48BB9A7E9B87E(L_14, L_15, (bool)1, NULL);
		V_3 = L_16;
		RuntimeObject* L_17 = ___0_endomorphism;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_18 = ___1_P;
		il2cpp_codegen_runtime_class_init_inline(EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_19;
		L_19 = EndoUtilities_MapPoint_m12311EFDFF3332F72BD7AC0D03E941E6C96EE90F(L_17, L_18, NULL);
		RuntimeObject* L_20 = ___0_endomorphism;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var, L_20);
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_22 = V_3;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_23;
		L_23 = WNafUtilities_PrecomputeWithPointMap_mC96A20623F2B1348AE751A3028A02F125EF0AF74(L_19, L_21, L_22, (bool)1, NULL);
		V_4 = L_23;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_24);
		int32_t L_26;
		L_26 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_25, NULL);
		V_5 = L_26;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_27);
		int32_t L_29;
		L_29 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_28, NULL);
		bool L_30 = V_0;
		if (L_30)
		{
			G_B2_0 = L_29;
			goto IL_0081;
		}
		G_B1_0 = L_29;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_31 = V_3;
		NullCheck(L_31);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_32;
		L_32 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_31);
		G_B3_0 = L_32;
		G_B3_1 = G_B1_0;
		goto IL_0087;
	}

IL_0081:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_33 = V_3;
		NullCheck(L_33);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_34;
		L_34 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_33);
		G_B3_0 = L_34;
		G_B3_1 = G_B2_0;
	}

IL_0087:
	{
		V_6 = G_B3_0;
		bool L_35 = V_1;
		if (L_35)
		{
			G_B5_0 = G_B3_1;
			goto IL_0095;
		}
		G_B4_0 = G_B3_1;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_36 = V_4;
		NullCheck(L_36);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_37;
		L_37 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_36);
		G_B6_0 = L_37;
		G_B6_1 = G_B4_0;
		goto IL_009c;
	}

IL_0095:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_38 = V_4;
		NullCheck(L_38);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_39;
		L_39 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_38);
		G_B6_0 = L_39;
		G_B6_1 = G_B5_0;
	}

IL_009c:
	{
		V_7 = G_B6_0;
		bool L_40 = V_0;
		if (L_40)
		{
			G_B8_0 = G_B6_1;
			goto IL_00a9;
		}
		G_B7_0 = G_B6_1;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_41 = V_3;
		NullCheck(L_41);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_42;
		L_42 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_41);
		G_B9_0 = L_42;
		G_B9_1 = G_B7_0;
		goto IL_00af;
	}

IL_00a9:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_43 = V_3;
		NullCheck(L_43);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_44;
		L_44 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_43);
		G_B9_0 = L_44;
		G_B9_1 = G_B8_0;
	}

IL_00af:
	{
		V_8 = G_B9_0;
		bool L_45 = V_1;
		if (L_45)
		{
			G_B11_0 = G_B9_1;
			goto IL_00bd;
		}
		G_B10_0 = G_B9_1;
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_46 = V_4;
		NullCheck(L_46);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_47;
		L_47 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_46);
		G_B12_0 = L_47;
		G_B12_1 = G_B10_0;
		goto IL_00c4;
	}

IL_00bd:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_48 = V_4;
		NullCheck(L_48);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_49;
		L_49 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_48);
		G_B12_0 = L_49;
		G_B12_1 = G_B11_0;
	}

IL_00c4:
	{
		V_9 = G_B12_0;
		int32_t L_50 = V_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_51 = ___2_k;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(L_50, L_51, NULL);
		V_10 = L_52;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_53 = ___3_l;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54;
		L_54 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(G_B12_1, L_53, NULL);
		V_11 = L_54;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_55 = V_6;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_56 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_10;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_58 = V_7;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_59 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_11;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_61;
		L_61 = ECAlgorithms_ImplShamirsTrickWNaf_mF486F7936AC06C4EDAA834AB2991688461982DC1(L_55, L_56, L_57, L_58, L_59, L_60, NULL);
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickWNaf_mF486F7936AC06C4EDAA834AB2991688461982DC1 (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_preCompP, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___1_preCompNegP, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_wnafP, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___3_preCompQ, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___4_preCompNegQ, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_wnafQ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_0 = NULL;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_6 = NULL;
	int32_t V_7 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_8 = NULL;
	int32_t V_9 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_10 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B13_0 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B18_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_wnafP;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___5_wnafQ;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_3 = ___0_preCompP;
		NullCheck(L_3);
		int32_t L_4 = 0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_6;
		L_6 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_5);
		NullCheck(L_6);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_7;
		L_7 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(20, L_6);
		V_0 = L_7;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_8 = V_0;
		V_1 = L_8;
		V_2 = 0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_00c2;
	}

IL_0026:
	{
		int32_t L_9 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_wnafP;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0033;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_wnafP;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		G_B4_0 = ((int32_t)(((int8_t)L_14)));
	}

IL_0033:
	{
		V_4 = G_B4_0;
		int32_t L_15 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___5_wnafQ;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_0044;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___5_wnafQ;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B7_0 = ((int32_t)(((int8_t)L_20)));
	}

IL_0044:
	{
		V_5 = G_B7_0;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		if (((int32_t)(L_21|L_22)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_00be;
	}

IL_0053:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_24 = V_0;
		V_6 = L_24;
		int32_t L_25 = V_4;
		if (!L_25)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = il2cpp_codegen_abs(L_26);
		V_7 = L_27;
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_29 = ___0_preCompP;
		G_B13_0 = L_29;
		goto IL_006c;
	}

IL_006b:
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_30 = ___1_preCompNegP;
		G_B13_0 = L_30;
	}

IL_006c:
	{
		V_8 = G_B13_0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_31 = V_6;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_32 = V_8;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(L_33>>1));
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_36;
		L_36 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_31, L_35);
		V_6 = L_36;
	}

IL_007e:
	{
		int32_t L_37 = V_5;
		if (!L_37)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_38 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = il2cpp_codegen_abs(L_38);
		V_9 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_41 = ___3_preCompQ;
		G_B18_0 = L_41;
		goto IL_0095;
	}

IL_0093:
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_42 = ___4_preCompNegQ;
		G_B18_0 = L_42;
	}

IL_0095:
	{
		V_10 = G_B18_0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_43 = V_6;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_44 = V_10;
		int32_t L_45 = V_9;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)(L_45>>1));
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_43);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_48;
		L_48 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_43, L_47);
		V_6 = L_48;
	}

IL_00a7:
	{
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_52;
		L_52 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(27, L_50, L_51);
		V_1 = L_52;
		V_2 = 0;
	}

IL_00b5:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_53 = V_1;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_54 = V_6;
		NullCheck(L_53);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_55;
		L_55 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(30, L_53, L_54);
		V_1 = L_55;
	}

IL_00be:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
	}

IL_00c2:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_58 = V_2;
		if ((((int32_t)L_58) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_59 = V_1;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_61;
		L_61 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(27, L_59, L_60);
		V_1 = L_61;
	}

IL_00d5:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultiplies_mCFD406BDE0B82FC9D23815CF844505323CB2EB3E (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_ps, BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* V_2 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_3 = NULL;
	int32_t V_4 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_5 = NULL;
	int32_t V_6 = 0;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_7 = NULL;
	int32_t V_8 = 0;
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_0 = ___0_ps;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_4 = (WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755*)(WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755*)SZArrayNew(WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0080;
	}

IL_001e:
	{
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_7 = ___1_ks;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = V_1;
		int32_t L_12 = V_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_13, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_5;
		NullCheck(L_15);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16;
		L_16 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_15, NULL);
		V_5 = L_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17 = V_5;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = WNafUtilities_GetWindowSize_m7E747A4F1A7F5CBCE4B57B8A464EA5177463BF0C(L_18, 8, NULL);
		V_6 = L_19;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_20 = ___0_ps;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_6;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_25;
		L_25 = WNafUtilities_Precompute_m1A12AA67A2EA77983BD811E616B48BB9A7E9B87E(L_23, L_24, (bool)1, NULL);
		V_7 = L_25;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_26 = V_7;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_26);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_27, NULL);
		V_8 = L_28;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_29 = V_2;
		int32_t L_30 = V_4;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_31 = V_7;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A*)L_31);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_32 = V_3;
		int32_t L_33 = V_4;
		int32_t L_34 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_35 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(L_34, L_35, NULL);
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_36);
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0080:
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_001e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_40 = V_1;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_41 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_42 = V_3;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_43;
		L_43 = ECAlgorithms_ImplSumOfMultiplies_m976B17754429119973A46ABF171954EA96A7C023(L_40, L_41, L_42, NULL);
		return L_43;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultipliesGlv_m1F9E8C9D2070F2028329209211CC159123449E94 (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_ps, BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___1_ks, RuntimeObject* ___2_glvEndomorphism, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlvEndomorphism_tAF8CFFC11F44EE723A1A306F261BF6CE4B089452_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	int32_t V_1 = 0;
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* V_2 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_9 = NULL;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_10 = NULL;
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_0 = ___0_ps;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_3;
		L_3 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_2);
		NullCheck(L_3);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4;
		L_4 = VirtualFuncInvoker0< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(24, L_3);
		V_0 = L_4;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_5 = ___0_ps;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		int32_t L_6 = V_1;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_7 = (BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)SZArrayNew(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_6<<1)));
		V_2 = L_7;
		V_4 = 0;
		V_5 = 0;
		goto IL_0055;
	}

IL_0023:
	{
		RuntimeObject* L_8 = ___2_glvEndomorphism;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_9 = ___1_ks;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_0;
		NullCheck(L_12);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14;
		L_14 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_12, L_13, NULL);
		NullCheck(L_8);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_15;
		L_15 = InterfaceFuncInvoker1< BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(0, GlvEndomorphism_tAF8CFFC11F44EE723A1A306F261BF6CE4B089452_il2cpp_TypeInfo_var, L_8, L_14);
		V_6 = L_15;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_16 = V_2;
		int32_t L_17 = V_5;
		int32_t L_18 = L_17;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_19 = V_6;
		NullCheck(L_19);
		int32_t L_20 = 0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_21);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_21);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_22 = V_2;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_25 = V_6;
		NullCheck(L_25);
		int32_t L_26 = 1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_27);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_27);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0055:
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_31 = ___2_glvEndomorphism;
		NullCheck(L_31);
		bool L_32;
		L_32 = InterfaceFuncInvoker0< bool >::Invoke(1, ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var, L_31);
		if (!L_32)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject* L_33 = ___2_glvEndomorphism;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_34 = ___0_ps;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_35 = V_2;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_36;
		L_36 = ECAlgorithms_ImplSumOfMultiplies_m3435E00D80CF7B1D5E7232D2891C59FA6E898958(L_33, L_34, L_35, NULL);
		return L_36;
	}

IL_006b:
	{
		int32_t L_37 = V_1;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_38 = (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44*)(ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44*)SZArrayNew(ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_37<<1)));
		V_3 = L_38;
		V_7 = 0;
		V_8 = 0;
		goto IL_00a8;
	}

IL_007c:
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_39 = ___0_ps;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_9 = L_42;
		RuntimeObject* L_43 = ___2_glvEndomorphism;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_44 = V_9;
		il2cpp_codegen_runtime_class_init_inline(EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_45;
		L_45 = EndoUtilities_MapPoint_m12311EFDFF3332F72BD7AC0D03E941E6C96EE90F(L_43, L_44, NULL);
		V_10 = L_45;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_46 = V_3;
		int32_t L_47 = V_8;
		int32_t L_48 = L_47;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_49 = V_9;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_49);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_50 = V_3;
		int32_t L_51 = V_8;
		int32_t L_52 = L_51;
		V_8 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_53 = V_10;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_53);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_53);
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00a8:
	{
		int32_t L_55 = V_7;
		int32_t L_56 = V_1;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_007c;
		}
	}
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_57 = V_3;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_58 = V_2;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_59;
		L_59 = ECAlgorithms_ImplSumOfMultiplies_mCFD406BDE0B82FC9D23815CF844505323CB2EB3E(L_57, L_58, NULL);
		return L_59;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultiplies_m3435E00D80CF7B1D5E7232D2891C59FA6E898958 (RuntimeObject* ___0_endomorphism, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___1_ps, BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* V_2 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_8 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_9 = NULL;
	int32_t V_10 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_11 = NULL;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_12 = NULL;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_0 = ___1_ps;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		int32_t L_2 = ((int32_t)(L_1<<1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = L_2;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_5 = (WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755*)(WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755*)SZArrayNew(WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_6;
		RuntimeObject* L_7 = ___0_endomorphism;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		V_5 = 0;
		goto IL_00fc;
	}

IL_002b:
	{
		int32_t L_9 = V_5;
		V_6 = ((int32_t)(L_9<<1));
		int32_t L_10 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_11 = ___2_ks;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_8 = L_14;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = V_1;
		int32_t L_16 = V_6;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17 = V_8;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_17, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (bool)((((int32_t)L_18) < ((int32_t)0))? 1 : 0));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19 = V_8;
		NullCheck(L_19);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_20;
		L_20 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_19, NULL);
		V_8 = L_20;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_21 = ___2_ks;
		int32_t L_22 = V_7;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_9 = L_24;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_25 = V_1;
		int32_t L_26 = V_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27 = V_9;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline(L_27, NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (bool)((((int32_t)L_28) < ((int32_t)0))? 1 : 0));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_29 = V_9;
		NullCheck(L_29);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_30;
		L_30 = BigInteger_Abs_mA91A9417D5222BDB937372EBD938AAB7F3C8FBAC(L_29, NULL);
		V_9 = L_30;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31 = V_8;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_31, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_33 = V_9;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_32, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = WNafUtilities_GetWindowSize_m7E747A4F1A7F5CBCE4B57B8A464EA5177463BF0C(L_35, 8, NULL);
		V_10 = L_36;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_37 = ___1_ps;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_11 = L_40;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_41 = V_11;
		int32_t L_42 = V_10;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_43;
		L_43 = WNafUtilities_Precompute_m1A12AA67A2EA77983BD811E616B48BB9A7E9B87E(L_41, L_42, (bool)1, NULL);
		V_12 = L_43;
		RuntimeObject* L_44 = ___0_endomorphism;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_45 = V_11;
		il2cpp_codegen_runtime_class_init_inline(EndoUtilities_tD90B34EAA56EC520BB8478406B2062F91133C748_il2cpp_TypeInfo_var);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_46;
		L_46 = EndoUtilities_MapPoint_m12311EFDFF3332F72BD7AC0D03E941E6C96EE90F(L_44, L_45, NULL);
		RuntimeObject* L_47 = V_4;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_48 = V_12;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_49;
		L_49 = WNafUtilities_PrecomputeWithPointMap_mC96A20623F2B1348AE751A3028A02F125EF0AF74(L_46, L_47, L_48, (bool)1, NULL);
		V_13 = L_49;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_50 = V_12;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_50);
		int32_t L_52;
		L_52 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_51, NULL);
		V_14 = L_52;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_53 = V_13;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(13, L_53);
		int32_t L_55;
		L_55 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, L_54, NULL);
		V_15 = L_55;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_56 = V_2;
		int32_t L_57 = V_6;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_58 = V_12;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_58);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A*)L_58);
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_59 = V_2;
		int32_t L_60 = V_7;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_61 = V_13;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A*)L_61);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_62 = V_3;
		int32_t L_63 = V_6;
		int32_t L_64 = V_14;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_65 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66;
		L_66 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(L_64, L_65, NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_66);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_67 = V_3;
		int32_t L_68 = V_7;
		int32_t L_69 = V_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_70 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71;
		L_71 = WNafUtilities_GenerateWindowNaf_m32BBDAF5B5AB90775D9397C2AF7CACC849880E65(L_69, L_70, NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_71);
		int32_t L_72 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_00fc:
	{
		int32_t L_73 = V_5;
		int32_t L_74 = V_0;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_002b;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_75 = V_1;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_76 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_77 = V_3;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_78;
		L_78 = ECAlgorithms_ImplSumOfMultiplies_m976B17754429119973A46ABF171954EA96A7C023(L_75, L_76, L_77, NULL);
		return L_78;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplSumOfMultiplies_m976B17754429119973A46ABF171954EA96A7C023 (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_negs, WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* ___1_infos, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___2_wnafs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_2 = NULL;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_7 = NULL;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* V_12 = NULL;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_13 = NULL;
	int32_t G_B8_0 = 0;
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* G_B12_0 = NULL;
	{
		V_0 = 0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___2_wnafs;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_5 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = ___2_wnafs;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_1, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		V_0 = L_6;
		int32_t L_7 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		int32_t L_8 = V_5;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_10 = ___1_infos;
		NullCheck(L_10);
		int32_t L_11 = 0;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_13;
		L_13 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_12);
		NullCheck(L_13);
		int32_t L_14 = 0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_16;
		L_16 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_15);
		NullCheck(L_16);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_17;
		L_17 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(20, L_16);
		V_2 = L_17;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_18 = V_2;
		V_3 = L_18;
		V_4 = 0;
		int32_t L_19 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		goto IL_00e0;
	}

IL_0047:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_20 = V_2;
		V_7 = L_20;
		V_8 = 0;
		goto IL_00ae;
	}

IL_004f:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_21 = ___2_wnafs;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_9 = L_24;
		int32_t L_25 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_9;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0060;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0066;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_9;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B8_0 = ((int32_t)(((int8_t)L_30)));
	}

IL_0066:
	{
		V_10 = G_B8_0;
		int32_t L_31 = V_10;
		if (!L_31)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_32 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = il2cpp_codegen_abs(L_32);
		V_11 = L_33;
		WNafPreCompInfoU5BU5D_t76DB3CE4CE67600FA991B90F3196B60C68934755* L_34 = ___1_infos;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_12 = L_37;
		int32_t L_38 = V_10;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_39 = ___0_negs;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (uint8_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((((int32_t)((((int32_t)L_38) < ((int32_t)0))? 1 : 0)) == ((int32_t)L_42)))
		{
			goto IL_008f;
		}
	}
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_43 = V_12;
		NullCheck(L_43);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_44;
		L_44 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(9, L_43);
		G_B12_0 = L_44;
		goto IL_0096;
	}

IL_008f:
	{
		WNafPreCompInfo_t175EE7E902AF39A6CA307412069523AF98C49B9A* L_45 = V_12;
		NullCheck(L_45);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_46;
		L_46 = VirtualFuncInvoker0< ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* >::Invoke(7, L_45);
		G_B12_0 = L_46;
	}

IL_0096:
	{
		V_13 = G_B12_0;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_47 = V_7;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_48 = V_13;
		int32_t L_49 = V_11;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)(L_49>>1));
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_47);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_52;
		L_52 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_47, L_51);
		V_7 = L_52;
	}

IL_00a8:
	{
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ae:
	{
		int32_t L_54 = V_8;
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_004f;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_56 = V_7;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_57 = V_2;
		if ((!(((RuntimeObject*)(ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_56) == ((RuntimeObject*)(ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_57))))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_58 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		goto IL_00da;
	}

IL_00c0:
	{
		int32_t L_59 = V_4;
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_60 = V_3;
		int32_t L_61 = V_4;
		NullCheck(L_60);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_62;
		L_62 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(27, L_60, L_61);
		V_3 = L_62;
		V_4 = 0;
	}

IL_00d1:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_63 = V_3;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_64 = V_7;
		NullCheck(L_63);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_65;
		L_65 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(30, L_63, L_64);
		V_3 = L_65;
	}

IL_00da:
	{
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
	}

IL_00e0:
	{
		int32_t L_67 = V_6;
		if ((((int32_t)L_67) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_68 = V_4;
		if ((((int32_t)L_68) <= ((int32_t)0)))
		{
			goto IL_00f6;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_69 = V_3;
		int32_t L_70 = V_4;
		NullCheck(L_69);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_71;
		L_71 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(27, L_69, L_70);
		V_3 = L_71;
	}

IL_00f6:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_72 = V_3;
		return L_72;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ECAlgorithms_ImplShamirsTrickFixedPoint_mC6E9A9049C276E7AB0A9A55F2D5170DE34148908 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___1_k, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___2_q, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___3_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECLookupTable_t8E6079E76EE7C69E1F353F4649E0888F0D8B02EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedPointUtilities_t697D8BD2A5BBB30818656F21D521C4CB3F7135E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* V_0 = NULL;
	int32_t V_1 = 0;
	FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* V_2 = NULL;
	FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_10 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_12 = NULL;
	int32_t V_13 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_14 = NULL;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_15 = NULL;
	int32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_19 = NULL;
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* V_20 = NULL;
	int32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_p;
		NullCheck(L_0);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* >::Invoke(6, L_0);
		V_0 = L_1;
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FixedPointUtilities_t697D8BD2A5BBB30818656F21D521C4CB3F7135E8_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = FixedPointUtilities_GetCombSize_m60D05F775C8723768605C81D0506C8AEF3231DC0(L_2, NULL);
		V_1 = L_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ___1_k;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_4, NULL);
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0020;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7 = ___3_l;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_7, NULL);
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_002b;
		}
	}

IL_0020:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE11BB2EC92497F06D810622C4B9C8DE86B281569)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_ImplShamirsTrickFixedPoint_mC6E9A9049C276E7AB0A9A55F2D5170DE34148908_RuntimeMethod_var)));
	}

IL_002b:
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_11 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(FixedPointUtilities_t697D8BD2A5BBB30818656F21D521C4CB3F7135E8_il2cpp_TypeInfo_var);
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_12;
		L_12 = FixedPointUtilities_Precompute_m1897CFD9E9FD9ADBC0579E4C276095295E80FD3D(L_11, NULL);
		V_2 = L_12;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_13 = ___2_q;
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_14;
		L_14 = FixedPointUtilities_Precompute_m1897CFD9E9FD9ADBC0579E4C276095295E80FD3D(L_13, NULL);
		V_3 = L_14;
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_15 = V_2;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_15);
		V_4 = L_16;
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_17 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4, L_17);
		V_5 = L_18;
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(8, L_19);
		V_6 = L_20;
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(8, L_21);
		V_7 = L_22;
		int32_t L_23 = V_6;
		int32_t L_24 = V_7;
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_0081;
		}
	}
	{
		FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0* L_25 = (FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0*)il2cpp_codegen_object_new(FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0_il2cpp_TypeInfo_var);
		FixedPointCombMultiplier__ctor_mAFE67CAE2A59C5C037DA2230C8EB04475F8E2EBD(L_25, NULL);
		FixedPointCombMultiplier_t2043E4D252CAD0C975E9A06B5ECFC66A7853CFB0* L_26 = L_25;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_27 = ___0_p;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_28 = ___1_k;
		NullCheck(L_26);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_29;
		L_29 = VirtualFuncInvoker2< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(5, L_26, L_27, L_28);
		V_14 = L_29;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_30 = ___2_q;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31 = ___3_l;
		NullCheck(L_26);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_32;
		L_32 = VirtualFuncInvoker2< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* >::Invoke(5, L_26, L_30, L_31);
		V_15 = L_32;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_33 = V_14;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_34 = V_15;
		NullCheck(L_33);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_35;
		L_35 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_33, L_34);
		return L_35;
	}

IL_0081:
	{
		int32_t L_36 = V_6;
		V_8 = L_36;
		int32_t L_37 = V_1;
		int32_t L_38 = V_8;
		int32_t L_39 = V_8;
		V_9 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_37, L_38)), 1))/L_39));
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_40 = V_0;
		NullCheck(L_40);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_41;
		L_41 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(20, L_40);
		V_10 = L_41;
		int32_t L_42 = V_9;
		int32_t L_43 = V_8;
		int32_t L_44 = ((int32_t)il2cpp_codegen_multiply(L_42, L_43));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_45 = ___1_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46;
		L_46 = Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD(L_44, L_45, NULL);
		V_11 = L_46;
		int32_t L_47 = L_44;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_48 = ___3_l;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49;
		L_49 = Nat_FromBigInteger_m8D1A0360AEC630D070DF00BDB30AE66AB2874CCD(L_47, L_48, NULL);
		V_12 = L_49;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		V_16 = 0;
		goto IL_0154;
	}

IL_00bb:
	{
		V_17 = 0;
		V_18 = 0;
		int32_t L_50 = V_13;
		int32_t L_51 = V_16;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_50, L_51));
		goto IL_0121;
	}

IL_00ca:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_11;
		int32_t L_53 = V_21;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)(L_53>>5));
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_21;
		V_22 = ((int32_t)((uint32_t)L_55>>((int32_t)(((int32_t)(L_56&((int32_t)31)))&((int32_t)31)))));
		uint32_t L_57 = V_17;
		uint32_t L_58 = V_22;
		V_17 = ((int32_t)((int32_t)L_57^((int32_t)((uint32_t)L_58>>1))));
		uint32_t L_59 = V_17;
		V_17 = ((int32_t)((int32_t)L_59<<1));
		uint32_t L_60 = V_17;
		uint32_t L_61 = V_22;
		V_17 = ((int32_t)((int32_t)L_60^(int32_t)L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_12;
		int32_t L_63 = V_21;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)(L_63>>5));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66 = V_21;
		V_23 = ((int32_t)((uint32_t)L_65>>((int32_t)(((int32_t)(L_66&((int32_t)31)))&((int32_t)31)))));
		uint32_t L_67 = V_18;
		uint32_t L_68 = V_23;
		V_18 = ((int32_t)((int32_t)L_67^((int32_t)((uint32_t)L_68>>1))));
		uint32_t L_69 = V_18;
		V_18 = ((int32_t)((int32_t)L_69<<1));
		uint32_t L_70 = V_18;
		uint32_t L_71 = V_23;
		V_18 = ((int32_t)((int32_t)L_70^(int32_t)L_71));
		int32_t L_72 = V_21;
		int32_t L_73 = V_9;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_72, L_73));
	}

IL_0121:
	{
		int32_t L_74 = V_21;
		if ((((int32_t)L_74) >= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_75 = V_4;
		uint32_t L_76 = V_17;
		NullCheck(L_75);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_77;
		L_77 = InterfaceFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(2, ECLookupTable_t8E6079E76EE7C69E1F353F4649E0888F0D8B02EB_il2cpp_TypeInfo_var, L_75, L_76);
		RuntimeObject* L_78 = V_5;
		uint32_t L_79 = V_18;
		NullCheck(L_78);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_80;
		L_80 = InterfaceFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, int32_t >::Invoke(2, ECLookupTable_t8E6079E76EE7C69E1F353F4649E0888F0D8B02EB_il2cpp_TypeInfo_var, L_78, L_79);
		V_19 = L_80;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_81 = V_19;
		NullCheck(L_77);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_82;
		L_82 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_77, L_81);
		V_20 = L_82;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_83 = V_10;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_84 = V_20;
		NullCheck(L_83);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_85;
		L_85 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(30, L_83, L_84);
		V_10 = L_85;
		int32_t L_86 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_0154:
	{
		int32_t L_87 = V_16;
		int32_t L_88 = V_9;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_00bb;
		}
	}
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_89 = V_10;
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_90 = V_2;
		NullCheck(L_90);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_91;
		L_91 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(6, L_90);
		NullCheck(L_89);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_92;
		L_92 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_89, L_91);
		FixedPointPreCompInfo_t48D55921901FEB6921BF428E09F1D85C7561BDEF* L_93 = V_3;
		NullCheck(L_93);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_94;
		L_94 = VirtualFuncInvoker0< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(6, L_93);
		NullCheck(L_92);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_95;
		L_95 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* >::Invoke(24, L_92, L_94);
		return L_95;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mDAC1B4CFD7E53E799802A50299F8E8FF9784B5E1_inline (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sign;
		return L_0;
	}
}
