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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// AndroidRuntimePermissions/Permission[]
struct PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AndroidRuntimePermissions/PermissionResult
struct PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204;
// AndroidRuntimePermissions/PermissionResultMultiple
struct PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Permission_t7DD3018705A9F4C882D08A4C9805E0736DE2ADF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral445D5FAD900CBCFA0E910C25BABCD6438958620F;
IL2CPP_EXTERN_C String_t* _stringLiteral5BE2DC525B76C096079B960B32063FCBD00D9A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral9E010293A81ADD6752DB430F04400D8B1CF2A6E7;
IL2CPP_EXTERN_C String_t* _stringLiteral9EDAF9B1F97AF662638A0E9509DEDFFBCE4504EB;
IL2CPP_EXTERN_C String_t* _stringLiteralCC0D9E65EE8CF25F6D9BF8FAC3A75877D5906329;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t293C136F7D4C49BA55D3219B32AA40135F674F31 
{
};

// AndroidRuntimePermissions
struct AndroidRuntimePermissions_tE5F5BD6BBFD3AB3702FACA627E8BA797B09D1EF8  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// AndroidRuntimePermissions/Permission
struct Permission_t7DD3018705A9F4C882D08A4C9805E0736DE2ADF7 
{
	// System.Int32 AndroidRuntimePermissions/Permission::value__
	int32_t ___value___2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// AndroidRuntimePermissions/PermissionResult
struct PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204  : public MulticastDelegate_t
{
};

// AndroidRuntimePermissions/PermissionResultMultiple
struct PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// AndroidRuntimePermissions/Permission[]
struct PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void AndroidRuntimePermissions::ValidateArgument(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) ;
// AndroidRuntimePermissions/Permission[] AndroidRuntimePermissions::GetDummyResult(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* AndroidRuntimePermissions_GetDummyResult_mEC14AFF0B29ACF67719D3AB055489533C81540AA (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) ;
// System.Void AndroidRuntimePermissions/PermissionResult::Invoke(System.String,AndroidRuntimePermissions/Permission)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_inline (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method) ;
// System.Void AndroidRuntimePermissions/PermissionResultMultiple::Invoke(System.String[],AndroidRuntimePermissions/Permission[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_inline (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// AndroidRuntimePermissions/Permission AndroidRuntimePermissions::ToPermission(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidRuntimePermissions_ToPermission_m5309DF4E64D53373942B77B2C19B2C885B7A15CE (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean AndroidRuntimePermissions::CachePermission(System.String,AndroidRuntimePermissions/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidRuntimePermissions_CachePermission_mF1AFC406C6FC85AAFECF567B5124D68722F5518F (String_t* ___permission0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// AndroidRuntimePermissions/Permission AndroidRuntimePermissions::GetCachedPermission(System.String,AndroidRuntimePermissions/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidRuntimePermissions_GetCachedPermission_m60AC89C1C5B8381F4449E0B2444E6B62C14B7DBC (String_t* ___permission0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
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
// System.Void AndroidRuntimePermissions::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRuntimePermissions_OpenSettings_mD6CAE61A4E64A0B143A9D8B05F0FF20B94C4B69D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC0D9E65EE8CF25F6D9BF8FAC3A75877D5906329);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log( "Opening settings..." );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCC0D9E65EE8CF25F6D9BF8FAC3A75877D5906329, NULL);
		// }
		return;
	}
}
// AndroidRuntimePermissions/Permission AndroidRuntimePermissions::CheckPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidRuntimePermissions_CheckPermission_m863C4A2A454B61BD0774BE203A6CF73FA7AA0F22 (String_t* ___permission0, const RuntimeMethod* method) 
{
	{
		// return Permission.Granted;
		return (int32_t)(1);
	}
}
// AndroidRuntimePermissions/Permission[] AndroidRuntimePermissions::CheckPermissions(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* AndroidRuntimePermissions_CheckPermissions_m1507BACF9188257AF013742E821B866E8411516A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) 
{
	{
		// ValidateArgument( permissions );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___permissions0;
		AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1(L_0, NULL);
		// return GetDummyResult( permissions );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___permissions0;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_2;
		L_2 = AndroidRuntimePermissions_GetDummyResult_mEC14AFF0B29ACF67719D3AB055489533C81540AA(L_1, NULL);
		return L_2;
	}
}
// AndroidRuntimePermissions/Permission AndroidRuntimePermissions::RequestPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidRuntimePermissions_RequestPermission_m2A1354F72EEA63633E7DEC15B37211B26F13CEE1 (String_t* ___permission0, const RuntimeMethod* method) 
{
	{
		// return Permission.Granted;
		return (int32_t)(1);
	}
}
// AndroidRuntimePermissions/Permission[] AndroidRuntimePermissions::RequestPermissions(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* AndroidRuntimePermissions_RequestPermissions_mA6E9B794EA760DA3231D8E18741F2CD4973C3B3C (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) 
{
	{
		// ValidateArgument( permissions );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___permissions0;
		AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1(L_0, NULL);
		// return GetDummyResult( permissions );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___permissions0;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_2;
		L_2 = AndroidRuntimePermissions_GetDummyResult_mEC14AFF0B29ACF67719D3AB055489533C81540AA(L_1, NULL);
		return L_2;
	}
}
// System.Void AndroidRuntimePermissions::RequestPermissionAsync(System.String,AndroidRuntimePermissions/PermissionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRuntimePermissions_RequestPermissionAsync_mA706DD84306F2BF33B5D3E330DEEA817A6390E1F (String_t* ___permission0, PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* ___callback1, const RuntimeMethod* method) 
{
	{
		// if( callback != null )
		PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* L_0 = ___callback1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		// callback( permission, Permission.Granted );
		PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* L_1 = ___callback1;
		String_t* L_2 = ___permission0;
		NullCheck(L_1);
		PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_inline(L_1, L_2, 1, NULL);
	}

IL_000b:
	{
		// }
		return;
	}
}
// System.Void AndroidRuntimePermissions::RequestPermissionsAsync(System.String[],AndroidRuntimePermissions/PermissionResultMultiple)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRuntimePermissions_RequestPermissionsAsync_mF7F369757B5C079096616CA3BB8352F693EE96C1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* ___callback1, const RuntimeMethod* method) 
{
	{
		// ValidateArgument( permissions );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___permissions0;
		AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1(L_0, NULL);
		// if( callback != null )
		PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* L_1 = ___callback1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// callback( permissions, GetDummyResult( permissions ) );
		PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* L_2 = ___callback1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___permissions0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___permissions0;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_5;
		L_5 = AndroidRuntimePermissions_GetDummyResult_mEC14AFF0B29ACF67719D3AB055489533C81540AA(L_4, NULL);
		NullCheck(L_2);
		PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_inline(L_2, L_3, L_5, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// AndroidRuntimePermissions/Permission[] AndroidRuntimePermissions::ProcessPermissionRequest(System.String[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* AndroidRuntimePermissions_ProcessPermissionRequest_m7416CCC9885E7717ED7AF6ECDDC95FE52F0D0C8B (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, String_t* ___resultRaw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral445D5FAD900CBCFA0E910C25BABCD6438958620F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if( resultRaw.Length != permissions.Length )
		String_t* L_0 = ___resultRaw1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___permissions0;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError( "RequestPermissions: something went wrong" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral445D5FAD900CBCFA0E910C25BABCD6438958620F, NULL);
		// return null;
		return (PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*)NULL;
	}

IL_0017:
	{
		// bool shouldUpdateCache = false;
		V_0 = (bool)0;
		// Permission[] result = new Permission[permissions.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___permissions0;
		NullCheck(L_3);
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_4 = (PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*)(PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*)SZArrayNew(PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		// for( int i = 0; i < result.Length; i++ )
		V_2 = 0;
		goto IL_0048;
	}

IL_0026:
	{
		// Permission _permission = resultRaw[i].ToPermission();
		String_t* L_5 = ___resultRaw1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		int32_t L_8;
		L_8 = AndroidRuntimePermissions_ToPermission_m5309DF4E64D53373942B77B2C19B2C885B7A15CE(L_7, NULL);
		V_3 = L_8;
		// result[i] = _permission;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// if( CachePermission( permissions[i], _permission ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___permissions0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_3;
		bool L_17;
		L_17 = AndroidRuntimePermissions_CachePermission_mF1AFC406C6FC85AAFECF567B5124D68722F5518F(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0044;
		}
	}
	{
		// shouldUpdateCache = true;
		V_0 = (bool)1;
	}

IL_0044:
	{
		// for( int i = 0; i < result.Length; i++ )
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0048:
	{
		// for( int i = 0; i < result.Length; i++ )
		int32_t L_19 = V_2;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// if( shouldUpdateCache )
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0056:
	{
		// return result;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_22 = V_1;
		return L_22;
	}
}
// AndroidRuntimePermissions/Permission AndroidRuntimePermissions::GetCachedPermission(System.String,AndroidRuntimePermissions/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidRuntimePermissions_GetCachedPermission_m60AC89C1C5B8381F4449E0B2444E6B62C14B7DBC (String_t* ___permission0, int32_t ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EDAF9B1F97AF662638A0E9509DEDFFBCE4504EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (Permission) PlayerPrefs.GetInt( "ARTP_" + permission, (int) defaultValue );
		String_t* L_0 = ___permission0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9EDAF9B1F97AF662638A0E9509DEDFFBCE4504EB, L_0, NULL);
		int32_t L_2 = ___defaultValue1;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(L_1, L_2, NULL);
		return (int32_t)(L_3);
	}
}
// System.String AndroidRuntimePermissions::GetCachedPermissions(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidRuntimePermissions_GetCachedPermissions_m34B875028D31125A39080C75D78AE6C947992C72 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// StringBuilder cachedPermissions = new StringBuilder( permissions.Length );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___permissions0;
		NullCheck(L_0);
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// for( int i = 0; i < permissions.Length; i++ )
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		// cachedPermissions.Append( (int) GetCachedPermission( permissions[i], Permission.ShouldAsk ) );
		StringBuilder_t* L_2 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___permissions0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7;
		L_7 = AndroidRuntimePermissions_GetCachedPermission_m60AC89C1C5B8381F4449E0B2444E6B62C14B7DBC(L_6, 2, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_2, L_7, NULL);
		// for( int i = 0; i < permissions.Length; i++ )
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0021:
	{
		// for( int i = 0; i < permissions.Length; i++ )
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___permissions0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return cachedPermissions.ToString();
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}
}
// System.Boolean AndroidRuntimePermissions::CachePermission(System.String,AndroidRuntimePermissions/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidRuntimePermissions_CachePermission_mF1AFC406C6FC85AAFECF567B5124D68722F5518F (String_t* ___permission0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EDAF9B1F97AF662638A0E9509DEDFFBCE4504EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( PlayerPrefs.GetInt( "ARTP_" + permission, -1 ) != (int) value )
		String_t* L_0 = ___permission0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9EDAF9B1F97AF662638A0E9509DEDFFBCE4504EB, L_0, NULL);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(L_1, (-1), NULL);
		int32_t L_3 = ___value1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		// PlayerPrefs.SetInt( "ARTP_" + permission, (int) value );
		String_t* L_4 = ___permission0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9EDAF9B1F97AF662638A0E9509DEDFFBCE4504EB, L_4, NULL);
		int32_t L_6 = ___value1;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_5, L_6, NULL);
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void AndroidRuntimePermissions::ValidateArgument(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if( permissions == null || permissions.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___permissions0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___permissions0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0007:
	{
		// throw new ArgumentException( "Parameter 'permissions' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E010293A81ADD6752DB430F04400D8B1CF2A6E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1_RuntimeMethod_var)));
	}

IL_0012:
	{
		// for( int i = 0; i < permissions.Length; i++ )
		V_0 = 0;
		goto IL_002f;
	}

IL_0016:
	{
		// if( string.IsNullOrEmpty( permissions[i] ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___permissions0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// throw new ArgumentException( "A permission is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BE2DC525B76C096079B960B32063FCBD00D9A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidRuntimePermissions_ValidateArgument_m89435FCC37BB3DE36134E017089E144892A354E1_RuntimeMethod_var)));
	}

IL_002b:
	{
		// for( int i = 0; i < permissions.Length; i++ )
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002f:
	{
		// for( int i = 0; i < permissions.Length; i++ )
		int32_t L_10 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___permissions0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// AndroidRuntimePermissions/Permission[] AndroidRuntimePermissions::GetDummyResult(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* AndroidRuntimePermissions_GetDummyResult_mEC14AFF0B29ACF67719D3AB055489533C81540AA (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Permission[] result = new Permission[permissions.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___permissions0;
		NullCheck(L_0);
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_1 = (PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*)(PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*)SZArrayNew(PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for( int i = 0; i < result.Length; i++ )
		V_1 = 0;
		goto IL_0015;
	}

IL_000d:
	{
		// result[i] = Permission.Granted;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)1);
		// for( int i = 0; i < result.Length; i++ )
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for( int i = 0; i < result.Length; i++ )
		int32_t L_5 = V_1;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return result;
		PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* L_7 = V_0;
		return L_7;
	}
}
// AndroidRuntimePermissions/Permission AndroidRuntimePermissions::ToPermission(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidRuntimePermissions_ToPermission_m5309DF4E64D53373942B77B2C19B2C885B7A15CE (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	{
		// return (Permission) ( ch - '0' );
		Il2CppChar L_0 = ___ch0;
		return (int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)48))));
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
void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_Multicast(PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* currentDelegate = reinterpret_cast<PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___permission0, ___result1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_OpenInst(PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method)
{
	NullCheck(___permission0);
	typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___permission0, ___result1, method);
}
void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_OpenStatic(PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___permission0, ___result1, method);
}
void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_OpenStaticInvoker(PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___permission0, ___result1);
}
void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_ClosedStaticInvoker(PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___permission0, ___result1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204 (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___permission0' to native representation
	char* ____permission0_marshaled = NULL;
	____permission0_marshaled = il2cpp_codegen_marshal_string(___permission0);

	// Native function invocation
	il2cppPInvokeFunc(____permission0_marshaled, ___result1);

	// Marshaling cleanup of parameter '___permission0' native representation
	il2cpp_codegen_marshal_free(____permission0_marshaled);
	____permission0_marshaled = NULL;

}
// System.Void AndroidRuntimePermissions/PermissionResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResult__ctor_mB0969ABDD209221310820BF1F9522FD3ADAE43D8 (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_Multicast;
}
// System.Void AndroidRuntimePermissions/PermissionResult::Invoke(System.String,AndroidRuntimePermissions/Permission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610 (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___permission0, ___result1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AndroidRuntimePermissions/PermissionResult::BeginInvoke(System.String,AndroidRuntimePermissions/Permission,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PermissionResult_BeginInvoke_m8F17489386B4D591EBFEA13D9261C93C11EB1824 (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Permission_t7DD3018705A9F4C882D08A4C9805E0736DE2ADF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___permission0;
	__d_args[1] = Box(Permission_t7DD3018705A9F4C882D08A4C9805E0736DE2ADF7_il2cpp_TypeInfo_var, &___result1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void AndroidRuntimePermissions/PermissionResult::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResult_EndInvoke_m387E8B5132BB83380D24803D29B12AF233255B20 (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_Multicast(PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* currentDelegate = reinterpret_cast<PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___permissions0, ___result1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_OpenInst(PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method)
{
	NullCheck(___permissions0);
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___permissions0, ___result1, method);
}
void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_OpenStatic(PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___permissions0, ___result1, method);
}
void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_OpenStaticInvoker(PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* >::Invoke(__this->___method_ptr_0, method, NULL, ___permissions0, ___result1);
}
void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_ClosedStaticInvoker(PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___permissions0, ___result1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___permissions0' to native representation
	char** ____permissions0_marshaled = NULL;
	if (___permissions0 != NULL)
	{
		il2cpp_array_size_t ____permissions0_Length = (___permissions0)->max_length;
		____permissions0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____permissions0_Length + 1);
		(____permissions0_marshaled)[____permissions0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____permissions0_Length); i++)
		{
			(____permissions0_marshaled)[i] = il2cpp_codegen_marshal_string((___permissions0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____permissions0_marshaled = NULL;
	}

	// Marshaling of parameter '___result1' to native representation
	int32_t* ____result1_marshaled = NULL;
	if (___result1 != NULL)
	{
		____result1_marshaled = reinterpret_cast<int32_t*>((___result1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____permissions0_marshaled, ____result1_marshaled);

	// Marshaling cleanup of parameter '___permissions0' native representation
	if (____permissions0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____permissions0_marshaled_CleanupLoopCount = (___permissions0 != NULL) ? (___permissions0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____permissions0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____permissions0_marshaled)[i]);
			(____permissions0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____permissions0_marshaled);
		____permissions0_marshaled = NULL;
	}

}
// System.Void AndroidRuntimePermissions/PermissionResultMultiple::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResultMultiple__ctor_m34DC443F9B4F4930CE2DCA81E94EBBF7E4D69D30 (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_Multicast;
}
// System.Void AndroidRuntimePermissions/PermissionResultMultiple::Invoke(System.String[],AndroidRuntimePermissions/Permission[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9 (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___permissions0, ___result1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AndroidRuntimePermissions/PermissionResultMultiple::BeginInvoke(System.String[],AndroidRuntimePermissions/Permission[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PermissionResultMultiple_BeginInvoke_m27CCF86C09B6CBFAE42878289FC904E85C92C711 (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___permissions0;
	__d_args[1] = ___result1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void AndroidRuntimePermissions/PermissionResultMultiple::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PermissionResultMultiple_EndInvoke_mA3A23AB66B1D61EB7F7F7496E3D25E9F0903BC9D (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionResult_Invoke_m7451C608E487B3FB95142D0F01D3D63AD2051610_inline (PermissionResult_t8DAA4E9C8811B2E3FD3294B66B6FFCEA42D17204* __this, String_t* ___permission0, int32_t ___result1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___permission0, ___result1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PermissionResultMultiple_Invoke_mD91655F7CC0E89ED43215783519D7B41624BB0A9_inline (PermissionResultMultiple_t783390467CA9E5B78284B11FD37491C764A823AE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___permissions0, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638* ___result1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, PermissionU5BU5D_t3416E1707C52EAE99607C9C60776B2885731D638*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___permissions0, ___result1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
