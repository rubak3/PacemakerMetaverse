#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
struct Func_2_t00B9B987A0EECCB5F9B3AF2A7C608D951D86A1E6;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct DataContract_tC6689A52E5BA843D360C067B3B64BA067391160A;
struct DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1;
struct DateTimeFormat_tBFAECD63AF557E9DFC51CBA1410F55C4FC930B81;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
struct Exception_t;
struct IAccountSigningService_t6AE095CD4297AB3ED57A1F6B4ABEC8A9C5B684DC;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDataContractSurrogate_t6CB3907D2B711AF4091D8E2D3927FE04E0E9C40A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct INonceService_tB8D5E1FA020A2292091853A4C76384B94AFC7F6D;
struct ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1;
struct LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D;
struct LocalStorageBase_t880E723ECCD2E4F18656CC07697D9418B4D6A66A;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6;
struct VerificationException_t348BD4F8DCA305E161F39C4D7199D75D93041420;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XmlDictionaryString_t989B6E9A1B692ED81496ED30E9EC32BFC1D7BDC2;
struct U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309;
struct U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2;
struct DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724;
struct SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE;
struct Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C;
struct U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF;
struct U3CU3Ec__DisplayClass16_0_tB321940521B1983661FB953F99FEAF2957ACD8B6;
struct U3CU3Ec__DisplayClass19_0_t5F7423CEEBFD55E57401A6E8C558C834A63C09CA;
struct U3CU3Ec__DisplayClass6_0_tA36A0EE50C4D5567D281A376A74BB0CB25337672;
struct Config_t6F4D1B73F49ABE29BF693F84E249223EB8983D49;
struct ShareComponents_t680D63F9B5DB13A50919740BFEBFE15778F1385B;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF5220E380F0E319477114ACB51C2FA813BB5FCB8____FB69943554C8F74640CAF2CD8A8D87A74029E0CB77FC394E23A1316AD4010B59_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteral723C838B75B1F71A1830D7E1645CAB12FB4E38CE;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8874BD104641E67F146CCC7575269DBF98AFFC;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalStorage_U3CRemoveAuthTokenAsyncU3Eb__7_0_mC33BCADDC618196F55CBC1F1F117E3192ED1551D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalStorage_U3CRemoveSessionAsyncU3Eb__11_0_m1DF0B1B7829B2E8F7A89B847844A5D4FC36B84BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CSaveSessionAsyncU3Eb__0_m37B287778B1D69B148F60485A9B06D4EB981C4AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CSaveDataAsyncU3Eb__0_mBC549D6D67C0CA8E2876971D1EF97B967A7CD40E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CPrivateImplementationDetailsU3E_tF5220E380F0E319477114ACB51C2FA813BB5FCB8  : public RuntimeObject
{
};
struct LocalStorageBase_t880E723ECCD2E4F18656CC07697D9418B4D6A66A  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63  : public RuntimeObject
{
	Config_t6F4D1B73F49ABE29BF693F84E249223EB8983D49* ___config;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___GetRandomInt32;
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6  : public RuntimeObject
{
	Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___U3CAccountU3Ek__BackingField;
	String_t* ___U3CEmailAddressU3Ek__BackingField;
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
struct XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309  : public RuntimeObject
{
	LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* ___U3CU3E4__this;
	String_t* ___sessionId;
	bool ___isKmsWallet;
};
struct U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2  : public RuntimeObject
{
	LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* ___U3CU3E4__this;
	DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* ___data;
};
struct DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724  : public RuntimeObject
{
	String_t* ___authToken;
	String_t* ___deviceShare;
	String_t* ___emailAddress;
	String_t* ___walletUserId;
	String_t* ___authProvider;
};
struct SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE  : public RuntimeObject
{
	String_t* ___id;
	bool ___isKmsWallet;
};
struct Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C  : public RuntimeObject
{
	DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* ___U3CDataU3Ek__BackingField;
	SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* ___U3CSessionU3Ek__BackingField;
};
struct U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass16_0_tB321940521B1983661FB953F99FEAF2957ACD8B6  : public RuntimeObject
{
	Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63* ___U3CU3E4__this;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___coefficients;
};
struct U3CU3Ec__DisplayClass19_0_t5F7423CEEBFD55E57401A6E8C558C834A63C09CA  : public RuntimeObject
{
	int32_t ___i;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___U3CU3E9__0;
};
struct U3CU3Ec__DisplayClass6_0_tA36A0EE50C4D5567D281A376A74BB0CB25337672  : public RuntimeObject
{
	String_t* ___s;
};
struct Config_t6F4D1B73F49ABE29BF693F84E249223EB8983D49  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___exponents;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___logarithms;
	int32_t ___maxnShares;
	int32_t ___nBits;
};
struct Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187  : public RuntimeObject
{
};
struct ShareComponents_t680D63F9B5DB13A50919740BFEBFE15778F1385B  : public RuntimeObject
{
	int32_t ___nBits;
	int32_t ___id;
	String_t* ___data;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D  : public LocalStorageBase_t880E723ECCD2E4F18656CC07697D9418B4D6A66A
{
	Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* ___storage;
	String_t* ___filePath;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t7423FFA7245DC74C6AAC1E6739A655CA6FE0BC4A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t7423FFA7245DC74C6AAC1E6739A655CA6FE0BC4A__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D84_tC9DD35162EC2EE63A36017D8EDC825CEF684D1C9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tC9DD35162EC2EE63A36017D8EDC825CEF684D1C9__padding[84];
	};
};
#pragma pack(pop, tp)
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task;
};
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	bool ___hasValue;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EmitTypeInformation_tA3D32055854AC487C0309E82BF5E16E58F893951 
{
	int32_t ___value__;
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
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct SpecialFolder_t56F21A2E102C08B76C0E40C5CA63A8E9E674E6FD 
{
	int32_t ___value__;
};
struct FileStatusFlags_tB53E2B9A54305CDCEA49884DEEDB8C62C8ACC9C9 
{
	int32_t ___value__;
};
struct Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D  : public RuntimeObject
{
	RuntimeObject* ____nonceService;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CChainIdU3Ek__BackingField;
	String_t* ___U3CPrivateKeyU3Ek__BackingField;
	String_t* ___U3CPublicKeyU3Ek__BackingField;
	String_t* ___U3CAddressU3Ek__BackingField;
	RuntimeObject* ___U3CTransactionManagerU3Ek__BackingField;
	RuntimeObject* ___U3CAccountSigningServiceU3Ek__BackingField;
};
struct DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1  : public XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F
{
	RuntimeObject* ___knownTypeList;
	Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719* ___knownDataContracts;
	int32_t ___emitTypeInformation;
	RuntimeObject* ___dataContractSurrogate;
	bool ___ignoreExtensionDataObject;
	int32_t ___maxItemsInObjectGraph;
	DataContract_tC6689A52E5BA843D360C067B3B64BA067391160A* ___rootContract;
	XmlDictionaryString_t989B6E9A1B692ED81496ED30E9EC32BFC1D7BDC2* ___rootName;
	bool ___rootNameRequiresMapping;
	Type_t* ___rootType;
	bool ___serializeReadOnlyTypes;
	DateTimeFormat_tBFAECD63AF557E9DFC51CBA1410F55C4FC930B81* ___dateTimeFormat;
	bool ___useSimpleDictionaryFormat;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VerificationException_t348BD4F8DCA305E161F39C4D7199D75D93041420  : public Exception_t
{
	bool ___U3CCanRetryU3Ek__BackingField;
};
struct U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C 
{
	int32_t ___U3CU3E1__state;
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___fn;
	LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* ___U3CU3E4__this;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1;
};
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	int32_t ___Flags;
	int32_t ___Mode;
	uint32_t ___Uid;
	uint32_t ___Gid;
	int64_t ___Size;
	int64_t ___ATime;
	int64_t ___ATimeNsec;
	int64_t ___MTime;
	int64_t ___MTimeNsec;
	int64_t ___CTime;
	int64_t ___CTimeNsec;
	int64_t ___BirthTime;
	int64_t ___BirthTimeNsec;
	int64_t ___Dev;
	int64_t ___Ino;
	uint32_t ___UserFlags;
};
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354  : public MulticastDelegate_t
{
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	bool ___U3CInitiallyDirectoryU3Ek__BackingField;
	bool ____isDirectory;
	bool ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus;
	int32_t ____fileStatusInitialized;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField;
	int32_t ____isDirectory;
	int32_t ____exists;
};
struct SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ___permissionState;
};
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus;
	String_t* ___FullPath;
	String_t* ___OriginalPath;
	String_t* ____name;
};
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};
struct U3CPrivateImplementationDetailsU3E_tF5220E380F0E319477114ACB51C2FA813BB5FCB8_StaticFields
{
	__StaticArrayInitTypeSizeU3D16_t7423FFA7245DC74C6AAC1E6739A655CA6FE0BC4A ___04922C419099667D4FA4F5852EBA0BB061EBC39113C0DEED5256CD9CAE72E056;
	__StaticArrayInitTypeSizeU3D84_tC9DD35162EC2EE63A36017D8EDC825CEF684D1C9 ___FB69943554C8F74640CAF2CD8A8D87A74029E0CB77FC394E23A1316AD4010B59;
};
struct Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63_StaticFields
{
	String_t* ___padding;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nybbles;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F_StaticFields
{
	RuntimeObject* ___formatterConverter;
};
struct U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_StaticFields
{
	U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* ___U3CU3E9;
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___U3CU3E9__10_0;
	Func_2_t00B9B987A0EECCB5F9B3AF2A7C608D951D86A1E6* ___U3CU3E9__12_0;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___U3CU3E9__25_0;
};
struct Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primitivePolynomialCoefficients;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA25940AF81D9018F7BE55460514568E10E489021 (U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_m8C1A38685D548E89FB8A05525B55261CC8D271B2 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShareComponents_t680D63F9B5DB13A50919740BFEBFE15778F1385B* Secrets_ExtractShareComponents_m447A56261E048F3C63882A07C80F63A6A49F5EA8 (String_t* ___0_share, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RandomNumberGenerator_GetInt32_mAB3885ACE9D36EB952EFCCA2CAD2921AF819E574 (int32_t ___0_fromInclusive, int32_t ___1_toExclusive, const RuntimeMethod* method) ;
inline int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Secrets_Horner_m26B24C0B45FD8DCF9AE02461C0F323B925788CD6 (Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63* __this, int32_t ___0_x, RuntimeObject* ___1_coefficients, const RuntimeMethod* method) ;
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared)(__this, ___0_item1, ___1_item2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_mE87056B4D91E35B7A5D888132B6F861A1C94A108 (String_t* ___0_s, int32_t ___1_style, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void User_set_Account_m5A4AC2FB413807262D2C1CFD5F3580FDB4EC1361_inline (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void User_set_EmailAddress_m8D04672E9A6AFEB4014D60DDBEE74FC4C111F143_inline (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* Storage_get_Data_mC3379E037E4D73CEBF8F0C9E2809EE07E15B1424_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* Storage_get_Session_mB5A027D6D798985F504653A3C9520385AA9817D7_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalStorageBase__ctor_mAD573989F62B93C26AF4DFAF303A52367A443B17 (LocalStorageBase_t880E723ECCD2E4F18656CC07697D9418B4D6A66A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m8D283450E7FCF2F2CAFFF157D599C3EBA212B58C (int32_t ___0_folder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataContractJsonSerializer__ctor_mDBAD2FB5F119218821A9805D8F576DD2FAF7F639 (DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Storage__ctor_mB6BE9A7B186D737EBA612F4C51CA82AC0C660219 (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* LocalStorage_UpdateDataAsync_m906FAEB9D5390751EFBFCC5C5DAE72D0DC2B451F (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_fn, const RuntimeMethod* method) ;
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
inline void AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780_gshared)(__this, ___0_stateMachine, method);
}
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m6F0A6EE20091BB2C7B36090009CBF99A8022E270 (U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m6F17422791FA68113875D323F2C5B7A3545CF506 (U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataStorage_get_AuthToken_m6D4377861CF52CB0E6DEEBB27AC95A528BADB1D3_inline (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_ClearAuthToken_mF4326B9162E641EA8E5112DEB244F35F2B8BC1CF (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Storage_set_Session_mE7744791E5C58C0C92C0B3C76B7A3723DBD7C13B_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStorage__ctor_m871422D628498207B18CF81F420538BC881A8AEF (SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* __this, String_t* ___0_id, bool ___1_isKmsWallet, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Storage_set_Data_m0CA3B60F23B566821915872B13C7CB50C329B39F_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* ___0_value, const RuntimeMethod* method) ;
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* File_WriteAllBytesAsync_m31B0D5E99C9CCD0E675DFFDDBF314BD95D760A8A (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___0_exception, method);
}
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataAsyncU3Ed__8_MoveNext_m6D42F9D1DC986CD3D7F635D19BAD045C84790A77 (U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* __this, const RuntimeMethod* method) ;
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___0_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataAsyncU3Ed__8_SetStateMachine_mBBCD925F8D27BAAAE68AAD863FF1BED9AA379C6E (U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_m75307BD044A940BCAAD457746C3D5F166B3C4F62 (Config_t6F4D1B73F49ABE29BF693F84E249223EB8983D49* __this, int32_t ___0_nBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_nBits;
		__this->___nBits = L_0;
		int32_t L_1 = ___0_nBits;
		V_0 = ((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))));
		int32_t L_2 = V_0;
		__this->___maxnShares = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		il2cpp_codegen_runtime_class_init_inline(Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var))->___primitivePolynomialCoefficients;
		int32_t L_4 = ___0_nBits;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___exponents = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exponents), (void*)L_8);
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___logarithms = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logarithms), (void*)L_10);
		V_2 = 1;
		V_3 = 0;
		goto IL_006e;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___exponents;
		int32_t L_12 = V_3;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___logarithms;
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)(L_17<<1));
		int32_t L_18 = V_2;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		V_2 = ((int32_t)(L_20^L_21));
		int32_t L_22 = V_2;
		int32_t L_23 = __this->___maxnShares;
		V_2 = ((int32_t)(L_22&L_23));
	}

IL_006a:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006e:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0043;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Defaults__cctor_mC15B0D4AE78D2456AC1CE48D64540DACABAED2D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF5220E380F0E319477114ACB51C2FA813BB5FCB8____FB69943554C8F74640CAF2CD8A8D87A74029E0CB77FC394E23A1316AD4010B59_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)21));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF5220E380F0E319477114ACB51C2FA813BB5FCB8____FB69943554C8F74640CAF2CD8A8D87A74029E0CB77FC394E23A1316AD4010B59_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var))->___primitivePolynomialCoefficients = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t7A1C39BED0DF2D1E7798C6E78352EB1FDC0F2187_il2cpp_TypeInfo_var))->___primitivePolynomialCoefficients), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareComponents__ctor_mCFC60D4B8898E6DE5836F7ECFF2F93AAC39004AF (ShareComponents_t680D63F9B5DB13A50919740BFEBFE15778F1385B* __this, int32_t ___0_nBits, int32_t ___1_id, String_t* ___2_data, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_nBits;
		__this->___nBits = L_0;
		int32_t L_1 = ___1_id;
		__this->___id = L_1;
		String_t* L_2 = ___2_data;
		__this->___data = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC943E6B6791E3EE60E9A97EB2BA05D5C6978F4A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* L_0 = (U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF*)il2cpp_codegen_object_new(U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA25940AF81D9018F7BE55460514568E10E489021(L_0, NULL);
		((U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA25940AF81D9018F7BE55460514568E10E489021 (U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CShareU3Eb__10_0_m52060F18F3654EEDBF77F5239D4B40CF11B7E80F (U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* __this, Il2CppChar ___0_ch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___0_ch;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsDigit_m8C1A38685D548E89FB8A05525B55261CC8D271B2(L_0, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar L_2 = ___0_ch;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		Il2CppChar L_3 = ___0_ch;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		Il2CppChar L_4 = ___0_ch;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppChar L_5 = ___0_ch;
		return (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShareComponents_t680D63F9B5DB13A50919740BFEBFE15778F1385B* U3CU3Ec_U3CCombineU3Eb__12_0_m6A7A09C34899CB6869209324F89E4C7A40395CB8 (U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* __this, String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_s;
		il2cpp_codegen_runtime_class_init_inline(Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63_il2cpp_TypeInfo_var);
		ShareComponents_t680D63F9B5DB13A50919740BFEBFE15778F1385B* L_1;
		L_1 = Secrets_ExtractShareComponents_m447A56261E048F3C63882A07C80F63A6A49F5EA8(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__25_0_m7CB9C79FCB390E40ABDDE967CF16B33C593AD9F1 (U3CU3Ec_tC1BC7C8268B2C9657F9A8F93E97E02E5B8A1A8CF* __this, int32_t ___0_nBits, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_nBits;
		int32_t L_1;
		L_1 = RandomNumberGenerator_GetInt32_mAB3885ACE9D36EB952EFCCA2CAD2921AF819E574(1, ((int32_t)(1<<((int32_t)(L_0&((int32_t)31))))), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m6A453DEC6145AF9E43E39348C48E508C6E8AB5A7 (U3CU3Ec__DisplayClass16_0_tB321940521B1983661FB953F99FEAF2957ACD8B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass16_0_U3CGetSharesU3Eb__0_m2B6630AAF7002F4F887796108D64D33D4D73EC25 (U3CU3Ec__DisplayClass16_0_tB321940521B1983661FB953F99FEAF2957ACD8B6* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_1 = L_0->___GetRandomInt32;
		Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63* L_2 = __this->___U3CU3E4__this;
		NullCheck(L_2);
		Config_t6F4D1B73F49ABE29BF693F84E249223EB8983D49* L_3 = L_2->___config;
		NullCheck(L_3);
		int32_t L_4 = L_3->___nBits;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_1, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D U3CU3Ec__DisplayClass16_0_U3CGetSharesU3Eb__1_mED53AFF6C62DDA976A6AF2D670B01A55418FD213 (U3CU3Ec__DisplayClass16_0_tB321940521B1983661FB953F99FEAF2957ACD8B6* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_i;
		Secrets_t31AF844136ADDE57CDF362E83C42C63FB69AFA63* L_1 = __this->___U3CU3E4__this;
		int32_t L_2 = ___0_i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___coefficients;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Secrets_Horner_m26B24C0B45FD8DCF9AE02461C0F323B925788CD6(L_1, L_2, (RuntimeObject*)L_3, NULL);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_5), L_0, L_4, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mB9310164A330AF3E6F09FB0621830BF5AF1C06B1 (U3CU3Ec__DisplayClass19_0_t5F7423CEEBFD55E57401A6E8C558C834A63C09CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CLagrangeU3Eb__0_m70CC2FF14D58F0F90621A8ABA66B2254F60E1D89 (U3CU3Ec__DisplayClass19_0_t5F7423CEEBFD55E57401A6E8C558C834A63C09CA* __this, int32_t ___0_j, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___i;
		int32_t L_1 = ___0_j;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m180AA788EE2D57DEECA2F92475852B40266F4840 (U3CU3Ec__DisplayClass6_0_tA36A0EE50C4D5567D281A376A74BB0CB25337672* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U3CU3Ec__DisplayClass6_0_U3CGetBytesU3Eb__0_m76B8B756C028FCB09249766B335651D64592089C (U3CU3Ec__DisplayClass6_0_tA36A0EE50C4D5567D281A376A74BB0CB25337672* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___s;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 2)), 2, NULL);
		uint8_t L_3;
		L_3 = Byte_Parse_mE87056B4D91E35B7A5D888132B6F861A1C94A108(L_2, ((int32_t)515), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerificationException_get_CanRetry_mA0CFD10A8B367AA06691B9B36E51AF1DE1B04990 (VerificationException_t348BD4F8DCA305E161F39C4D7199D75D93041420* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CCanRetryU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationException__ctor_m84FC415FC543B942FD2AF665BD9A08C366CF8B03 (VerificationException_t348BD4F8DCA305E161F39C4D7199D75D93041420* __this, String_t* ___0_message, bool ___1_canRetry, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		bool L_1 = ___1_canRetry;
		__this->___U3CCanRetryU3Ek__BackingField = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerificationException__ctor_mAFC320489A3A83BA24F54C7FB2F386834F249387 (VerificationException_t348BD4F8DCA305E161F39C4D7199D75D93041420* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m412D5FC4D69035738F1DB88FD771ABD6B0E9E120(__this, L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m38AC306AF81B140459155121D48D3424F322FDB2 (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___0_account, String_t* ___1_emailAddress, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_0 = ___0_account;
		User_set_Account_m5A4AC2FB413807262D2C1CFD5F3580FDB4EC1361_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_emailAddress;
		User_set_EmailAddress_m8D04672E9A6AFEB4014D60DDBEE74FC4C111F143_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* User_get_Account_m40C5C07809A675664AD3945BD8A56B46E20723F3 (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, const RuntimeMethod* method) 
{
	{
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_0 = __this->___U3CAccountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_set_Account_m5A4AC2FB413807262D2C1CFD5F3580FDB4EC1361 (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___0_value, const RuntimeMethod* method) 
{
	{
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_0 = ___0_value;
		__this->___U3CAccountU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccountU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* User_get_EmailAddress_m7232552459BBEC32CAFB23D58A9FC1364BEFE3D4 (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CEmailAddressU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_set_EmailAddress_m8D04672E9A6AFEB4014D60DDBEE74FC4C111F143 (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CEmailAddressU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailAddressU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalStorageBase__ctor_mAD573989F62B93C26AF4DFAF303A52367A443B17 (LocalStorageBase_t880E723ECCD2E4F18656CC07697D9418B4D6A66A* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* LocalStorage_get_Data_m764036EB53639D9DC254B7CF1D5EB339424C4C44 (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, const RuntimeMethod* method) 
{
	{
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_0 = __this->___storage;
		NullCheck(L_0);
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_1;
		L_1 = Storage_get_Data_mC3379E037E4D73CEBF8F0C9E2809EE07E15B1424_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* LocalStorage_get_Session_mB249756203E221BDD10117847CE05006896DE26C (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, const RuntimeMethod* method) 
{
	{
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_0 = __this->___storage;
		NullCheck(L_0);
		SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* L_1;
		L_1 = Storage_get_Session_mB5A027D6D798985F504653A3C9520385AA9817D7_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalStorage__ctor_mC5113A8F97681CA78F60810B0DFDECC1893A1900 (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, String_t* ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723C838B75B1F71A1830D7E1645CAB12FB4E38CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B8874BD104641E67F146CCC7575269DBF98AFFC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* V_1 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		LocalStorageBase__ctor_mAD573989F62B93C26AF4DFAF303A52367A443B17(__this, NULL);
	}
	try
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9B8874BD104641E67F146CCC7575269DBF98AFFC, L_1, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		goto IL_002e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C* L_3 = ((SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*)IL2CPP_GET_ACTIVE_EXCEPTION(SecurityException_t025CB4C23107E67E07CF085826B40EDE72F8165C*));;
		String_t* L_4;
		L_4 = Environment_GetFolderPath_m8D283450E7FCF2F2CAFFF157D599C3EBA212B58C(((int32_t)28), NULL);
		V_0 = L_4;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002e;
	}

IL_002e:
	{
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_5, _stringLiteral723C838B75B1F71A1830D7E1645CAB12FB4E38CE, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_8;
		L_8 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_7, NULL);
		String_t* L_9 = V_0;
		String_t* L_10 = ___0_clientId;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, NULL);
		String_t* L_12;
		L_12 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_9, L_11, NULL);
		__this->___filePath = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filePath), (void*)L_12);
	}
	try
	{
		String_t* L_13 = __this->___filePath;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* L_17 = (DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1*)il2cpp_codegen_object_new(DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var);
		DataContractJsonSerializer__ctor_mDBAD2FB5F119218821A9805D8F576DD2FAF7F639(L_17, L_16, NULL);
		V_1 = L_17;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_18, L_14, NULL);
		V_2 = L_18;
		DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* L_19 = V_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker1< RuntimeObject*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18, L_19, L_20);
		__this->___storage = ((Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C*)CastclassClass((RuntimeObject*)L_21, Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___storage), (void*)((Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C*)CastclassClass((RuntimeObject*)L_21, Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_il2cpp_TypeInfo_var)));
		goto IL_009b;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{
		Exception_t* L_22 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_23 = (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_il2cpp_TypeInfo_var)));
		Storage__ctor_mB6BE9A7B186D737EBA612F4C51CA82AC0C660219(L_23, NULL);
		__this->___storage = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___storage), (void*)L_23);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_009b;
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LocalStorage_RemoveAuthTokenAsync_m46CC9D459519AA9E385E789F0DA9EAB7CA679F6B (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalStorage_U3CRemoveAuthTokenAsyncU3Eb__7_0_mC33BCADDC618196F55CBC1F1F117E3192ED1551D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_0, __this, (intptr_t)((void*)LocalStorage_U3CRemoveAuthTokenAsyncU3Eb__7_0_mC33BCADDC618196F55CBC1F1F117E3192ED1551D_RuntimeMethod_var), NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = LocalStorage_UpdateDataAsync_m906FAEB9D5390751EFBFCC5C5DAE72D0DC2B451F(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* LocalStorage_UpdateDataAsync_m906FAEB9D5390751EFBFCC5C5DAE72D0DC2B451F (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_fn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->___m_coreState))->___m_stateMachine), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder))->___m_coreState))->___m_defaultContextAction), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder))->___m_task), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this), (void*)__this);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = ___0_fn;
		(&V_0)->___fn = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___fn), (void*)L_1);
		(&V_0)->___U3CU3E1__state = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*)(&(&V_0)->___U3CU3Et__builder);
		AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_mA97154BB33FF32CBD0C7020598A17C86E4B89780_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*)(&(&V_0)->___U3CU3Et__builder);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_3, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LocalStorage_SaveDataAsync_m68C6E5DF56B850CDE764125B2336E6FED60A5E4C (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CSaveDataAsyncU3Eb__0_mBC549D6D67C0CA8E2876971D1EF97B967A7CD40E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* L_0 = (U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m6F0A6EE20091BB2C7B36090009CBF99A8022E270(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* L_2 = V_0;
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_3 = ___0_data;
		NullCheck(L_2);
		L_2->___data = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___data), (void*)L_3);
		U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* L_4 = V_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CSaveDataAsyncU3Eb__0_mBC549D6D67C0CA8E2876971D1EF97B967A7CD40E_RuntimeMethod_var), NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = LocalStorage_UpdateDataAsync_m906FAEB9D5390751EFBFCC5C5DAE72D0DC2B451F(__this, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LocalStorage_SaveSessionAsync_m446B9C21F0A445F13E2FB28322444D93CBC390B7 (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, String_t* ___0_sessionId, bool ___1_isKmsWallet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CSaveSessionAsyncU3Eb__0_m37B287778B1D69B148F60485A9B06D4EB981C4AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* L_0 = (U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass10_0__ctor_m6F17422791FA68113875D323F2C5B7A3545CF506(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* L_2 = V_0;
		String_t* L_3 = ___0_sessionId;
		NullCheck(L_2);
		L_2->___sessionId = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sessionId), (void*)L_3);
		U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* L_4 = V_0;
		bool L_5 = ___1_isKmsWallet;
		NullCheck(L_4);
		L_4->___isKmsWallet = L_5;
		U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* L_6 = V_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CSaveSessionAsyncU3Eb__0_m37B287778B1D69B148F60485A9B06D4EB981C4AA_RuntimeMethod_var), NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_8;
		L_8 = LocalStorage_UpdateDataAsync_m906FAEB9D5390751EFBFCC5C5DAE72D0DC2B451F(__this, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LocalStorage_RemoveSessionAsync_m822AD42B844FEC11082EAA3AFFA2CF8D205DB4DD (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalStorage_U3CRemoveSessionAsyncU3Eb__11_0_m1DF0B1B7829B2E8F7A89B847844A5D4FC36B84BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_0, __this, (intptr_t)((void*)LocalStorage_U3CRemoveSessionAsyncU3Eb__11_0_m1DF0B1B7829B2E8F7A89B847844A5D4FC36B84BF_RuntimeMethod_var), NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = LocalStorage_UpdateDataAsync_m906FAEB9D5390751EFBFCC5C5DAE72D0DC2B451F(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalStorage_U3CRemoveAuthTokenAsyncU3Eb__7_0_mC33BCADDC618196F55CBC1F1F117E3192ED1551D (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, const RuntimeMethod* method) 
{
	DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* G_B2_0 = NULL;
	DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_0 = __this->___storage;
		NullCheck(L_0);
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_1;
		L_1 = Storage_get_Data_mC3379E037E4D73CEBF8F0C9E2809EE07E15B1424_inline(L_0, NULL);
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
		G_B1_0 = L_2;
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = DataStorage_get_AuthToken_m6D4377861CF52CB0E6DEEBB27AC95A528BADB1D3_inline(G_B2_0, NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		if (!G_B3_0)
		{
			goto IL_002b;
		}
	}
	{
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_4 = __this->___storage;
		NullCheck(L_4);
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_5;
		L_5 = Storage_get_Data_mC3379E037E4D73CEBF8F0C9E2809EE07E15B1424_inline(L_4, NULL);
		NullCheck(L_5);
		DataStorage_ClearAuthToken_mF4326B9162E641EA8E5112DEB244F35F2B8BC1CF(L_5, NULL);
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalStorage_U3CRemoveSessionAsyncU3Eb__11_0_m1DF0B1B7829B2E8F7A89B847844A5D4FC36B84BF (LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* __this, const RuntimeMethod* method) 
{
	{
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_0 = __this->___storage;
		NullCheck(L_0);
		Storage_set_Session_mE7744791E5C58C0C92C0B3C76B7A3723DBD7C13B_inline(L_0, (SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE*)NULL, NULL);
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataStorage_get_AuthToken_m6D4377861CF52CB0E6DEEBB27AC95A528BADB1D3 (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___authToken;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataStorage_get_DeviceShare_m763CF15A35A0D06AC7508CA679870BF59ACAAE95 (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___deviceShare;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataStorage_get_WalletUserId_m48B99A15F5E4AA161202C5DA9E3965289E2BCF61 (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___walletUserId;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataStorage_get_AuthProvider_m5D74E902F0A5175EB48D0F7F7B62E3B96ED95DBC (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___authProvider;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage__ctor_mE63DA354599AE3E1D3F3BD04B05FB9DB2F28C75B (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, String_t* ___0_authToken, String_t* ___1_deviceShare, String_t* ___2_emailAddress, String_t* ___3_walletUserId, String_t* ___4_authProvider, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_authToken;
		__this->___authToken = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___authToken), (void*)L_0);
		String_t* L_1 = ___1_deviceShare;
		__this->___deviceShare = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceShare), (void*)L_1);
		String_t* L_2 = ___2_emailAddress;
		__this->___emailAddress = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___emailAddress), (void*)L_2);
		String_t* L_3 = ___3_walletUserId;
		__this->___walletUserId = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walletUserId), (void*)L_3);
		String_t* L_4 = ___4_authProvider;
		__this->___authProvider = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___authProvider), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_ClearAuthToken_mF4326B9162E641EA8E5112DEB244F35F2B8BC1CF (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) 
{
	{
		__this->___authToken = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___authToken), (void*)(String_t*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionStorage_get_Id_m5E6DB01584AF3FC1D33F6AC1E389E90944425ECC (SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___id;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionStorage_get_IsKmsWallet_m513007724B2F178A821DC28159439BA37A9424D4 (SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isKmsWallet;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStorage__ctor_m871422D628498207B18CF81F420538BC881A8AEF (SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* __this, String_t* ___0_id, bool ___1_isKmsWallet, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___id = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id), (void*)L_0);
		bool L_1 = ___1_isKmsWallet;
		__this->___isKmsWallet = L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* Storage_get_Data_mC3379E037E4D73CEBF8F0C9E2809EE07E15B1424 (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) 
{
	{
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Storage_set_Data_m0CA3B60F23B566821915872B13C7CB50C329B39F (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* ___0_value, const RuntimeMethod* method) 
{
	{
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* Storage_get_Session_mB5A027D6D798985F504653A3C9520385AA9817D7 (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) 
{
	{
		SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* L_0 = __this->___U3CSessionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Storage_set_Session_mE7744791E5C58C0C92C0B3C76B7A3723DBD7C13B (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* ___0_value, const RuntimeMethod* method) 
{
	{
		SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* L_0 = ___0_value;
		__this->___U3CSessionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Storage__ctor_mB6BE9A7B186D737EBA612F4C51CA82AC0C660219 (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m6F17422791FA68113875D323F2C5B7A3545CF506 (U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CSaveSessionAsyncU3Eb__0_m37B287778B1D69B148F60485A9B06D4EB981C4AA (U3CU3Ec__DisplayClass10_0_t72B9002F07888100EB46F9467FA9963BCD237309* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_1 = L_0->___storage;
		String_t* L_2 = __this->___sessionId;
		bool L_3 = __this->___isKmsWallet;
		SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* L_4 = (SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE*)il2cpp_codegen_object_new(SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE_il2cpp_TypeInfo_var);
		SessionStorage__ctor_m871422D628498207B18CF81F420538BC881A8AEF(L_4, L_2, L_3, NULL);
		NullCheck(L_1);
		Storage_set_Session_mE7744791E5C58C0C92C0B3C76B7A3723DBD7C13B_inline(L_1, L_4, NULL);
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m6F0A6EE20091BB2C7B36090009CBF99A8022E270 (U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CSaveDataAsyncU3Eb__0_mBC549D6D67C0CA8E2876971D1EF97B967A7CD40E (U3CU3Ec__DisplayClass9_0_t990FF3F19C195C051E71E8CC0707ED8069393ED2* __this, const RuntimeMethod* method) 
{
	{
		LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* L_0 = __this->___U3CU3E4__this;
		NullCheck(L_0);
		Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_1 = L_0->___storage;
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_2 = __this->___data;
		NullCheck(L_1);
		Storage_set_Data_m0CA3B60F23B566821915872B13C7CB50C329B39F_inline(L_1, L_2, NULL);
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataAsyncU3Ed__8_MoveNext_m6D42F9D1DC986CD3D7F635D19BAD045C84790A77 (U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* V_1 = NULL;
	bool V_2 = false;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_4;
	memset((&V_4), 0, sizeof(V_4));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
	}
	try
	{
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_008e_1;
			}
		}
		{
			Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = __this->___fn;
			NullCheck(L_3);
			bool L_4;
			L_4 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_3, NULL);
			if (!L_4)
			{
				goto IL_00b6_1;
			}
		}
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_6;
			L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
			DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1* L_7 = (DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1*)il2cpp_codegen_object_new(DataContractJsonSerializer_tE8A9DFD98034D721547A6DCA06F89CB1D1B02CA1_il2cpp_TypeInfo_var);
			DataContractJsonSerializer__ctor_mDBAD2FB5F119218821A9805D8F576DD2FAF7F639(L_7, L_6, NULL);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
			MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_8, NULL);
			V_3 = L_8;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_3;
			LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* L_10 = V_1;
			NullCheck(L_10);
			Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* L_11 = L_10->___storage;
			NullCheck(L_7);
			VirtualActionInvoker2< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, RuntimeObject* >::Invoke(7, L_7, L_9, L_11);
			LocalStorage_t48B6103B2219E933ED55A6FDAE9D5F05DCF4929D* L_12 = V_1;
			NullCheck(L_12);
			String_t* L_13 = L_12->___filePath;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_3;
			NullCheck(L_14);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
			L_15 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(45, L_14);
			il2cpp_codegen_initobj((&V_5), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = V_5;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
			L_17 = File_WriteAllBytesAsync_m31B0D5E99C9CCD0E675DFFDDBF314BD95D760A8A(L_13, L_15, L_16, NULL);
			NullCheck(L_17);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18;
			L_18 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_17, NULL);
			V_4 = L_18;
			bool L_19;
			L_19 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
			if (L_19)
			{
				goto IL_00ab_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state = L_20;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_21 = V_4;
			__this->___U3CU3Eu__1 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1))->___m_task), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_22 = (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*)(&__this->___U3CU3Et__builder);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B(L_22, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C_m402EE9135BC39284F014C47F41566980CE77265B_RuntimeMethod_var);
			goto IL_00e7;
		}

IL_008e_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_23 = __this->___U3CU3Eu__1;
			V_4 = L_23;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_24 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1);
			il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state = L_25;
		}

IL_00ab_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
			V_2 = (bool)1;
			goto IL_00d3;
		}

IL_00b6_1:
		{
			V_2 = (bool)0;
			goto IL_00d3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ba;
		}
		throw e;
	}

CATCH_00ba:
	{
		Exception_t* L_26 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_26;
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_27 = (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*)(&__this->___U3CU3Et__builder);
		Exception_t* L_28 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00e7;
	}

IL_00d3:
	{
		__this->___U3CU3E1__state = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_29 = (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*)(&__this->___U3CU3Et__builder);
		bool L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_29, L_30, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00e7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateDataAsyncU3Ed__8_MoveNext_m6D42F9D1DC986CD3D7F635D19BAD045C84790A77_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C*>(__this + _offset);
	U3CUpdateDataAsyncU3Ed__8_MoveNext_m6D42F9D1DC986CD3D7F635D19BAD045C84790A77(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDataAsyncU3Ed__8_SetStateMachine_mBBCD925F8D27BAAAE68AAD863FF1BED9AA379C6E (U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*)(&__this->___U3CU3Et__builder);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateDataAsyncU3Ed__8_SetStateMachine_mBBCD925F8D27BAAAE68AAD863FF1BED9AA379C6E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateDataAsyncU3Ed__8_tA42E1C9067FABA223D1B5851C4AD2EFC790B112C*>(__this + _offset);
	U3CUpdateDataAsyncU3Ed__8_SetStateMachine_mBBCD925F8D27BAAAE68AAD863FF1BED9AA379C6E(_thisAdjusted, ___0_stateMachine, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void User_set_Account_m5A4AC2FB413807262D2C1CFD5F3580FDB4EC1361_inline (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___0_value, const RuntimeMethod* method) 
{
	{
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_0 = ___0_value;
		__this->___U3CAccountU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccountU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void User_set_EmailAddress_m8D04672E9A6AFEB4014D60DDBEE74FC4C111F143_inline (User_t131ECD0BEA511F78D1F76E04CBC5DFD24E31B6C6* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CEmailAddressU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEmailAddressU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* Storage_get_Data_mC3379E037E4D73CEBF8F0C9E2809EE07E15B1424_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) 
{
	{
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* Storage_get_Session_mB5A027D6D798985F504653A3C9520385AA9817D7_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, const RuntimeMethod* method) 
{
	{
		SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* L_0 = __this->___U3CSessionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataStorage_get_AuthToken_m6D4377861CF52CB0E6DEEBB27AC95A528BADB1D3_inline (DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___authToken;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Storage_set_Session_mE7744791E5C58C0C92C0B3C76B7A3723DBD7C13B_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* ___0_value, const RuntimeMethod* method) 
{
	{
		SessionStorage_t6D4BB8337B1E51D886B142A61C8401038BEC6BBE* L_0 = ___0_value;
		__this->___U3CSessionU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Storage_set_Data_m0CA3B60F23B566821915872B13C7CB50C329B39F_inline (Storage_t7A6FF31DA6D33C0E0C6BDEBC37EF5D22014DBD5C* __this, DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* ___0_value, const RuntimeMethod* method) 
{
	{
		DataStorage_tF33249760B31A746C3A55EE7FB08117B37EC9724* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
