#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410;
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0;
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tF4AFE7B8FD47F883A3D05AE8A219C3BBE398E917 
{
};
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0  : public RuntimeObject
{
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct EventLogLevel_tE488BF02399223CE18E69F1170F6195B448595A3 
{
	int32_t ___value__;
};
struct LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410  : public RuntimeObject
{
	int32_t ___U3CEventLogLevelU3Ek__BackingField;
	String_t* ___U3CMessageU3Ek__BackingField;
};
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields
{
	NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* ___U3CInstanceU3Ek__BackingField;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullIdentityModelLogger__ctor_m76E7ED6BC54349FA7A5DA3116E44E522087D9996 (NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogEntry_set_EventLogLevel_m190A4AD9B8FE5E2081119A6C890B7B21FEC05FE9 (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CEventLogLevelU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogEntry_set_Message_m272688179C2D2CE7426CB19F489BE877F46A88B7 (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogEntry__ctor_m33407EEB5041EB30F5E3EA403E6844167D6210E8 (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* NullIdentityModelLogger_get_Instance_m3DAEDCF167C1DD6C5FD422063B12476B84F78CB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* L_0 = ((NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields*)il2cpp_codegen_static_fields_for(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullIdentityModelLogger__ctor_m76E7ED6BC54349FA7A5DA3116E44E522087D9996 (NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullIdentityModelLogger_IsEnabled_m9CE24791FB92EBEEFFBA39E97FD712220EDD710A (NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* __this, int32_t ___0_eventLogLevel, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullIdentityModelLogger_Log_m101B386CD6A7A61BE79541A95EB1AC54B5AB88AA (NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* __this, LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* ___0_entry, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullIdentityModelLogger__cctor_mF07BB0F26EF8EB011175AF53A29CC471DDF0B43E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* L_0 = (NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0*)il2cpp_codegen_object_new(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		NullIdentityModelLogger__ctor_m76E7ED6BC54349FA7A5DA3116E44E522087D9996(L_0, NULL);
		((NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields*)il2cpp_codegen_static_fields_for(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields*)il2cpp_codegen_static_fields_for(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
