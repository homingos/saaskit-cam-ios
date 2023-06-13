﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902;
struct unitytls_key_ref_t6BD91D013DF11047C53738FEEB12CE290FDC71A2;
struct unitytls_tlsctx_tF8BBCBFE1E957B846442DED65ECB89BC5307DEAE;
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17;
struct unitytls_x509name_t8A1108C917795D8FE946B50769ACE51489C7BF5D;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// Mono.Unity.UnityTls/unitytls_x509_ref
struct unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 
{
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;
};

// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 
{
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_ARFoundationAnchorManager_OnCreateAnchor_mFBB20DE919372BDFBE15F7C343C4184FFA567E84(intptr_t ___posePtr0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_ARFoundationAnchorManager_OnRemoveAnchor_m36BDFC0315E4F246204E313601861177CB286813(intptr_t ___uuidPtr0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___language0);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void CDECL ReversePInvokeWrapper_Engine_onEngineErrorHandler_m86D58ED974266660860CEDEA3C25178901BFFBBA(int32_t ___errorCode0, intptr_t ___clientData1);
extern "C" int64_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_Control_mA7B1C493171314C6F02CAC5F73EB7CB94B86ED78(intptr_t ___instance0, int32_t ___command1, int64_t ___arg2);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_OnRead_m8888AD0EA2D55D9FFE183BC63D4023BC621941F9(intptr_t ___instance0, intptr_t ___data1, int32_t ___dataLength2, int32_t* ___wantMore3);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsBioMono_OnWrite_mD90183BD125599306AAF4E74E941A3983027C575(intptr_t ___instance0, intptr_t ___data1, int32_t ___dataLength2);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSsl_PrintErrorsCallback_m93ED1F9335C5974459F0915323C5527382A83959(intptr_t ___str0, intptr_t ___len1, intptr_t ___ctx2);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeSelectCallback_m5A906B70CBEC53FE7F4208810264D78D4AA26EE4(intptr_t ___instance0, int32_t ___count1, intptr_t ___sizes2, intptr_t ___data3);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeServerNameCallback_mC76D35B6D2668F93E280D35B5560A06571810857(intptr_t ___instance0);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsSslCtx_NativeVerifyCallback_m13C23EDCF9CDADF430C5A1664D33DC7621974916(intptr_t ___instance0, int32_t ___preverify_ok1, intptr_t ___store_ctx2);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24(intptr_t ___instance0, intptr_t ___name_ptr1, intptr_t* ___x509_ptr2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeRecorder_OnRecorderCompleted_m12AFE233F7FDE875FB6D51047EF4D5DF1796357C(intptr_t ___context0, intptr_t ___path1);
extern "C" void CDECL ReversePInvokeWrapper_NativeUnityDriver_GetDriverConfig_m9BEDA58834FC2EE32F0EE59B0BE9B9131137D3C8(intptr_t ___buffer0);
extern "C" void CDECL ReversePInvokeWrapper_NativeUnityDriver_OnDriverCreated_mBAA5DBDDDBD539A1B32A22B1450B68DBC439A497(intptr_t ___driverPtr0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___arg0);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m8CC672A44A8CCFD2A3EB2D9B38A9A134F6EF706B(void* ___userData0, unitytls_tlsctx_tF8BBCBFE1E957B846442DED65ECB89BC5307DEAE* ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_t8A1108C917795D8FE946B50769ACE51489C7BF5D* ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17* ___chain6, unitytls_key_ref_t6BD91D013DF11047C53738FEEB12CE290FDC71A2* ___key7, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___errorState8);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_m068A7DC153B3D2C4F6922B46BC5957CF33AE3450(void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___errorState3);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_mC7AE01FAD8A336A6BF11CF8A3EFAC60CF6167E6F(void* ___userData0, unitytls_x509list_ref_t6C5C1CF0B720516A681CB741104A164FD8B3CF17 ___chain1, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___errorState2);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m74F83CFEE7D8FB7EBD1A1021DCB8945E89382998(void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___errorState3);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B(void* ___userData0, unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 ___cert1, uint32_t ___result2, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___errorState3);
extern "C" void CDECL ReversePInvokeWrapper_VuCloudImageTargetObserver_HandleObservations_mFF4D5D104658E28566F34729D345C85F0E3BE84A(intptr_t ___observationsHandle0, intptr_t ___clientData1);
extern "C" void CDECL ReversePInvokeWrapper_VuCloudImageTargetObserver_HandleQueryError_m457E52E7A90C36D4BFA825AFBEDE5C48034B84FD(int32_t ___error0, intptr_t ___clientData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSWebView__handleDeleteCookiesResult_mC99A31CAD9EE583E771F1FB7ED86088C3CEB442D(char* ___resultCallbackId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_iOSWebView__handleGetCookiesResult_m76A1708CFCA92467EB784C585F9F0944F5292496(char* ___resultCallbackId0, char* ___serializedCookies1);
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131();


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[28] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARFoundationAnchorManager_OnCreateAnchor_mFBB20DE919372BDFBE15F7C343C4184FFA567E84),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARFoundationAnchorManager_OnRemoveAnchor_m36BDFC0315E4F246204E313601861177CB286813),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Engine_onEngineErrorHandler_m86D58ED974266660860CEDEA3C25178901BFFBBA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_Control_mA7B1C493171314C6F02CAC5F73EB7CB94B86ED78),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_OnRead_m8888AD0EA2D55D9FFE183BC63D4023BC621941F9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsBioMono_OnWrite_mD90183BD125599306AAF4E74E941A3983027C575),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSsl_PrintErrorsCallback_m93ED1F9335C5974459F0915323C5527382A83959),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeSelectCallback_m5A906B70CBEC53FE7F4208810264D78D4AA26EE4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeServerNameCallback_mC76D35B6D2668F93E280D35B5560A06571810857),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsSslCtx_NativeVerifyCallback_m13C23EDCF9CDADF430C5A1664D33DC7621974916),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeRecorder_OnRecorderCompleted_m12AFE233F7FDE875FB6D51047EF4D5DF1796357C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeUnityDriver_GetDriverConfig_m9BEDA58834FC2EE32F0EE59B0BE9B9131137D3C8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NativeUnityDriver_OnDriverCreated_mBAA5DBDDDBD539A1B32A22B1450B68DBC439A497),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m8CC672A44A8CCFD2A3EB2D9B38A9A134F6EF706B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_m068A7DC153B3D2C4F6922B46BC5957CF33AE3450),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_mC7AE01FAD8A336A6BF11CF8A3EFAC60CF6167E6F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m74F83CFEE7D8FB7EBD1A1021DCB8945E89382998),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_VuCloudImageTargetObserver_HandleObservations_mFF4D5D104658E28566F34729D345C85F0E3BE84A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_VuCloudImageTargetObserver_HandleQueryError_m457E52E7A90C36D4BFA825AFBEDE5C48034B84FD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSWebView__handleDeleteCookiesResult_mC99A31CAD9EE583E771F1FB7ED86088C3CEB442D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_iOSWebView__handleGetCookiesResult_m76A1708CFCA92467EB784C585F9F0944F5292496),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131),
};
