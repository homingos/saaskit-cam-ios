#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[]
struct ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest
struct IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_tB187BBFBCF1ED95DB3FE0FEFD94BB0CBAD89BC8A;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest
struct LongDigest_tA357972A044812353537647F06ACA9A88542B543;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.MemoableResetException
struct MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
struct RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest
struct Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest
struct Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest
struct Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest
struct Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest
struct Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest
struct ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest
struct SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters
struct SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F;
// System.String
struct String_t;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest
struct TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration
struct Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter
struct Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI
struct UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak
struct UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____14A03AA4516FE146356EF9D4F549B8662F9C50A467974D3BFAC45B474D65B864_19_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____2C9D6B105EC78E8E02279FB1266932E3468A575B0EB9818985DBE9468B991CCE_40_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____2F2C71B5B311BF139FD4B797EF2308F928EFE5092D7E11DC070CF41038A079B9_45_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____3CA024F96B6FA0D283063E7C2B60A83C2B07F26AE1788CDFAEEB231C7725ED92_64_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____586CB2936F35105D4A71FF1186E81528F1980A2E5BB1E2719E0D86809CB1080A_99_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____62A191EC74B0F281659DD81132751B7656F065A2AD5A8E892CAE1A8E4DBFD0B5_113_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_130_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____971488BE36A194DB27CE385237DEA12A31333F2FBD2BB3B60701BE542B27AAE2_167_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____AC7FC16C704375F0F1DB433E70C6C2B90B1D797B17806DD74E7664CAD8BFA778_201_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____B93B37392B6BF36325C2B8E6047E7EF31B87C67E59B16D30A60CAF2E18D9C73C_221_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____C51FEE572495EE6ED75353FC262F765FF558EED94FCB9EE64987AEE6C8548E12_240_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____C90D4186D61A339F3078D8C7A6CBB1F005BFF5039C44C37F526BDCE2E00200BE_245_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____CDAEE7E50DA05783C75D649650C5CDC6ABB06447D6A9CFBB2E7212421547E53B_252_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E5325952F9FF2214CCE24E320F2BCD6A71C6EB4127F6069352CE065883AE80D0_283_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11208C86A379F74F4A5228C6512318CCDFEF574A;
IL2CPP_EXTERN_C String_t* _stringLiteral131F00C551D8B6B06586707B7CB54DE4DF424670;
IL2CPP_EXTERN_C String_t* _stringLiteral13403584747D3219DCE8F228F6AED3D9858A93D2;
IL2CPP_EXTERN_C String_t* _stringLiteral3432BEFEC70FFAAEC3E17E139E849DC1F8251267;
IL2CPP_EXTERN_C String_t* _stringLiteral385E85254A14B73C5A43C2B05896B2A6782C16A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBE07D375608F2B13073190C50F126EBAB8BE2C;
IL2CPP_EXTERN_C String_t* _stringLiteral3FDAB44963B739C563B4CBB8193839AB37E78B75;
IL2CPP_EXTERN_C String_t* _stringLiteral4B92D139CA7A86C206481EC1152F4AE74E94133F;
IL2CPP_EXTERN_C String_t* _stringLiteral4C23E639A5A412FD6FD6D1C92298ADD2B8DF4D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral50A03276CDCF780E3EC05BDBA7CD074DBB6471DE;
IL2CPP_EXTERN_C String_t* _stringLiteral551A56E699A1D330BA6125604C7025562B94E331;
IL2CPP_EXTERN_C String_t* _stringLiteral5AFE3341C252D09D14363C6B369DB12C49850B0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5C4BD11123512A80040FC81B0941838E6447553E;
IL2CPP_EXTERN_C String_t* _stringLiteral6D850599050207BA3A37A2D88D63B137C63EFC8E;
IL2CPP_EXTERN_C String_t* _stringLiteral8433BD965D142199E7AB5E056E38005569163F7B;
IL2CPP_EXTERN_C String_t* _stringLiteral890D118BC84244AFFCF60EAA8FFFEA9CE8344FE9;
IL2CPP_EXTERN_C String_t* _stringLiteral894BC5458F5E1105129CC92FE8166EA51C2E0DCC;
IL2CPP_EXTERN_C String_t* _stringLiteral89E0BF3F5A585BAF695A88C3131EB727125BD40A;
IL2CPP_EXTERN_C String_t* _stringLiteral98BD1F810B97C00A1EB8EFC41DD9F4399C152AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BE569CCF2D02C05077C0DD81A65D77B046AD39;
IL2CPP_EXTERN_C String_t* _stringLiteralADBE8343A9CF02BC319373112FD79001EEAB35B3;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B0864EEC2DBC9265FA9A46A5569FD88CE71706;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D610D72476F4C53BBAF56C4E027216B1D06949;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8142DC23100ACC04095E4B94669B4BDC88233A;
IL2CPP_EXTERN_C String_t* _stringLiteralCA6B7FD3C25F0A8391DBCA3F608C0B7EA6427785;
IL2CPP_EXTERN_C String_t* _stringLiteralCF77B23DA45ED0CA56CC77CC0BDA992194AB941B;
IL2CPP_EXTERN_C String_t* _stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283;
IL2CPP_EXTERN_C String_t* _stringLiteralF8167CCC78C1117CDBB4F4177DE66863BA21E27A;
IL2CPP_EXTERN_C String_t* _stringLiteralF866635403CFB3A2A3F0DCFA3613CC35937DE2B3;
IL2CPP_EXTERN_C String_t* _stringLiteralFE71C5444F9327DDA2F1D69B7510ABF59B80672F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sha3Digest_CheckBitLength_mB69693EBB7983DA3E96BCD3C4B51589AC790FD20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sha3Digest_DoFinal_m204FC006BB3873BBD025068CC65870715F7410A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sha512tDigest_Reset_m7C98F4210BCB93B19A75BC89B95B482774EEBCE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sha512tDigest__ctor_m1C2817FEC9054FECBF64B3009029D1AFAC453261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShakeDigest_CheckBitLength_m8A1A55948098A0BDB6D137264F3E03729BAF7A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShakeDigest_DoFinal_m1FDA45E31FA0E7A1CBFA4DD8885491CE7CA4D9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShortenedDigest__ctor_m481CD1A90FB8AE8858E2CD011CF5133FAC88D12F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinEngine_CheckInitialised_m38007CC319BFA40D19EB75C2B784397C0A002D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinEngine_DoFinal_mAE3054CA1825CE685B343DECC8675C4314836E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinEngine_Init_m1CBBFAA8FDB2701F1428FD8438FB7BDBBA9796D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinEngine_Reset_m54EEB7783A8E34C1DB3099A2BD5289F3A8F1FEBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinEngine__ctor_mD917A8F9EF5925AF33FFD85ADECFBBEC0837789F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5  : public RuntimeObject
{
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D  : public RuntimeObject
{
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_1;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_2;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::rate
	int32_t ___rate_3;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_4;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_5;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::squeezing
	bool ___squeezing_6;
};

struct KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_StaticFields
{
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest
struct LongDigest_tA357972A044812353537647F06ACA9A88542B543  : public RuntimeObject
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::MyByteLength
	int32_t ___MyByteLength_0;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::byteCount1
	int64_t ___byteCount1_3;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::byteCount2
	int64_t ___byteCount2_4;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H1
	uint64_t ___H1_5;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H2
	uint64_t ___H2_6;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H3
	uint64_t ___H3_7;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H4
	uint64_t ___H4_8;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H5
	uint64_t ___H5_9;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H6
	uint64_t ___H6_10;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H7
	uint64_t ___H7_11;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::H8
	uint64_t ___H8_12;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::W
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___W_13;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::wOff
	int32_t ___wOff_14;
};

struct LongDigest_tA357972A044812353537647F06ACA9A88542B543_StaticFields
{
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::K
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___K_15;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest
struct ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::baseDigest
	RuntimeObject* ___baseDigest_0;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::length
	int32_t ___length_1;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest
struct SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::engine
	SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine_3;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::threefish
	ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* ___threefish_8;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::outputSizeBytes
	int32_t ___outputSizeBytes_9;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::chain
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___chain_10;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::initialState
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___initialState_11;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_12;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::preMessageParameters
	ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___preMessageParameters_13;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::postMessageParameters
	ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___postMessageParameters_14;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::ubi
	UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* ___ubi_15;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::singleByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___singleByte_16;
};

struct SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_StaticFields
{
	// System.Collections.IDictionary BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::INITIAL_STATES
	RuntimeObject* ___INITIAL_STATES_7;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters
struct SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F  : public RuntimeObject
{
	// System.Collections.IDictionary BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters::parameters
	RuntimeObject* ___parameters_8;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC  : public RuntimeObject
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeBytes
	int32_t ___blocksizeBytes_14;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeWords
	int32_t ___blocksizeWords_15;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::currentBlock
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___currentBlock_16;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_17;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_18;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::cipher
	ThreefishCipher_tFEE923F2537E4F0BC1E9C0A278D491110567B747* ___cipher_19;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::forEncryption
	bool ___forEncryption_20;
};

struct ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_StaticFields
{
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD9
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD9_10;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD17
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD17_11;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD5
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD5_12;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD3_13;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest
struct TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4  : public RuntimeObject
{
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::a
	int64_t ___a_6;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::b
	int64_t ___b_7;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::c
	int64_t ___c_8;
	// System.Int64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::byteCount
	int64_t ___byteCount_9;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Buffer_10;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::bOff
	int32_t ___bOff_11;
	// System.Int64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::x
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___x_12;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::xOff
	int32_t ___xOff_13;
};

struct TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields
{
	// System.Int64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::t1
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___t1_1;
	// System.Int64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::t2
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___t2_2;
	// System.Int64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::t3
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___t3_3;
	// System.Int64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::t4
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___t4_4;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration
struct Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11  : public RuntimeObject
{
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter
struct Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B  : public RuntimeObject
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::type
	int32_t ___type_0;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value_1;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI
struct UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86  : public RuntimeObject
{
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::tweak
	UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* ___tweak_0;
	// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::engine
	SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine_1;
	// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::currentBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___currentBlock_2;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::currentOffset
	int32_t ___currentOffset_3;
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::message
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___message_4;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak
struct UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45  : public RuntimeObject
{
	// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::tweak
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tweak_3;
	// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::extendedPosition
	bool ___extendedPosition_4;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest
struct RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H0
	int32_t ___H0_5;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H1
	int32_t ___H1_6;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H2
	int32_t ___H2_7;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H3
	int32_t ___H3_8;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H4
	int32_t ___H4_9;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H5
	int32_t ___H5_10;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H6
	int32_t ___H6_11;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H7
	int32_t ___H7_12;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H8
	int32_t ___H8_13;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::H9
	int32_t ___H9_14;
	// System.Int32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::X
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___X_15;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::xOff
	int32_t ___xOff_16;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest
struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::V
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___V_6;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::inwords
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___inwords_7;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::xOff
	int32_t ___xOff_8;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::W
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___W_9;
};

struct SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::T
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___T_10;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H4
	uint32_t ___H4_8;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H5
	uint32_t ___H5_9;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_10;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::xOff
	int32_t ___xOff_11;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest
struct Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H4
	uint32_t ___H4_8;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H5
	uint32_t ___H5_9;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H6
	uint32_t ___H6_10;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H7
	uint32_t ___H7_11;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::H8
	uint32_t ___H8_12;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_13;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::xOff
	int32_t ___xOff_14;
};

struct Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_15;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719  : public GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5
{
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H4
	uint32_t ___H4_8;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H5
	uint32_t ___H5_9;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H6
	uint32_t ___H6_10;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H7
	uint32_t ___H7_11;
	// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::H8
	uint32_t ___H8_12;
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_13;
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::xOff
	int32_t ___xOff_14;
};

struct Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_StaticFields
{
	// System.UInt32[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_15;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest
struct Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893  : public LongDigest_tA357972A044812353537647F06ACA9A88542B543
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest
struct Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7  : public KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest
struct Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F  : public LongDigest_tA357972A044812353537647F06ACA9A88542B543
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest
struct Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F  : public LongDigest_tA357972A044812353537647F06ACA9A88542B543
{
	// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::digestLength
	int32_t ___digestLength_17;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H1t
	uint64_t ___H1t_18;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H2t
	uint64_t ___H2t_19;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H3t
	uint64_t ___H3t_20;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H4t
	uint64_t ___H4t_21;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H5t
	uint64_t ___H5t_22;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H6t
	uint64_t ___H6t_23;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H7t
	uint64_t ___H7t_24;
	// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::H8t
	uint64_t ___H8t_25;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1  : public KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349  : public Exception_t
{
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

// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251  : public CryptoException_t540482092A8B85CB71B425277C47F24D8C20D349
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.MemoableResetException
struct MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F  : public InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
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
// System.UInt32[]
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
// System.UInt64[]
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
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[]
struct ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D  : public RuntimeArray
{
	ALIGN_FIELD (8) Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* m_Items[1];

	inline Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Array::Sort<System.Object>(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mA6FAF0F3EC453F08AA97CB7911891B96C4E25D5A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;

// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest__ctor_m2FA9104A9BF67F3D9F3E36FC2E59D27C2E2E9C22 (GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest__ctor_m5FEBCE63062F398FE39CE4B60A8205F328C7740C (GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* __this, GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_CopyIn_m4A78FF793FF8321B6E84CE85A040514871211FDB (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_CopyIn_m4CFFD85FB94B33F6F9F8C0FBEC061A5AB4C02023 (GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* __this, GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* ___t0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Finish_m6BC974FD761998E6139ADD173CC60B9B47C88308 (GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Reset_mE400482488156A49D897AD38AADBBF510CA2B6E6 (GeneralDigest_t2F81DCEC5DCD95D9CA7EE51E4227ECA426C519A5* __this, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F1(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::RL(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F5(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F2(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F4(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F3(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest__ctor_m11CCDCA9997BA964BE94B99AB713DF13A8A915C9 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_CopyIn_m5AA5B2E2AAC766153C54C6DAB0FA58357B261AE3 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* ___t0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::F(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::G(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest__ctor_m69E26FF040EB1622E759EC8E987C20D71048FEFF (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_CopyIn_m7593F945F503C4F0211A47DA5542412482021886 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* ___t0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Theta1(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Theta1_m4EE3AF612145732726EEB115B971EA922735F594 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Theta0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Theta0_mC0BF5CEF814532762D748610543D0D3E70513A3C (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Sum1(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Ch(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD (uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Sum0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2 (uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Maj(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A (uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest__ctor_mFE5E315086D5581AC5B2EDEFAFF1DAF7E34E361E (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* ___t0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::initHs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_initHs_mFEAF905632D789D1DD579833100288F08536E455 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_CopyIn_mF98123BE5243BE72781ECB6AB88EFCA4728CA39D (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__ctor_mD1172199C905C6B955B65E8E65FFEDBD0781DDB9 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest__ctor_m5F04AE6A7C6DFFED3CD1F8DF9BE417CF0887733A (LongDigest_tA357972A044812353537647F06ACA9A88542B543* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest__ctor_m961D224229FC75781720AF139C02FE0CAC9E37FA (LongDigest_tA357972A044812353537647F06ACA9A88542B543* __this, LongDigest_tA357972A044812353537647F06ACA9A88542B543* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Finish_mEFED9FC959F899F1F9F4861AB74117E93F51D37A (LongDigest_tA357972A044812353537647F06ACA9A88542B543* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Reset_m5C86E4ACE37006CBC141F185FB54F019B6B72932 (LongDigest_tA357972A044812353537647F06ACA9A88542B543* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha384Digest__ctor_m7F7A137875CA2EC9015DCE7FFFE9BEC8183AE673 (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_CopyIn_m126A76D618D4DE0A5EAB42C7E436A5899B7160C5 (LongDigest_tA357972A044812353537647F06ACA9A88542B543* __this, LongDigest_tA357972A044812353537647F06ACA9A88542B543* ___t0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Digest__ctor_m28A9B7CA9F124017F09FE7A035159A0578A70EA0 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::CheckBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha3Digest_CheckBitLength_mB69693EBB7983DA3E96BCD3C4B51589AC790FD20 (int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m87CB81789E6DC4B0E2516036C76EED6714310746 (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m5A29023F2DB3CF833DCC7F18229F1B6BA2275FCF (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* ___source0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_mFCA4A94BC382A779A3041E2B7A16CA58DFE2FD1C (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_mB3C1B14F87DAE0D21BF17E37E31EE37C73980B09 (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::Absorb(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_mCA0ABF4447D24301D75EF6B52820C0C9D4958BD7 (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, uint8_t ___data0, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_m1F87E736B95EAAC0C755CFCD609E24668C09B9A2 (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Digest__ctor_m1A942151995A12934D359D27D32CA0808B4C9F07 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* ___source0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest__ctor_m2CDE51E1F44ED7F20ACAAF1B84807D4255F0AB5A (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::tIvGenerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_tIvGenerate_m1E0C019D7DF37A37267E7E427F2427D6E9D8D7C4 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, int32_t ___max3, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820 (LongDigest_tA357972A044812353537647F06ACA9A88542B543* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_UInt32_To_BE_m37F55E980F5A07FD6EB7C6C18AD43D6CB42B9A1E (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, int32_t ___max3, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest__ctor_m21EB7CFAC916074EFAB2548F5CDDFDE3B8950AE5 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.MemoableResetException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoableResetException__ctor_m13307148B6AEE2877DB60E4209237375D9FCC98B (MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m773AA739141D2B3CF7B146D3D1E6F94615A6750B (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::CheckBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_CheckBitLength_m8A1A55948098A0BDB6D137264F3E03729BAF7A40 (int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_m26D0A211F041EBDE458D30663B1AE6D70FD09E55 (KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int64_t ___outputLength2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m33C108CBAB3A6DECF2DBE08FF6C336882AFE8745 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* ___source0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_mD917A8F9EF5925AF33FFD85ADECFBBEC0837789F (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, int32_t ___blockSizeBits0, int32_t ___outputSizeBits1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::Init(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest_Init_mF728F2A87DDB6358C1395FC66276FD31D2122726 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* ___parameters0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_mF13A5F241076A7A34810359B2D128904EBF74515 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Reset_m54EEB7783A8E34C1DB3099A2BD5289F3A8F1FEBB (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest__ctor_mBB1AEB7FD63757AE33867E0B2C96D1F2DDC972AA (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* ___digest0, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_OutputSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3_inline (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Init(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Init_m1CBBFAA8FDB2701F1428FD8438FB7BDBBA9796D3 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* ___parameters0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Reset_m9673B51AFFACB2F0DF8C434A5A317FFB86BEF937 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m89DB8950E6E94BDEF060D053A434D20D6615B1D3 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, uint8_t ___inByte0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m140A69E4E1AF8290CC9EBE5E6F58E68FF08DC068 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_DoFinal_mAE3054CA1825CE685B343DECC8675C4314836E80 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) ;
// System.Collections.IDictionary BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform::CreateHashtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateHashtable_mD3CB20D5B695B1EBB9636894C51CC9EA909D9149 (const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::InitialState(System.Int32,System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59 (int32_t ___blockSize0, int32_t ___outputSize1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state2, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::VariantIdentifier(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_VariantIdentifier_mBEAA9D2D1C144A2C84EDE137D425F79451ABEDF4 (int32_t ___blockSizeBytes0, int32_t ___outputSizeBytes1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, int32_t ___blocksizeBits0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI__ctor_mD9AFD29219A116C8BD6C5FA3DB3DDE01466BA0CF (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine0, int32_t ___blockSize1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_CopyIn_m97217376559C715051CAC010F3E6AC59C3B355F6 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_Reset_mB10E90F29E2209F7BD6F3C2615C8F65E62596985 (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* ___ubi0, const RuntimeMethod* method) ;
// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Arrays::Clone(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_m3EF31F57343FAD32D98122A4B7F24C350BF5CAAC (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___existing1, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Arrays::Clone(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_m7F3ED4979E099F6BF047D7F5EFF2446342585F31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___existing1, const RuntimeMethod* method) ;
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Clone(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[],BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* SkeinEngine_Clone_m7B2F9379FA474F776E74EB9A20091B703D4DC7DC (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___data0, ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___existing1, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SkeinParameters_GetKey_m3FA3C5FA3CEB568E72E520A7B26F0DA04076676D (SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* __this, const RuntimeMethod* method) ;
// System.Collections.IDictionary BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters::GetParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SkeinParameters_GetParameters_m18A2224F60C71CB1A6A2C4BEC05A8C721F1824EB_inline (SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::InitParams(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_InitParams_m1D19F07E8CEA9F580EE52F1E18BE2FBDB715606D (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::CreateInitialState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_CreateInitialState_m61E32687E85CDB66EA98959D6CFFD5736FBDE64C (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_UbiInit_m5148E7F99495EA388AECC6F81AD79F9B126AAC94 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Collections.IList BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform::CreateArrayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateArrayList_m7E0B2315630228380C240E8C560A6574F295AB07 (const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::.ctor(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m165FE16947B394824668A324EE2878878B81CFEE (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, int32_t ___type0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter>(T[])
inline void Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mA6FAF0F3EC453F08AA97CB7911891B96C4E25D5A_gshared)(___array0, method);
}
// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_m68960FB4ADE4717CEC3592AD4FF7ACB7F0F038F6 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiComplete(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_UbiComplete_m599284A2D2363C74736D35EF9C8707B28B1480F0 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, int32_t ___type0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m6256014AF510D89D0B02AAE083D9AA487479CE82 (Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11* __this, int64_t ___outputSizeBits0, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration::get_Bytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Configuration_get_Bytes_mA48468E7D9C23817482325A6E61364C9D0382952_inline (Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11* __this, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Parameter_get_Type_mEFFB2DBBDAAA302084D0635E88A46137D00FE1CC_inline (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, const RuntimeMethod* method) ;
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Parameter_get_Value_m039C3F12F280A72B8DFC6439E09F584A94120E5A_inline (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::Update(System.Byte[],System.Int32,System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_Update_mEB0F0DFD785738FF466DDEB785880CCDEF3839D4 (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___offset1, int32_t ___len2, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output3, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_UbiFinal_mC2090DB91FE90203A7D7CF962A109150D7FCC2C5 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_Reset_mF223E98CFC03F580DB4FD515CB6EC37AB31FEECF (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::DoFinal(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_DoFinal_mB1BCBED3D9168F7FCC0AA862B6F82F105FC2E2CD (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::CheckInitialised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_CheckInitialised_m38007CC319BFA40D19EB75C2B784397C0A002D85 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374 (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Output(System.UInt64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Output_mC280B2CE102DEBC157AD5AD507BE50C3ABC568E4 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, uint64_t ___outputSequence0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, int32_t ___outputBytes3, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::WordToBytes(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3 (uint64_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_Reset_m60728F1343EA29836CBE0B1EE6BF44F7BA802E99 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::set_First(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_set_First_mDDE0D0EF509C14B8E799020BF7737B762C8AE710 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, bool ___value0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UbiTweak_get_Type_m6801F62CEE72E55898CF47F4D85BD7C020EE7F2B (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::get_First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UbiTweak_get_First_m2F86E39859F8EEA165D9FCE4D8A496C758D5C51F (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::get_Final()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UbiTweak_get_Final_mD295FD8B5FA69245F045CCB68E0D4579BDCB43B5 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak__ctor_m594680C2CE76BEE2FA2C9051E3176F9F86549F69 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_Reset_m42838EED9B646851CC354B287D15FCEF386A74E1 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* ___tweak0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::set_Type(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_set_Type_m78E3F8F65E4D193EDB4204804D8663597E7E69F6 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::ProcessBlock(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_ProcessBlock_mE8955E57B5E7F08E9FD6ACD396496D0443C8ED62 (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::AdvancePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_AdvancePosition_m25737FA15FC474066F0CFFBFC05886706DB52E92 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, int32_t ___advance0, const RuntimeMethod* method) ;
// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::GetWords()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* UbiTweak_GetWords_m53F1D9DE6D782CE2183FB186D2DCD6F10E521F6A_inline (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::Init(System.Boolean,System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, bool ___forEncryption0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___key1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tweak2, const RuntimeMethod* method) ;
// System.UInt64 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::BytesToWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::ProcessBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961 (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___inWords0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::set_Final(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_set_Final_mD2C55F9A9E874F8B89501A0043A3C17F8A77DF17 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_CopyIn_m14D6D4C138914272C98DA0F6721B4ECF3C76C785 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, SM3Digest_t183E330F597B8D4496163054F79D647449092E00* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest__ctor_m4E66FC5BE8B0251C2C14D46021F8078AF86DE2E5 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, SM3Digest_t183E330F597B8D4496163054F79D647449092E00* ___t0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m33B3851BD5D87C5BA78DB254C3C50E1F012275B6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::P1(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_P1_mD7E95B28B01CC667D5875D646B500E22B78F2556 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::FF0(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_FF0_m2F39FA6C503504B51C3D938CFCAA86C93D790151 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::GG0(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_GG0_m1AFF4B7191C91F75D5DDB148C7F859EA583219E6 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::P0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_P0_m3ED0CE3CC270C80FF97249FE28EC89DC4374FBCC (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::FF1(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_FF1_m6E045BE1681982FC6805F5434122EADF36BDEAE6 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::GG1(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_GG1_mDE31DC82C3752CAC3B3D9A303E0B44DBD1A0A9EC (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Reset_m5684D97AA80B24CC9DC94AE01879233291FEDF9B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Reset_mB9BAEF7FB70C722322F5B4DD5C452B12D705646B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_ProcessBlock_mB70BDAD780BD9E936FA0361D240392B757281492 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_ProcessWord_m53341AE2CE64ED10B858CE10E9A39D62D6B56034 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Update_mD242754049FB9F36BC3FE74DDD537D51C7D153FF (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundABC(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___x0, int64_t ___mul1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundBCA(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___x0, int64_t ___mul1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundCAB(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___x0, int64_t ___mul1, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::KeySchedule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_KeySchedule_m72D423A4DC706119D8AB86619721B783548B88A4 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_ProcessLength_mDFE5B5A47B845AFF8E42FC8DA07CE5941260FBE5 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Finish_mF27575AB44DCBDD0030D7017D7E474CABC1DC195 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::UnpackWord(System.Int64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_UnpackWord_m84A0C20C68C659BA186B409E3360C51C467DFD4F (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest__ctor_m17762CE9CA3205D9D8D955C08412640F516ECF60 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* ___t0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RipeMD320Digest_get_AlgorithmName_mF2047FC91F8FD059B48F78BD7B3241485D12B821 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D850599050207BA3A37A2D88D63B137C63EFC8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "RIPEMD320"; }
		return _stringLiteral6D850599050207BA3A37A2D88D63B137C63EFC8E;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_GetDigestSize_m68B88E57515D118383DB4BE7D4F7DFF061B638DA (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)40);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest__ctor_m96C8BA525633A49499328EFA242D910410E1CB29 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] X = new int[16];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_15), (void*)L_0);
		// public RipeMD320Digest()
		GeneralDigest__ctor_m2FA9104A9BF67F3D9F3E36FC2E59D27C2E2E9C22(__this, NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest__ctor_m11CCDCA9997BA964BE94B99AB713DF13A8A915C9 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] X = new int[16];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_15), (void*)L_0);
		// : base(t)
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_1 = ___t0;
		GeneralDigest__ctor_m5FEBCE63062F398FE39CE4B60A8205F328C7740C(__this, L_1, NULL);
		// CopyIn(t);
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_2 = ___t0;
		RipeMD320Digest_CopyIn_m4A78FF793FF8321B6E84CE85A040514871211FDB(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_CopyIn_m4A78FF793FF8321B6E84CE85A040514871211FDB (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* ___t0, const RuntimeMethod* method) 
{
	{
		// base.CopyIn(t);
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_0 = ___t0;
		GeneralDigest_CopyIn_m4CFFD85FB94B33F6F9F8C0FBEC061A5AB4C02023(__this, L_0, NULL);
		// H0 = t.H0;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___H0_5;
		__this->___H0_5 = L_2;
		// H1 = t.H1;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___H1_6;
		__this->___H1_6 = L_4;
		// H2 = t.H2;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___H2_7;
		__this->___H2_7 = L_6;
		// H3 = t.H3;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_7 = ___t0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___H3_8;
		__this->___H3_8 = L_8;
		// H4 = t.H4;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_9 = ___t0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___H4_9;
		__this->___H4_9 = L_10;
		// H5 = t.H5;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___H5_10;
		__this->___H5_10 = L_12;
		// H6 = t.H6;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_13 = ___t0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___H6_11;
		__this->___H6_11 = L_14;
		// H7 = t.H7;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_15 = ___t0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___H7_12;
		__this->___H7_12 = L_16;
		// H8 = t.H8;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_17 = ___t0;
		NullCheck(L_17);
		int32_t L_18 = L_17->___H8_13;
		__this->___H8_13 = L_18;
		// H9 = t.H9;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_19 = ___t0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___H9_14;
		__this->___H9_14 = L_20;
		// Array.Copy(t.X, 0, X, 0, t.X.Length);
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_21 = ___t0;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21->___X_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___X_15;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_24 = ___t0;
		NullCheck(L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24->___X_15;
		NullCheck(L_25);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
		// xOff = t.xOff;
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_26 = ___t0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___xOff_16;
		__this->___xOff_16 = L_27;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_ProcessWord_mB1DCE879F6C1EEE650F76B4B76CF229D00036D1B (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// X[xOff++] = (input[inOff] & 0xff) | ((input[inOff + 1] & 0xff) << 8)
		//     | ((input[inOff + 2] & 0xff) << 16) | ((input[inOff + 3] & 0xff) << 24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___X_15;
		int32_t L_1 = __this->___xOff_16;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___xOff_16 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_19&((int32_t)255)))<<((int32_t)24))))));
		// if (xOff == 16)
		int32_t L_20 = __this->___xOff_16;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_005d;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_ProcessLength_mAEE5DDC38DE505A6A02628702B54F6FDFEB76520 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		// if (xOff > 14)
		int32_t L_0 = __this->___xOff_16;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0010:
	{
		// X[14] = (int)(bitLength & 0xffffffff);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___X_15;
		int64_t L_2 = ___bitLength0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)((int32_t)((int64_t)(L_2&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		// X[15] = (int)((ulong)bitLength >> 32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___X_15;
		int64_t L_4 = ___bitLength0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)((int32_t)((int64_t)((uint64_t)L_4>>((int32_t)32)))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		// outBytes[outOff] = (byte)word;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes1;
		int32_t L_1 = ___outOff2;
		int32_t L_2 = ___word0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		// outBytes[outOff + 1] = (byte)((uint)word >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes1;
		int32_t L_4 = ___outOff2;
		int32_t L_5 = ___word0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		// outBytes[outOff + 2] = (byte)((uint)word >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes1;
		int32_t L_7 = ___outOff2;
		int32_t L_8 = ___word0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		// outBytes[outOff + 3] = (byte)((uint)word >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___outBytes1;
		int32_t L_10 = ___outOff2;
		int32_t L_11 = ___word0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_DoFinal_m25D4D0894D5FF8F5DE12983A302A87C819323C30 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		GeneralDigest_Finish_m6BC974FD761998E6139ADD173CC60B9B47C88308(__this, NULL);
		// UnpackWord(H0, output, outOff);
		int32_t L_0 = __this->___H0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_0, L_1, L_2, NULL);
		// UnpackWord(H1, output, outOff + 4);
		int32_t L_3 = __this->___H1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		// UnpackWord(H2, output, outOff + 8);
		int32_t L_6 = __this->___H2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		// UnpackWord(H3, output, outOff + 12);
		int32_t L_9 = __this->___H3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		// UnpackWord(H4, output, outOff + 16);
		int32_t L_12 = __this->___H4_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16))), NULL);
		// UnpackWord(H5, output, outOff + 20);
		int32_t L_15 = __this->___H5_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___output0;
		int32_t L_17 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_15, L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)20))), NULL);
		// UnpackWord(H6, output, outOff + 24);
		int32_t L_18 = __this->___H6_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___output0;
		int32_t L_20 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)24))), NULL);
		// UnpackWord(H7, output, outOff + 28);
		int32_t L_21 = __this->___H7_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output0;
		int32_t L_23 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_21, L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)28))), NULL);
		// UnpackWord(H8, output, outOff + 32);
		int32_t L_24 = __this->___H8_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___output0;
		int32_t L_26 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_24, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)32))), NULL);
		// UnpackWord(H9, output, outOff + 36);
		int32_t L_27 = __this->___H9_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___output0;
		int32_t L_29 = ___outOff1;
		RipeMD320Digest_UnpackWord_m1FB6E60877E4D7081B53AE195D7D359972387452(__this, L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, ((int32_t)36))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// return DigestLength;
		return ((int32_t)40);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_Reset_mD627716C6E8823F9250EDEC24168860E372CBE25 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// base.Reset();
		GeneralDigest_Reset_mE400482488156A49D897AD38AADBBF510CA2B6E6(__this, NULL);
		// H0 = unchecked((int) 0x67452301);
		__this->___H0_5 = ((int32_t)1732584193);
		// H1 = unchecked((int) 0xefcdab89);
		__this->___H1_6 = ((int32_t)-271733879);
		// H2 = unchecked((int) 0x98badcfe);
		__this->___H2_7 = ((int32_t)-1732584194);
		// H3 = unchecked((int) 0x10325476);
		__this->___H3_8 = ((int32_t)271733878);
		// H4 = unchecked((int) 0xc3d2e1f0);
		__this->___H4_9 = ((int32_t)-1009589776);
		// H5 = unchecked((int) 0x76543210);
		__this->___H5_10 = ((int32_t)1985229328);
		// H6 = unchecked((int) 0xFEDCBA98);
		__this->___H6_11 = ((int32_t)-19088744);
		// H7 = unchecked((int) 0x89ABCDEF);
		__this->___H7_12 = ((int32_t)-1985229329);
		// H8 = unchecked((int) 0x01234567);
		__this->___H8_13 = ((int32_t)19088743);
		// H9 = unchecked((int) 0x3C2D1E0F);
		__this->___H9_14 = ((int32_t)1009589775);
		// xOff = 0;
		__this->___xOff_16 = 0;
		// for (int i = 0; i != X.Length; i++)
		V_0 = 0;
		goto IL_008c;
	}

IL_007f:
	{
		// X[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___X_15;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		// for (int i = 0; i != X.Length; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_008c:
	{
		// for (int i = 0; i != X.Length; i++)
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___X_15;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_007f;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::RL(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		// return (x << n) | (int)(((uint)x) >> (32 - n));
		int32_t L_0 = ___x0;
		int32_t L_1 = ___n1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___n1;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F1(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return x ^ y ^ z;
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)(L_0^L_1))^L_2));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F2(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x & y) | (~ x & z);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)(L_0&L_1))|((int32_t)(((~L_2))&L_3))));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F3(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x | ~ y) ^ z;
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)(L_0|((~L_1))))^L_2));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F4(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x & z) | (y & ~ z);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___z2;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)(L_0&L_1))|((int32_t)(L_2&((~L_3))))));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::F5(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return x ^ (y | ~z);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		return ((int32_t)(L_0^((int32_t)(L_1|((~L_2))))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_ProcessBlock_m17B2529698B6B8331489DE8E7B2D9AF6AA8D447E (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, const RuntimeMethod* method) 
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
		// a = H0;
		int32_t L_0 = __this->___H0_5;
		V_0 = L_0;
		// b = H1;
		int32_t L_1 = __this->___H1_6;
		V_2 = L_1;
		// c = H2;
		int32_t L_2 = __this->___H2_7;
		V_4 = L_2;
		// d = H3;
		int32_t L_3 = __this->___H3_8;
		V_6 = L_3;
		// e = H4;
		int32_t L_4 = __this->___H4_9;
		V_8 = L_4;
		// aa = H5;
		int32_t L_5 = __this->___H5_10;
		V_1 = L_5;
		// bb = H6;
		int32_t L_6 = __this->___H6_11;
		V_3 = L_6;
		// cc = H7;
		int32_t L_7 = __this->___H7_12;
		V_5 = L_7;
		// dd = H8;
		int32_t L_8 = __this->___H8_13;
		V_7 = L_8;
		// ee = H9;
		int32_t L_9 = __this->___H9_14;
		V_9 = L_9;
		// a = RL(a + F1(b, c, d) + X[0], 11) + e; c = RL(c, 10);
		int32_t L_10 = V_0;
		int32_t L_11 = V_2;
		int32_t L_12 = V_4;
		int32_t L_13 = V_6;
		int32_t L_14;
		L_14 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_11, L_12, L_13, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___X_15;
		NullCheck(L_15);
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18;
		L_18 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_10, L_14)), L_17)), ((int32_t)11), NULL);
		int32_t L_19 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		// a = RL(a + F1(b, c, d) + X[0], 11) + e; c = RL(c, 10);
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_20, ((int32_t)10), NULL);
		V_4 = L_21;
		// e = RL(e + F1(a, b, c) + X[1], 14) + d; b = RL(b, 10);
		int32_t L_22 = V_8;
		int32_t L_23 = V_0;
		int32_t L_24 = V_2;
		int32_t L_25 = V_4;
		int32_t L_26;
		L_26 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_23, L_24, L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___X_15;
		NullCheck(L_27);
		int32_t L_28 = 1;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_22, L_26)), L_29)), ((int32_t)14), NULL);
		int32_t L_31 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_30, L_31));
		// e = RL(e + F1(a, b, c) + X[1], 14) + d; b = RL(b, 10);
		int32_t L_32 = V_2;
		int32_t L_33;
		L_33 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_32, ((int32_t)10), NULL);
		V_2 = L_33;
		// d = RL(d + F1(e, a, b) + X[2], 15) + c; a = RL(a, 10);
		int32_t L_34 = V_6;
		int32_t L_35 = V_8;
		int32_t L_36 = V_0;
		int32_t L_37 = V_2;
		int32_t L_38;
		L_38 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_35, L_36, L_37, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->___X_15;
		NullCheck(L_39);
		int32_t L_40 = 2;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42;
		L_42 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_34, L_38)), L_41)), ((int32_t)15), NULL);
		int32_t L_43 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		// d = RL(d + F1(e, a, b) + X[2], 15) + c; a = RL(a, 10);
		int32_t L_44 = V_0;
		int32_t L_45;
		L_45 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_44, ((int32_t)10), NULL);
		V_0 = L_45;
		// c = RL(c + F1(d, e, a) + X[3], 12) + b; e = RL(e, 10);
		int32_t L_46 = V_4;
		int32_t L_47 = V_6;
		int32_t L_48 = V_8;
		int32_t L_49 = V_0;
		int32_t L_50;
		L_50 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_47, L_48, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->___X_15;
		NullCheck(L_51);
		int32_t L_52 = 3;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		int32_t L_54;
		L_54 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_46, L_50)), L_53)), ((int32_t)12), NULL);
		int32_t L_55 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, L_55));
		// c = RL(c + F1(d, e, a) + X[3], 12) + b; e = RL(e, 10);
		int32_t L_56 = V_8;
		int32_t L_57;
		L_57 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_56, ((int32_t)10), NULL);
		V_8 = L_57;
		// b = RL(b + F1(c, d, e) + X[4], 5) + a; d = RL(d, 10);
		int32_t L_58 = V_2;
		int32_t L_59 = V_4;
		int32_t L_60 = V_6;
		int32_t L_61 = V_8;
		int32_t L_62;
		L_62 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_59, L_60, L_61, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___X_15;
		NullCheck(L_63);
		int32_t L_64 = 4;
		int32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66;
		L_66 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_58, L_62)), L_65)), 5, NULL);
		int32_t L_67 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_66, L_67));
		// b = RL(b + F1(c, d, e) + X[4], 5) + a; d = RL(d, 10);
		int32_t L_68 = V_6;
		int32_t L_69;
		L_69 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_68, ((int32_t)10), NULL);
		V_6 = L_69;
		// a = RL(a + F1(b, c, d) + X[5], 8) + e; c = RL(c, 10);
		int32_t L_70 = V_0;
		int32_t L_71 = V_2;
		int32_t L_72 = V_4;
		int32_t L_73 = V_6;
		int32_t L_74;
		L_74 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_71, L_72, L_73, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___X_15;
		NullCheck(L_75);
		int32_t L_76 = 5;
		int32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78;
		L_78 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_70, L_74)), L_77)), 8, NULL);
		int32_t L_79 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_78, L_79));
		// a = RL(a + F1(b, c, d) + X[5], 8) + e; c = RL(c, 10);
		int32_t L_80 = V_4;
		int32_t L_81;
		L_81 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_80, ((int32_t)10), NULL);
		V_4 = L_81;
		// e = RL(e + F1(a, b, c) + X[6], 7) + d; b = RL(b, 10);
		int32_t L_82 = V_8;
		int32_t L_83 = V_0;
		int32_t L_84 = V_2;
		int32_t L_85 = V_4;
		int32_t L_86;
		L_86 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_83, L_84, L_85, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___X_15;
		NullCheck(L_87);
		int32_t L_88 = 6;
		int32_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		int32_t L_90;
		L_90 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_82, L_86)), L_89)), 7, NULL);
		int32_t L_91 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_90, L_91));
		// e = RL(e + F1(a, b, c) + X[6], 7) + d; b = RL(b, 10);
		int32_t L_92 = V_2;
		int32_t L_93;
		L_93 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_92, ((int32_t)10), NULL);
		V_2 = L_93;
		// d = RL(d + F1(e, a, b) + X[7], 9) + c; a = RL(a, 10);
		int32_t L_94 = V_6;
		int32_t L_95 = V_8;
		int32_t L_96 = V_0;
		int32_t L_97 = V_2;
		int32_t L_98;
		L_98 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_95, L_96, L_97, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___X_15;
		NullCheck(L_99);
		int32_t L_100 = 7;
		int32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102;
		L_102 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_94, L_98)), L_101)), ((int32_t)9), NULL);
		int32_t L_103 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_102, L_103));
		// d = RL(d + F1(e, a, b) + X[7], 9) + c; a = RL(a, 10);
		int32_t L_104 = V_0;
		int32_t L_105;
		L_105 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_104, ((int32_t)10), NULL);
		V_0 = L_105;
		// c = RL(c + F1(d, e, a) + X[8], 11) + b; e = RL(e, 10);
		int32_t L_106 = V_4;
		int32_t L_107 = V_6;
		int32_t L_108 = V_8;
		int32_t L_109 = V_0;
		int32_t L_110;
		L_110 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_107, L_108, L_109, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = __this->___X_15;
		NullCheck(L_111);
		int32_t L_112 = 8;
		int32_t L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114;
		L_114 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_106, L_110)), L_113)), ((int32_t)11), NULL);
		int32_t L_115 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_114, L_115));
		// c = RL(c + F1(d, e, a) + X[8], 11) + b; e = RL(e, 10);
		int32_t L_116 = V_8;
		int32_t L_117;
		L_117 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_116, ((int32_t)10), NULL);
		V_8 = L_117;
		// b = RL(b + F1(c, d, e) + X[9], 13) + a; d = RL(d, 10);
		int32_t L_118 = V_2;
		int32_t L_119 = V_4;
		int32_t L_120 = V_6;
		int32_t L_121 = V_8;
		int32_t L_122;
		L_122 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_119, L_120, L_121, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = __this->___X_15;
		NullCheck(L_123);
		int32_t L_124 = ((int32_t)9);
		int32_t L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		int32_t L_126;
		L_126 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_118, L_122)), L_125)), ((int32_t)13), NULL);
		int32_t L_127 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_126, L_127));
		// b = RL(b + F1(c, d, e) + X[9], 13) + a; d = RL(d, 10);
		int32_t L_128 = V_6;
		int32_t L_129;
		L_129 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_128, ((int32_t)10), NULL);
		V_6 = L_129;
		// a = RL(a + F1(b, c, d) + X[10], 14) + e; c = RL(c, 10);
		int32_t L_130 = V_0;
		int32_t L_131 = V_2;
		int32_t L_132 = V_4;
		int32_t L_133 = V_6;
		int32_t L_134;
		L_134 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_131, L_132, L_133, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = __this->___X_15;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)10);
		int32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		int32_t L_138;
		L_138 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_130, L_134)), L_137)), ((int32_t)14), NULL);
		int32_t L_139 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_138, L_139));
		// a = RL(a + F1(b, c, d) + X[10], 14) + e; c = RL(c, 10);
		int32_t L_140 = V_4;
		int32_t L_141;
		L_141 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_140, ((int32_t)10), NULL);
		V_4 = L_141;
		// e = RL(e + F1(a, b, c) + X[11], 15) + d; b = RL(b, 10);
		int32_t L_142 = V_8;
		int32_t L_143 = V_0;
		int32_t L_144 = V_2;
		int32_t L_145 = V_4;
		int32_t L_146;
		L_146 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_143, L_144, L_145, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = __this->___X_15;
		NullCheck(L_147);
		int32_t L_148 = ((int32_t)11);
		int32_t L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		int32_t L_150;
		L_150 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_142, L_146)), L_149)), ((int32_t)15), NULL);
		int32_t L_151 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_150, L_151));
		// e = RL(e + F1(a, b, c) + X[11], 15) + d; b = RL(b, 10);
		int32_t L_152 = V_2;
		int32_t L_153;
		L_153 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_152, ((int32_t)10), NULL);
		V_2 = L_153;
		// d = RL(d + F1(e, a, b) + X[12], 6) + c; a = RL(a, 10);
		int32_t L_154 = V_6;
		int32_t L_155 = V_8;
		int32_t L_156 = V_0;
		int32_t L_157 = V_2;
		int32_t L_158;
		L_158 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_155, L_156, L_157, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_159 = __this->___X_15;
		NullCheck(L_159);
		int32_t L_160 = ((int32_t)12);
		int32_t L_161 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		int32_t L_162;
		L_162 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_154, L_158)), L_161)), 6, NULL);
		int32_t L_163 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_162, L_163));
		// d = RL(d + F1(e, a, b) + X[12], 6) + c; a = RL(a, 10);
		int32_t L_164 = V_0;
		int32_t L_165;
		L_165 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_164, ((int32_t)10), NULL);
		V_0 = L_165;
		// c = RL(c + F1(d, e, a) + X[13], 7) + b; e = RL(e, 10);
		int32_t L_166 = V_4;
		int32_t L_167 = V_6;
		int32_t L_168 = V_8;
		int32_t L_169 = V_0;
		int32_t L_170;
		L_170 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_167, L_168, L_169, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___X_15;
		NullCheck(L_171);
		int32_t L_172 = ((int32_t)13);
		int32_t L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		int32_t L_174;
		L_174 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_166, L_170)), L_173)), 7, NULL);
		int32_t L_175 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_174, L_175));
		// c = RL(c + F1(d, e, a) + X[13], 7) + b; e = RL(e, 10);
		int32_t L_176 = V_8;
		int32_t L_177;
		L_177 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_176, ((int32_t)10), NULL);
		V_8 = L_177;
		// b = RL(b + F1(c, d, e) + X[14], 9) + a; d = RL(d, 10);
		int32_t L_178 = V_2;
		int32_t L_179 = V_4;
		int32_t L_180 = V_6;
		int32_t L_181 = V_8;
		int32_t L_182;
		L_182 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_179, L_180, L_181, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___X_15;
		NullCheck(L_183);
		int32_t L_184 = ((int32_t)14);
		int32_t L_185 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		int32_t L_186;
		L_186 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_178, L_182)), L_185)), ((int32_t)9), NULL);
		int32_t L_187 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_186, L_187));
		// b = RL(b + F1(c, d, e) + X[14], 9) + a; d = RL(d, 10);
		int32_t L_188 = V_6;
		int32_t L_189;
		L_189 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_188, ((int32_t)10), NULL);
		V_6 = L_189;
		// a = RL(a + F1(b, c, d) + X[15], 8) + e; c = RL(c, 10);
		int32_t L_190 = V_0;
		int32_t L_191 = V_2;
		int32_t L_192 = V_4;
		int32_t L_193 = V_6;
		int32_t L_194;
		L_194 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_191, L_192, L_193, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = __this->___X_15;
		NullCheck(L_195);
		int32_t L_196 = ((int32_t)15);
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		int32_t L_198;
		L_198 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_190, L_194)), L_197)), 8, NULL);
		int32_t L_199 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_198, L_199));
		// a = RL(a + F1(b, c, d) + X[15], 8) + e; c = RL(c, 10);
		int32_t L_200 = V_4;
		int32_t L_201;
		L_201 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_200, ((int32_t)10), NULL);
		V_4 = L_201;
		// aa = RL(aa + F5(bb, cc, dd) + X[5] + unchecked((int)0x50a28be6), 8) + ee; cc = RL(cc, 10);
		int32_t L_202 = V_1;
		int32_t L_203 = V_3;
		int32_t L_204 = V_5;
		int32_t L_205 = V_7;
		int32_t L_206;
		L_206 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_203, L_204, L_205, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = __this->___X_15;
		NullCheck(L_207);
		int32_t L_208 = 5;
		int32_t L_209 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		int32_t L_210;
		L_210 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_202, L_206)), L_209)), ((int32_t)1352829926))), 8, NULL);
		int32_t L_211 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_210, L_211));
		// aa = RL(aa + F5(bb, cc, dd) + X[5] + unchecked((int)0x50a28be6), 8) + ee; cc = RL(cc, 10);
		int32_t L_212 = V_5;
		int32_t L_213;
		L_213 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_212, ((int32_t)10), NULL);
		V_5 = L_213;
		// ee = RL(ee + F5(aa, bb, cc) + X[14] + unchecked((int)0x50a28be6), 9) + dd; bb = RL(bb, 10);
		int32_t L_214 = V_9;
		int32_t L_215 = V_1;
		int32_t L_216 = V_3;
		int32_t L_217 = V_5;
		int32_t L_218;
		L_218 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_215, L_216, L_217, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_219 = __this->___X_15;
		NullCheck(L_219);
		int32_t L_220 = ((int32_t)14);
		int32_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		int32_t L_222;
		L_222 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_214, L_218)), L_221)), ((int32_t)1352829926))), ((int32_t)9), NULL);
		int32_t L_223 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_222, L_223));
		// ee = RL(ee + F5(aa, bb, cc) + X[14] + unchecked((int)0x50a28be6), 9) + dd; bb = RL(bb, 10);
		int32_t L_224 = V_3;
		int32_t L_225;
		L_225 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_224, ((int32_t)10), NULL);
		V_3 = L_225;
		// dd = RL(dd + F5(ee, aa, bb) + X[7] + unchecked((int)0x50a28be6), 9) + cc; aa = RL(aa, 10);
		int32_t L_226 = V_7;
		int32_t L_227 = V_9;
		int32_t L_228 = V_1;
		int32_t L_229 = V_3;
		int32_t L_230;
		L_230 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_227, L_228, L_229, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_231 = __this->___X_15;
		NullCheck(L_231);
		int32_t L_232 = 7;
		int32_t L_233 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		int32_t L_234;
		L_234 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_226, L_230)), L_233)), ((int32_t)1352829926))), ((int32_t)9), NULL);
		int32_t L_235 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_234, L_235));
		// dd = RL(dd + F5(ee, aa, bb) + X[7] + unchecked((int)0x50a28be6), 9) + cc; aa = RL(aa, 10);
		int32_t L_236 = V_1;
		int32_t L_237;
		L_237 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_236, ((int32_t)10), NULL);
		V_1 = L_237;
		// cc = RL(cc + F5(dd, ee, aa) + X[0] + unchecked((int)0x50a28be6), 11) + bb; ee = RL(ee, 10);
		int32_t L_238 = V_5;
		int32_t L_239 = V_7;
		int32_t L_240 = V_9;
		int32_t L_241 = V_1;
		int32_t L_242;
		L_242 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_239, L_240, L_241, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = __this->___X_15;
		NullCheck(L_243);
		int32_t L_244 = 0;
		int32_t L_245 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		int32_t L_246;
		L_246 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_238, L_242)), L_245)), ((int32_t)1352829926))), ((int32_t)11), NULL);
		int32_t L_247 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_246, L_247));
		// cc = RL(cc + F5(dd, ee, aa) + X[0] + unchecked((int)0x50a28be6), 11) + bb; ee = RL(ee, 10);
		int32_t L_248 = V_9;
		int32_t L_249;
		L_249 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_248, ((int32_t)10), NULL);
		V_9 = L_249;
		// bb = RL(bb + F5(cc, dd, ee) + X[9] + unchecked((int)0x50a28be6), 13) + aa; dd = RL(dd, 10);
		int32_t L_250 = V_3;
		int32_t L_251 = V_5;
		int32_t L_252 = V_7;
		int32_t L_253 = V_9;
		int32_t L_254;
		L_254 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_251, L_252, L_253, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = __this->___X_15;
		NullCheck(L_255);
		int32_t L_256 = ((int32_t)9);
		int32_t L_257 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		int32_t L_258;
		L_258 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_250, L_254)), L_257)), ((int32_t)1352829926))), ((int32_t)13), NULL);
		int32_t L_259 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_258, L_259));
		// bb = RL(bb + F5(cc, dd, ee) + X[9] + unchecked((int)0x50a28be6), 13) + aa; dd = RL(dd, 10);
		int32_t L_260 = V_7;
		int32_t L_261;
		L_261 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_260, ((int32_t)10), NULL);
		V_7 = L_261;
		// aa = RL(aa + F5(bb, cc, dd) + X[2] + unchecked((int)0x50a28be6), 15) + ee; cc = RL(cc, 10);
		int32_t L_262 = V_1;
		int32_t L_263 = V_3;
		int32_t L_264 = V_5;
		int32_t L_265 = V_7;
		int32_t L_266;
		L_266 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_263, L_264, L_265, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = __this->___X_15;
		NullCheck(L_267);
		int32_t L_268 = 2;
		int32_t L_269 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		int32_t L_270;
		L_270 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_262, L_266)), L_269)), ((int32_t)1352829926))), ((int32_t)15), NULL);
		int32_t L_271 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_270, L_271));
		// aa = RL(aa + F5(bb, cc, dd) + X[2] + unchecked((int)0x50a28be6), 15) + ee; cc = RL(cc, 10);
		int32_t L_272 = V_5;
		int32_t L_273;
		L_273 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_272, ((int32_t)10), NULL);
		V_5 = L_273;
		// ee = RL(ee + F5(aa, bb, cc) + X[11] + unchecked((int)0x50a28be6), 15) + dd; bb = RL(bb, 10);
		int32_t L_274 = V_9;
		int32_t L_275 = V_1;
		int32_t L_276 = V_3;
		int32_t L_277 = V_5;
		int32_t L_278;
		L_278 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_275, L_276, L_277, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_279 = __this->___X_15;
		NullCheck(L_279);
		int32_t L_280 = ((int32_t)11);
		int32_t L_281 = (L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		int32_t L_282;
		L_282 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_274, L_278)), L_281)), ((int32_t)1352829926))), ((int32_t)15), NULL);
		int32_t L_283 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_282, L_283));
		// ee = RL(ee + F5(aa, bb, cc) + X[11] + unchecked((int)0x50a28be6), 15) + dd; bb = RL(bb, 10);
		int32_t L_284 = V_3;
		int32_t L_285;
		L_285 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_284, ((int32_t)10), NULL);
		V_3 = L_285;
		// dd = RL(dd + F5(ee, aa, bb) + X[4] + unchecked((int)0x50a28be6), 5) + cc; aa = RL(aa, 10);
		int32_t L_286 = V_7;
		int32_t L_287 = V_9;
		int32_t L_288 = V_1;
		int32_t L_289 = V_3;
		int32_t L_290;
		L_290 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_287, L_288, L_289, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_291 = __this->___X_15;
		NullCheck(L_291);
		int32_t L_292 = 4;
		int32_t L_293 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		int32_t L_294;
		L_294 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_286, L_290)), L_293)), ((int32_t)1352829926))), 5, NULL);
		int32_t L_295 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_294, L_295));
		// dd = RL(dd + F5(ee, aa, bb) + X[4] + unchecked((int)0x50a28be6), 5) + cc; aa = RL(aa, 10);
		int32_t L_296 = V_1;
		int32_t L_297;
		L_297 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_296, ((int32_t)10), NULL);
		V_1 = L_297;
		// cc = RL(cc + F5(dd, ee, aa) + X[13] + unchecked((int)0x50a28be6), 7) + bb; ee = RL(ee, 10);
		int32_t L_298 = V_5;
		int32_t L_299 = V_7;
		int32_t L_300 = V_9;
		int32_t L_301 = V_1;
		int32_t L_302;
		L_302 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_299, L_300, L_301, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = __this->___X_15;
		NullCheck(L_303);
		int32_t L_304 = ((int32_t)13);
		int32_t L_305 = (L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		int32_t L_306;
		L_306 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_298, L_302)), L_305)), ((int32_t)1352829926))), 7, NULL);
		int32_t L_307 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_306, L_307));
		// cc = RL(cc + F5(dd, ee, aa) + X[13] + unchecked((int)0x50a28be6), 7) + bb; ee = RL(ee, 10);
		int32_t L_308 = V_9;
		int32_t L_309;
		L_309 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_308, ((int32_t)10), NULL);
		V_9 = L_309;
		// bb = RL(bb + F5(cc, dd, ee) + X[6] + unchecked((int)0x50a28be6), 7) + aa; dd = RL(dd, 10);
		int32_t L_310 = V_3;
		int32_t L_311 = V_5;
		int32_t L_312 = V_7;
		int32_t L_313 = V_9;
		int32_t L_314;
		L_314 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_311, L_312, L_313, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = __this->___X_15;
		NullCheck(L_315);
		int32_t L_316 = 6;
		int32_t L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		int32_t L_318;
		L_318 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_310, L_314)), L_317)), ((int32_t)1352829926))), 7, NULL);
		int32_t L_319 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_318, L_319));
		// bb = RL(bb + F5(cc, dd, ee) + X[6] + unchecked((int)0x50a28be6), 7) + aa; dd = RL(dd, 10);
		int32_t L_320 = V_7;
		int32_t L_321;
		L_321 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_320, ((int32_t)10), NULL);
		V_7 = L_321;
		// aa = RL(aa + F5(bb, cc, dd) + X[15] + unchecked((int)0x50a28be6), 8) + ee; cc = RL(cc, 10);
		int32_t L_322 = V_1;
		int32_t L_323 = V_3;
		int32_t L_324 = V_5;
		int32_t L_325 = V_7;
		int32_t L_326;
		L_326 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_323, L_324, L_325, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = __this->___X_15;
		NullCheck(L_327);
		int32_t L_328 = ((int32_t)15);
		int32_t L_329 = (L_327)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		int32_t L_330;
		L_330 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_322, L_326)), L_329)), ((int32_t)1352829926))), 8, NULL);
		int32_t L_331 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_330, L_331));
		// aa = RL(aa + F5(bb, cc, dd) + X[15] + unchecked((int)0x50a28be6), 8) + ee; cc = RL(cc, 10);
		int32_t L_332 = V_5;
		int32_t L_333;
		L_333 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_332, ((int32_t)10), NULL);
		V_5 = L_333;
		// ee = RL(ee + F5(aa, bb, cc) + X[8] + unchecked((int)0x50a28be6), 11) + dd; bb = RL(bb, 10);
		int32_t L_334 = V_9;
		int32_t L_335 = V_1;
		int32_t L_336 = V_3;
		int32_t L_337 = V_5;
		int32_t L_338;
		L_338 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_335, L_336, L_337, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_339 = __this->___X_15;
		NullCheck(L_339);
		int32_t L_340 = 8;
		int32_t L_341 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		int32_t L_342;
		L_342 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_334, L_338)), L_341)), ((int32_t)1352829926))), ((int32_t)11), NULL);
		int32_t L_343 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_342, L_343));
		// ee = RL(ee + F5(aa, bb, cc) + X[8] + unchecked((int)0x50a28be6), 11) + dd; bb = RL(bb, 10);
		int32_t L_344 = V_3;
		int32_t L_345;
		L_345 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_344, ((int32_t)10), NULL);
		V_3 = L_345;
		// dd = RL(dd + F5(ee, aa, bb) + X[1] + unchecked((int)0x50a28be6), 14) + cc; aa = RL(aa, 10);
		int32_t L_346 = V_7;
		int32_t L_347 = V_9;
		int32_t L_348 = V_1;
		int32_t L_349 = V_3;
		int32_t L_350;
		L_350 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_347, L_348, L_349, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_351 = __this->___X_15;
		NullCheck(L_351);
		int32_t L_352 = 1;
		int32_t L_353 = (L_351)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		int32_t L_354;
		L_354 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_346, L_350)), L_353)), ((int32_t)1352829926))), ((int32_t)14), NULL);
		int32_t L_355 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_354, L_355));
		// dd = RL(dd + F5(ee, aa, bb) + X[1] + unchecked((int)0x50a28be6), 14) + cc; aa = RL(aa, 10);
		int32_t L_356 = V_1;
		int32_t L_357;
		L_357 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_356, ((int32_t)10), NULL);
		V_1 = L_357;
		// cc = RL(cc + F5(dd, ee, aa) + X[10] + unchecked((int)0x50a28be6), 14) + bb; ee = RL(ee, 10);
		int32_t L_358 = V_5;
		int32_t L_359 = V_7;
		int32_t L_360 = V_9;
		int32_t L_361 = V_1;
		int32_t L_362;
		L_362 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_359, L_360, L_361, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = __this->___X_15;
		NullCheck(L_363);
		int32_t L_364 = ((int32_t)10);
		int32_t L_365 = (L_363)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		int32_t L_366;
		L_366 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_358, L_362)), L_365)), ((int32_t)1352829926))), ((int32_t)14), NULL);
		int32_t L_367 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_366, L_367));
		// cc = RL(cc + F5(dd, ee, aa) + X[10] + unchecked((int)0x50a28be6), 14) + bb; ee = RL(ee, 10);
		int32_t L_368 = V_9;
		int32_t L_369;
		L_369 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_368, ((int32_t)10), NULL);
		V_9 = L_369;
		// bb = RL(bb + F5(cc, dd, ee) + X[3] + unchecked((int)0x50a28be6), 12) + aa; dd = RL(dd, 10);
		int32_t L_370 = V_3;
		int32_t L_371 = V_5;
		int32_t L_372 = V_7;
		int32_t L_373 = V_9;
		int32_t L_374;
		L_374 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_371, L_372, L_373, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_375 = __this->___X_15;
		NullCheck(L_375);
		int32_t L_376 = 3;
		int32_t L_377 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		int32_t L_378;
		L_378 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_370, L_374)), L_377)), ((int32_t)1352829926))), ((int32_t)12), NULL);
		int32_t L_379 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_378, L_379));
		// bb = RL(bb + F5(cc, dd, ee) + X[3] + unchecked((int)0x50a28be6), 12) + aa; dd = RL(dd, 10);
		int32_t L_380 = V_7;
		int32_t L_381;
		L_381 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_380, ((int32_t)10), NULL);
		V_7 = L_381;
		// aa = RL(aa + F5(bb, cc, dd) + X[12] + unchecked((int)0x50a28be6), 6) + ee; cc = RL(cc, 10);
		int32_t L_382 = V_1;
		int32_t L_383 = V_3;
		int32_t L_384 = V_5;
		int32_t L_385 = V_7;
		int32_t L_386;
		L_386 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_383, L_384, L_385, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = __this->___X_15;
		NullCheck(L_387);
		int32_t L_388 = ((int32_t)12);
		int32_t L_389 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_388));
		int32_t L_390;
		L_390 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_382, L_386)), L_389)), ((int32_t)1352829926))), 6, NULL);
		int32_t L_391 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_390, L_391));
		// aa = RL(aa + F5(bb, cc, dd) + X[12] + unchecked((int)0x50a28be6), 6) + ee; cc = RL(cc, 10);
		int32_t L_392 = V_5;
		int32_t L_393;
		L_393 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_392, ((int32_t)10), NULL);
		V_5 = L_393;
		// t = a; a = aa; aa = t;
		int32_t L_394 = V_0;
		// t = a; a = aa; aa = t;
		int32_t L_395 = V_1;
		V_0 = L_395;
		// t = a; a = aa; aa = t;
		V_1 = L_394;
		// e = RL(e + F2(a, b, c) + X[7] + unchecked((int)0x5a827999), 7) + d; b = RL(b, 10);
		int32_t L_396 = V_8;
		int32_t L_397 = V_0;
		int32_t L_398 = V_2;
		int32_t L_399 = V_4;
		int32_t L_400;
		L_400 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_397, L_398, L_399, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = __this->___X_15;
		NullCheck(L_401);
		int32_t L_402 = 7;
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		int32_t L_404;
		L_404 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_396, L_400)), L_403)), ((int32_t)1518500249))), 7, NULL);
		int32_t L_405 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_404, L_405));
		// e = RL(e + F2(a, b, c) + X[7] + unchecked((int)0x5a827999), 7) + d; b = RL(b, 10);
		int32_t L_406 = V_2;
		int32_t L_407;
		L_407 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_406, ((int32_t)10), NULL);
		V_2 = L_407;
		// d = RL(d + F2(e, a, b) + X[4] + unchecked((int)0x5a827999), 6) + c; a = RL(a, 10);
		int32_t L_408 = V_6;
		int32_t L_409 = V_8;
		int32_t L_410 = V_0;
		int32_t L_411 = V_2;
		int32_t L_412;
		L_412 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_409, L_410, L_411, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = __this->___X_15;
		NullCheck(L_413);
		int32_t L_414 = 4;
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		int32_t L_416;
		L_416 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_408, L_412)), L_415)), ((int32_t)1518500249))), 6, NULL);
		int32_t L_417 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_416, L_417));
		// d = RL(d + F2(e, a, b) + X[4] + unchecked((int)0x5a827999), 6) + c; a = RL(a, 10);
		int32_t L_418 = V_0;
		int32_t L_419;
		L_419 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_418, ((int32_t)10), NULL);
		V_0 = L_419;
		// c = RL(c + F2(d, e, a) + X[13] + unchecked((int)0x5a827999), 8) + b; e = RL(e, 10);
		int32_t L_420 = V_4;
		int32_t L_421 = V_6;
		int32_t L_422 = V_8;
		int32_t L_423 = V_0;
		int32_t L_424;
		L_424 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_421, L_422, L_423, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = __this->___X_15;
		NullCheck(L_425);
		int32_t L_426 = ((int32_t)13);
		int32_t L_427 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_426));
		int32_t L_428;
		L_428 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_420, L_424)), L_427)), ((int32_t)1518500249))), 8, NULL);
		int32_t L_429 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_428, L_429));
		// c = RL(c + F2(d, e, a) + X[13] + unchecked((int)0x5a827999), 8) + b; e = RL(e, 10);
		int32_t L_430 = V_8;
		int32_t L_431;
		L_431 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_430, ((int32_t)10), NULL);
		V_8 = L_431;
		// b = RL(b + F2(c, d, e) + X[1] + unchecked((int)0x5a827999), 13) + a; d = RL(d, 10);
		int32_t L_432 = V_2;
		int32_t L_433 = V_4;
		int32_t L_434 = V_6;
		int32_t L_435 = V_8;
		int32_t L_436;
		L_436 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_433, L_434, L_435, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = __this->___X_15;
		NullCheck(L_437);
		int32_t L_438 = 1;
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		int32_t L_440;
		L_440 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_432, L_436)), L_439)), ((int32_t)1518500249))), ((int32_t)13), NULL);
		int32_t L_441 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_440, L_441));
		// b = RL(b + F2(c, d, e) + X[1] + unchecked((int)0x5a827999), 13) + a; d = RL(d, 10);
		int32_t L_442 = V_6;
		int32_t L_443;
		L_443 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_442, ((int32_t)10), NULL);
		V_6 = L_443;
		// a = RL(a + F2(b, c, d) + X[10] + unchecked((int)0x5a827999), 11) + e; c = RL(c, 10);
		int32_t L_444 = V_0;
		int32_t L_445 = V_2;
		int32_t L_446 = V_4;
		int32_t L_447 = V_6;
		int32_t L_448;
		L_448 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_445, L_446, L_447, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = __this->___X_15;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)10);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		int32_t L_452;
		L_452 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_444, L_448)), L_451)), ((int32_t)1518500249))), ((int32_t)11), NULL);
		int32_t L_453 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_452, L_453));
		// a = RL(a + F2(b, c, d) + X[10] + unchecked((int)0x5a827999), 11) + e; c = RL(c, 10);
		int32_t L_454 = V_4;
		int32_t L_455;
		L_455 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_454, ((int32_t)10), NULL);
		V_4 = L_455;
		// e = RL(e + F2(a, b, c) + X[6] + unchecked((int)0x5a827999), 9) + d; b = RL(b, 10);
		int32_t L_456 = V_8;
		int32_t L_457 = V_0;
		int32_t L_458 = V_2;
		int32_t L_459 = V_4;
		int32_t L_460;
		L_460 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_457, L_458, L_459, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = __this->___X_15;
		NullCheck(L_461);
		int32_t L_462 = 6;
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		int32_t L_464;
		L_464 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_456, L_460)), L_463)), ((int32_t)1518500249))), ((int32_t)9), NULL);
		int32_t L_465 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_464, L_465));
		// e = RL(e + F2(a, b, c) + X[6] + unchecked((int)0x5a827999), 9) + d; b = RL(b, 10);
		int32_t L_466 = V_2;
		int32_t L_467;
		L_467 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_466, ((int32_t)10), NULL);
		V_2 = L_467;
		// d = RL(d + F2(e, a, b) + X[15] + unchecked((int)0x5a827999), 7) + c; a = RL(a, 10);
		int32_t L_468 = V_6;
		int32_t L_469 = V_8;
		int32_t L_470 = V_0;
		int32_t L_471 = V_2;
		int32_t L_472;
		L_472 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_469, L_470, L_471, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = __this->___X_15;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)15);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		int32_t L_476;
		L_476 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_468, L_472)), L_475)), ((int32_t)1518500249))), 7, NULL);
		int32_t L_477 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_476, L_477));
		// d = RL(d + F2(e, a, b) + X[15] + unchecked((int)0x5a827999), 7) + c; a = RL(a, 10);
		int32_t L_478 = V_0;
		int32_t L_479;
		L_479 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_478, ((int32_t)10), NULL);
		V_0 = L_479;
		// c = RL(c + F2(d, e, a) + X[3] + unchecked((int)0x5a827999), 15) + b; e = RL(e, 10);
		int32_t L_480 = V_4;
		int32_t L_481 = V_6;
		int32_t L_482 = V_8;
		int32_t L_483 = V_0;
		int32_t L_484;
		L_484 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_481, L_482, L_483, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_485 = __this->___X_15;
		NullCheck(L_485);
		int32_t L_486 = 3;
		int32_t L_487 = (L_485)->GetAt(static_cast<il2cpp_array_size_t>(L_486));
		int32_t L_488;
		L_488 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_480, L_484)), L_487)), ((int32_t)1518500249))), ((int32_t)15), NULL);
		int32_t L_489 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_488, L_489));
		// c = RL(c + F2(d, e, a) + X[3] + unchecked((int)0x5a827999), 15) + b; e = RL(e, 10);
		int32_t L_490 = V_8;
		int32_t L_491;
		L_491 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_490, ((int32_t)10), NULL);
		V_8 = L_491;
		// b = RL(b + F2(c, d, e) + X[12] + unchecked((int)0x5a827999), 7) + a; d = RL(d, 10);
		int32_t L_492 = V_2;
		int32_t L_493 = V_4;
		int32_t L_494 = V_6;
		int32_t L_495 = V_8;
		int32_t L_496;
		L_496 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_493, L_494, L_495, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = __this->___X_15;
		NullCheck(L_497);
		int32_t L_498 = ((int32_t)12);
		int32_t L_499 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_498));
		int32_t L_500;
		L_500 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_492, L_496)), L_499)), ((int32_t)1518500249))), 7, NULL);
		int32_t L_501 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_500, L_501));
		// b = RL(b + F2(c, d, e) + X[12] + unchecked((int)0x5a827999), 7) + a; d = RL(d, 10);
		int32_t L_502 = V_6;
		int32_t L_503;
		L_503 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_502, ((int32_t)10), NULL);
		V_6 = L_503;
		// a = RL(a + F2(b, c, d) + X[0] + unchecked((int)0x5a827999), 12) + e; c = RL(c, 10);
		int32_t L_504 = V_0;
		int32_t L_505 = V_2;
		int32_t L_506 = V_4;
		int32_t L_507 = V_6;
		int32_t L_508;
		L_508 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_505, L_506, L_507, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = __this->___X_15;
		NullCheck(L_509);
		int32_t L_510 = 0;
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		int32_t L_512;
		L_512 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_504, L_508)), L_511)), ((int32_t)1518500249))), ((int32_t)12), NULL);
		int32_t L_513 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_512, L_513));
		// a = RL(a + F2(b, c, d) + X[0] + unchecked((int)0x5a827999), 12) + e; c = RL(c, 10);
		int32_t L_514 = V_4;
		int32_t L_515;
		L_515 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_514, ((int32_t)10), NULL);
		V_4 = L_515;
		// e = RL(e + F2(a, b, c) + X[9] + unchecked((int)0x5a827999), 15) + d; b = RL(b, 10);
		int32_t L_516 = V_8;
		int32_t L_517 = V_0;
		int32_t L_518 = V_2;
		int32_t L_519 = V_4;
		int32_t L_520;
		L_520 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_517, L_518, L_519, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = __this->___X_15;
		NullCheck(L_521);
		int32_t L_522 = ((int32_t)9);
		int32_t L_523 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		int32_t L_524;
		L_524 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_516, L_520)), L_523)), ((int32_t)1518500249))), ((int32_t)15), NULL);
		int32_t L_525 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_524, L_525));
		// e = RL(e + F2(a, b, c) + X[9] + unchecked((int)0x5a827999), 15) + d; b = RL(b, 10);
		int32_t L_526 = V_2;
		int32_t L_527;
		L_527 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_526, ((int32_t)10), NULL);
		V_2 = L_527;
		// d = RL(d + F2(e, a, b) + X[5] + unchecked((int)0x5a827999), 9) + c; a = RL(a, 10);
		int32_t L_528 = V_6;
		int32_t L_529 = V_8;
		int32_t L_530 = V_0;
		int32_t L_531 = V_2;
		int32_t L_532;
		L_532 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_529, L_530, L_531, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = __this->___X_15;
		NullCheck(L_533);
		int32_t L_534 = 5;
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		int32_t L_536;
		L_536 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_528, L_532)), L_535)), ((int32_t)1518500249))), ((int32_t)9), NULL);
		int32_t L_537 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_536, L_537));
		// d = RL(d + F2(e, a, b) + X[5] + unchecked((int)0x5a827999), 9) + c; a = RL(a, 10);
		int32_t L_538 = V_0;
		int32_t L_539;
		L_539 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_538, ((int32_t)10), NULL);
		V_0 = L_539;
		// c = RL(c + F2(d, e, a) + X[2] + unchecked((int)0x5a827999), 11) + b; e = RL(e, 10);
		int32_t L_540 = V_4;
		int32_t L_541 = V_6;
		int32_t L_542 = V_8;
		int32_t L_543 = V_0;
		int32_t L_544;
		L_544 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_541, L_542, L_543, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = __this->___X_15;
		NullCheck(L_545);
		int32_t L_546 = 2;
		int32_t L_547 = (L_545)->GetAt(static_cast<il2cpp_array_size_t>(L_546));
		int32_t L_548;
		L_548 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_540, L_544)), L_547)), ((int32_t)1518500249))), ((int32_t)11), NULL);
		int32_t L_549 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_548, L_549));
		// c = RL(c + F2(d, e, a) + X[2] + unchecked((int)0x5a827999), 11) + b; e = RL(e, 10);
		int32_t L_550 = V_8;
		int32_t L_551;
		L_551 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_550, ((int32_t)10), NULL);
		V_8 = L_551;
		// b = RL(b + F2(c, d, e) + X[14] + unchecked((int)0x5a827999), 7) + a; d = RL(d, 10);
		int32_t L_552 = V_2;
		int32_t L_553 = V_4;
		int32_t L_554 = V_6;
		int32_t L_555 = V_8;
		int32_t L_556;
		L_556 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_553, L_554, L_555, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = __this->___X_15;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)14);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		int32_t L_560;
		L_560 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_552, L_556)), L_559)), ((int32_t)1518500249))), 7, NULL);
		int32_t L_561 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_560, L_561));
		// b = RL(b + F2(c, d, e) + X[14] + unchecked((int)0x5a827999), 7) + a; d = RL(d, 10);
		int32_t L_562 = V_6;
		int32_t L_563;
		L_563 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_562, ((int32_t)10), NULL);
		V_6 = L_563;
		// a = RL(a + F2(b, c, d) + X[11] + unchecked((int)0x5a827999), 13) + e; c = RL(c, 10);
		int32_t L_564 = V_0;
		int32_t L_565 = V_2;
		int32_t L_566 = V_4;
		int32_t L_567 = V_6;
		int32_t L_568;
		L_568 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_565, L_566, L_567, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = __this->___X_15;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)11);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		int32_t L_572;
		L_572 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_564, L_568)), L_571)), ((int32_t)1518500249))), ((int32_t)13), NULL);
		int32_t L_573 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_572, L_573));
		// a = RL(a + F2(b, c, d) + X[11] + unchecked((int)0x5a827999), 13) + e; c = RL(c, 10);
		int32_t L_574 = V_4;
		int32_t L_575;
		L_575 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_574, ((int32_t)10), NULL);
		V_4 = L_575;
		// e = RL(e + F2(a, b, c) + X[8] + unchecked((int)0x5a827999), 12) + d; b = RL(b, 10);
		int32_t L_576 = V_8;
		int32_t L_577 = V_0;
		int32_t L_578 = V_2;
		int32_t L_579 = V_4;
		int32_t L_580;
		L_580 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_577, L_578, L_579, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = __this->___X_15;
		NullCheck(L_581);
		int32_t L_582 = 8;
		int32_t L_583 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		int32_t L_584;
		L_584 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_576, L_580)), L_583)), ((int32_t)1518500249))), ((int32_t)12), NULL);
		int32_t L_585 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_584, L_585));
		// e = RL(e + F2(a, b, c) + X[8] + unchecked((int)0x5a827999), 12) + d; b = RL(b, 10);
		int32_t L_586 = V_2;
		int32_t L_587;
		L_587 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_586, ((int32_t)10), NULL);
		V_2 = L_587;
		// ee = RL(ee + F4(aa, bb, cc) + X[6] + unchecked((int)0x5c4dd124), 9) + dd; bb = RL(bb, 10);
		int32_t L_588 = V_9;
		int32_t L_589 = V_1;
		int32_t L_590 = V_3;
		int32_t L_591 = V_5;
		int32_t L_592;
		L_592 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_589, L_590, L_591, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = __this->___X_15;
		NullCheck(L_593);
		int32_t L_594 = 6;
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		int32_t L_596;
		L_596 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_588, L_592)), L_595)), ((int32_t)1548603684))), ((int32_t)9), NULL);
		int32_t L_597 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_596, L_597));
		// ee = RL(ee + F4(aa, bb, cc) + X[6] + unchecked((int)0x5c4dd124), 9) + dd; bb = RL(bb, 10);
		int32_t L_598 = V_3;
		int32_t L_599;
		L_599 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_598, ((int32_t)10), NULL);
		V_3 = L_599;
		// dd = RL(dd + F4(ee, aa, bb) + X[11] + unchecked((int)0x5c4dd124), 13) + cc; aa = RL(aa, 10);
		int32_t L_600 = V_7;
		int32_t L_601 = V_9;
		int32_t L_602 = V_1;
		int32_t L_603 = V_3;
		int32_t L_604;
		L_604 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_601, L_602, L_603, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_605 = __this->___X_15;
		NullCheck(L_605);
		int32_t L_606 = ((int32_t)11);
		int32_t L_607 = (L_605)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		int32_t L_608;
		L_608 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_600, L_604)), L_607)), ((int32_t)1548603684))), ((int32_t)13), NULL);
		int32_t L_609 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_608, L_609));
		// dd = RL(dd + F4(ee, aa, bb) + X[11] + unchecked((int)0x5c4dd124), 13) + cc; aa = RL(aa, 10);
		int32_t L_610 = V_1;
		int32_t L_611;
		L_611 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_610, ((int32_t)10), NULL);
		V_1 = L_611;
		// cc = RL(cc + F4(dd, ee, aa) + X[3] + unchecked((int)0x5c4dd124), 15) + bb; ee = RL(ee, 10);
		int32_t L_612 = V_5;
		int32_t L_613 = V_7;
		int32_t L_614 = V_9;
		int32_t L_615 = V_1;
		int32_t L_616;
		L_616 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_613, L_614, L_615, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = __this->___X_15;
		NullCheck(L_617);
		int32_t L_618 = 3;
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		int32_t L_620;
		L_620 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_612, L_616)), L_619)), ((int32_t)1548603684))), ((int32_t)15), NULL);
		int32_t L_621 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_620, L_621));
		// cc = RL(cc + F4(dd, ee, aa) + X[3] + unchecked((int)0x5c4dd124), 15) + bb; ee = RL(ee, 10);
		int32_t L_622 = V_9;
		int32_t L_623;
		L_623 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_622, ((int32_t)10), NULL);
		V_9 = L_623;
		// bb = RL(bb + F4(cc, dd, ee) + X[7] + unchecked((int)0x5c4dd124), 7) + aa; dd = RL(dd, 10);
		int32_t L_624 = V_3;
		int32_t L_625 = V_5;
		int32_t L_626 = V_7;
		int32_t L_627 = V_9;
		int32_t L_628;
		L_628 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_625, L_626, L_627, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = __this->___X_15;
		NullCheck(L_629);
		int32_t L_630 = 7;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		int32_t L_632;
		L_632 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_624, L_628)), L_631)), ((int32_t)1548603684))), 7, NULL);
		int32_t L_633 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_632, L_633));
		// bb = RL(bb + F4(cc, dd, ee) + X[7] + unchecked((int)0x5c4dd124), 7) + aa; dd = RL(dd, 10);
		int32_t L_634 = V_7;
		int32_t L_635;
		L_635 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_634, ((int32_t)10), NULL);
		V_7 = L_635;
		// aa = RL(aa + F4(bb, cc, dd) + X[0] + unchecked((int)0x5c4dd124), 12) + ee; cc = RL(cc, 10);
		int32_t L_636 = V_1;
		int32_t L_637 = V_3;
		int32_t L_638 = V_5;
		int32_t L_639 = V_7;
		int32_t L_640;
		L_640 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_637, L_638, L_639, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = __this->___X_15;
		NullCheck(L_641);
		int32_t L_642 = 0;
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		int32_t L_644;
		L_644 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_636, L_640)), L_643)), ((int32_t)1548603684))), ((int32_t)12), NULL);
		int32_t L_645 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_644, L_645));
		// aa = RL(aa + F4(bb, cc, dd) + X[0] + unchecked((int)0x5c4dd124), 12) + ee; cc = RL(cc, 10);
		int32_t L_646 = V_5;
		int32_t L_647;
		L_647 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_646, ((int32_t)10), NULL);
		V_5 = L_647;
		// ee = RL(ee + F4(aa, bb, cc) + X[13] + unchecked((int)0x5c4dd124), 8) + dd; bb = RL(bb, 10);
		int32_t L_648 = V_9;
		int32_t L_649 = V_1;
		int32_t L_650 = V_3;
		int32_t L_651 = V_5;
		int32_t L_652;
		L_652 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_649, L_650, L_651, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_653 = __this->___X_15;
		NullCheck(L_653);
		int32_t L_654 = ((int32_t)13);
		int32_t L_655 = (L_653)->GetAt(static_cast<il2cpp_array_size_t>(L_654));
		int32_t L_656;
		L_656 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_648, L_652)), L_655)), ((int32_t)1548603684))), 8, NULL);
		int32_t L_657 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_656, L_657));
		// ee = RL(ee + F4(aa, bb, cc) + X[13] + unchecked((int)0x5c4dd124), 8) + dd; bb = RL(bb, 10);
		int32_t L_658 = V_3;
		int32_t L_659;
		L_659 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_658, ((int32_t)10), NULL);
		V_3 = L_659;
		// dd = RL(dd + F4(ee, aa, bb) + X[5] + unchecked((int)0x5c4dd124), 9) + cc; aa = RL(aa, 10);
		int32_t L_660 = V_7;
		int32_t L_661 = V_9;
		int32_t L_662 = V_1;
		int32_t L_663 = V_3;
		int32_t L_664;
		L_664 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_661, L_662, L_663, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_665 = __this->___X_15;
		NullCheck(L_665);
		int32_t L_666 = 5;
		int32_t L_667 = (L_665)->GetAt(static_cast<il2cpp_array_size_t>(L_666));
		int32_t L_668;
		L_668 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_660, L_664)), L_667)), ((int32_t)1548603684))), ((int32_t)9), NULL);
		int32_t L_669 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_668, L_669));
		// dd = RL(dd + F4(ee, aa, bb) + X[5] + unchecked((int)0x5c4dd124), 9) + cc; aa = RL(aa, 10);
		int32_t L_670 = V_1;
		int32_t L_671;
		L_671 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_670, ((int32_t)10), NULL);
		V_1 = L_671;
		// cc = RL(cc + F4(dd, ee, aa) + X[10] + unchecked((int)0x5c4dd124), 11) + bb; ee = RL(ee, 10);
		int32_t L_672 = V_5;
		int32_t L_673 = V_7;
		int32_t L_674 = V_9;
		int32_t L_675 = V_1;
		int32_t L_676;
		L_676 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_673, L_674, L_675, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_677 = __this->___X_15;
		NullCheck(L_677);
		int32_t L_678 = ((int32_t)10);
		int32_t L_679 = (L_677)->GetAt(static_cast<il2cpp_array_size_t>(L_678));
		int32_t L_680;
		L_680 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_672, L_676)), L_679)), ((int32_t)1548603684))), ((int32_t)11), NULL);
		int32_t L_681 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_680, L_681));
		// cc = RL(cc + F4(dd, ee, aa) + X[10] + unchecked((int)0x5c4dd124), 11) + bb; ee = RL(ee, 10);
		int32_t L_682 = V_9;
		int32_t L_683;
		L_683 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_682, ((int32_t)10), NULL);
		V_9 = L_683;
		// bb = RL(bb + F4(cc, dd, ee) + X[14] + unchecked((int)0x5c4dd124), 7) + aa; dd = RL(dd, 10);
		int32_t L_684 = V_3;
		int32_t L_685 = V_5;
		int32_t L_686 = V_7;
		int32_t L_687 = V_9;
		int32_t L_688;
		L_688 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_685, L_686, L_687, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = __this->___X_15;
		NullCheck(L_689);
		int32_t L_690 = ((int32_t)14);
		int32_t L_691 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_690));
		int32_t L_692;
		L_692 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_684, L_688)), L_691)), ((int32_t)1548603684))), 7, NULL);
		int32_t L_693 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_692, L_693));
		// bb = RL(bb + F4(cc, dd, ee) + X[14] + unchecked((int)0x5c4dd124), 7) + aa; dd = RL(dd, 10);
		int32_t L_694 = V_7;
		int32_t L_695;
		L_695 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_694, ((int32_t)10), NULL);
		V_7 = L_695;
		// aa = RL(aa + F4(bb, cc, dd) + X[15] + unchecked((int)0x5c4dd124), 7) + ee; cc = RL(cc, 10);
		int32_t L_696 = V_1;
		int32_t L_697 = V_3;
		int32_t L_698 = V_5;
		int32_t L_699 = V_7;
		int32_t L_700;
		L_700 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_697, L_698, L_699, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = __this->___X_15;
		NullCheck(L_701);
		int32_t L_702 = ((int32_t)15);
		int32_t L_703 = (L_701)->GetAt(static_cast<il2cpp_array_size_t>(L_702));
		int32_t L_704;
		L_704 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_696, L_700)), L_703)), ((int32_t)1548603684))), 7, NULL);
		int32_t L_705 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_704, L_705));
		// aa = RL(aa + F4(bb, cc, dd) + X[15] + unchecked((int)0x5c4dd124), 7) + ee; cc = RL(cc, 10);
		int32_t L_706 = V_5;
		int32_t L_707;
		L_707 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_706, ((int32_t)10), NULL);
		V_5 = L_707;
		// ee = RL(ee + F4(aa, bb, cc) + X[8] + unchecked((int)0x5c4dd124), 12) + dd; bb = RL(bb, 10);
		int32_t L_708 = V_9;
		int32_t L_709 = V_1;
		int32_t L_710 = V_3;
		int32_t L_711 = V_5;
		int32_t L_712;
		L_712 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_709, L_710, L_711, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_713 = __this->___X_15;
		NullCheck(L_713);
		int32_t L_714 = 8;
		int32_t L_715 = (L_713)->GetAt(static_cast<il2cpp_array_size_t>(L_714));
		int32_t L_716;
		L_716 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_708, L_712)), L_715)), ((int32_t)1548603684))), ((int32_t)12), NULL);
		int32_t L_717 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_716, L_717));
		// ee = RL(ee + F4(aa, bb, cc) + X[8] + unchecked((int)0x5c4dd124), 12) + dd; bb = RL(bb, 10);
		int32_t L_718 = V_3;
		int32_t L_719;
		L_719 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_718, ((int32_t)10), NULL);
		V_3 = L_719;
		// dd = RL(dd + F4(ee, aa, bb) + X[12] + unchecked((int)0x5c4dd124), 7) + cc; aa = RL(aa, 10);
		int32_t L_720 = V_7;
		int32_t L_721 = V_9;
		int32_t L_722 = V_1;
		int32_t L_723 = V_3;
		int32_t L_724;
		L_724 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_721, L_722, L_723, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_725 = __this->___X_15;
		NullCheck(L_725);
		int32_t L_726 = ((int32_t)12);
		int32_t L_727 = (L_725)->GetAt(static_cast<il2cpp_array_size_t>(L_726));
		int32_t L_728;
		L_728 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_720, L_724)), L_727)), ((int32_t)1548603684))), 7, NULL);
		int32_t L_729 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_728, L_729));
		// dd = RL(dd + F4(ee, aa, bb) + X[12] + unchecked((int)0x5c4dd124), 7) + cc; aa = RL(aa, 10);
		int32_t L_730 = V_1;
		int32_t L_731;
		L_731 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_730, ((int32_t)10), NULL);
		V_1 = L_731;
		// cc = RL(cc + F4(dd, ee, aa) + X[4] + unchecked((int)0x5c4dd124), 6) + bb; ee = RL(ee, 10);
		int32_t L_732 = V_5;
		int32_t L_733 = V_7;
		int32_t L_734 = V_9;
		int32_t L_735 = V_1;
		int32_t L_736;
		L_736 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_733, L_734, L_735, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_737 = __this->___X_15;
		NullCheck(L_737);
		int32_t L_738 = 4;
		int32_t L_739 = (L_737)->GetAt(static_cast<il2cpp_array_size_t>(L_738));
		int32_t L_740;
		L_740 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_732, L_736)), L_739)), ((int32_t)1548603684))), 6, NULL);
		int32_t L_741 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_740, L_741));
		// cc = RL(cc + F4(dd, ee, aa) + X[4] + unchecked((int)0x5c4dd124), 6) + bb; ee = RL(ee, 10);
		int32_t L_742 = V_9;
		int32_t L_743;
		L_743 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_742, ((int32_t)10), NULL);
		V_9 = L_743;
		// bb = RL(bb + F4(cc, dd, ee) + X[9] + unchecked((int)0x5c4dd124), 15) + aa; dd = RL(dd, 10);
		int32_t L_744 = V_3;
		int32_t L_745 = V_5;
		int32_t L_746 = V_7;
		int32_t L_747 = V_9;
		int32_t L_748;
		L_748 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_745, L_746, L_747, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_749 = __this->___X_15;
		NullCheck(L_749);
		int32_t L_750 = ((int32_t)9);
		int32_t L_751 = (L_749)->GetAt(static_cast<il2cpp_array_size_t>(L_750));
		int32_t L_752;
		L_752 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_744, L_748)), L_751)), ((int32_t)1548603684))), ((int32_t)15), NULL);
		int32_t L_753 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_752, L_753));
		// bb = RL(bb + F4(cc, dd, ee) + X[9] + unchecked((int)0x5c4dd124), 15) + aa; dd = RL(dd, 10);
		int32_t L_754 = V_7;
		int32_t L_755;
		L_755 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_754, ((int32_t)10), NULL);
		V_7 = L_755;
		// aa = RL(aa + F4(bb, cc, dd) + X[1] + unchecked((int)0x5c4dd124), 13) + ee; cc = RL(cc, 10);
		int32_t L_756 = V_1;
		int32_t L_757 = V_3;
		int32_t L_758 = V_5;
		int32_t L_759 = V_7;
		int32_t L_760;
		L_760 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_757, L_758, L_759, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_761 = __this->___X_15;
		NullCheck(L_761);
		int32_t L_762 = 1;
		int32_t L_763 = (L_761)->GetAt(static_cast<il2cpp_array_size_t>(L_762));
		int32_t L_764;
		L_764 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_756, L_760)), L_763)), ((int32_t)1548603684))), ((int32_t)13), NULL);
		int32_t L_765 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_764, L_765));
		// aa = RL(aa + F4(bb, cc, dd) + X[1] + unchecked((int)0x5c4dd124), 13) + ee; cc = RL(cc, 10);
		int32_t L_766 = V_5;
		int32_t L_767;
		L_767 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_766, ((int32_t)10), NULL);
		V_5 = L_767;
		// ee = RL(ee + F4(aa, bb, cc) + X[2] + unchecked((int)0x5c4dd124), 11) + dd; bb = RL(bb, 10);
		int32_t L_768 = V_9;
		int32_t L_769 = V_1;
		int32_t L_770 = V_3;
		int32_t L_771 = V_5;
		int32_t L_772;
		L_772 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_769, L_770, L_771, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_773 = __this->___X_15;
		NullCheck(L_773);
		int32_t L_774 = 2;
		int32_t L_775 = (L_773)->GetAt(static_cast<il2cpp_array_size_t>(L_774));
		int32_t L_776;
		L_776 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_768, L_772)), L_775)), ((int32_t)1548603684))), ((int32_t)11), NULL);
		int32_t L_777 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_776, L_777));
		// ee = RL(ee + F4(aa, bb, cc) + X[2] + unchecked((int)0x5c4dd124), 11) + dd; bb = RL(bb, 10);
		int32_t L_778 = V_3;
		int32_t L_779;
		L_779 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_778, ((int32_t)10), NULL);
		V_3 = L_779;
		// t = b; b = bb; bb = t;
		int32_t L_780 = V_2;
		// t = b; b = bb; bb = t;
		int32_t L_781 = V_3;
		V_2 = L_781;
		// t = b; b = bb; bb = t;
		V_3 = L_780;
		// d = RL(d + F3(e, a, b) + X[3] + unchecked((int)0x6ed9eba1), 11) + c; a = RL(a, 10);
		int32_t L_782 = V_6;
		int32_t L_783 = V_8;
		int32_t L_784 = V_0;
		int32_t L_785 = V_2;
		int32_t L_786;
		L_786 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_783, L_784, L_785, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_787 = __this->___X_15;
		NullCheck(L_787);
		int32_t L_788 = 3;
		int32_t L_789 = (L_787)->GetAt(static_cast<il2cpp_array_size_t>(L_788));
		int32_t L_790;
		L_790 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_782, L_786)), L_789)), ((int32_t)1859775393))), ((int32_t)11), NULL);
		int32_t L_791 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_790, L_791));
		// d = RL(d + F3(e, a, b) + X[3] + unchecked((int)0x6ed9eba1), 11) + c; a = RL(a, 10);
		int32_t L_792 = V_0;
		int32_t L_793;
		L_793 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_792, ((int32_t)10), NULL);
		V_0 = L_793;
		// c = RL(c + F3(d, e, a) + X[10] + unchecked((int)0x6ed9eba1), 13) + b; e = RL(e, 10);
		int32_t L_794 = V_4;
		int32_t L_795 = V_6;
		int32_t L_796 = V_8;
		int32_t L_797 = V_0;
		int32_t L_798;
		L_798 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_795, L_796, L_797, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_799 = __this->___X_15;
		NullCheck(L_799);
		int32_t L_800 = ((int32_t)10);
		int32_t L_801 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_800));
		int32_t L_802;
		L_802 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_794, L_798)), L_801)), ((int32_t)1859775393))), ((int32_t)13), NULL);
		int32_t L_803 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_802, L_803));
		// c = RL(c + F3(d, e, a) + X[10] + unchecked((int)0x6ed9eba1), 13) + b; e = RL(e, 10);
		int32_t L_804 = V_8;
		int32_t L_805;
		L_805 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_804, ((int32_t)10), NULL);
		V_8 = L_805;
		// b = RL(b + F3(c, d, e) + X[14] + unchecked((int)0x6ed9eba1), 6) + a; d = RL(d, 10);
		int32_t L_806 = V_2;
		int32_t L_807 = V_4;
		int32_t L_808 = V_6;
		int32_t L_809 = V_8;
		int32_t L_810;
		L_810 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_807, L_808, L_809, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_811 = __this->___X_15;
		NullCheck(L_811);
		int32_t L_812 = ((int32_t)14);
		int32_t L_813 = (L_811)->GetAt(static_cast<il2cpp_array_size_t>(L_812));
		int32_t L_814;
		L_814 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_806, L_810)), L_813)), ((int32_t)1859775393))), 6, NULL);
		int32_t L_815 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_814, L_815));
		// b = RL(b + F3(c, d, e) + X[14] + unchecked((int)0x6ed9eba1), 6) + a; d = RL(d, 10);
		int32_t L_816 = V_6;
		int32_t L_817;
		L_817 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_816, ((int32_t)10), NULL);
		V_6 = L_817;
		// a = RL(a + F3(b, c, d) + X[4] + unchecked((int)0x6ed9eba1), 7) + e; c = RL(c, 10);
		int32_t L_818 = V_0;
		int32_t L_819 = V_2;
		int32_t L_820 = V_4;
		int32_t L_821 = V_6;
		int32_t L_822;
		L_822 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_819, L_820, L_821, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_823 = __this->___X_15;
		NullCheck(L_823);
		int32_t L_824 = 4;
		int32_t L_825 = (L_823)->GetAt(static_cast<il2cpp_array_size_t>(L_824));
		int32_t L_826;
		L_826 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_818, L_822)), L_825)), ((int32_t)1859775393))), 7, NULL);
		int32_t L_827 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_826, L_827));
		// a = RL(a + F3(b, c, d) + X[4] + unchecked((int)0x6ed9eba1), 7) + e; c = RL(c, 10);
		int32_t L_828 = V_4;
		int32_t L_829;
		L_829 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_828, ((int32_t)10), NULL);
		V_4 = L_829;
		// e = RL(e + F3(a, b, c) + X[9] + unchecked((int)0x6ed9eba1), 14) + d; b = RL(b, 10);
		int32_t L_830 = V_8;
		int32_t L_831 = V_0;
		int32_t L_832 = V_2;
		int32_t L_833 = V_4;
		int32_t L_834;
		L_834 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_831, L_832, L_833, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_835 = __this->___X_15;
		NullCheck(L_835);
		int32_t L_836 = ((int32_t)9);
		int32_t L_837 = (L_835)->GetAt(static_cast<il2cpp_array_size_t>(L_836));
		int32_t L_838;
		L_838 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_830, L_834)), L_837)), ((int32_t)1859775393))), ((int32_t)14), NULL);
		int32_t L_839 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_838, L_839));
		// e = RL(e + F3(a, b, c) + X[9] + unchecked((int)0x6ed9eba1), 14) + d; b = RL(b, 10);
		int32_t L_840 = V_2;
		int32_t L_841;
		L_841 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_840, ((int32_t)10), NULL);
		V_2 = L_841;
		// d = RL(d + F3(e, a, b) + X[15] + unchecked((int)0x6ed9eba1), 9) + c; a = RL(a, 10);
		int32_t L_842 = V_6;
		int32_t L_843 = V_8;
		int32_t L_844 = V_0;
		int32_t L_845 = V_2;
		int32_t L_846;
		L_846 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_843, L_844, L_845, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_847 = __this->___X_15;
		NullCheck(L_847);
		int32_t L_848 = ((int32_t)15);
		int32_t L_849 = (L_847)->GetAt(static_cast<il2cpp_array_size_t>(L_848));
		int32_t L_850;
		L_850 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_842, L_846)), L_849)), ((int32_t)1859775393))), ((int32_t)9), NULL);
		int32_t L_851 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_850, L_851));
		// d = RL(d + F3(e, a, b) + X[15] + unchecked((int)0x6ed9eba1), 9) + c; a = RL(a, 10);
		int32_t L_852 = V_0;
		int32_t L_853;
		L_853 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_852, ((int32_t)10), NULL);
		V_0 = L_853;
		// c = RL(c + F3(d, e, a) + X[8] + unchecked((int)0x6ed9eba1), 13) + b; e = RL(e, 10);
		int32_t L_854 = V_4;
		int32_t L_855 = V_6;
		int32_t L_856 = V_8;
		int32_t L_857 = V_0;
		int32_t L_858;
		L_858 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_855, L_856, L_857, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_859 = __this->___X_15;
		NullCheck(L_859);
		int32_t L_860 = 8;
		int32_t L_861 = (L_859)->GetAt(static_cast<il2cpp_array_size_t>(L_860));
		int32_t L_862;
		L_862 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_854, L_858)), L_861)), ((int32_t)1859775393))), ((int32_t)13), NULL);
		int32_t L_863 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_862, L_863));
		// c = RL(c + F3(d, e, a) + X[8] + unchecked((int)0x6ed9eba1), 13) + b; e = RL(e, 10);
		int32_t L_864 = V_8;
		int32_t L_865;
		L_865 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_864, ((int32_t)10), NULL);
		V_8 = L_865;
		// b = RL(b + F3(c, d, e) + X[1] + unchecked((int)0x6ed9eba1), 15) + a; d = RL(d, 10);
		int32_t L_866 = V_2;
		int32_t L_867 = V_4;
		int32_t L_868 = V_6;
		int32_t L_869 = V_8;
		int32_t L_870;
		L_870 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_867, L_868, L_869, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_871 = __this->___X_15;
		NullCheck(L_871);
		int32_t L_872 = 1;
		int32_t L_873 = (L_871)->GetAt(static_cast<il2cpp_array_size_t>(L_872));
		int32_t L_874;
		L_874 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_866, L_870)), L_873)), ((int32_t)1859775393))), ((int32_t)15), NULL);
		int32_t L_875 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_874, L_875));
		// b = RL(b + F3(c, d, e) + X[1] + unchecked((int)0x6ed9eba1), 15) + a; d = RL(d, 10);
		int32_t L_876 = V_6;
		int32_t L_877;
		L_877 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_876, ((int32_t)10), NULL);
		V_6 = L_877;
		// a = RL(a + F3(b, c, d) + X[2] + unchecked((int)0x6ed9eba1), 14) + e; c = RL(c, 10);
		int32_t L_878 = V_0;
		int32_t L_879 = V_2;
		int32_t L_880 = V_4;
		int32_t L_881 = V_6;
		int32_t L_882;
		L_882 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_879, L_880, L_881, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_883 = __this->___X_15;
		NullCheck(L_883);
		int32_t L_884 = 2;
		int32_t L_885 = (L_883)->GetAt(static_cast<il2cpp_array_size_t>(L_884));
		int32_t L_886;
		L_886 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_878, L_882)), L_885)), ((int32_t)1859775393))), ((int32_t)14), NULL);
		int32_t L_887 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_886, L_887));
		// a = RL(a + F3(b, c, d) + X[2] + unchecked((int)0x6ed9eba1), 14) + e; c = RL(c, 10);
		int32_t L_888 = V_4;
		int32_t L_889;
		L_889 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_888, ((int32_t)10), NULL);
		V_4 = L_889;
		// e = RL(e + F3(a, b, c) + X[7] + unchecked((int)0x6ed9eba1), 8) + d; b = RL(b, 10);
		int32_t L_890 = V_8;
		int32_t L_891 = V_0;
		int32_t L_892 = V_2;
		int32_t L_893 = V_4;
		int32_t L_894;
		L_894 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_891, L_892, L_893, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_895 = __this->___X_15;
		NullCheck(L_895);
		int32_t L_896 = 7;
		int32_t L_897 = (L_895)->GetAt(static_cast<il2cpp_array_size_t>(L_896));
		int32_t L_898;
		L_898 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_890, L_894)), L_897)), ((int32_t)1859775393))), 8, NULL);
		int32_t L_899 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_898, L_899));
		// e = RL(e + F3(a, b, c) + X[7] + unchecked((int)0x6ed9eba1), 8) + d; b = RL(b, 10);
		int32_t L_900 = V_2;
		int32_t L_901;
		L_901 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_900, ((int32_t)10), NULL);
		V_2 = L_901;
		// d = RL(d + F3(e, a, b) + X[0] + unchecked((int)0x6ed9eba1), 13) + c; a = RL(a, 10);
		int32_t L_902 = V_6;
		int32_t L_903 = V_8;
		int32_t L_904 = V_0;
		int32_t L_905 = V_2;
		int32_t L_906;
		L_906 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_903, L_904, L_905, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_907 = __this->___X_15;
		NullCheck(L_907);
		int32_t L_908 = 0;
		int32_t L_909 = (L_907)->GetAt(static_cast<il2cpp_array_size_t>(L_908));
		int32_t L_910;
		L_910 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_902, L_906)), L_909)), ((int32_t)1859775393))), ((int32_t)13), NULL);
		int32_t L_911 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_910, L_911));
		// d = RL(d + F3(e, a, b) + X[0] + unchecked((int)0x6ed9eba1), 13) + c; a = RL(a, 10);
		int32_t L_912 = V_0;
		int32_t L_913;
		L_913 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_912, ((int32_t)10), NULL);
		V_0 = L_913;
		// c = RL(c + F3(d, e, a) + X[6] + unchecked((int)0x6ed9eba1), 6) + b; e = RL(e, 10);
		int32_t L_914 = V_4;
		int32_t L_915 = V_6;
		int32_t L_916 = V_8;
		int32_t L_917 = V_0;
		int32_t L_918;
		L_918 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_915, L_916, L_917, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_919 = __this->___X_15;
		NullCheck(L_919);
		int32_t L_920 = 6;
		int32_t L_921 = (L_919)->GetAt(static_cast<il2cpp_array_size_t>(L_920));
		int32_t L_922;
		L_922 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_914, L_918)), L_921)), ((int32_t)1859775393))), 6, NULL);
		int32_t L_923 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_922, L_923));
		// c = RL(c + F3(d, e, a) + X[6] + unchecked((int)0x6ed9eba1), 6) + b; e = RL(e, 10);
		int32_t L_924 = V_8;
		int32_t L_925;
		L_925 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_924, ((int32_t)10), NULL);
		V_8 = L_925;
		// b = RL(b + F3(c, d, e) + X[13] + unchecked((int)0x6ed9eba1), 5) + a; d = RL(d, 10);
		int32_t L_926 = V_2;
		int32_t L_927 = V_4;
		int32_t L_928 = V_6;
		int32_t L_929 = V_8;
		int32_t L_930;
		L_930 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_927, L_928, L_929, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_931 = __this->___X_15;
		NullCheck(L_931);
		int32_t L_932 = ((int32_t)13);
		int32_t L_933 = (L_931)->GetAt(static_cast<il2cpp_array_size_t>(L_932));
		int32_t L_934;
		L_934 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_926, L_930)), L_933)), ((int32_t)1859775393))), 5, NULL);
		int32_t L_935 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_934, L_935));
		// b = RL(b + F3(c, d, e) + X[13] + unchecked((int)0x6ed9eba1), 5) + a; d = RL(d, 10);
		int32_t L_936 = V_6;
		int32_t L_937;
		L_937 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_936, ((int32_t)10), NULL);
		V_6 = L_937;
		// a = RL(a + F3(b, c, d) + X[11] + unchecked((int)0x6ed9eba1), 12) + e; c = RL(c, 10);
		int32_t L_938 = V_0;
		int32_t L_939 = V_2;
		int32_t L_940 = V_4;
		int32_t L_941 = V_6;
		int32_t L_942;
		L_942 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_939, L_940, L_941, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_943 = __this->___X_15;
		NullCheck(L_943);
		int32_t L_944 = ((int32_t)11);
		int32_t L_945 = (L_943)->GetAt(static_cast<il2cpp_array_size_t>(L_944));
		int32_t L_946;
		L_946 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_938, L_942)), L_945)), ((int32_t)1859775393))), ((int32_t)12), NULL);
		int32_t L_947 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_946, L_947));
		// a = RL(a + F3(b, c, d) + X[11] + unchecked((int)0x6ed9eba1), 12) + e; c = RL(c, 10);
		int32_t L_948 = V_4;
		int32_t L_949;
		L_949 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_948, ((int32_t)10), NULL);
		V_4 = L_949;
		// e = RL(e + F3(a, b, c) + X[5] + unchecked((int)0x6ed9eba1), 7) + d; b = RL(b, 10);
		int32_t L_950 = V_8;
		int32_t L_951 = V_0;
		int32_t L_952 = V_2;
		int32_t L_953 = V_4;
		int32_t L_954;
		L_954 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_951, L_952, L_953, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_955 = __this->___X_15;
		NullCheck(L_955);
		int32_t L_956 = 5;
		int32_t L_957 = (L_955)->GetAt(static_cast<il2cpp_array_size_t>(L_956));
		int32_t L_958;
		L_958 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_950, L_954)), L_957)), ((int32_t)1859775393))), 7, NULL);
		int32_t L_959 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_958, L_959));
		// e = RL(e + F3(a, b, c) + X[5] + unchecked((int)0x6ed9eba1), 7) + d; b = RL(b, 10);
		int32_t L_960 = V_2;
		int32_t L_961;
		L_961 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_960, ((int32_t)10), NULL);
		V_2 = L_961;
		// d = RL(d + F3(e, a, b) + X[12] + unchecked((int)0x6ed9eba1), 5) + c; a = RL(a, 10);
		int32_t L_962 = V_6;
		int32_t L_963 = V_8;
		int32_t L_964 = V_0;
		int32_t L_965 = V_2;
		int32_t L_966;
		L_966 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_963, L_964, L_965, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_967 = __this->___X_15;
		NullCheck(L_967);
		int32_t L_968 = ((int32_t)12);
		int32_t L_969 = (L_967)->GetAt(static_cast<il2cpp_array_size_t>(L_968));
		int32_t L_970;
		L_970 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_962, L_966)), L_969)), ((int32_t)1859775393))), 5, NULL);
		int32_t L_971 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_970, L_971));
		// d = RL(d + F3(e, a, b) + X[12] + unchecked((int)0x6ed9eba1), 5) + c; a = RL(a, 10);
		int32_t L_972 = V_0;
		int32_t L_973;
		L_973 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_972, ((int32_t)10), NULL);
		V_0 = L_973;
		// dd = RL(dd + F3(ee, aa, bb) + X[15] + unchecked((int)0x6d703ef3), 9) + cc; aa = RL(aa, 10);
		int32_t L_974 = V_7;
		int32_t L_975 = V_9;
		int32_t L_976 = V_1;
		int32_t L_977 = V_3;
		int32_t L_978;
		L_978 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_975, L_976, L_977, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_979 = __this->___X_15;
		NullCheck(L_979);
		int32_t L_980 = ((int32_t)15);
		int32_t L_981 = (L_979)->GetAt(static_cast<il2cpp_array_size_t>(L_980));
		int32_t L_982;
		L_982 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_974, L_978)), L_981)), ((int32_t)1836072691))), ((int32_t)9), NULL);
		int32_t L_983 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_982, L_983));
		// dd = RL(dd + F3(ee, aa, bb) + X[15] + unchecked((int)0x6d703ef3), 9) + cc; aa = RL(aa, 10);
		int32_t L_984 = V_1;
		int32_t L_985;
		L_985 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_984, ((int32_t)10), NULL);
		V_1 = L_985;
		// cc = RL(cc + F3(dd, ee, aa) + X[5] + unchecked((int)0x6d703ef3), 7) + bb; ee = RL(ee, 10);
		int32_t L_986 = V_5;
		int32_t L_987 = V_7;
		int32_t L_988 = V_9;
		int32_t L_989 = V_1;
		int32_t L_990;
		L_990 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_987, L_988, L_989, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_991 = __this->___X_15;
		NullCheck(L_991);
		int32_t L_992 = 5;
		int32_t L_993 = (L_991)->GetAt(static_cast<il2cpp_array_size_t>(L_992));
		int32_t L_994;
		L_994 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_986, L_990)), L_993)), ((int32_t)1836072691))), 7, NULL);
		int32_t L_995 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_994, L_995));
		// cc = RL(cc + F3(dd, ee, aa) + X[5] + unchecked((int)0x6d703ef3), 7) + bb; ee = RL(ee, 10);
		int32_t L_996 = V_9;
		int32_t L_997;
		L_997 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_996, ((int32_t)10), NULL);
		V_9 = L_997;
		// bb = RL(bb + F3(cc, dd, ee) + X[1] + unchecked((int)0x6d703ef3), 15) + aa; dd = RL(dd, 10);
		int32_t L_998 = V_3;
		int32_t L_999 = V_5;
		int32_t L_1000 = V_7;
		int32_t L_1001 = V_9;
		int32_t L_1002;
		L_1002 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_999, L_1000, L_1001, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1003 = __this->___X_15;
		NullCheck(L_1003);
		int32_t L_1004 = 1;
		int32_t L_1005 = (L_1003)->GetAt(static_cast<il2cpp_array_size_t>(L_1004));
		int32_t L_1006;
		L_1006 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_998, L_1002)), L_1005)), ((int32_t)1836072691))), ((int32_t)15), NULL);
		int32_t L_1007 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1006, L_1007));
		// bb = RL(bb + F3(cc, dd, ee) + X[1] + unchecked((int)0x6d703ef3), 15) + aa; dd = RL(dd, 10);
		int32_t L_1008 = V_7;
		int32_t L_1009;
		L_1009 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1008, ((int32_t)10), NULL);
		V_7 = L_1009;
		// aa = RL(aa + F3(bb, cc, dd) + X[3] + unchecked((int)0x6d703ef3), 11) + ee; cc = RL(cc, 10);
		int32_t L_1010 = V_1;
		int32_t L_1011 = V_3;
		int32_t L_1012 = V_5;
		int32_t L_1013 = V_7;
		int32_t L_1014;
		L_1014 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1011, L_1012, L_1013, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1015 = __this->___X_15;
		NullCheck(L_1015);
		int32_t L_1016 = 3;
		int32_t L_1017 = (L_1015)->GetAt(static_cast<il2cpp_array_size_t>(L_1016));
		int32_t L_1018;
		L_1018 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1010, L_1014)), L_1017)), ((int32_t)1836072691))), ((int32_t)11), NULL);
		int32_t L_1019 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1018, L_1019));
		// aa = RL(aa + F3(bb, cc, dd) + X[3] + unchecked((int)0x6d703ef3), 11) + ee; cc = RL(cc, 10);
		int32_t L_1020 = V_5;
		int32_t L_1021;
		L_1021 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1020, ((int32_t)10), NULL);
		V_5 = L_1021;
		// ee = RL(ee + F3(aa, bb, cc) + X[7] + unchecked((int)0x6d703ef3), 8) + dd; bb = RL(bb, 10);
		int32_t L_1022 = V_9;
		int32_t L_1023 = V_1;
		int32_t L_1024 = V_3;
		int32_t L_1025 = V_5;
		int32_t L_1026;
		L_1026 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1023, L_1024, L_1025, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1027 = __this->___X_15;
		NullCheck(L_1027);
		int32_t L_1028 = 7;
		int32_t L_1029 = (L_1027)->GetAt(static_cast<il2cpp_array_size_t>(L_1028));
		int32_t L_1030;
		L_1030 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1022, L_1026)), L_1029)), ((int32_t)1836072691))), 8, NULL);
		int32_t L_1031 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1030, L_1031));
		// ee = RL(ee + F3(aa, bb, cc) + X[7] + unchecked((int)0x6d703ef3), 8) + dd; bb = RL(bb, 10);
		int32_t L_1032 = V_3;
		int32_t L_1033;
		L_1033 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1032, ((int32_t)10), NULL);
		V_3 = L_1033;
		// dd = RL(dd + F3(ee, aa, bb) + X[14] + unchecked((int)0x6d703ef3), 6) + cc; aa = RL(aa, 10);
		int32_t L_1034 = V_7;
		int32_t L_1035 = V_9;
		int32_t L_1036 = V_1;
		int32_t L_1037 = V_3;
		int32_t L_1038;
		L_1038 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1035, L_1036, L_1037, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1039 = __this->___X_15;
		NullCheck(L_1039);
		int32_t L_1040 = ((int32_t)14);
		int32_t L_1041 = (L_1039)->GetAt(static_cast<il2cpp_array_size_t>(L_1040));
		int32_t L_1042;
		L_1042 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1034, L_1038)), L_1041)), ((int32_t)1836072691))), 6, NULL);
		int32_t L_1043 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1042, L_1043));
		// dd = RL(dd + F3(ee, aa, bb) + X[14] + unchecked((int)0x6d703ef3), 6) + cc; aa = RL(aa, 10);
		int32_t L_1044 = V_1;
		int32_t L_1045;
		L_1045 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1044, ((int32_t)10), NULL);
		V_1 = L_1045;
		// cc = RL(cc + F3(dd, ee, aa) + X[6] + unchecked((int)0x6d703ef3), 6) + bb; ee = RL(ee, 10);
		int32_t L_1046 = V_5;
		int32_t L_1047 = V_7;
		int32_t L_1048 = V_9;
		int32_t L_1049 = V_1;
		int32_t L_1050;
		L_1050 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1047, L_1048, L_1049, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1051 = __this->___X_15;
		NullCheck(L_1051);
		int32_t L_1052 = 6;
		int32_t L_1053 = (L_1051)->GetAt(static_cast<il2cpp_array_size_t>(L_1052));
		int32_t L_1054;
		L_1054 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1046, L_1050)), L_1053)), ((int32_t)1836072691))), 6, NULL);
		int32_t L_1055 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1054, L_1055));
		// cc = RL(cc + F3(dd, ee, aa) + X[6] + unchecked((int)0x6d703ef3), 6) + bb; ee = RL(ee, 10);
		int32_t L_1056 = V_9;
		int32_t L_1057;
		L_1057 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1056, ((int32_t)10), NULL);
		V_9 = L_1057;
		// bb = RL(bb + F3(cc, dd, ee) + X[9] + unchecked((int)0x6d703ef3), 14) + aa; dd = RL(dd, 10);
		int32_t L_1058 = V_3;
		int32_t L_1059 = V_5;
		int32_t L_1060 = V_7;
		int32_t L_1061 = V_9;
		int32_t L_1062;
		L_1062 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1059, L_1060, L_1061, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1063 = __this->___X_15;
		NullCheck(L_1063);
		int32_t L_1064 = ((int32_t)9);
		int32_t L_1065 = (L_1063)->GetAt(static_cast<il2cpp_array_size_t>(L_1064));
		int32_t L_1066;
		L_1066 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1058, L_1062)), L_1065)), ((int32_t)1836072691))), ((int32_t)14), NULL);
		int32_t L_1067 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1066, L_1067));
		// bb = RL(bb + F3(cc, dd, ee) + X[9] + unchecked((int)0x6d703ef3), 14) + aa; dd = RL(dd, 10);
		int32_t L_1068 = V_7;
		int32_t L_1069;
		L_1069 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1068, ((int32_t)10), NULL);
		V_7 = L_1069;
		// aa = RL(aa + F3(bb, cc, dd) + X[11] + unchecked((int)0x6d703ef3), 12) + ee; cc = RL(cc, 10);
		int32_t L_1070 = V_1;
		int32_t L_1071 = V_3;
		int32_t L_1072 = V_5;
		int32_t L_1073 = V_7;
		int32_t L_1074;
		L_1074 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1071, L_1072, L_1073, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1075 = __this->___X_15;
		NullCheck(L_1075);
		int32_t L_1076 = ((int32_t)11);
		int32_t L_1077 = (L_1075)->GetAt(static_cast<il2cpp_array_size_t>(L_1076));
		int32_t L_1078;
		L_1078 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1070, L_1074)), L_1077)), ((int32_t)1836072691))), ((int32_t)12), NULL);
		int32_t L_1079 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1078, L_1079));
		// aa = RL(aa + F3(bb, cc, dd) + X[11] + unchecked((int)0x6d703ef3), 12) + ee; cc = RL(cc, 10);
		int32_t L_1080 = V_5;
		int32_t L_1081;
		L_1081 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1080, ((int32_t)10), NULL);
		V_5 = L_1081;
		// ee = RL(ee + F3(aa, bb, cc) + X[8] + unchecked((int)0x6d703ef3), 13) + dd; bb = RL(bb, 10);
		int32_t L_1082 = V_9;
		int32_t L_1083 = V_1;
		int32_t L_1084 = V_3;
		int32_t L_1085 = V_5;
		int32_t L_1086;
		L_1086 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1083, L_1084, L_1085, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1087 = __this->___X_15;
		NullCheck(L_1087);
		int32_t L_1088 = 8;
		int32_t L_1089 = (L_1087)->GetAt(static_cast<il2cpp_array_size_t>(L_1088));
		int32_t L_1090;
		L_1090 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1082, L_1086)), L_1089)), ((int32_t)1836072691))), ((int32_t)13), NULL);
		int32_t L_1091 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1090, L_1091));
		// ee = RL(ee + F3(aa, bb, cc) + X[8] + unchecked((int)0x6d703ef3), 13) + dd; bb = RL(bb, 10);
		int32_t L_1092 = V_3;
		int32_t L_1093;
		L_1093 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1092, ((int32_t)10), NULL);
		V_3 = L_1093;
		// dd = RL(dd + F3(ee, aa, bb) + X[12] + unchecked((int)0x6d703ef3), 5) + cc; aa = RL(aa, 10);
		int32_t L_1094 = V_7;
		int32_t L_1095 = V_9;
		int32_t L_1096 = V_1;
		int32_t L_1097 = V_3;
		int32_t L_1098;
		L_1098 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1095, L_1096, L_1097, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1099 = __this->___X_15;
		NullCheck(L_1099);
		int32_t L_1100 = ((int32_t)12);
		int32_t L_1101 = (L_1099)->GetAt(static_cast<il2cpp_array_size_t>(L_1100));
		int32_t L_1102;
		L_1102 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1094, L_1098)), L_1101)), ((int32_t)1836072691))), 5, NULL);
		int32_t L_1103 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1102, L_1103));
		// dd = RL(dd + F3(ee, aa, bb) + X[12] + unchecked((int)0x6d703ef3), 5) + cc; aa = RL(aa, 10);
		int32_t L_1104 = V_1;
		int32_t L_1105;
		L_1105 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1104, ((int32_t)10), NULL);
		V_1 = L_1105;
		// cc = RL(cc + F3(dd, ee, aa) + X[2] + unchecked((int)0x6d703ef3), 14) + bb; ee = RL(ee, 10);
		int32_t L_1106 = V_5;
		int32_t L_1107 = V_7;
		int32_t L_1108 = V_9;
		int32_t L_1109 = V_1;
		int32_t L_1110;
		L_1110 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1107, L_1108, L_1109, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1111 = __this->___X_15;
		NullCheck(L_1111);
		int32_t L_1112 = 2;
		int32_t L_1113 = (L_1111)->GetAt(static_cast<il2cpp_array_size_t>(L_1112));
		int32_t L_1114;
		L_1114 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1106, L_1110)), L_1113)), ((int32_t)1836072691))), ((int32_t)14), NULL);
		int32_t L_1115 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1114, L_1115));
		// cc = RL(cc + F3(dd, ee, aa) + X[2] + unchecked((int)0x6d703ef3), 14) + bb; ee = RL(ee, 10);
		int32_t L_1116 = V_9;
		int32_t L_1117;
		L_1117 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1116, ((int32_t)10), NULL);
		V_9 = L_1117;
		// bb = RL(bb + F3(cc, dd, ee) + X[10] + unchecked((int)0x6d703ef3), 13) + aa; dd = RL(dd, 10);
		int32_t L_1118 = V_3;
		int32_t L_1119 = V_5;
		int32_t L_1120 = V_7;
		int32_t L_1121 = V_9;
		int32_t L_1122;
		L_1122 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1119, L_1120, L_1121, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1123 = __this->___X_15;
		NullCheck(L_1123);
		int32_t L_1124 = ((int32_t)10);
		int32_t L_1125 = (L_1123)->GetAt(static_cast<il2cpp_array_size_t>(L_1124));
		int32_t L_1126;
		L_1126 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1118, L_1122)), L_1125)), ((int32_t)1836072691))), ((int32_t)13), NULL);
		int32_t L_1127 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1126, L_1127));
		// bb = RL(bb + F3(cc, dd, ee) + X[10] + unchecked((int)0x6d703ef3), 13) + aa; dd = RL(dd, 10);
		int32_t L_1128 = V_7;
		int32_t L_1129;
		L_1129 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1128, ((int32_t)10), NULL);
		V_7 = L_1129;
		// aa = RL(aa + F3(bb, cc, dd) + X[0] + unchecked((int)0x6d703ef3), 13) + ee; cc = RL(cc, 10);
		int32_t L_1130 = V_1;
		int32_t L_1131 = V_3;
		int32_t L_1132 = V_5;
		int32_t L_1133 = V_7;
		int32_t L_1134;
		L_1134 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1131, L_1132, L_1133, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1135 = __this->___X_15;
		NullCheck(L_1135);
		int32_t L_1136 = 0;
		int32_t L_1137 = (L_1135)->GetAt(static_cast<il2cpp_array_size_t>(L_1136));
		int32_t L_1138;
		L_1138 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1130, L_1134)), L_1137)), ((int32_t)1836072691))), ((int32_t)13), NULL);
		int32_t L_1139 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1138, L_1139));
		// aa = RL(aa + F3(bb, cc, dd) + X[0] + unchecked((int)0x6d703ef3), 13) + ee; cc = RL(cc, 10);
		int32_t L_1140 = V_5;
		int32_t L_1141;
		L_1141 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1140, ((int32_t)10), NULL);
		V_5 = L_1141;
		// ee = RL(ee + F3(aa, bb, cc) + X[4] + unchecked((int)0x6d703ef3), 7) + dd; bb = RL(bb, 10);
		int32_t L_1142 = V_9;
		int32_t L_1143 = V_1;
		int32_t L_1144 = V_3;
		int32_t L_1145 = V_5;
		int32_t L_1146;
		L_1146 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1143, L_1144, L_1145, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1147 = __this->___X_15;
		NullCheck(L_1147);
		int32_t L_1148 = 4;
		int32_t L_1149 = (L_1147)->GetAt(static_cast<il2cpp_array_size_t>(L_1148));
		int32_t L_1150;
		L_1150 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1142, L_1146)), L_1149)), ((int32_t)1836072691))), 7, NULL);
		int32_t L_1151 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1150, L_1151));
		// ee = RL(ee + F3(aa, bb, cc) + X[4] + unchecked((int)0x6d703ef3), 7) + dd; bb = RL(bb, 10);
		int32_t L_1152 = V_3;
		int32_t L_1153;
		L_1153 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1152, ((int32_t)10), NULL);
		V_3 = L_1153;
		// dd = RL(dd + F3(ee, aa, bb) + X[13] + unchecked((int)0x6d703ef3), 5) + cc; aa = RL(aa, 10);
		int32_t L_1154 = V_7;
		int32_t L_1155 = V_9;
		int32_t L_1156 = V_1;
		int32_t L_1157 = V_3;
		int32_t L_1158;
		L_1158 = RipeMD320Digest_F3_m1E561A12BE5CB3957905B6C17081B01DFB802D4E(__this, L_1155, L_1156, L_1157, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1159 = __this->___X_15;
		NullCheck(L_1159);
		int32_t L_1160 = ((int32_t)13);
		int32_t L_1161 = (L_1159)->GetAt(static_cast<il2cpp_array_size_t>(L_1160));
		int32_t L_1162;
		L_1162 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1154, L_1158)), L_1161)), ((int32_t)1836072691))), 5, NULL);
		int32_t L_1163 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1162, L_1163));
		// dd = RL(dd + F3(ee, aa, bb) + X[13] + unchecked((int)0x6d703ef3), 5) + cc; aa = RL(aa, 10);
		int32_t L_1164 = V_1;
		int32_t L_1165;
		L_1165 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1164, ((int32_t)10), NULL);
		V_1 = L_1165;
		// t = c; c = cc; cc = t;
		int32_t L_1166 = V_4;
		// t = c; c = cc; cc = t;
		int32_t L_1167 = V_5;
		V_4 = L_1167;
		// t = c; c = cc; cc = t;
		V_5 = L_1166;
		// c = RL(c + F4(d, e, a) + X[1] + unchecked((int)0x8f1bbcdc), 11) + b; e = RL(e, 10);
		int32_t L_1168 = V_4;
		int32_t L_1169 = V_6;
		int32_t L_1170 = V_8;
		int32_t L_1171 = V_0;
		int32_t L_1172;
		L_1172 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1169, L_1170, L_1171, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1173 = __this->___X_15;
		NullCheck(L_1173);
		int32_t L_1174 = 1;
		int32_t L_1175 = (L_1173)->GetAt(static_cast<il2cpp_array_size_t>(L_1174));
		int32_t L_1176;
		L_1176 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1168, L_1172)), L_1175)), ((int32_t)-1894007588))), ((int32_t)11), NULL);
		int32_t L_1177 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1176, L_1177));
		// c = RL(c + F4(d, e, a) + X[1] + unchecked((int)0x8f1bbcdc), 11) + b; e = RL(e, 10);
		int32_t L_1178 = V_8;
		int32_t L_1179;
		L_1179 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1178, ((int32_t)10), NULL);
		V_8 = L_1179;
		// b = RL(b + F4(c, d, e) + X[9] + unchecked((int)0x8f1bbcdc), 12) + a; d = RL(d, 10);
		int32_t L_1180 = V_2;
		int32_t L_1181 = V_4;
		int32_t L_1182 = V_6;
		int32_t L_1183 = V_8;
		int32_t L_1184;
		L_1184 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1181, L_1182, L_1183, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1185 = __this->___X_15;
		NullCheck(L_1185);
		int32_t L_1186 = ((int32_t)9);
		int32_t L_1187 = (L_1185)->GetAt(static_cast<il2cpp_array_size_t>(L_1186));
		int32_t L_1188;
		L_1188 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1180, L_1184)), L_1187)), ((int32_t)-1894007588))), ((int32_t)12), NULL);
		int32_t L_1189 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1188, L_1189));
		// b = RL(b + F4(c, d, e) + X[9] + unchecked((int)0x8f1bbcdc), 12) + a; d = RL(d, 10);
		int32_t L_1190 = V_6;
		int32_t L_1191;
		L_1191 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1190, ((int32_t)10), NULL);
		V_6 = L_1191;
		// a = RL(a + F4(b, c, d) + X[11] + unchecked((int)0x8f1bbcdc), 14) + e; c = RL(c, 10);
		int32_t L_1192 = V_0;
		int32_t L_1193 = V_2;
		int32_t L_1194 = V_4;
		int32_t L_1195 = V_6;
		int32_t L_1196;
		L_1196 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1193, L_1194, L_1195, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1197 = __this->___X_15;
		NullCheck(L_1197);
		int32_t L_1198 = ((int32_t)11);
		int32_t L_1199 = (L_1197)->GetAt(static_cast<il2cpp_array_size_t>(L_1198));
		int32_t L_1200;
		L_1200 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1192, L_1196)), L_1199)), ((int32_t)-1894007588))), ((int32_t)14), NULL);
		int32_t L_1201 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1200, L_1201));
		// a = RL(a + F4(b, c, d) + X[11] + unchecked((int)0x8f1bbcdc), 14) + e; c = RL(c, 10);
		int32_t L_1202 = V_4;
		int32_t L_1203;
		L_1203 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1202, ((int32_t)10), NULL);
		V_4 = L_1203;
		// e = RL(e + F4(a, b, c) + X[10] + unchecked((int)0x8f1bbcdc), 15) + d; b = RL(b, 10);
		int32_t L_1204 = V_8;
		int32_t L_1205 = V_0;
		int32_t L_1206 = V_2;
		int32_t L_1207 = V_4;
		int32_t L_1208;
		L_1208 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1205, L_1206, L_1207, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1209 = __this->___X_15;
		NullCheck(L_1209);
		int32_t L_1210 = ((int32_t)10);
		int32_t L_1211 = (L_1209)->GetAt(static_cast<il2cpp_array_size_t>(L_1210));
		int32_t L_1212;
		L_1212 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1204, L_1208)), L_1211)), ((int32_t)-1894007588))), ((int32_t)15), NULL);
		int32_t L_1213 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1212, L_1213));
		// e = RL(e + F4(a, b, c) + X[10] + unchecked((int)0x8f1bbcdc), 15) + d; b = RL(b, 10);
		int32_t L_1214 = V_2;
		int32_t L_1215;
		L_1215 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1214, ((int32_t)10), NULL);
		V_2 = L_1215;
		// d = RL(d + F4(e, a, b) + X[0] + unchecked((int)0x8f1bbcdc), 14) + c; a = RL(a, 10);
		int32_t L_1216 = V_6;
		int32_t L_1217 = V_8;
		int32_t L_1218 = V_0;
		int32_t L_1219 = V_2;
		int32_t L_1220;
		L_1220 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1217, L_1218, L_1219, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1221 = __this->___X_15;
		NullCheck(L_1221);
		int32_t L_1222 = 0;
		int32_t L_1223 = (L_1221)->GetAt(static_cast<il2cpp_array_size_t>(L_1222));
		int32_t L_1224;
		L_1224 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1216, L_1220)), L_1223)), ((int32_t)-1894007588))), ((int32_t)14), NULL);
		int32_t L_1225 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_1224, L_1225));
		// d = RL(d + F4(e, a, b) + X[0] + unchecked((int)0x8f1bbcdc), 14) + c; a = RL(a, 10);
		int32_t L_1226 = V_0;
		int32_t L_1227;
		L_1227 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1226, ((int32_t)10), NULL);
		V_0 = L_1227;
		// c = RL(c + F4(d, e, a) + X[8] + unchecked((int)0x8f1bbcdc), 15) + b; e = RL(e, 10);
		int32_t L_1228 = V_4;
		int32_t L_1229 = V_6;
		int32_t L_1230 = V_8;
		int32_t L_1231 = V_0;
		int32_t L_1232;
		L_1232 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1229, L_1230, L_1231, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1233 = __this->___X_15;
		NullCheck(L_1233);
		int32_t L_1234 = 8;
		int32_t L_1235 = (L_1233)->GetAt(static_cast<il2cpp_array_size_t>(L_1234));
		int32_t L_1236;
		L_1236 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1228, L_1232)), L_1235)), ((int32_t)-1894007588))), ((int32_t)15), NULL);
		int32_t L_1237 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1236, L_1237));
		// c = RL(c + F4(d, e, a) + X[8] + unchecked((int)0x8f1bbcdc), 15) + b; e = RL(e, 10);
		int32_t L_1238 = V_8;
		int32_t L_1239;
		L_1239 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1238, ((int32_t)10), NULL);
		V_8 = L_1239;
		// b = RL(b + F4(c, d, e) + X[12] + unchecked((int)0x8f1bbcdc), 9) + a; d = RL(d, 10);
		int32_t L_1240 = V_2;
		int32_t L_1241 = V_4;
		int32_t L_1242 = V_6;
		int32_t L_1243 = V_8;
		int32_t L_1244;
		L_1244 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1241, L_1242, L_1243, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1245 = __this->___X_15;
		NullCheck(L_1245);
		int32_t L_1246 = ((int32_t)12);
		int32_t L_1247 = (L_1245)->GetAt(static_cast<il2cpp_array_size_t>(L_1246));
		int32_t L_1248;
		L_1248 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1240, L_1244)), L_1247)), ((int32_t)-1894007588))), ((int32_t)9), NULL);
		int32_t L_1249 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1248, L_1249));
		// b = RL(b + F4(c, d, e) + X[12] + unchecked((int)0x8f1bbcdc), 9) + a; d = RL(d, 10);
		int32_t L_1250 = V_6;
		int32_t L_1251;
		L_1251 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1250, ((int32_t)10), NULL);
		V_6 = L_1251;
		// a = RL(a + F4(b, c, d) + X[4] + unchecked((int)0x8f1bbcdc), 8) + e; c = RL(c, 10);
		int32_t L_1252 = V_0;
		int32_t L_1253 = V_2;
		int32_t L_1254 = V_4;
		int32_t L_1255 = V_6;
		int32_t L_1256;
		L_1256 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1253, L_1254, L_1255, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1257 = __this->___X_15;
		NullCheck(L_1257);
		int32_t L_1258 = 4;
		int32_t L_1259 = (L_1257)->GetAt(static_cast<il2cpp_array_size_t>(L_1258));
		int32_t L_1260;
		L_1260 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1252, L_1256)), L_1259)), ((int32_t)-1894007588))), 8, NULL);
		int32_t L_1261 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1260, L_1261));
		// a = RL(a + F4(b, c, d) + X[4] + unchecked((int)0x8f1bbcdc), 8) + e; c = RL(c, 10);
		int32_t L_1262 = V_4;
		int32_t L_1263;
		L_1263 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1262, ((int32_t)10), NULL);
		V_4 = L_1263;
		// e = RL(e + F4(a, b, c) + X[13] + unchecked((int)0x8f1bbcdc), 9) + d; b = RL(b, 10);
		int32_t L_1264 = V_8;
		int32_t L_1265 = V_0;
		int32_t L_1266 = V_2;
		int32_t L_1267 = V_4;
		int32_t L_1268;
		L_1268 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1265, L_1266, L_1267, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1269 = __this->___X_15;
		NullCheck(L_1269);
		int32_t L_1270 = ((int32_t)13);
		int32_t L_1271 = (L_1269)->GetAt(static_cast<il2cpp_array_size_t>(L_1270));
		int32_t L_1272;
		L_1272 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1264, L_1268)), L_1271)), ((int32_t)-1894007588))), ((int32_t)9), NULL);
		int32_t L_1273 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1272, L_1273));
		// e = RL(e + F4(a, b, c) + X[13] + unchecked((int)0x8f1bbcdc), 9) + d; b = RL(b, 10);
		int32_t L_1274 = V_2;
		int32_t L_1275;
		L_1275 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1274, ((int32_t)10), NULL);
		V_2 = L_1275;
		// d = RL(d + F4(e, a, b) + X[3] + unchecked((int)0x8f1bbcdc), 14) + c; a = RL(a, 10);
		int32_t L_1276 = V_6;
		int32_t L_1277 = V_8;
		int32_t L_1278 = V_0;
		int32_t L_1279 = V_2;
		int32_t L_1280;
		L_1280 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1277, L_1278, L_1279, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1281 = __this->___X_15;
		NullCheck(L_1281);
		int32_t L_1282 = 3;
		int32_t L_1283 = (L_1281)->GetAt(static_cast<il2cpp_array_size_t>(L_1282));
		int32_t L_1284;
		L_1284 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1276, L_1280)), L_1283)), ((int32_t)-1894007588))), ((int32_t)14), NULL);
		int32_t L_1285 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_1284, L_1285));
		// d = RL(d + F4(e, a, b) + X[3] + unchecked((int)0x8f1bbcdc), 14) + c; a = RL(a, 10);
		int32_t L_1286 = V_0;
		int32_t L_1287;
		L_1287 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1286, ((int32_t)10), NULL);
		V_0 = L_1287;
		// c = RL(c + F4(d, e, a) + X[7] + unchecked((int)0x8f1bbcdc), 5) + b; e = RL(e, 10);
		int32_t L_1288 = V_4;
		int32_t L_1289 = V_6;
		int32_t L_1290 = V_8;
		int32_t L_1291 = V_0;
		int32_t L_1292;
		L_1292 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1289, L_1290, L_1291, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1293 = __this->___X_15;
		NullCheck(L_1293);
		int32_t L_1294 = 7;
		int32_t L_1295 = (L_1293)->GetAt(static_cast<il2cpp_array_size_t>(L_1294));
		int32_t L_1296;
		L_1296 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1288, L_1292)), L_1295)), ((int32_t)-1894007588))), 5, NULL);
		int32_t L_1297 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1296, L_1297));
		// c = RL(c + F4(d, e, a) + X[7] + unchecked((int)0x8f1bbcdc), 5) + b; e = RL(e, 10);
		int32_t L_1298 = V_8;
		int32_t L_1299;
		L_1299 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1298, ((int32_t)10), NULL);
		V_8 = L_1299;
		// b = RL(b + F4(c, d, e) + X[15] + unchecked((int)0x8f1bbcdc), 6) + a; d = RL(d, 10);
		int32_t L_1300 = V_2;
		int32_t L_1301 = V_4;
		int32_t L_1302 = V_6;
		int32_t L_1303 = V_8;
		int32_t L_1304;
		L_1304 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1301, L_1302, L_1303, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1305 = __this->___X_15;
		NullCheck(L_1305);
		int32_t L_1306 = ((int32_t)15);
		int32_t L_1307 = (L_1305)->GetAt(static_cast<il2cpp_array_size_t>(L_1306));
		int32_t L_1308;
		L_1308 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1300, L_1304)), L_1307)), ((int32_t)-1894007588))), 6, NULL);
		int32_t L_1309 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1308, L_1309));
		// b = RL(b + F4(c, d, e) + X[15] + unchecked((int)0x8f1bbcdc), 6) + a; d = RL(d, 10);
		int32_t L_1310 = V_6;
		int32_t L_1311;
		L_1311 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1310, ((int32_t)10), NULL);
		V_6 = L_1311;
		// a = RL(a + F4(b, c, d) + X[14] + unchecked((int)0x8f1bbcdc), 8) + e; c = RL(c, 10);
		int32_t L_1312 = V_0;
		int32_t L_1313 = V_2;
		int32_t L_1314 = V_4;
		int32_t L_1315 = V_6;
		int32_t L_1316;
		L_1316 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1313, L_1314, L_1315, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1317 = __this->___X_15;
		NullCheck(L_1317);
		int32_t L_1318 = ((int32_t)14);
		int32_t L_1319 = (L_1317)->GetAt(static_cast<il2cpp_array_size_t>(L_1318));
		int32_t L_1320;
		L_1320 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1312, L_1316)), L_1319)), ((int32_t)-1894007588))), 8, NULL);
		int32_t L_1321 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1320, L_1321));
		// a = RL(a + F4(b, c, d) + X[14] + unchecked((int)0x8f1bbcdc), 8) + e; c = RL(c, 10);
		int32_t L_1322 = V_4;
		int32_t L_1323;
		L_1323 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1322, ((int32_t)10), NULL);
		V_4 = L_1323;
		// e = RL(e + F4(a, b, c) + X[5] + unchecked((int)0x8f1bbcdc), 6) + d; b = RL(b, 10);
		int32_t L_1324 = V_8;
		int32_t L_1325 = V_0;
		int32_t L_1326 = V_2;
		int32_t L_1327 = V_4;
		int32_t L_1328;
		L_1328 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1325, L_1326, L_1327, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1329 = __this->___X_15;
		NullCheck(L_1329);
		int32_t L_1330 = 5;
		int32_t L_1331 = (L_1329)->GetAt(static_cast<il2cpp_array_size_t>(L_1330));
		int32_t L_1332;
		L_1332 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1324, L_1328)), L_1331)), ((int32_t)-1894007588))), 6, NULL);
		int32_t L_1333 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1332, L_1333));
		// e = RL(e + F4(a, b, c) + X[5] + unchecked((int)0x8f1bbcdc), 6) + d; b = RL(b, 10);
		int32_t L_1334 = V_2;
		int32_t L_1335;
		L_1335 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1334, ((int32_t)10), NULL);
		V_2 = L_1335;
		// d = RL(d + F4(e, a, b) + X[6] + unchecked((int)0x8f1bbcdc), 5) + c; a = RL(a, 10);
		int32_t L_1336 = V_6;
		int32_t L_1337 = V_8;
		int32_t L_1338 = V_0;
		int32_t L_1339 = V_2;
		int32_t L_1340;
		L_1340 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1337, L_1338, L_1339, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1341 = __this->___X_15;
		NullCheck(L_1341);
		int32_t L_1342 = 6;
		int32_t L_1343 = (L_1341)->GetAt(static_cast<il2cpp_array_size_t>(L_1342));
		int32_t L_1344;
		L_1344 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1336, L_1340)), L_1343)), ((int32_t)-1894007588))), 5, NULL);
		int32_t L_1345 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_1344, L_1345));
		// d = RL(d + F4(e, a, b) + X[6] + unchecked((int)0x8f1bbcdc), 5) + c; a = RL(a, 10);
		int32_t L_1346 = V_0;
		int32_t L_1347;
		L_1347 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1346, ((int32_t)10), NULL);
		V_0 = L_1347;
		// c = RL(c + F4(d, e, a) + X[2] + unchecked((int)0x8f1bbcdc), 12) + b; e = RL(e, 10);
		int32_t L_1348 = V_4;
		int32_t L_1349 = V_6;
		int32_t L_1350 = V_8;
		int32_t L_1351 = V_0;
		int32_t L_1352;
		L_1352 = RipeMD320Digest_F4_mEA9A20263A9B636908FE4E054E20F9CA4C837B7A(__this, L_1349, L_1350, L_1351, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1353 = __this->___X_15;
		NullCheck(L_1353);
		int32_t L_1354 = 2;
		int32_t L_1355 = (L_1353)->GetAt(static_cast<il2cpp_array_size_t>(L_1354));
		int32_t L_1356;
		L_1356 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1348, L_1352)), L_1355)), ((int32_t)-1894007588))), ((int32_t)12), NULL);
		int32_t L_1357 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1356, L_1357));
		// c = RL(c + F4(d, e, a) + X[2] + unchecked((int)0x8f1bbcdc), 12) + b; e = RL(e, 10);
		int32_t L_1358 = V_8;
		int32_t L_1359;
		L_1359 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1358, ((int32_t)10), NULL);
		V_8 = L_1359;
		// cc = RL(cc + F2(dd, ee, aa) + X[8] + unchecked((int)0x7a6d76e9), 15) + bb; ee = RL(ee, 10);
		int32_t L_1360 = V_5;
		int32_t L_1361 = V_7;
		int32_t L_1362 = V_9;
		int32_t L_1363 = V_1;
		int32_t L_1364;
		L_1364 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1361, L_1362, L_1363, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1365 = __this->___X_15;
		NullCheck(L_1365);
		int32_t L_1366 = 8;
		int32_t L_1367 = (L_1365)->GetAt(static_cast<il2cpp_array_size_t>(L_1366));
		int32_t L_1368;
		L_1368 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1360, L_1364)), L_1367)), ((int32_t)2053994217))), ((int32_t)15), NULL);
		int32_t L_1369 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1368, L_1369));
		// cc = RL(cc + F2(dd, ee, aa) + X[8] + unchecked((int)0x7a6d76e9), 15) + bb; ee = RL(ee, 10);
		int32_t L_1370 = V_9;
		int32_t L_1371;
		L_1371 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1370, ((int32_t)10), NULL);
		V_9 = L_1371;
		// bb = RL(bb + F2(cc, dd, ee) + X[6] + unchecked((int)0x7a6d76e9), 5) + aa; dd = RL(dd, 10);
		int32_t L_1372 = V_3;
		int32_t L_1373 = V_5;
		int32_t L_1374 = V_7;
		int32_t L_1375 = V_9;
		int32_t L_1376;
		L_1376 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1373, L_1374, L_1375, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1377 = __this->___X_15;
		NullCheck(L_1377);
		int32_t L_1378 = 6;
		int32_t L_1379 = (L_1377)->GetAt(static_cast<il2cpp_array_size_t>(L_1378));
		int32_t L_1380;
		L_1380 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1372, L_1376)), L_1379)), ((int32_t)2053994217))), 5, NULL);
		int32_t L_1381 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1380, L_1381));
		// bb = RL(bb + F2(cc, dd, ee) + X[6] + unchecked((int)0x7a6d76e9), 5) + aa; dd = RL(dd, 10);
		int32_t L_1382 = V_7;
		int32_t L_1383;
		L_1383 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1382, ((int32_t)10), NULL);
		V_7 = L_1383;
		// aa = RL(aa + F2(bb, cc, dd) + X[4] + unchecked((int)0x7a6d76e9), 8) + ee; cc = RL(cc, 10);
		int32_t L_1384 = V_1;
		int32_t L_1385 = V_3;
		int32_t L_1386 = V_5;
		int32_t L_1387 = V_7;
		int32_t L_1388;
		L_1388 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1385, L_1386, L_1387, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1389 = __this->___X_15;
		NullCheck(L_1389);
		int32_t L_1390 = 4;
		int32_t L_1391 = (L_1389)->GetAt(static_cast<il2cpp_array_size_t>(L_1390));
		int32_t L_1392;
		L_1392 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1384, L_1388)), L_1391)), ((int32_t)2053994217))), 8, NULL);
		int32_t L_1393 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1392, L_1393));
		// aa = RL(aa + F2(bb, cc, dd) + X[4] + unchecked((int)0x7a6d76e9), 8) + ee; cc = RL(cc, 10);
		int32_t L_1394 = V_5;
		int32_t L_1395;
		L_1395 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1394, ((int32_t)10), NULL);
		V_5 = L_1395;
		// ee = RL(ee + F2(aa, bb, cc) + X[1] + unchecked((int)0x7a6d76e9), 11) + dd; bb = RL(bb, 10);
		int32_t L_1396 = V_9;
		int32_t L_1397 = V_1;
		int32_t L_1398 = V_3;
		int32_t L_1399 = V_5;
		int32_t L_1400;
		L_1400 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1397, L_1398, L_1399, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1401 = __this->___X_15;
		NullCheck(L_1401);
		int32_t L_1402 = 1;
		int32_t L_1403 = (L_1401)->GetAt(static_cast<il2cpp_array_size_t>(L_1402));
		int32_t L_1404;
		L_1404 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1396, L_1400)), L_1403)), ((int32_t)2053994217))), ((int32_t)11), NULL);
		int32_t L_1405 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1404, L_1405));
		// ee = RL(ee + F2(aa, bb, cc) + X[1] + unchecked((int)0x7a6d76e9), 11) + dd; bb = RL(bb, 10);
		int32_t L_1406 = V_3;
		int32_t L_1407;
		L_1407 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1406, ((int32_t)10), NULL);
		V_3 = L_1407;
		// dd = RL(dd + F2(ee, aa, bb) + X[3] + unchecked((int)0x7a6d76e9), 14) + cc; aa = RL(aa, 10);
		int32_t L_1408 = V_7;
		int32_t L_1409 = V_9;
		int32_t L_1410 = V_1;
		int32_t L_1411 = V_3;
		int32_t L_1412;
		L_1412 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1409, L_1410, L_1411, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1413 = __this->___X_15;
		NullCheck(L_1413);
		int32_t L_1414 = 3;
		int32_t L_1415 = (L_1413)->GetAt(static_cast<il2cpp_array_size_t>(L_1414));
		int32_t L_1416;
		L_1416 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1408, L_1412)), L_1415)), ((int32_t)2053994217))), ((int32_t)14), NULL);
		int32_t L_1417 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1416, L_1417));
		// dd = RL(dd + F2(ee, aa, bb) + X[3] + unchecked((int)0x7a6d76e9), 14) + cc; aa = RL(aa, 10);
		int32_t L_1418 = V_1;
		int32_t L_1419;
		L_1419 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1418, ((int32_t)10), NULL);
		V_1 = L_1419;
		// cc = RL(cc + F2(dd, ee, aa) + X[11] + unchecked((int)0x7a6d76e9), 14) + bb; ee = RL(ee, 10);
		int32_t L_1420 = V_5;
		int32_t L_1421 = V_7;
		int32_t L_1422 = V_9;
		int32_t L_1423 = V_1;
		int32_t L_1424;
		L_1424 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1421, L_1422, L_1423, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1425 = __this->___X_15;
		NullCheck(L_1425);
		int32_t L_1426 = ((int32_t)11);
		int32_t L_1427 = (L_1425)->GetAt(static_cast<il2cpp_array_size_t>(L_1426));
		int32_t L_1428;
		L_1428 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1420, L_1424)), L_1427)), ((int32_t)2053994217))), ((int32_t)14), NULL);
		int32_t L_1429 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1428, L_1429));
		// cc = RL(cc + F2(dd, ee, aa) + X[11] + unchecked((int)0x7a6d76e9), 14) + bb; ee = RL(ee, 10);
		int32_t L_1430 = V_9;
		int32_t L_1431;
		L_1431 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1430, ((int32_t)10), NULL);
		V_9 = L_1431;
		// bb = RL(bb + F2(cc, dd, ee) + X[15] + unchecked((int)0x7a6d76e9), 6) + aa; dd = RL(dd, 10);
		int32_t L_1432 = V_3;
		int32_t L_1433 = V_5;
		int32_t L_1434 = V_7;
		int32_t L_1435 = V_9;
		int32_t L_1436;
		L_1436 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1433, L_1434, L_1435, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1437 = __this->___X_15;
		NullCheck(L_1437);
		int32_t L_1438 = ((int32_t)15);
		int32_t L_1439 = (L_1437)->GetAt(static_cast<il2cpp_array_size_t>(L_1438));
		int32_t L_1440;
		L_1440 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1432, L_1436)), L_1439)), ((int32_t)2053994217))), 6, NULL);
		int32_t L_1441 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1440, L_1441));
		// bb = RL(bb + F2(cc, dd, ee) + X[15] + unchecked((int)0x7a6d76e9), 6) + aa; dd = RL(dd, 10);
		int32_t L_1442 = V_7;
		int32_t L_1443;
		L_1443 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1442, ((int32_t)10), NULL);
		V_7 = L_1443;
		// aa = RL(aa + F2(bb, cc, dd) + X[0] + unchecked((int)0x7a6d76e9), 14) + ee; cc = RL(cc, 10);
		int32_t L_1444 = V_1;
		int32_t L_1445 = V_3;
		int32_t L_1446 = V_5;
		int32_t L_1447 = V_7;
		int32_t L_1448;
		L_1448 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1445, L_1446, L_1447, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1449 = __this->___X_15;
		NullCheck(L_1449);
		int32_t L_1450 = 0;
		int32_t L_1451 = (L_1449)->GetAt(static_cast<il2cpp_array_size_t>(L_1450));
		int32_t L_1452;
		L_1452 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1444, L_1448)), L_1451)), ((int32_t)2053994217))), ((int32_t)14), NULL);
		int32_t L_1453 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1452, L_1453));
		// aa = RL(aa + F2(bb, cc, dd) + X[0] + unchecked((int)0x7a6d76e9), 14) + ee; cc = RL(cc, 10);
		int32_t L_1454 = V_5;
		int32_t L_1455;
		L_1455 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1454, ((int32_t)10), NULL);
		V_5 = L_1455;
		// ee = RL(ee + F2(aa, bb, cc) + X[5] + unchecked((int)0x7a6d76e9), 6) + dd; bb = RL(bb, 10);
		int32_t L_1456 = V_9;
		int32_t L_1457 = V_1;
		int32_t L_1458 = V_3;
		int32_t L_1459 = V_5;
		int32_t L_1460;
		L_1460 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1457, L_1458, L_1459, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1461 = __this->___X_15;
		NullCheck(L_1461);
		int32_t L_1462 = 5;
		int32_t L_1463 = (L_1461)->GetAt(static_cast<il2cpp_array_size_t>(L_1462));
		int32_t L_1464;
		L_1464 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1456, L_1460)), L_1463)), ((int32_t)2053994217))), 6, NULL);
		int32_t L_1465 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1464, L_1465));
		// ee = RL(ee + F2(aa, bb, cc) + X[5] + unchecked((int)0x7a6d76e9), 6) + dd; bb = RL(bb, 10);
		int32_t L_1466 = V_3;
		int32_t L_1467;
		L_1467 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1466, ((int32_t)10), NULL);
		V_3 = L_1467;
		// dd = RL(dd + F2(ee, aa, bb) + X[12] + unchecked((int)0x7a6d76e9), 9) + cc; aa = RL(aa, 10);
		int32_t L_1468 = V_7;
		int32_t L_1469 = V_9;
		int32_t L_1470 = V_1;
		int32_t L_1471 = V_3;
		int32_t L_1472;
		L_1472 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1469, L_1470, L_1471, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1473 = __this->___X_15;
		NullCheck(L_1473);
		int32_t L_1474 = ((int32_t)12);
		int32_t L_1475 = (L_1473)->GetAt(static_cast<il2cpp_array_size_t>(L_1474));
		int32_t L_1476;
		L_1476 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1468, L_1472)), L_1475)), ((int32_t)2053994217))), ((int32_t)9), NULL);
		int32_t L_1477 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1476, L_1477));
		// dd = RL(dd + F2(ee, aa, bb) + X[12] + unchecked((int)0x7a6d76e9), 9) + cc; aa = RL(aa, 10);
		int32_t L_1478 = V_1;
		int32_t L_1479;
		L_1479 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1478, ((int32_t)10), NULL);
		V_1 = L_1479;
		// cc = RL(cc + F2(dd, ee, aa) + X[2] + unchecked((int)0x7a6d76e9), 12) + bb; ee = RL(ee, 10);
		int32_t L_1480 = V_5;
		int32_t L_1481 = V_7;
		int32_t L_1482 = V_9;
		int32_t L_1483 = V_1;
		int32_t L_1484;
		L_1484 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1481, L_1482, L_1483, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1485 = __this->___X_15;
		NullCheck(L_1485);
		int32_t L_1486 = 2;
		int32_t L_1487 = (L_1485)->GetAt(static_cast<il2cpp_array_size_t>(L_1486));
		int32_t L_1488;
		L_1488 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1480, L_1484)), L_1487)), ((int32_t)2053994217))), ((int32_t)12), NULL);
		int32_t L_1489 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1488, L_1489));
		// cc = RL(cc + F2(dd, ee, aa) + X[2] + unchecked((int)0x7a6d76e9), 12) + bb; ee = RL(ee, 10);
		int32_t L_1490 = V_9;
		int32_t L_1491;
		L_1491 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1490, ((int32_t)10), NULL);
		V_9 = L_1491;
		// bb = RL(bb + F2(cc, dd, ee) + X[13] + unchecked((int)0x7a6d76e9), 9) + aa; dd = RL(dd, 10);
		int32_t L_1492 = V_3;
		int32_t L_1493 = V_5;
		int32_t L_1494 = V_7;
		int32_t L_1495 = V_9;
		int32_t L_1496;
		L_1496 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1493, L_1494, L_1495, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1497 = __this->___X_15;
		NullCheck(L_1497);
		int32_t L_1498 = ((int32_t)13);
		int32_t L_1499 = (L_1497)->GetAt(static_cast<il2cpp_array_size_t>(L_1498));
		int32_t L_1500;
		L_1500 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1492, L_1496)), L_1499)), ((int32_t)2053994217))), ((int32_t)9), NULL);
		int32_t L_1501 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1500, L_1501));
		// bb = RL(bb + F2(cc, dd, ee) + X[13] + unchecked((int)0x7a6d76e9), 9) + aa; dd = RL(dd, 10);
		int32_t L_1502 = V_7;
		int32_t L_1503;
		L_1503 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1502, ((int32_t)10), NULL);
		V_7 = L_1503;
		// aa = RL(aa + F2(bb, cc, dd) + X[9] + unchecked((int)0x7a6d76e9), 12) + ee; cc = RL(cc, 10);
		int32_t L_1504 = V_1;
		int32_t L_1505 = V_3;
		int32_t L_1506 = V_5;
		int32_t L_1507 = V_7;
		int32_t L_1508;
		L_1508 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1505, L_1506, L_1507, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1509 = __this->___X_15;
		NullCheck(L_1509);
		int32_t L_1510 = ((int32_t)9);
		int32_t L_1511 = (L_1509)->GetAt(static_cast<il2cpp_array_size_t>(L_1510));
		int32_t L_1512;
		L_1512 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1504, L_1508)), L_1511)), ((int32_t)2053994217))), ((int32_t)12), NULL);
		int32_t L_1513 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1512, L_1513));
		// aa = RL(aa + F2(bb, cc, dd) + X[9] + unchecked((int)0x7a6d76e9), 12) + ee; cc = RL(cc, 10);
		int32_t L_1514 = V_5;
		int32_t L_1515;
		L_1515 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1514, ((int32_t)10), NULL);
		V_5 = L_1515;
		// ee = RL(ee + F2(aa, bb, cc) + X[7] + unchecked((int)0x7a6d76e9), 5) + dd; bb = RL(bb, 10);
		int32_t L_1516 = V_9;
		int32_t L_1517 = V_1;
		int32_t L_1518 = V_3;
		int32_t L_1519 = V_5;
		int32_t L_1520;
		L_1520 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1517, L_1518, L_1519, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1521 = __this->___X_15;
		NullCheck(L_1521);
		int32_t L_1522 = 7;
		int32_t L_1523 = (L_1521)->GetAt(static_cast<il2cpp_array_size_t>(L_1522));
		int32_t L_1524;
		L_1524 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1516, L_1520)), L_1523)), ((int32_t)2053994217))), 5, NULL);
		int32_t L_1525 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1524, L_1525));
		// ee = RL(ee + F2(aa, bb, cc) + X[7] + unchecked((int)0x7a6d76e9), 5) + dd; bb = RL(bb, 10);
		int32_t L_1526 = V_3;
		int32_t L_1527;
		L_1527 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1526, ((int32_t)10), NULL);
		V_3 = L_1527;
		// dd = RL(dd + F2(ee, aa, bb) + X[10] + unchecked((int)0x7a6d76e9), 15) + cc; aa = RL(aa, 10);
		int32_t L_1528 = V_7;
		int32_t L_1529 = V_9;
		int32_t L_1530 = V_1;
		int32_t L_1531 = V_3;
		int32_t L_1532;
		L_1532 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1529, L_1530, L_1531, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1533 = __this->___X_15;
		NullCheck(L_1533);
		int32_t L_1534 = ((int32_t)10);
		int32_t L_1535 = (L_1533)->GetAt(static_cast<il2cpp_array_size_t>(L_1534));
		int32_t L_1536;
		L_1536 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1528, L_1532)), L_1535)), ((int32_t)2053994217))), ((int32_t)15), NULL);
		int32_t L_1537 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1536, L_1537));
		// dd = RL(dd + F2(ee, aa, bb) + X[10] + unchecked((int)0x7a6d76e9), 15) + cc; aa = RL(aa, 10);
		int32_t L_1538 = V_1;
		int32_t L_1539;
		L_1539 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1538, ((int32_t)10), NULL);
		V_1 = L_1539;
		// cc = RL(cc + F2(dd, ee, aa) + X[14] + unchecked((int)0x7a6d76e9), 8) + bb; ee = RL(ee, 10);
		int32_t L_1540 = V_5;
		int32_t L_1541 = V_7;
		int32_t L_1542 = V_9;
		int32_t L_1543 = V_1;
		int32_t L_1544;
		L_1544 = RipeMD320Digest_F2_m9EA905CCA7BF6BD1582DAAB492831E35DF84BE38(__this, L_1541, L_1542, L_1543, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1545 = __this->___X_15;
		NullCheck(L_1545);
		int32_t L_1546 = ((int32_t)14);
		int32_t L_1547 = (L_1545)->GetAt(static_cast<il2cpp_array_size_t>(L_1546));
		int32_t L_1548;
		L_1548 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1540, L_1544)), L_1547)), ((int32_t)2053994217))), 8, NULL);
		int32_t L_1549 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1548, L_1549));
		// cc = RL(cc + F2(dd, ee, aa) + X[14] + unchecked((int)0x7a6d76e9), 8) + bb; ee = RL(ee, 10);
		int32_t L_1550 = V_9;
		int32_t L_1551;
		L_1551 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1550, ((int32_t)10), NULL);
		V_9 = L_1551;
		// t = d; d = dd; dd = t;
		int32_t L_1552 = V_6;
		// t = d; d = dd; dd = t;
		int32_t L_1553 = V_7;
		V_6 = L_1553;
		// t = d; d = dd; dd = t;
		V_7 = L_1552;
		// b = RL(b + F5(c, d, e) + X[4] + unchecked((int)0xa953fd4e), 9) + a; d = RL(d, 10);
		int32_t L_1554 = V_2;
		int32_t L_1555 = V_4;
		int32_t L_1556 = V_6;
		int32_t L_1557 = V_8;
		int32_t L_1558;
		L_1558 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1555, L_1556, L_1557, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1559 = __this->___X_15;
		NullCheck(L_1559);
		int32_t L_1560 = 4;
		int32_t L_1561 = (L_1559)->GetAt(static_cast<il2cpp_array_size_t>(L_1560));
		int32_t L_1562;
		L_1562 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1554, L_1558)), L_1561)), ((int32_t)-1454113458))), ((int32_t)9), NULL);
		int32_t L_1563 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1562, L_1563));
		// b = RL(b + F5(c, d, e) + X[4] + unchecked((int)0xa953fd4e), 9) + a; d = RL(d, 10);
		int32_t L_1564 = V_6;
		int32_t L_1565;
		L_1565 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1564, ((int32_t)10), NULL);
		V_6 = L_1565;
		// a = RL(a + F5(b, c, d) + X[0] + unchecked((int)0xa953fd4e), 15) + e; c = RL(c, 10);
		int32_t L_1566 = V_0;
		int32_t L_1567 = V_2;
		int32_t L_1568 = V_4;
		int32_t L_1569 = V_6;
		int32_t L_1570;
		L_1570 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1567, L_1568, L_1569, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1571 = __this->___X_15;
		NullCheck(L_1571);
		int32_t L_1572 = 0;
		int32_t L_1573 = (L_1571)->GetAt(static_cast<il2cpp_array_size_t>(L_1572));
		int32_t L_1574;
		L_1574 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1566, L_1570)), L_1573)), ((int32_t)-1454113458))), ((int32_t)15), NULL);
		int32_t L_1575 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1574, L_1575));
		// a = RL(a + F5(b, c, d) + X[0] + unchecked((int)0xa953fd4e), 15) + e; c = RL(c, 10);
		int32_t L_1576 = V_4;
		int32_t L_1577;
		L_1577 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1576, ((int32_t)10), NULL);
		V_4 = L_1577;
		// e = RL(e + F5(a, b, c) + X[5] + unchecked((int)0xa953fd4e), 5) + d; b = RL(b, 10);
		int32_t L_1578 = V_8;
		int32_t L_1579 = V_0;
		int32_t L_1580 = V_2;
		int32_t L_1581 = V_4;
		int32_t L_1582;
		L_1582 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1579, L_1580, L_1581, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1583 = __this->___X_15;
		NullCheck(L_1583);
		int32_t L_1584 = 5;
		int32_t L_1585 = (L_1583)->GetAt(static_cast<il2cpp_array_size_t>(L_1584));
		int32_t L_1586;
		L_1586 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1578, L_1582)), L_1585)), ((int32_t)-1454113458))), 5, NULL);
		int32_t L_1587 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1586, L_1587));
		// e = RL(e + F5(a, b, c) + X[5] + unchecked((int)0xa953fd4e), 5) + d; b = RL(b, 10);
		int32_t L_1588 = V_2;
		int32_t L_1589;
		L_1589 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1588, ((int32_t)10), NULL);
		V_2 = L_1589;
		// d = RL(d + F5(e, a, b) + X[9] + unchecked((int)0xa953fd4e), 11) + c; a = RL(a, 10);
		int32_t L_1590 = V_6;
		int32_t L_1591 = V_8;
		int32_t L_1592 = V_0;
		int32_t L_1593 = V_2;
		int32_t L_1594;
		L_1594 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1591, L_1592, L_1593, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1595 = __this->___X_15;
		NullCheck(L_1595);
		int32_t L_1596 = ((int32_t)9);
		int32_t L_1597 = (L_1595)->GetAt(static_cast<il2cpp_array_size_t>(L_1596));
		int32_t L_1598;
		L_1598 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1590, L_1594)), L_1597)), ((int32_t)-1454113458))), ((int32_t)11), NULL);
		int32_t L_1599 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_1598, L_1599));
		// d = RL(d + F5(e, a, b) + X[9] + unchecked((int)0xa953fd4e), 11) + c; a = RL(a, 10);
		int32_t L_1600 = V_0;
		int32_t L_1601;
		L_1601 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1600, ((int32_t)10), NULL);
		V_0 = L_1601;
		// c = RL(c + F5(d, e, a) + X[7] + unchecked((int)0xa953fd4e), 6) + b; e = RL(e, 10);
		int32_t L_1602 = V_4;
		int32_t L_1603 = V_6;
		int32_t L_1604 = V_8;
		int32_t L_1605 = V_0;
		int32_t L_1606;
		L_1606 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1603, L_1604, L_1605, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1607 = __this->___X_15;
		NullCheck(L_1607);
		int32_t L_1608 = 7;
		int32_t L_1609 = (L_1607)->GetAt(static_cast<il2cpp_array_size_t>(L_1608));
		int32_t L_1610;
		L_1610 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1602, L_1606)), L_1609)), ((int32_t)-1454113458))), 6, NULL);
		int32_t L_1611 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1610, L_1611));
		// c = RL(c + F5(d, e, a) + X[7] + unchecked((int)0xa953fd4e), 6) + b; e = RL(e, 10);
		int32_t L_1612 = V_8;
		int32_t L_1613;
		L_1613 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1612, ((int32_t)10), NULL);
		V_8 = L_1613;
		// b = RL(b + F5(c, d, e) + X[12] + unchecked((int)0xa953fd4e), 8) + a; d = RL(d, 10);
		int32_t L_1614 = V_2;
		int32_t L_1615 = V_4;
		int32_t L_1616 = V_6;
		int32_t L_1617 = V_8;
		int32_t L_1618;
		L_1618 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1615, L_1616, L_1617, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1619 = __this->___X_15;
		NullCheck(L_1619);
		int32_t L_1620 = ((int32_t)12);
		int32_t L_1621 = (L_1619)->GetAt(static_cast<il2cpp_array_size_t>(L_1620));
		int32_t L_1622;
		L_1622 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1614, L_1618)), L_1621)), ((int32_t)-1454113458))), 8, NULL);
		int32_t L_1623 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1622, L_1623));
		// b = RL(b + F5(c, d, e) + X[12] + unchecked((int)0xa953fd4e), 8) + a; d = RL(d, 10);
		int32_t L_1624 = V_6;
		int32_t L_1625;
		L_1625 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1624, ((int32_t)10), NULL);
		V_6 = L_1625;
		// a = RL(a + F5(b, c, d) + X[2] + unchecked((int)0xa953fd4e), 13) + e; c = RL(c, 10);
		int32_t L_1626 = V_0;
		int32_t L_1627 = V_2;
		int32_t L_1628 = V_4;
		int32_t L_1629 = V_6;
		int32_t L_1630;
		L_1630 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1627, L_1628, L_1629, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1631 = __this->___X_15;
		NullCheck(L_1631);
		int32_t L_1632 = 2;
		int32_t L_1633 = (L_1631)->GetAt(static_cast<il2cpp_array_size_t>(L_1632));
		int32_t L_1634;
		L_1634 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1626, L_1630)), L_1633)), ((int32_t)-1454113458))), ((int32_t)13), NULL);
		int32_t L_1635 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1634, L_1635));
		// a = RL(a + F5(b, c, d) + X[2] + unchecked((int)0xa953fd4e), 13) + e; c = RL(c, 10);
		int32_t L_1636 = V_4;
		int32_t L_1637;
		L_1637 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1636, ((int32_t)10), NULL);
		V_4 = L_1637;
		// e = RL(e + F5(a, b, c) + X[10] + unchecked((int)0xa953fd4e), 12) + d; b = RL(b, 10);
		int32_t L_1638 = V_8;
		int32_t L_1639 = V_0;
		int32_t L_1640 = V_2;
		int32_t L_1641 = V_4;
		int32_t L_1642;
		L_1642 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1639, L_1640, L_1641, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1643 = __this->___X_15;
		NullCheck(L_1643);
		int32_t L_1644 = ((int32_t)10);
		int32_t L_1645 = (L_1643)->GetAt(static_cast<il2cpp_array_size_t>(L_1644));
		int32_t L_1646;
		L_1646 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1638, L_1642)), L_1645)), ((int32_t)-1454113458))), ((int32_t)12), NULL);
		int32_t L_1647 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1646, L_1647));
		// e = RL(e + F5(a, b, c) + X[10] + unchecked((int)0xa953fd4e), 12) + d; b = RL(b, 10);
		int32_t L_1648 = V_2;
		int32_t L_1649;
		L_1649 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1648, ((int32_t)10), NULL);
		V_2 = L_1649;
		// d = RL(d + F5(e, a, b) + X[14] + unchecked((int)0xa953fd4e), 5) + c; a = RL(a, 10);
		int32_t L_1650 = V_6;
		int32_t L_1651 = V_8;
		int32_t L_1652 = V_0;
		int32_t L_1653 = V_2;
		int32_t L_1654;
		L_1654 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1651, L_1652, L_1653, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1655 = __this->___X_15;
		NullCheck(L_1655);
		int32_t L_1656 = ((int32_t)14);
		int32_t L_1657 = (L_1655)->GetAt(static_cast<il2cpp_array_size_t>(L_1656));
		int32_t L_1658;
		L_1658 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1650, L_1654)), L_1657)), ((int32_t)-1454113458))), 5, NULL);
		int32_t L_1659 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_1658, L_1659));
		// d = RL(d + F5(e, a, b) + X[14] + unchecked((int)0xa953fd4e), 5) + c; a = RL(a, 10);
		int32_t L_1660 = V_0;
		int32_t L_1661;
		L_1661 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1660, ((int32_t)10), NULL);
		V_0 = L_1661;
		// c = RL(c + F5(d, e, a) + X[1] + unchecked((int)0xa953fd4e), 12) + b; e = RL(e, 10);
		int32_t L_1662 = V_4;
		int32_t L_1663 = V_6;
		int32_t L_1664 = V_8;
		int32_t L_1665 = V_0;
		int32_t L_1666;
		L_1666 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1663, L_1664, L_1665, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1667 = __this->___X_15;
		NullCheck(L_1667);
		int32_t L_1668 = 1;
		int32_t L_1669 = (L_1667)->GetAt(static_cast<il2cpp_array_size_t>(L_1668));
		int32_t L_1670;
		L_1670 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1662, L_1666)), L_1669)), ((int32_t)-1454113458))), ((int32_t)12), NULL);
		int32_t L_1671 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1670, L_1671));
		// c = RL(c + F5(d, e, a) + X[1] + unchecked((int)0xa953fd4e), 12) + b; e = RL(e, 10);
		int32_t L_1672 = V_8;
		int32_t L_1673;
		L_1673 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1672, ((int32_t)10), NULL);
		V_8 = L_1673;
		// b = RL(b + F5(c, d, e) + X[3] + unchecked((int)0xa953fd4e), 13) + a; d = RL(d, 10);
		int32_t L_1674 = V_2;
		int32_t L_1675 = V_4;
		int32_t L_1676 = V_6;
		int32_t L_1677 = V_8;
		int32_t L_1678;
		L_1678 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1675, L_1676, L_1677, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1679 = __this->___X_15;
		NullCheck(L_1679);
		int32_t L_1680 = 3;
		int32_t L_1681 = (L_1679)->GetAt(static_cast<il2cpp_array_size_t>(L_1680));
		int32_t L_1682;
		L_1682 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1674, L_1678)), L_1681)), ((int32_t)-1454113458))), ((int32_t)13), NULL);
		int32_t L_1683 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1682, L_1683));
		// b = RL(b + F5(c, d, e) + X[3] + unchecked((int)0xa953fd4e), 13) + a; d = RL(d, 10);
		int32_t L_1684 = V_6;
		int32_t L_1685;
		L_1685 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1684, ((int32_t)10), NULL);
		V_6 = L_1685;
		// a = RL(a + F5(b, c, d) + X[8] + unchecked((int)0xa953fd4e), 14) + e; c = RL(c, 10);
		int32_t L_1686 = V_0;
		int32_t L_1687 = V_2;
		int32_t L_1688 = V_4;
		int32_t L_1689 = V_6;
		int32_t L_1690;
		L_1690 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1687, L_1688, L_1689, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1691 = __this->___X_15;
		NullCheck(L_1691);
		int32_t L_1692 = 8;
		int32_t L_1693 = (L_1691)->GetAt(static_cast<il2cpp_array_size_t>(L_1692));
		int32_t L_1694;
		L_1694 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1686, L_1690)), L_1693)), ((int32_t)-1454113458))), ((int32_t)14), NULL);
		int32_t L_1695 = V_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1694, L_1695));
		// a = RL(a + F5(b, c, d) + X[8] + unchecked((int)0xa953fd4e), 14) + e; c = RL(c, 10);
		int32_t L_1696 = V_4;
		int32_t L_1697;
		L_1697 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1696, ((int32_t)10), NULL);
		V_4 = L_1697;
		// e = RL(e + F5(a, b, c) + X[11] + unchecked((int)0xa953fd4e), 11) + d; b = RL(b, 10);
		int32_t L_1698 = V_8;
		int32_t L_1699 = V_0;
		int32_t L_1700 = V_2;
		int32_t L_1701 = V_4;
		int32_t L_1702;
		L_1702 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1699, L_1700, L_1701, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1703 = __this->___X_15;
		NullCheck(L_1703);
		int32_t L_1704 = ((int32_t)11);
		int32_t L_1705 = (L_1703)->GetAt(static_cast<il2cpp_array_size_t>(L_1704));
		int32_t L_1706;
		L_1706 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1698, L_1702)), L_1705)), ((int32_t)-1454113458))), ((int32_t)11), NULL);
		int32_t L_1707 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1706, L_1707));
		// e = RL(e + F5(a, b, c) + X[11] + unchecked((int)0xa953fd4e), 11) + d; b = RL(b, 10);
		int32_t L_1708 = V_2;
		int32_t L_1709;
		L_1709 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1708, ((int32_t)10), NULL);
		V_2 = L_1709;
		// d = RL(d + F5(e, a, b) + X[6] + unchecked((int)0xa953fd4e), 8) + c; a = RL(a, 10);
		int32_t L_1710 = V_6;
		int32_t L_1711 = V_8;
		int32_t L_1712 = V_0;
		int32_t L_1713 = V_2;
		int32_t L_1714;
		L_1714 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1711, L_1712, L_1713, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1715 = __this->___X_15;
		NullCheck(L_1715);
		int32_t L_1716 = 6;
		int32_t L_1717 = (L_1715)->GetAt(static_cast<il2cpp_array_size_t>(L_1716));
		int32_t L_1718;
		L_1718 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1710, L_1714)), L_1717)), ((int32_t)-1454113458))), 8, NULL);
		int32_t L_1719 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_add(L_1718, L_1719));
		// d = RL(d + F5(e, a, b) + X[6] + unchecked((int)0xa953fd4e), 8) + c; a = RL(a, 10);
		int32_t L_1720 = V_0;
		int32_t L_1721;
		L_1721 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1720, ((int32_t)10), NULL);
		V_0 = L_1721;
		// c = RL(c + F5(d, e, a) + X[15] + unchecked((int)0xa953fd4e), 5) + b; e = RL(e, 10);
		int32_t L_1722 = V_4;
		int32_t L_1723 = V_6;
		int32_t L_1724 = V_8;
		int32_t L_1725 = V_0;
		int32_t L_1726;
		L_1726 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1723, L_1724, L_1725, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1727 = __this->___X_15;
		NullCheck(L_1727);
		int32_t L_1728 = ((int32_t)15);
		int32_t L_1729 = (L_1727)->GetAt(static_cast<il2cpp_array_size_t>(L_1728));
		int32_t L_1730;
		L_1730 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1722, L_1726)), L_1729)), ((int32_t)-1454113458))), 5, NULL);
		int32_t L_1731 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1730, L_1731));
		// c = RL(c + F5(d, e, a) + X[15] + unchecked((int)0xa953fd4e), 5) + b; e = RL(e, 10);
		int32_t L_1732 = V_8;
		int32_t L_1733;
		L_1733 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1732, ((int32_t)10), NULL);
		V_8 = L_1733;
		// b = RL(b + F5(c, d, e) + X[13] + unchecked((int)0xa953fd4e), 6) + a; d = RL(d, 10);
		int32_t L_1734 = V_2;
		int32_t L_1735 = V_4;
		int32_t L_1736 = V_6;
		int32_t L_1737 = V_8;
		int32_t L_1738;
		L_1738 = RipeMD320Digest_F5_mDA3FBCB25A8AB892DA15B0E91EF9EFE0E905D235(__this, L_1735, L_1736, L_1737, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1739 = __this->___X_15;
		NullCheck(L_1739);
		int32_t L_1740 = ((int32_t)13);
		int32_t L_1741 = (L_1739)->GetAt(static_cast<il2cpp_array_size_t>(L_1740));
		int32_t L_1742;
		L_1742 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1734, L_1738)), L_1741)), ((int32_t)-1454113458))), 6, NULL);
		int32_t L_1743 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1742, L_1743));
		// b = RL(b + F5(c, d, e) + X[13] + unchecked((int)0xa953fd4e), 6) + a; d = RL(d, 10);
		int32_t L_1744 = V_6;
		int32_t L_1745;
		L_1745 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1744, ((int32_t)10), NULL);
		V_6 = L_1745;
		// bb = RL(bb + F1(cc, dd, ee) + X[12], 8) + aa; dd = RL(dd, 10);
		int32_t L_1746 = V_3;
		int32_t L_1747 = V_5;
		int32_t L_1748 = V_7;
		int32_t L_1749 = V_9;
		int32_t L_1750;
		L_1750 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1747, L_1748, L_1749, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1751 = __this->___X_15;
		NullCheck(L_1751);
		int32_t L_1752 = ((int32_t)12);
		int32_t L_1753 = (L_1751)->GetAt(static_cast<il2cpp_array_size_t>(L_1752));
		int32_t L_1754;
		L_1754 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1746, L_1750)), L_1753)), 8, NULL);
		int32_t L_1755 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1754, L_1755));
		// bb = RL(bb + F1(cc, dd, ee) + X[12], 8) + aa; dd = RL(dd, 10);
		int32_t L_1756 = V_7;
		int32_t L_1757;
		L_1757 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1756, ((int32_t)10), NULL);
		V_7 = L_1757;
		// aa = RL(aa + F1(bb, cc, dd) + X[15], 5) + ee; cc = RL(cc, 10);
		int32_t L_1758 = V_1;
		int32_t L_1759 = V_3;
		int32_t L_1760 = V_5;
		int32_t L_1761 = V_7;
		int32_t L_1762;
		L_1762 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1759, L_1760, L_1761, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1763 = __this->___X_15;
		NullCheck(L_1763);
		int32_t L_1764 = ((int32_t)15);
		int32_t L_1765 = (L_1763)->GetAt(static_cast<il2cpp_array_size_t>(L_1764));
		int32_t L_1766;
		L_1766 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1758, L_1762)), L_1765)), 5, NULL);
		int32_t L_1767 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1766, L_1767));
		// aa = RL(aa + F1(bb, cc, dd) + X[15], 5) + ee; cc = RL(cc, 10);
		int32_t L_1768 = V_5;
		int32_t L_1769;
		L_1769 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1768, ((int32_t)10), NULL);
		V_5 = L_1769;
		// ee = RL(ee + F1(aa, bb, cc) + X[10], 12) + dd; bb = RL(bb, 10);
		int32_t L_1770 = V_9;
		int32_t L_1771 = V_1;
		int32_t L_1772 = V_3;
		int32_t L_1773 = V_5;
		int32_t L_1774;
		L_1774 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1771, L_1772, L_1773, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1775 = __this->___X_15;
		NullCheck(L_1775);
		int32_t L_1776 = ((int32_t)10);
		int32_t L_1777 = (L_1775)->GetAt(static_cast<il2cpp_array_size_t>(L_1776));
		int32_t L_1778;
		L_1778 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1770, L_1774)), L_1777)), ((int32_t)12), NULL);
		int32_t L_1779 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1778, L_1779));
		// ee = RL(ee + F1(aa, bb, cc) + X[10], 12) + dd; bb = RL(bb, 10);
		int32_t L_1780 = V_3;
		int32_t L_1781;
		L_1781 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1780, ((int32_t)10), NULL);
		V_3 = L_1781;
		// dd = RL(dd + F1(ee, aa, bb) + X[4], 9) + cc; aa = RL(aa, 10);
		int32_t L_1782 = V_7;
		int32_t L_1783 = V_9;
		int32_t L_1784 = V_1;
		int32_t L_1785 = V_3;
		int32_t L_1786;
		L_1786 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1783, L_1784, L_1785, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1787 = __this->___X_15;
		NullCheck(L_1787);
		int32_t L_1788 = 4;
		int32_t L_1789 = (L_1787)->GetAt(static_cast<il2cpp_array_size_t>(L_1788));
		int32_t L_1790;
		L_1790 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1782, L_1786)), L_1789)), ((int32_t)9), NULL);
		int32_t L_1791 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1790, L_1791));
		// dd = RL(dd + F1(ee, aa, bb) + X[4], 9) + cc; aa = RL(aa, 10);
		int32_t L_1792 = V_1;
		int32_t L_1793;
		L_1793 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1792, ((int32_t)10), NULL);
		V_1 = L_1793;
		// cc = RL(cc + F1(dd, ee, aa) + X[1], 12) + bb; ee = RL(ee, 10);
		int32_t L_1794 = V_5;
		int32_t L_1795 = V_7;
		int32_t L_1796 = V_9;
		int32_t L_1797 = V_1;
		int32_t L_1798;
		L_1798 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1795, L_1796, L_1797, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1799 = __this->___X_15;
		NullCheck(L_1799);
		int32_t L_1800 = 1;
		int32_t L_1801 = (L_1799)->GetAt(static_cast<il2cpp_array_size_t>(L_1800));
		int32_t L_1802;
		L_1802 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1794, L_1798)), L_1801)), ((int32_t)12), NULL);
		int32_t L_1803 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1802, L_1803));
		// cc = RL(cc + F1(dd, ee, aa) + X[1], 12) + bb; ee = RL(ee, 10);
		int32_t L_1804 = V_9;
		int32_t L_1805;
		L_1805 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1804, ((int32_t)10), NULL);
		V_9 = L_1805;
		// bb = RL(bb + F1(cc, dd, ee) + X[5], 5) + aa; dd = RL(dd, 10);
		int32_t L_1806 = V_3;
		int32_t L_1807 = V_5;
		int32_t L_1808 = V_7;
		int32_t L_1809 = V_9;
		int32_t L_1810;
		L_1810 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1807, L_1808, L_1809, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1811 = __this->___X_15;
		NullCheck(L_1811);
		int32_t L_1812 = 5;
		int32_t L_1813 = (L_1811)->GetAt(static_cast<il2cpp_array_size_t>(L_1812));
		int32_t L_1814;
		L_1814 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1806, L_1810)), L_1813)), 5, NULL);
		int32_t L_1815 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1814, L_1815));
		// bb = RL(bb + F1(cc, dd, ee) + X[5], 5) + aa; dd = RL(dd, 10);
		int32_t L_1816 = V_7;
		int32_t L_1817;
		L_1817 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1816, ((int32_t)10), NULL);
		V_7 = L_1817;
		// aa = RL(aa + F1(bb, cc, dd) + X[8], 14) + ee; cc = RL(cc, 10);
		int32_t L_1818 = V_1;
		int32_t L_1819 = V_3;
		int32_t L_1820 = V_5;
		int32_t L_1821 = V_7;
		int32_t L_1822;
		L_1822 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1819, L_1820, L_1821, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1823 = __this->___X_15;
		NullCheck(L_1823);
		int32_t L_1824 = 8;
		int32_t L_1825 = (L_1823)->GetAt(static_cast<il2cpp_array_size_t>(L_1824));
		int32_t L_1826;
		L_1826 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1818, L_1822)), L_1825)), ((int32_t)14), NULL);
		int32_t L_1827 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1826, L_1827));
		// aa = RL(aa + F1(bb, cc, dd) + X[8], 14) + ee; cc = RL(cc, 10);
		int32_t L_1828 = V_5;
		int32_t L_1829;
		L_1829 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1828, ((int32_t)10), NULL);
		V_5 = L_1829;
		// ee = RL(ee + F1(aa, bb, cc) + X[7], 6) + dd; bb = RL(bb, 10);
		int32_t L_1830 = V_9;
		int32_t L_1831 = V_1;
		int32_t L_1832 = V_3;
		int32_t L_1833 = V_5;
		int32_t L_1834;
		L_1834 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1831, L_1832, L_1833, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1835 = __this->___X_15;
		NullCheck(L_1835);
		int32_t L_1836 = 7;
		int32_t L_1837 = (L_1835)->GetAt(static_cast<il2cpp_array_size_t>(L_1836));
		int32_t L_1838;
		L_1838 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1830, L_1834)), L_1837)), 6, NULL);
		int32_t L_1839 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1838, L_1839));
		// ee = RL(ee + F1(aa, bb, cc) + X[7], 6) + dd; bb = RL(bb, 10);
		int32_t L_1840 = V_3;
		int32_t L_1841;
		L_1841 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1840, ((int32_t)10), NULL);
		V_3 = L_1841;
		// dd = RL(dd + F1(ee, aa, bb) + X[6], 8) + cc; aa = RL(aa, 10);
		int32_t L_1842 = V_7;
		int32_t L_1843 = V_9;
		int32_t L_1844 = V_1;
		int32_t L_1845 = V_3;
		int32_t L_1846;
		L_1846 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1843, L_1844, L_1845, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1847 = __this->___X_15;
		NullCheck(L_1847);
		int32_t L_1848 = 6;
		int32_t L_1849 = (L_1847)->GetAt(static_cast<il2cpp_array_size_t>(L_1848));
		int32_t L_1850;
		L_1850 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1842, L_1846)), L_1849)), 8, NULL);
		int32_t L_1851 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1850, L_1851));
		// dd = RL(dd + F1(ee, aa, bb) + X[6], 8) + cc; aa = RL(aa, 10);
		int32_t L_1852 = V_1;
		int32_t L_1853;
		L_1853 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1852, ((int32_t)10), NULL);
		V_1 = L_1853;
		// cc = RL(cc + F1(dd, ee, aa) + X[2], 13) + bb; ee = RL(ee, 10);
		int32_t L_1854 = V_5;
		int32_t L_1855 = V_7;
		int32_t L_1856 = V_9;
		int32_t L_1857 = V_1;
		int32_t L_1858;
		L_1858 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1855, L_1856, L_1857, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1859 = __this->___X_15;
		NullCheck(L_1859);
		int32_t L_1860 = 2;
		int32_t L_1861 = (L_1859)->GetAt(static_cast<il2cpp_array_size_t>(L_1860));
		int32_t L_1862;
		L_1862 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1854, L_1858)), L_1861)), ((int32_t)13), NULL);
		int32_t L_1863 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1862, L_1863));
		// cc = RL(cc + F1(dd, ee, aa) + X[2], 13) + bb; ee = RL(ee, 10);
		int32_t L_1864 = V_9;
		int32_t L_1865;
		L_1865 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1864, ((int32_t)10), NULL);
		V_9 = L_1865;
		// bb = RL(bb + F1(cc, dd, ee) + X[13], 6) + aa; dd = RL(dd, 10);
		int32_t L_1866 = V_3;
		int32_t L_1867 = V_5;
		int32_t L_1868 = V_7;
		int32_t L_1869 = V_9;
		int32_t L_1870;
		L_1870 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1867, L_1868, L_1869, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1871 = __this->___X_15;
		NullCheck(L_1871);
		int32_t L_1872 = ((int32_t)13);
		int32_t L_1873 = (L_1871)->GetAt(static_cast<il2cpp_array_size_t>(L_1872));
		int32_t L_1874;
		L_1874 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1866, L_1870)), L_1873)), 6, NULL);
		int32_t L_1875 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1874, L_1875));
		// bb = RL(bb + F1(cc, dd, ee) + X[13], 6) + aa; dd = RL(dd, 10);
		int32_t L_1876 = V_7;
		int32_t L_1877;
		L_1877 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1876, ((int32_t)10), NULL);
		V_7 = L_1877;
		// aa = RL(aa + F1(bb, cc, dd) + X[14], 5) + ee; cc = RL(cc, 10);
		int32_t L_1878 = V_1;
		int32_t L_1879 = V_3;
		int32_t L_1880 = V_5;
		int32_t L_1881 = V_7;
		int32_t L_1882;
		L_1882 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1879, L_1880, L_1881, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1883 = __this->___X_15;
		NullCheck(L_1883);
		int32_t L_1884 = ((int32_t)14);
		int32_t L_1885 = (L_1883)->GetAt(static_cast<il2cpp_array_size_t>(L_1884));
		int32_t L_1886;
		L_1886 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1878, L_1882)), L_1885)), 5, NULL);
		int32_t L_1887 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1886, L_1887));
		// aa = RL(aa + F1(bb, cc, dd) + X[14], 5) + ee; cc = RL(cc, 10);
		int32_t L_1888 = V_5;
		int32_t L_1889;
		L_1889 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1888, ((int32_t)10), NULL);
		V_5 = L_1889;
		// ee = RL(ee + F1(aa, bb, cc) + X[0], 15) + dd; bb = RL(bb, 10);
		int32_t L_1890 = V_9;
		int32_t L_1891 = V_1;
		int32_t L_1892 = V_3;
		int32_t L_1893 = V_5;
		int32_t L_1894;
		L_1894 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1891, L_1892, L_1893, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1895 = __this->___X_15;
		NullCheck(L_1895);
		int32_t L_1896 = 0;
		int32_t L_1897 = (L_1895)->GetAt(static_cast<il2cpp_array_size_t>(L_1896));
		int32_t L_1898;
		L_1898 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1890, L_1894)), L_1897)), ((int32_t)15), NULL);
		int32_t L_1899 = V_7;
		V_9 = ((int32_t)il2cpp_codegen_add(L_1898, L_1899));
		// ee = RL(ee + F1(aa, bb, cc) + X[0], 15) + dd; bb = RL(bb, 10);
		int32_t L_1900 = V_3;
		int32_t L_1901;
		L_1901 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1900, ((int32_t)10), NULL);
		V_3 = L_1901;
		// dd = RL(dd + F1(ee, aa, bb) + X[3], 13) + cc; aa = RL(aa, 10);
		int32_t L_1902 = V_7;
		int32_t L_1903 = V_9;
		int32_t L_1904 = V_1;
		int32_t L_1905 = V_3;
		int32_t L_1906;
		L_1906 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1903, L_1904, L_1905, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1907 = __this->___X_15;
		NullCheck(L_1907);
		int32_t L_1908 = 3;
		int32_t L_1909 = (L_1907)->GetAt(static_cast<il2cpp_array_size_t>(L_1908));
		int32_t L_1910;
		L_1910 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1902, L_1906)), L_1909)), ((int32_t)13), NULL);
		int32_t L_1911 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1910, L_1911));
		// dd = RL(dd + F1(ee, aa, bb) + X[3], 13) + cc; aa = RL(aa, 10);
		int32_t L_1912 = V_1;
		int32_t L_1913;
		L_1913 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1912, ((int32_t)10), NULL);
		V_1 = L_1913;
		// cc = RL(cc + F1(dd, ee, aa) + X[9], 11) + bb; ee = RL(ee, 10);
		int32_t L_1914 = V_5;
		int32_t L_1915 = V_7;
		int32_t L_1916 = V_9;
		int32_t L_1917 = V_1;
		int32_t L_1918;
		L_1918 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1915, L_1916, L_1917, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1919 = __this->___X_15;
		NullCheck(L_1919);
		int32_t L_1920 = ((int32_t)9);
		int32_t L_1921 = (L_1919)->GetAt(static_cast<il2cpp_array_size_t>(L_1920));
		int32_t L_1922;
		L_1922 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1914, L_1918)), L_1921)), ((int32_t)11), NULL);
		int32_t L_1923 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1922, L_1923));
		// cc = RL(cc + F1(dd, ee, aa) + X[9], 11) + bb; ee = RL(ee, 10);
		int32_t L_1924 = V_9;
		int32_t L_1925;
		L_1925 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1924, ((int32_t)10), NULL);
		V_9 = L_1925;
		// bb = RL(bb + F1(cc, dd, ee) + X[11], 11) + aa; dd = RL(dd, 10);
		int32_t L_1926 = V_3;
		int32_t L_1927 = V_5;
		int32_t L_1928 = V_7;
		int32_t L_1929 = V_9;
		int32_t L_1930;
		L_1930 = RipeMD320Digest_F1_m5BFC22C4E85E2E0840E21267AF513635E5ACA81F(__this, L_1927, L_1928, L_1929, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1931 = __this->___X_15;
		NullCheck(L_1931);
		int32_t L_1932 = ((int32_t)11);
		int32_t L_1933 = (L_1931)->GetAt(static_cast<il2cpp_array_size_t>(L_1932));
		int32_t L_1934;
		L_1934 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1926, L_1930)), L_1933)), ((int32_t)11), NULL);
		int32_t L_1935 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1934, L_1935));
		// bb = RL(bb + F1(cc, dd, ee) + X[11], 11) + aa; dd = RL(dd, 10);
		int32_t L_1936 = V_7;
		int32_t L_1937;
		L_1937 = RipeMD320Digest_RL_m3834BF96685259FF53C7263D1A5F88AEAEA1E76C(__this, L_1936, ((int32_t)10), NULL);
		V_7 = L_1937;
		// H0 += a;
		int32_t L_1938 = __this->___H0_5;
		int32_t L_1939 = V_0;
		__this->___H0_5 = ((int32_t)il2cpp_codegen_add(L_1938, L_1939));
		// H1 += b;
		int32_t L_1940 = __this->___H1_6;
		int32_t L_1941 = V_2;
		__this->___H1_6 = ((int32_t)il2cpp_codegen_add(L_1940, L_1941));
		// H2 += c;
		int32_t L_1942 = __this->___H2_7;
		int32_t L_1943 = V_4;
		__this->___H2_7 = ((int32_t)il2cpp_codegen_add(L_1942, L_1943));
		// H3 += d;
		int32_t L_1944 = __this->___H3_8;
		int32_t L_1945 = V_6;
		__this->___H3_8 = ((int32_t)il2cpp_codegen_add(L_1944, L_1945));
		// H4 += ee;
		int32_t L_1946 = __this->___H4_9;
		int32_t L_1947 = V_9;
		__this->___H4_9 = ((int32_t)il2cpp_codegen_add(L_1946, L_1947));
		// H5 += aa;
		int32_t L_1948 = __this->___H5_10;
		int32_t L_1949 = V_1;
		__this->___H5_10 = ((int32_t)il2cpp_codegen_add(L_1948, L_1949));
		// H6 += bb;
		int32_t L_1950 = __this->___H6_11;
		int32_t L_1951 = V_3;
		__this->___H6_11 = ((int32_t)il2cpp_codegen_add(L_1950, L_1951));
		// H7 += cc;
		int32_t L_1952 = __this->___H7_12;
		int32_t L_1953 = V_5;
		__this->___H7_12 = ((int32_t)il2cpp_codegen_add(L_1952, L_1953));
		// H8 += dd;
		int32_t L_1954 = __this->___H8_13;
		int32_t L_1955 = V_7;
		__this->___H8_13 = ((int32_t)il2cpp_codegen_add(L_1954, L_1955));
		// H9 += e;
		int32_t L_1956 = __this->___H9_14;
		int32_t L_1957 = V_8;
		__this->___H9_14 = ((int32_t)il2cpp_codegen_add(L_1956, L_1957));
		// xOff = 0;
		__this->___xOff_16 = 0;
		// for (int i = 0; i != X.Length; i++)
		V_10 = 0;
		goto IL_20b8;
	}

IL_20a8:
	{
		// X[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1958 = __this->___X_15;
		int32_t L_1959 = V_10;
		NullCheck(L_1958);
		(L_1958)->SetAt(static_cast<il2cpp_array_size_t>(L_1959), (int32_t)0);
		// for (int i = 0; i != X.Length; i++)
		int32_t L_1960 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_1960, 1));
	}

IL_20b8:
	{
		// for (int i = 0; i != X.Length; i++)
		int32_t L_1961 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1962 = __this->___X_15;
		NullCheck(L_1962);
		if ((!(((uint32_t)L_1961) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1962)->max_length))))))
		{
			goto IL_20a8;
		}
	}
	{
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RipeMD320Digest_Copy_mA3A7BAB333EF562C420DA9D6C891337BA929E62B (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new RipeMD320Digest(this);
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_0 = (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53*)il2cpp_codegen_object_new(RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RipeMD320Digest__ctor_m11CCDCA9997BA964BE94B99AB713DF13A8A915C9(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.RipeMD320Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD320Digest_Reset_m4DA4DEE8BC41E24680F40CC0C5D95B9467E628B7 (RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* V_0 = NULL;
	{
		// RipeMD320Digest d = (RipeMD320Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53*)CastclassClass((RuntimeObject*)L_0, RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53_il2cpp_TypeInfo_var));
		// CopyIn(d);
		RipeMD320Digest_t31EAE78D5671557BBFE823DDCD6C7BCB8D53DD53* L_1 = V_0;
		RipeMD320Digest_CopyIn_m4A78FF793FF8321B6E84CE85A040514871211FDB(__this, L_1, NULL);
		// }
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest__ctor_m55A95021106C5C2BAFB74C1C713BFA150B9DD23F (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] X = new uint[80];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___X_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_10), (void*)L_0);
		// public Sha1Digest()
		GeneralDigest__ctor_m2FA9104A9BF67F3D9F3E36FC2E59D27C2E2E9C22(__this, NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest__ctor_m69E26FF040EB1622E759EC8E987C20D71048FEFF (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] X = new uint[80];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___X_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_10), (void*)L_0);
		// : base(t)
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_1 = ___t0;
		GeneralDigest__ctor_m5FEBCE63062F398FE39CE4B60A8205F328C7740C(__this, L_1, NULL);
		// CopyIn(t);
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_2 = ___t0;
		Sha1Digest_CopyIn_m5AA5B2E2AAC766153C54C6DAB0FA58357B261AE3(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_CopyIn_m5AA5B2E2AAC766153C54C6DAB0FA58357B261AE3 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* ___t0, const RuntimeMethod* method) 
{
	{
		// base.CopyIn(t);
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_0 = ___t0;
		GeneralDigest_CopyIn_m4CFFD85FB94B33F6F9F8C0FBEC061A5AB4C02023(__this, L_0, NULL);
		// H1 = t.H1;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_1 = ___t0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___H1_5;
		__this->___H1_5 = L_2;
		// H2 = t.H2;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_3 = ___t0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___H2_6;
		__this->___H2_6 = L_4;
		// H3 = t.H3;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_5 = ___t0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___H3_7;
		__this->___H3_7 = L_6;
		// H4 = t.H4;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_7 = ___t0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___H4_8;
		__this->___H4_8 = L_8;
		// H5 = t.H5;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_9 = ___t0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___H5_9;
		__this->___H5_9 = L_10;
		// Array.Copy(t.X, 0, X, 0, t.X.Length);
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_11 = ___t0;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___X_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___X_10;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_14 = ___t0;
		NullCheck(L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___X_10;
		NullCheck(L_15);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		// xOff = t.xOff;
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_16 = ___t0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___xOff_11;
		__this->___xOff_11 = L_17;
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha1Digest_get_AlgorithmName_m34666AD3ED747E445FB8524FFC6D2CF4A90C2F5F (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11208C86A379F74F4A5228C6512318CCDFEF574A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHA-1"; }
		return _stringLiteral11208C86A379F74F4A5228C6512318CCDFEF574A;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha1Digest_GetDigestSize_m8D64A71074ACCC1B1E357BCA1B595CC417E2D4CA (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)20);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_ProcessWord_m2426A0679C3CCD417FC39F1D4441C3B8192BD714 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// X[xOff] = Pack.BE_To_UInt32(input, inOff);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_10;
		int32_t L_1 = __this->___xOff_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		uint32_t L_4;
		L_4 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		// if (++xOff == 16)
		int32_t L_5 = __this->___xOff_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->___xOff_11 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002f;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_ProcessLength_m396341731A5022ECED065D8ECE96CFDD259224A1 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		// if (xOff > 14)
		int32_t L_0 = __this->___xOff_11;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0010:
	{
		// X[14] = (uint)((ulong)bitLength >> 32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___X_10;
		int64_t L_2 = ___bitLength0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))));
		// X[15] = (uint)((ulong)bitLength);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___X_10;
		int64_t L_4 = ___bitLength0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(uint32_t)L_4));
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha1Digest_DoFinal_m96AB79FFF5CC647F66FACDA52B7676E41540EDAF (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		GeneralDigest_Finish_m6BC974FD761998E6139ADD173CC60B9B47C88308(__this, NULL);
		// Pack.UInt32_To_BE(H1, output, outOff);
		uint32_t L_0 = __this->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_0, L_1, L_2, NULL);
		// Pack.UInt32_To_BE(H2, output, outOff + 4);
		uint32_t L_3 = __this->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		// Pack.UInt32_To_BE(H3, output, outOff + 8);
		uint32_t L_6 = __this->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		// Pack.UInt32_To_BE(H4, output, outOff + 12);
		uint32_t L_9 = __this->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		// Pack.UInt32_To_BE(H5, output, outOff + 16);
		uint32_t L_12 = __this->___H5_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// return DigestLength;
		return ((int32_t)20);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_Reset_m7507285491947A1CA4FADE687BA455E79B74C4F9 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		GeneralDigest_Reset_mE400482488156A49D897AD38AADBBF510CA2B6E6(__this, NULL);
		// H1 = 0x67452301;
		__this->___H1_5 = ((int32_t)1732584193);
		// H2 = 0xefcdab89;
		__this->___H2_6 = ((int32_t)-271733879);
		// H3 = 0x98badcfe;
		__this->___H3_7 = ((int32_t)-1732584194);
		// H4 = 0x10325476;
		__this->___H4_8 = ((int32_t)271733878);
		// H5 = 0xc3d2e1f0;
		__this->___H5_9 = ((int32_t)-1009589776);
		// xOff = 0;
		__this->___xOff_11 = 0;
		// Array.Clear(X, 0, X.Length);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___X_10;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// }
		return;
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::F(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		// return (u & v) | (~u & w);
		uint32_t L_0 = ___u0;
		uint32_t L_1 = ___v1;
		uint32_t L_2 = ___u0;
		uint32_t L_3 = ___w2;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)((~L_2))&(int32_t)L_3))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::H(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		// return u ^ v ^ w;
		uint32_t L_0 = ___u0;
		uint32_t L_1 = ___v1;
		uint32_t L_2 = ___w2;
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::G(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		// return (u & v) | (u & w) | (v & w);
		uint32_t L_0 = ___u0;
		uint32_t L_1 = ___v1;
		uint32_t L_2 = ___u0;
		uint32_t L_3 = ___w2;
		uint32_t L_4 = ___v1;
		uint32_t L_5 = ___w2;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)L_2&(int32_t)L_3))))|((int32_t)((int32_t)L_4&(int32_t)L_5))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_ProcessBlock_m930EFC3255DB7F588906195B45DCBD2A06D6B1DF (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		// for (int i = 16; i < 80; i++)
		V_6 = ((int32_t)16);
		goto IL_0052;
	}

IL_0006:
	{
		// uint t = X[i - 3] ^ X[i - 8] ^ X[i - 14] ^ X[i - 16];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_10;
		int32_t L_1 = V_6;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 3));
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___X_10;
		int32_t L_5 = V_6;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 8));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___X_10;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)14)));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___X_10;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)16)));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3^(int32_t)L_7))^(int32_t)L_11))^(int32_t)L_15));
		// X[i] = t << 1 | t >> 31;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->___X_10;
		int32_t L_17 = V_6;
		uint32_t L_18 = V_7;
		uint32_t L_19 = V_7;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)((int32_t)(((int32_t)((int32_t)L_18<<1))|((int32_t)((uint32_t)L_19>>((int32_t)31))))));
		// for (int i = 16; i < 80; i++)
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0052:
	{
		// for (int i = 16; i < 80; i++)
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)80))))
		{
			goto IL_0006;
		}
	}
	{
		// uint A = H1;
		uint32_t L_22 = __this->___H1_5;
		V_0 = L_22;
		// uint B = H2;
		uint32_t L_23 = __this->___H2_6;
		V_1 = L_23;
		// uint C = H3;
		uint32_t L_24 = __this->___H3_7;
		V_2 = L_24;
		// uint D = H4;
		uint32_t L_25 = __this->___H4_8;
		V_3 = L_25;
		// uint E = H5;
		uint32_t L_26 = __this->___H5_9;
		V_4 = L_26;
		// int idx = 0;
		V_5 = 0;
		// for (int j = 0; j < 4; j++)
		V_8 = 0;
		goto IL_0191;
	}

IL_0087:
	{
		// E += (A << 5 | (A >> 27)) + F(B, C, D) + X[idx++] + Y1;
		uint32_t L_27 = V_4;
		uint32_t L_28 = V_0;
		uint32_t L_29 = V_0;
		uint32_t L_30 = V_1;
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_3;
		uint32_t L_33;
		L_33 = Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = __this->___X_10;
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_28<<5))|((int32_t)((uint32_t)L_29>>((int32_t)27))))), (int32_t)L_33)), (int32_t)L_38)), ((int32_t)1518500249)))));
		// B = B << 30 | (B >> 2);
		uint32_t L_39 = V_1;
		uint32_t L_40 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_39<<((int32_t)30)))|((int32_t)((uint32_t)L_40>>2))));
		// D += (E << 5 | (E >> 27)) + F(A, B, C) + X[idx++] + Y1;
		uint32_t L_41 = V_3;
		uint32_t L_42 = V_4;
		uint32_t L_43 = V_4;
		uint32_t L_44 = V_0;
		uint32_t L_45 = V_1;
		uint32_t L_46 = V_2;
		uint32_t L_47;
		L_47 = Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___X_10;
		int32_t L_49 = V_5;
		int32_t L_50 = L_49;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint32_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_42<<5))|((int32_t)((uint32_t)L_43>>((int32_t)27))))), (int32_t)L_47)), (int32_t)L_52)), ((int32_t)1518500249)))));
		// A = A << 30 | (A >> 2);
		uint32_t L_53 = V_0;
		uint32_t L_54 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_53<<((int32_t)30)))|((int32_t)((uint32_t)L_54>>2))));
		// C += (D << 5 | (D >> 27)) + F(E, A, B) + X[idx++] + Y1;
		uint32_t L_55 = V_2;
		uint32_t L_56 = V_3;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_4;
		uint32_t L_59 = V_0;
		uint32_t L_60 = V_1;
		uint32_t L_61;
		L_61 = Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54(L_58, L_59, L_60, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->___X_10;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		NullCheck(L_62);
		int32_t L_65 = L_64;
		uint32_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_56<<5))|((int32_t)((uint32_t)L_57>>((int32_t)27))))), (int32_t)L_61)), (int32_t)L_66)), ((int32_t)1518500249)))));
		// E = E << 30 | (E >> 2);
		uint32_t L_67 = V_4;
		uint32_t L_68 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_67<<((int32_t)30)))|((int32_t)((uint32_t)L_68>>2))));
		// B += (C << 5 | (C >> 27)) + F(D, E, A) + X[idx++] + Y1;
		uint32_t L_69 = V_1;
		uint32_t L_70 = V_2;
		uint32_t L_71 = V_2;
		uint32_t L_72 = V_3;
		uint32_t L_73 = V_4;
		uint32_t L_74 = V_0;
		uint32_t L_75;
		L_75 = Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54(L_72, L_73, L_74, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = __this->___X_10;
		int32_t L_77 = V_5;
		int32_t L_78 = L_77;
		V_5 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		NullCheck(L_76);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_70<<5))|((int32_t)((uint32_t)L_71>>((int32_t)27))))), (int32_t)L_75)), (int32_t)L_80)), ((int32_t)1518500249)))));
		// D = D << 30 | (D >> 2);
		uint32_t L_81 = V_3;
		uint32_t L_82 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_81<<((int32_t)30)))|((int32_t)((uint32_t)L_82>>2))));
		// A += (B << 5 | (B >> 27)) + F(C, D, E) + X[idx++] + Y1;
		uint32_t L_83 = V_0;
		uint32_t L_84 = V_1;
		uint32_t L_85 = V_1;
		uint32_t L_86 = V_2;
		uint32_t L_87 = V_3;
		uint32_t L_88 = V_4;
		uint32_t L_89;
		L_89 = Sha1Digest_F_mB4E5D1084E7DA8D416B1BF8FD3D1054125140D54(L_86, L_87, L_88, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = __this->___X_10;
		int32_t L_91 = V_5;
		int32_t L_92 = L_91;
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		NullCheck(L_90);
		int32_t L_93 = L_92;
		uint32_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_84<<5))|((int32_t)((uint32_t)L_85>>((int32_t)27))))), (int32_t)L_89)), (int32_t)L_94)), ((int32_t)1518500249)))));
		// C = C << 30 | (C >> 2);
		uint32_t L_95 = V_2;
		uint32_t L_96 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_95<<((int32_t)30)))|((int32_t)((uint32_t)L_96>>2))));
		// for (int j = 0; j < 4; j++)
		int32_t L_97 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_0191:
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_98 = V_8;
		if ((((int32_t)L_98) < ((int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		// for (int j = 0; j < 4; j++)
		V_9 = 0;
		goto IL_02ab;
	}

IL_01a1:
	{
		// E += (A << 5 | (A >> 27)) + H(B, C, D) + X[idx++] + Y2;
		uint32_t L_99 = V_4;
		uint32_t L_100 = V_0;
		uint32_t L_101 = V_0;
		uint32_t L_102 = V_1;
		uint32_t L_103 = V_2;
		uint32_t L_104 = V_3;
		uint32_t L_105;
		L_105 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_102, L_103, L_104, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = __this->___X_10;
		int32_t L_107 = V_5;
		int32_t L_108 = L_107;
		V_5 = ((int32_t)il2cpp_codegen_add(L_108, 1));
		NullCheck(L_106);
		int32_t L_109 = L_108;
		uint32_t L_110 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_100<<5))|((int32_t)((uint32_t)L_101>>((int32_t)27))))), (int32_t)L_105)), (int32_t)L_110)), ((int32_t)1859775393)))));
		// B = B << 30 | (B >> 2);
		uint32_t L_111 = V_1;
		uint32_t L_112 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_111<<((int32_t)30)))|((int32_t)((uint32_t)L_112>>2))));
		// D += (E << 5 | (E >> 27)) + H(A, B, C) + X[idx++] + Y2;
		uint32_t L_113 = V_3;
		uint32_t L_114 = V_4;
		uint32_t L_115 = V_4;
		uint32_t L_116 = V_0;
		uint32_t L_117 = V_1;
		uint32_t L_118 = V_2;
		uint32_t L_119;
		L_119 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_116, L_117, L_118, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = __this->___X_10;
		int32_t L_121 = V_5;
		int32_t L_122 = L_121;
		V_5 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		NullCheck(L_120);
		int32_t L_123 = L_122;
		uint32_t L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_114<<5))|((int32_t)((uint32_t)L_115>>((int32_t)27))))), (int32_t)L_119)), (int32_t)L_124)), ((int32_t)1859775393)))));
		// A = A << 30 | (A >> 2);
		uint32_t L_125 = V_0;
		uint32_t L_126 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_125<<((int32_t)30)))|((int32_t)((uint32_t)L_126>>2))));
		// C += (D << 5 | (D >> 27)) + H(E, A, B) + X[idx++] + Y2;
		uint32_t L_127 = V_2;
		uint32_t L_128 = V_3;
		uint32_t L_129 = V_3;
		uint32_t L_130 = V_4;
		uint32_t L_131 = V_0;
		uint32_t L_132 = V_1;
		uint32_t L_133;
		L_133 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_130, L_131, L_132, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = __this->___X_10;
		int32_t L_135 = V_5;
		int32_t L_136 = L_135;
		V_5 = ((int32_t)il2cpp_codegen_add(L_136, 1));
		NullCheck(L_134);
		int32_t L_137 = L_136;
		uint32_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_128<<5))|((int32_t)((uint32_t)L_129>>((int32_t)27))))), (int32_t)L_133)), (int32_t)L_138)), ((int32_t)1859775393)))));
		// E = E << 30 | (E >> 2);
		uint32_t L_139 = V_4;
		uint32_t L_140 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_139<<((int32_t)30)))|((int32_t)((uint32_t)L_140>>2))));
		// B += (C << 5 | (C >> 27)) + H(D, E, A) + X[idx++] + Y2;
		uint32_t L_141 = V_1;
		uint32_t L_142 = V_2;
		uint32_t L_143 = V_2;
		uint32_t L_144 = V_3;
		uint32_t L_145 = V_4;
		uint32_t L_146 = V_0;
		uint32_t L_147;
		L_147 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_144, L_145, L_146, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = __this->___X_10;
		int32_t L_149 = V_5;
		int32_t L_150 = L_149;
		V_5 = ((int32_t)il2cpp_codegen_add(L_150, 1));
		NullCheck(L_148);
		int32_t L_151 = L_150;
		uint32_t L_152 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_142<<5))|((int32_t)((uint32_t)L_143>>((int32_t)27))))), (int32_t)L_147)), (int32_t)L_152)), ((int32_t)1859775393)))));
		// D = D << 30 | (D >> 2);
		uint32_t L_153 = V_3;
		uint32_t L_154 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_153<<((int32_t)30)))|((int32_t)((uint32_t)L_154>>2))));
		// A += (B << 5 | (B >> 27)) + H(C, D, E) + X[idx++] + Y2;
		uint32_t L_155 = V_0;
		uint32_t L_156 = V_1;
		uint32_t L_157 = V_1;
		uint32_t L_158 = V_2;
		uint32_t L_159 = V_3;
		uint32_t L_160 = V_4;
		uint32_t L_161;
		L_161 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_158, L_159, L_160, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = __this->___X_10;
		int32_t L_163 = V_5;
		int32_t L_164 = L_163;
		V_5 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		NullCheck(L_162);
		int32_t L_165 = L_164;
		uint32_t L_166 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_155, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_156<<5))|((int32_t)((uint32_t)L_157>>((int32_t)27))))), (int32_t)L_161)), (int32_t)L_166)), ((int32_t)1859775393)))));
		// C = C << 30 | (C >> 2);
		uint32_t L_167 = V_2;
		uint32_t L_168 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_167<<((int32_t)30)))|((int32_t)((uint32_t)L_168>>2))));
		// for (int j = 0; j < 4; j++)
		int32_t L_169 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_169, 1));
	}

IL_02ab:
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_170 = V_9;
		if ((((int32_t)L_170) < ((int32_t)4)))
		{
			goto IL_01a1;
		}
	}
	{
		// for (int j = 0; j < 4; j++)
		V_10 = 0;
		goto IL_03c5;
	}

IL_02bb:
	{
		// E += (A << 5 | (A >> 27)) + G(B, C, D) + X[idx++] + Y3;
		uint32_t L_171 = V_4;
		uint32_t L_172 = V_0;
		uint32_t L_173 = V_0;
		uint32_t L_174 = V_1;
		uint32_t L_175 = V_2;
		uint32_t L_176 = V_3;
		uint32_t L_177;
		L_177 = Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D(L_174, L_175, L_176, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = __this->___X_10;
		int32_t L_179 = V_5;
		int32_t L_180 = L_179;
		V_5 = ((int32_t)il2cpp_codegen_add(L_180, 1));
		NullCheck(L_178);
		int32_t L_181 = L_180;
		uint32_t L_182 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_172<<5))|((int32_t)((uint32_t)L_173>>((int32_t)27))))), (int32_t)L_177)), (int32_t)L_182)), ((int32_t)-1894007588)))));
		// B = B << 30 | (B >> 2);
		uint32_t L_183 = V_1;
		uint32_t L_184 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_183<<((int32_t)30)))|((int32_t)((uint32_t)L_184>>2))));
		// D += (E << 5 | (E >> 27)) + G(A, B, C) + X[idx++] + Y3;
		uint32_t L_185 = V_3;
		uint32_t L_186 = V_4;
		uint32_t L_187 = V_4;
		uint32_t L_188 = V_0;
		uint32_t L_189 = V_1;
		uint32_t L_190 = V_2;
		uint32_t L_191;
		L_191 = Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D(L_188, L_189, L_190, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = __this->___X_10;
		int32_t L_193 = V_5;
		int32_t L_194 = L_193;
		V_5 = ((int32_t)il2cpp_codegen_add(L_194, 1));
		NullCheck(L_192);
		int32_t L_195 = L_194;
		uint32_t L_196 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_185, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_186<<5))|((int32_t)((uint32_t)L_187>>((int32_t)27))))), (int32_t)L_191)), (int32_t)L_196)), ((int32_t)-1894007588)))));
		// A = A << 30 | (A >> 2);
		uint32_t L_197 = V_0;
		uint32_t L_198 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_197<<((int32_t)30)))|((int32_t)((uint32_t)L_198>>2))));
		// C += (D << 5 | (D >> 27)) + G(E, A, B) + X[idx++] + Y3;
		uint32_t L_199 = V_2;
		uint32_t L_200 = V_3;
		uint32_t L_201 = V_3;
		uint32_t L_202 = V_4;
		uint32_t L_203 = V_0;
		uint32_t L_204 = V_1;
		uint32_t L_205;
		L_205 = Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D(L_202, L_203, L_204, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = __this->___X_10;
		int32_t L_207 = V_5;
		int32_t L_208 = L_207;
		V_5 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		NullCheck(L_206);
		int32_t L_209 = L_208;
		uint32_t L_210 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_199, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_200<<5))|((int32_t)((uint32_t)L_201>>((int32_t)27))))), (int32_t)L_205)), (int32_t)L_210)), ((int32_t)-1894007588)))));
		// E = E << 30 | (E >> 2);
		uint32_t L_211 = V_4;
		uint32_t L_212 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_211<<((int32_t)30)))|((int32_t)((uint32_t)L_212>>2))));
		// B += (C << 5 | (C >> 27)) + G(D, E, A) + X[idx++] + Y3;
		uint32_t L_213 = V_1;
		uint32_t L_214 = V_2;
		uint32_t L_215 = V_2;
		uint32_t L_216 = V_3;
		uint32_t L_217 = V_4;
		uint32_t L_218 = V_0;
		uint32_t L_219;
		L_219 = Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D(L_216, L_217, L_218, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_220 = __this->___X_10;
		int32_t L_221 = V_5;
		int32_t L_222 = L_221;
		V_5 = ((int32_t)il2cpp_codegen_add(L_222, 1));
		NullCheck(L_220);
		int32_t L_223 = L_222;
		uint32_t L_224 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_213, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_214<<5))|((int32_t)((uint32_t)L_215>>((int32_t)27))))), (int32_t)L_219)), (int32_t)L_224)), ((int32_t)-1894007588)))));
		// D = D << 30 | (D >> 2);
		uint32_t L_225 = V_3;
		uint32_t L_226 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_225<<((int32_t)30)))|((int32_t)((uint32_t)L_226>>2))));
		// A += (B << 5 | (B >> 27)) + G(C, D, E) + X[idx++] + Y3;
		uint32_t L_227 = V_0;
		uint32_t L_228 = V_1;
		uint32_t L_229 = V_1;
		uint32_t L_230 = V_2;
		uint32_t L_231 = V_3;
		uint32_t L_232 = V_4;
		uint32_t L_233;
		L_233 = Sha1Digest_G_mEAE1540DD69D2A322E9A73698C9D5216B034936D(L_230, L_231, L_232, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = __this->___X_10;
		int32_t L_235 = V_5;
		int32_t L_236 = L_235;
		V_5 = ((int32_t)il2cpp_codegen_add(L_236, 1));
		NullCheck(L_234);
		int32_t L_237 = L_236;
		uint32_t L_238 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_227, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_228<<5))|((int32_t)((uint32_t)L_229>>((int32_t)27))))), (int32_t)L_233)), (int32_t)L_238)), ((int32_t)-1894007588)))));
		// C = C << 30 | (C >> 2);
		uint32_t L_239 = V_2;
		uint32_t L_240 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_239<<((int32_t)30)))|((int32_t)((uint32_t)L_240>>2))));
		// for (int j = 0; j < 4; j++)
		int32_t L_241 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_241, 1));
	}

IL_03c5:
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_242 = V_10;
		if ((((int32_t)L_242) < ((int32_t)4)))
		{
			goto IL_02bb;
		}
	}
	{
		// for (int j = 0; j < 4; j++)
		V_11 = 0;
		goto IL_04df;
	}

IL_03d5:
	{
		// E += (A << 5 | (A >> 27)) + H(B, C, D) + X[idx++] + Y4;
		uint32_t L_243 = V_4;
		uint32_t L_244 = V_0;
		uint32_t L_245 = V_0;
		uint32_t L_246 = V_1;
		uint32_t L_247 = V_2;
		uint32_t L_248 = V_3;
		uint32_t L_249;
		L_249 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_246, L_247, L_248, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_250 = __this->___X_10;
		int32_t L_251 = V_5;
		int32_t L_252 = L_251;
		V_5 = ((int32_t)il2cpp_codegen_add(L_252, 1));
		NullCheck(L_250);
		int32_t L_253 = L_252;
		uint32_t L_254 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_243, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_244<<5))|((int32_t)((uint32_t)L_245>>((int32_t)27))))), (int32_t)L_249)), (int32_t)L_254)), ((int32_t)-899497514)))));
		// B = B << 30 | (B >> 2);
		uint32_t L_255 = V_1;
		uint32_t L_256 = V_1;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_255<<((int32_t)30)))|((int32_t)((uint32_t)L_256>>2))));
		// D += (E << 5 | (E >> 27)) + H(A, B, C) + X[idx++] + Y4;
		uint32_t L_257 = V_3;
		uint32_t L_258 = V_4;
		uint32_t L_259 = V_4;
		uint32_t L_260 = V_0;
		uint32_t L_261 = V_1;
		uint32_t L_262 = V_2;
		uint32_t L_263;
		L_263 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_260, L_261, L_262, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_264 = __this->___X_10;
		int32_t L_265 = V_5;
		int32_t L_266 = L_265;
		V_5 = ((int32_t)il2cpp_codegen_add(L_266, 1));
		NullCheck(L_264);
		int32_t L_267 = L_266;
		uint32_t L_268 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_257, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_258<<5))|((int32_t)((uint32_t)L_259>>((int32_t)27))))), (int32_t)L_263)), (int32_t)L_268)), ((int32_t)-899497514)))));
		// A = A << 30 | (A >> 2);
		uint32_t L_269 = V_0;
		uint32_t L_270 = V_0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_269<<((int32_t)30)))|((int32_t)((uint32_t)L_270>>2))));
		// C += (D << 5 | (D >> 27)) + H(E, A, B) + X[idx++] + Y4;
		uint32_t L_271 = V_2;
		uint32_t L_272 = V_3;
		uint32_t L_273 = V_3;
		uint32_t L_274 = V_4;
		uint32_t L_275 = V_0;
		uint32_t L_276 = V_1;
		uint32_t L_277;
		L_277 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_274, L_275, L_276, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_278 = __this->___X_10;
		int32_t L_279 = V_5;
		int32_t L_280 = L_279;
		V_5 = ((int32_t)il2cpp_codegen_add(L_280, 1));
		NullCheck(L_278);
		int32_t L_281 = L_280;
		uint32_t L_282 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_271, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_272<<5))|((int32_t)((uint32_t)L_273>>((int32_t)27))))), (int32_t)L_277)), (int32_t)L_282)), ((int32_t)-899497514)))));
		// E = E << 30 | (E >> 2);
		uint32_t L_283 = V_4;
		uint32_t L_284 = V_4;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_283<<((int32_t)30)))|((int32_t)((uint32_t)L_284>>2))));
		// B += (C << 5 | (C >> 27)) + H(D, E, A) + X[idx++] + Y4;
		uint32_t L_285 = V_1;
		uint32_t L_286 = V_2;
		uint32_t L_287 = V_2;
		uint32_t L_288 = V_3;
		uint32_t L_289 = V_4;
		uint32_t L_290 = V_0;
		uint32_t L_291;
		L_291 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_288, L_289, L_290, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_292 = __this->___X_10;
		int32_t L_293 = V_5;
		int32_t L_294 = L_293;
		V_5 = ((int32_t)il2cpp_codegen_add(L_294, 1));
		NullCheck(L_292);
		int32_t L_295 = L_294;
		uint32_t L_296 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_285, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_286<<5))|((int32_t)((uint32_t)L_287>>((int32_t)27))))), (int32_t)L_291)), (int32_t)L_296)), ((int32_t)-899497514)))));
		// D = D << 30 | (D >> 2);
		uint32_t L_297 = V_3;
		uint32_t L_298 = V_3;
		V_3 = ((int32_t)(((int32_t)((int32_t)L_297<<((int32_t)30)))|((int32_t)((uint32_t)L_298>>2))));
		// A += (B << 5 | (B >> 27)) + H(C, D, E) + X[idx++] + Y4;
		uint32_t L_299 = V_0;
		uint32_t L_300 = V_1;
		uint32_t L_301 = V_1;
		uint32_t L_302 = V_2;
		uint32_t L_303 = V_3;
		uint32_t L_304 = V_4;
		uint32_t L_305;
		L_305 = Sha1Digest_H_m7E613762DCD6CB237A238DF23829F047504E4C71(L_302, L_303, L_304, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_306 = __this->___X_10;
		int32_t L_307 = V_5;
		int32_t L_308 = L_307;
		V_5 = ((int32_t)il2cpp_codegen_add(L_308, 1));
		NullCheck(L_306);
		int32_t L_309 = L_308;
		uint32_t L_310 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_299, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_300<<5))|((int32_t)((uint32_t)L_301>>((int32_t)27))))), (int32_t)L_305)), (int32_t)L_310)), ((int32_t)-899497514)))));
		// C = C << 30 | (C >> 2);
		uint32_t L_311 = V_2;
		uint32_t L_312 = V_2;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_311<<((int32_t)30)))|((int32_t)((uint32_t)L_312>>2))));
		// for (int j = 0; j < 4; j++)
		int32_t L_313 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_313, 1));
	}

IL_04df:
	{
		// for (int j = 0; j < 4; j++)
		int32_t L_314 = V_11;
		if ((((int32_t)L_314) < ((int32_t)4)))
		{
			goto IL_03d5;
		}
	}
	{
		// H1 += A;
		uint32_t L_315 = __this->___H1_5;
		uint32_t L_316 = V_0;
		__this->___H1_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_315, (int32_t)L_316));
		// H2 += B;
		uint32_t L_317 = __this->___H2_6;
		uint32_t L_318 = V_1;
		__this->___H2_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_317, (int32_t)L_318));
		// H3 += C;
		uint32_t L_319 = __this->___H3_7;
		uint32_t L_320 = V_2;
		__this->___H3_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_319, (int32_t)L_320));
		// H4 += D;
		uint32_t L_321 = __this->___H4_8;
		uint32_t L_322 = V_3;
		__this->___H4_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_321, (int32_t)L_322));
		// H5 += E;
		uint32_t L_323 = __this->___H5_9;
		uint32_t L_324 = V_4;
		__this->___H5_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)L_324));
		// xOff = 0;
		__this->___xOff_11 = 0;
		// Array.Clear(X, 0, 16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = __this->___X_10;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_325, 0, ((int32_t)16), NULL);
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha1Digest_Copy_m719867EDEAB62E5A911545DE1AD0E2F4EBD8DA23 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha1Digest(this);
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_0 = (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5*)il2cpp_codegen_object_new(Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha1Digest__ctor_m69E26FF040EB1622E759EC8E987C20D71048FEFF(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha1Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest_Reset_mB21437261ED9ECACCAABB2B805D75DCEC98F87C7 (Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* V_0 = NULL;
	{
		// Sha1Digest d = (Sha1Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5*)CastclassClass((RuntimeObject*)L_0, Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5_il2cpp_TypeInfo_var));
		// CopyIn(d);
		Sha1Digest_tCF7C647E021DF484C8BB69D8B4C244965C2B5EC5* L_1 = V_0;
		Sha1Digest_CopyIn_m5AA5B2E2AAC766153C54C6DAB0FA58357B261AE3(__this, L_1, NULL);
		// }
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest__ctor_m259F40EB98E8026F105D27F48FC75578AD881483 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] X = new uint[64];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___X_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_13), (void*)L_0);
		// public Sha224Digest()
		GeneralDigest__ctor_m2FA9104A9BF67F3D9F3E36FC2E59D27C2E2E9C22(__this, NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest__ctor_mFE5E315086D5581AC5B2EDEFAFF1DAF7E34E361E (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] X = new uint[64];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___X_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_13), (void*)L_0);
		// : base(t)
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_1 = ___t0;
		GeneralDigest__ctor_m5FEBCE63062F398FE39CE4B60A8205F328C7740C(__this, L_1, NULL);
		// CopyIn(t);
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_2 = ___t0;
		Sha224Digest_CopyIn_m7593F945F503C4F0211A47DA5542412482021886(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_CopyIn_m7593F945F503C4F0211A47DA5542412482021886 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* ___t0, const RuntimeMethod* method) 
{
	{
		// base.CopyIn(t);
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_0 = ___t0;
		GeneralDigest_CopyIn_m4CFFD85FB94B33F6F9F8C0FBEC061A5AB4C02023(__this, L_0, NULL);
		// H1 = t.H1;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_1 = ___t0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___H1_5;
		__this->___H1_5 = L_2;
		// H2 = t.H2;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_3 = ___t0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___H2_6;
		__this->___H2_6 = L_4;
		// H3 = t.H3;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_5 = ___t0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___H3_7;
		__this->___H3_7 = L_6;
		// H4 = t.H4;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_7 = ___t0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___H4_8;
		__this->___H4_8 = L_8;
		// H5 = t.H5;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_9 = ___t0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___H5_9;
		__this->___H5_9 = L_10;
		// H6 = t.H6;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_11 = ___t0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___H6_10;
		__this->___H6_10 = L_12;
		// H7 = t.H7;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_13 = ___t0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___H7_11;
		__this->___H7_11 = L_14;
		// H8 = t.H8;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_15 = ___t0;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___H8_12;
		__this->___H8_12 = L_16;
		// Array.Copy(t.X, 0, X, 0, t.X.Length);
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_17 = ___t0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = __this->___X_13;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_20 = ___t0;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___X_13;
		NullCheck(L_21);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)), NULL);
		// xOff = t.xOff;
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_22 = ___t0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___xOff_14;
		__this->___xOff_14 = L_23;
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha224Digest_get_AlgorithmName_m854B37894363BDEDDC2025C907D836F4D9D78D97 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8167CCC78C1117CDBB4F4177DE66863BA21E27A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHA-224"; }
		return _stringLiteralF8167CCC78C1117CDBB4F4177DE66863BA21E27A;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha224Digest_GetDigestSize_mEBC7C412D3DCE613B39D6EE10C01AFE2962FF611 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)28);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_ProcessWord_mCA6C05A0617D3D2D5606E736AE8F9DF346B5389F (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// X[xOff] = Pack.BE_To_UInt32(input, inOff);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_13;
		int32_t L_1 = __this->___xOff_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		uint32_t L_4;
		L_4 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_2, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		// if (++xOff == 16)
		int32_t L_5 = __this->___xOff_14;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		__this->___xOff_14 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002f;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_ProcessLength_mB871ABB26B331C2E16BEDEE6B7E0763FE25E08E1 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		// if (xOff > 14)
		int32_t L_0 = __this->___xOff_14;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0010:
	{
		// X[14] = (uint)((ulong)bitLength >> 32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___X_13;
		int64_t L_2 = ___bitLength0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))));
		// X[15] = (uint)((ulong)bitLength);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___X_13;
		int64_t L_4 = ___bitLength0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(uint32_t)L_4));
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha224Digest_DoFinal_m90CE498BA98978E1FB4227DFD3A690B7BABBE70C (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		GeneralDigest_Finish_m6BC974FD761998E6139ADD173CC60B9B47C88308(__this, NULL);
		// Pack.UInt32_To_BE(H1, output, outOff);
		uint32_t L_0 = __this->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_0, L_1, L_2, NULL);
		// Pack.UInt32_To_BE(H2, output, outOff + 4);
		uint32_t L_3 = __this->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		// Pack.UInt32_To_BE(H3, output, outOff + 8);
		uint32_t L_6 = __this->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		// Pack.UInt32_To_BE(H4, output, outOff + 12);
		uint32_t L_9 = __this->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		// Pack.UInt32_To_BE(H5, output, outOff + 16);
		uint32_t L_12 = __this->___H5_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16))), NULL);
		// Pack.UInt32_To_BE(H6, output, outOff + 20);
		uint32_t L_15 = __this->___H6_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___output0;
		int32_t L_17 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_15, L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)20))), NULL);
		// Pack.UInt32_To_BE(H7, output, outOff + 24);
		uint32_t L_18 = __this->___H7_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___output0;
		int32_t L_20 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)24))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// return DigestLength;
		return ((int32_t)28);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_Reset_m6255776C1A9FD9949A1B01FE2444F68D2F31C7EF (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		GeneralDigest_Reset_mE400482488156A49D897AD38AADBBF510CA2B6E6(__this, NULL);
		// H1 = 0xc1059ed8;
		__this->___H1_5 = ((int32_t)-1056596264);
		// H2 = 0x367cd507;
		__this->___H2_6 = ((int32_t)914150663);
		// H3 = 0x3070dd17;
		__this->___H3_7 = ((int32_t)812702999);
		// H4 = 0xf70e5939;
		__this->___H4_8 = ((int32_t)-150054599);
		// H5 = 0xffc00b31;
		__this->___H5_9 = ((int32_t)-4191439);
		// H6 = 0x68581511;
		__this->___H6_10 = ((int32_t)1750603025);
		// H7 = 0x64f98fa7;
		__this->___H7_11 = ((int32_t)1694076839);
		// H8 = 0xbefa4fa4;
		__this->___H8_12 = ((int32_t)-1090891868);
		// xOff = 0;
		__this->___xOff_14 = 0;
		// Array.Clear(X, 0, X.Length);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___X_13;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_ProcessBlock_mAD6DFF4739E0619F46E3C1E03CCFAFCF523E3CA9 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// for (int ti = 16; ti <= 63; ti++)
		V_9 = ((int32_t)16);
		goto IL_0050;
	}

IL_0006:
	{
		// X[ti] = Theta1(X[ti - 2]) + X[ti - 7] + Theta0(X[ti - 15]) + X[ti - 16];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_13;
		int32_t L_1 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___X_13;
		int32_t L_3 = V_9;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 2));
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Sha224Digest_Theta1_m4EE3AF612145732726EEB115B971EA922735F594(L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___X_13;
		int32_t L_8 = V_9;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 7));
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___X_13;
		int32_t L_12 = V_9;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)15)));
		uint32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15;
		L_15 = Sha224Digest_Theta0_mC0BF5CEF814532762D748610543D0D3E70513A3C(L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->___X_13;
		int32_t L_17 = V_9;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)16)));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_10)), (int32_t)L_15)), (int32_t)L_19)));
		// for (int ti = 16; ti <= 63; ti++)
		int32_t L_20 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0050:
	{
		// for (int ti = 16; ti <= 63; ti++)
		int32_t L_21 = V_9;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)63))))
		{
			goto IL_0006;
		}
	}
	{
		// uint a = H1;
		uint32_t L_22 = __this->___H1_5;
		V_0 = L_22;
		// uint b = H2;
		uint32_t L_23 = __this->___H2_6;
		V_1 = L_23;
		// uint c = H3;
		uint32_t L_24 = __this->___H3_7;
		V_2 = L_24;
		// uint d = H4;
		uint32_t L_25 = __this->___H4_8;
		V_3 = L_25;
		// uint e = H5;
		uint32_t L_26 = __this->___H5_9;
		V_4 = L_26;
		// uint f = H6;
		uint32_t L_27 = __this->___H6_10;
		V_5 = L_27;
		// uint g = H7;
		uint32_t L_28 = __this->___H7_11;
		V_6 = L_28;
		// uint h = H8;
		uint32_t L_29 = __this->___H8_12;
		V_7 = L_29;
		// int t = 0;
		V_8 = 0;
		// for(int i = 0; i < 8; i ++)
		V_10 = 0;
		goto IL_02e7;
	}

IL_009d:
	{
		// h += Sum1(e) + Ch(e, f, g) + K[t] + X[t];
		uint32_t L_30 = V_7;
		uint32_t L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_31, NULL);
		uint32_t L_33 = V_4;
		uint32_t L_34 = V_5;
		uint32_t L_35 = V_6;
		uint32_t L_36;
		L_36 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___X_13;
		int32_t L_42 = V_8;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_36)), (int32_t)L_40)), (int32_t)L_44))));
		// d += h;
		uint32_t L_45 = V_3;
		uint32_t L_46 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
		// h += Sum0(a) + Maj(a, b, c);
		uint32_t L_47 = V_7;
		uint32_t L_48 = V_0;
		uint32_t L_49;
		L_49 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_48, NULL);
		uint32_t L_50 = V_0;
		uint32_t L_51 = V_1;
		uint32_t L_52 = V_2;
		uint32_t L_53;
		L_53 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_50, L_51, L_52, NULL);
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_53))));
		// ++t;
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		// g += Sum1(d) + Ch(d, e, f) + K[t] + X[t];
		uint32_t L_55 = V_6;
		uint32_t L_56 = V_3;
		uint32_t L_57;
		L_57 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_56, NULL);
		uint32_t L_58 = V_3;
		uint32_t L_59 = V_4;
		uint32_t L_60 = V_5;
		uint32_t L_61;
		L_61 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_58, L_59, L_60, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = __this->___X_13;
		int32_t L_67 = V_8;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_61)), (int32_t)L_65)), (int32_t)L_69))));
		// c += g;
		uint32_t L_70 = V_2;
		uint32_t L_71 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)L_71));
		// g += Sum0(h) + Maj(h, a, b);
		uint32_t L_72 = V_6;
		uint32_t L_73 = V_7;
		uint32_t L_74;
		L_74 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_73, NULL);
		uint32_t L_75 = V_7;
		uint32_t L_76 = V_0;
		uint32_t L_77 = V_1;
		uint32_t L_78;
		L_78 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_75, L_76, L_77, NULL);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_78))));
		// ++t;
		int32_t L_79 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		// f += Sum1(c) + Ch(c, d, e) + K[t] + X[t];
		uint32_t L_80 = V_5;
		uint32_t L_81 = V_2;
		uint32_t L_82;
		L_82 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_81, NULL);
		uint32_t L_83 = V_2;
		uint32_t L_84 = V_3;
		uint32_t L_85 = V_4;
		uint32_t L_86;
		L_86 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_83, L_84, L_85, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_88 = V_8;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = __this->___X_13;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_86)), (int32_t)L_90)), (int32_t)L_94))));
		// b += f;
		uint32_t L_95 = V_1;
		uint32_t L_96 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)L_96));
		// f += Sum0(g) + Maj(g, h, a);
		uint32_t L_97 = V_5;
		uint32_t L_98 = V_6;
		uint32_t L_99;
		L_99 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_98, NULL);
		uint32_t L_100 = V_6;
		uint32_t L_101 = V_7;
		uint32_t L_102 = V_0;
		uint32_t L_103;
		L_103 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_100, L_101, L_102, NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)L_103))));
		// ++t;
		int32_t L_104 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		// e += Sum1(b) + Ch(b, c, d) + K[t] + X[t];
		uint32_t L_105 = V_4;
		uint32_t L_106 = V_1;
		uint32_t L_107;
		L_107 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_106, NULL);
		uint32_t L_108 = V_1;
		uint32_t L_109 = V_2;
		uint32_t L_110 = V_3;
		uint32_t L_111;
		L_111 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_108, L_109, L_110, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_113 = V_8;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = __this->___X_13;
		int32_t L_117 = V_8;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)L_111)), (int32_t)L_115)), (int32_t)L_119))));
		// a += e;
		uint32_t L_120 = V_0;
		uint32_t L_121 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121));
		// e += Sum0(f) + Maj(f, g, h);
		uint32_t L_122 = V_4;
		uint32_t L_123 = V_5;
		uint32_t L_124;
		L_124 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_123, NULL);
		uint32_t L_125 = V_5;
		uint32_t L_126 = V_6;
		uint32_t L_127 = V_7;
		uint32_t L_128;
		L_128 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_125, L_126, L_127, NULL);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)L_128))));
		// ++t;
		int32_t L_129 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		// d += Sum1(a) + Ch(a, b, c) + K[t] + X[t];
		uint32_t L_130 = V_3;
		uint32_t L_131 = V_0;
		uint32_t L_132;
		L_132 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_131, NULL);
		uint32_t L_133 = V_0;
		uint32_t L_134 = V_1;
		uint32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_133, L_134, L_135, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_138 = V_8;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		uint32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = __this->___X_13;
		int32_t L_142 = V_8;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		uint32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)L_136)), (int32_t)L_140)), (int32_t)L_144))));
		// h += d;
		uint32_t L_145 = V_7;
		uint32_t L_146 = V_3;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146));
		// d += Sum0(e) + Maj(e, f, g);
		uint32_t L_147 = V_3;
		uint32_t L_148 = V_4;
		uint32_t L_149;
		L_149 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_148, NULL);
		uint32_t L_150 = V_4;
		uint32_t L_151 = V_5;
		uint32_t L_152 = V_6;
		uint32_t L_153;
		L_153 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_150, L_151, L_152, NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)L_153))));
		// ++t;
		int32_t L_154 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_154, 1));
		// c += Sum1(h) + Ch(h, a, b) + K[t] + X[t];
		uint32_t L_155 = V_2;
		uint32_t L_156 = V_7;
		uint32_t L_157;
		L_157 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_156, NULL);
		uint32_t L_158 = V_7;
		uint32_t L_159 = V_0;
		uint32_t L_160 = V_1;
		uint32_t L_161;
		L_161 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_158, L_159, L_160, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_163 = V_8;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		uint32_t L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = __this->___X_13;
		int32_t L_167 = V_8;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		uint32_t L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_155, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)L_161)), (int32_t)L_165)), (int32_t)L_169))));
		// g += c;
		uint32_t L_170 = V_6;
		uint32_t L_171 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)L_171));
		// c += Sum0(d) + Maj(d, e, f);
		uint32_t L_172 = V_2;
		uint32_t L_173 = V_3;
		uint32_t L_174;
		L_174 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_173, NULL);
		uint32_t L_175 = V_3;
		uint32_t L_176 = V_4;
		uint32_t L_177 = V_5;
		uint32_t L_178;
		L_178 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_175, L_176, L_177, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_172, ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)L_178))));
		// ++t;
		int32_t L_179 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		// b += Sum1(g) + Ch(g, h, a) + K[t] + X[t];
		uint32_t L_180 = V_1;
		uint32_t L_181 = V_6;
		uint32_t L_182;
		L_182 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_181, NULL);
		uint32_t L_183 = V_6;
		uint32_t L_184 = V_7;
		uint32_t L_185 = V_0;
		uint32_t L_186;
		L_186 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_183, L_184, L_185, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_188 = V_8;
		NullCheck(L_187);
		int32_t L_189 = L_188;
		uint32_t L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = __this->___X_13;
		int32_t L_192 = V_8;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		uint32_t L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)L_186)), (int32_t)L_190)), (int32_t)L_194))));
		// f += b;
		uint32_t L_195 = V_5;
		uint32_t L_196 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)L_196));
		// b += Sum0(c) + Maj(c, d, e);
		uint32_t L_197 = V_1;
		uint32_t L_198 = V_2;
		uint32_t L_199;
		L_199 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_198, NULL);
		uint32_t L_200 = V_2;
		uint32_t L_201 = V_3;
		uint32_t L_202 = V_4;
		uint32_t L_203;
		L_203 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_200, L_201, L_202, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_197, ((int32_t)il2cpp_codegen_add((int32_t)L_199, (int32_t)L_203))));
		// ++t;
		int32_t L_204 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_204, 1));
		// a += Sum1(f) + Ch(f, g, h) + K[t] + X[t];
		uint32_t L_205 = V_0;
		uint32_t L_206 = V_5;
		uint32_t L_207;
		L_207 = Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7(L_206, NULL);
		uint32_t L_208 = V_5;
		uint32_t L_209 = V_6;
		uint32_t L_210 = V_7;
		uint32_t L_211;
		L_211 = Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD(L_208, L_209, L_210, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_212 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_213 = V_8;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		uint32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = __this->___X_13;
		int32_t L_217 = V_8;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		uint32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_207, (int32_t)L_211)), (int32_t)L_215)), (int32_t)L_219))));
		// e += a;
		uint32_t L_220 = V_4;
		uint32_t L_221 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_220, (int32_t)L_221));
		// a += Sum0(b) + Maj(b, c, d);
		uint32_t L_222 = V_0;
		uint32_t L_223 = V_1;
		uint32_t L_224;
		L_224 = Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2(L_223, NULL);
		uint32_t L_225 = V_1;
		uint32_t L_226 = V_2;
		uint32_t L_227 = V_3;
		uint32_t L_228;
		L_228 = Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A(L_225, L_226, L_227, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)L_228))));
		// ++t;
		int32_t L_229 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_229, 1));
		// for(int i = 0; i < 8; i ++)
		int32_t L_230 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_230, 1));
	}

IL_02e7:
	{
		// for(int i = 0; i < 8; i ++)
		int32_t L_231 = V_10;
		if ((((int32_t)L_231) < ((int32_t)8)))
		{
			goto IL_009d;
		}
	}
	{
		// H1 += a;
		uint32_t L_232 = __this->___H1_5;
		uint32_t L_233 = V_0;
		__this->___H1_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_232, (int32_t)L_233));
		// H2 += b;
		uint32_t L_234 = __this->___H2_6;
		uint32_t L_235 = V_1;
		__this->___H2_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, (int32_t)L_235));
		// H3 += c;
		uint32_t L_236 = __this->___H3_7;
		uint32_t L_237 = V_2;
		__this->___H3_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_236, (int32_t)L_237));
		// H4 += d;
		uint32_t L_238 = __this->___H4_8;
		uint32_t L_239 = V_3;
		__this->___H4_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)L_239));
		// H5 += e;
		uint32_t L_240 = __this->___H5_9;
		uint32_t L_241 = V_4;
		__this->___H5_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_240, (int32_t)L_241));
		// H6 += f;
		uint32_t L_242 = __this->___H6_10;
		uint32_t L_243 = V_5;
		__this->___H6_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_242, (int32_t)L_243));
		// H7 += g;
		uint32_t L_244 = __this->___H7_11;
		uint32_t L_245 = V_6;
		__this->___H7_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)L_245));
		// H8 += h;
		uint32_t L_246 = __this->___H8_12;
		uint32_t L_247 = V_7;
		__this->___H8_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_246, (int32_t)L_247));
		// xOff = 0;
		__this->___xOff_14 = 0;
		// Array.Clear(X, 0, 16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_248 = __this->___X_13;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_248, 0, ((int32_t)16), NULL);
		// }
		return;
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Ch(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Ch_mCF2FB50B0C9DBAD2C910C8083894D5A1D1A0EECD (uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x & y) ^ (~x & z);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))^((int32_t)((int32_t)((~L_2))&(int32_t)L_3))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Maj(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Maj_mFDCC1C4308AE9AEB2275066DE9CC6196655A409A (uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x & y) ^ (x & z) ^ (y & z);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___z2;
		uint32_t L_4 = ___y1;
		uint32_t L_5 = ___z2;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))^((int32_t)((int32_t)L_2&(int32_t)L_3))))^((int32_t)((int32_t)L_4&(int32_t)L_5))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Sum0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Sum0_m0BC63C738F2521F793F8AF68F19FE68FDD0DF7B2 (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		// return ((x >> 2) | (x << 30)) ^ ((x >> 13) | (x << 19)) ^ ((x >> 22) | (x << 10));
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		uint32_t L_4 = ___x0;
		uint32_t L_5 = ___x0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_0>>2))|((int32_t)((int32_t)L_1<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)13)))|((int32_t)((int32_t)L_3<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_4>>((int32_t)22)))|((int32_t)((int32_t)L_5<<((int32_t)10)))))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Sum1(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Sum1_mCF4433BADD0D571CF21DB1A2AFA9CD58699B4EF7 (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		// return ((x >> 6) | (x << 26)) ^ ((x >> 11) | (x << 21)) ^ ((x >> 25) | (x << 7));
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		uint32_t L_4 = ___x0;
		uint32_t L_5 = ___x0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_0>>6))|((int32_t)((int32_t)L_1<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)11)))|((int32_t)((int32_t)L_3<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_4>>((int32_t)25)))|((int32_t)((int32_t)L_5<<7))))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Theta0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Theta0_mC0BF5CEF814532762D748610543D0D3E70513A3C (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		// return ((x >> 7) | (x << 25)) ^ ((x >> 18) | (x << 14)) ^ (x >> 3);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		uint32_t L_4 = ___x0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_0>>7))|((int32_t)((int32_t)L_1<<((int32_t)25)))))^((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)18)))|((int32_t)((int32_t)L_3<<((int32_t)14)))))))^((int32_t)((uint32_t)L_4>>3))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Theta1(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Sha224Digest_Theta1_m4EE3AF612145732726EEB115B971EA922735F594 (uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		// return ((x >> 17) | (x << 15)) ^ ((x >> 19) | (x << 13)) ^ (x >> 10);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		uint32_t L_4 = ___x0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)17)))|((int32_t)((int32_t)L_1<<((int32_t)15)))))^((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)19)))|((int32_t)((int32_t)L_3<<((int32_t)13)))))))^((int32_t)((uint32_t)L_4>>((int32_t)10)))));
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha224Digest_Copy_m0F001CC669E0F2232124FFB6F7772EC26FFD5213 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha224Digest(this);
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_0 = (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44*)il2cpp_codegen_object_new(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha224Digest__ctor_mFE5E315086D5581AC5B2EDEFAFF1DAF7E34E361E(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest_Reset_m0D8DB1886DC227ACCB1918D7E2013C3C5AC7D082 (Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* V_0 = NULL;
	{
		// Sha224Digest d = (Sha224Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44*)CastclassClass((RuntimeObject*)L_0, Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var));
		// CopyIn(d);
		Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44* L_1 = V_0;
		Sha224Digest_CopyIn_m7593F945F503C4F0211A47DA5542412482021886(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha224Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha224Digest__cctor_m1E27DA9DB422873C77D6566298CBA82C51EDAC28 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_130_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly uint[] K = {
		//     0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
		//     0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
		//     0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
		//     0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
		//     0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
		//     0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
		//     0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
		//     0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
		// };
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_130_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_StaticFields*)il2cpp_codegen_static_fields_for(Sha224Digest_tA06B21D0811E1F8E1F874D08CEE252A73892AC44_il2cpp_TypeInfo_var))->___K_15), (void*)L_1);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__ctor_m279AE56EAACFC85EAC588279FB883A67BC58D4E8 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] X = new uint[64];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___X_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_13), (void*)L_0);
		// public Sha256Digest()
		GeneralDigest__ctor_m2FA9104A9BF67F3D9F3E36FC2E59D27C2E2E9C22(__this, NULL);
		// initHs();
		Sha256Digest_initHs_mFEAF905632D789D1DD579833100288F08536E455(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__ctor_mD1172199C905C6B955B65E8E65FFEDBD0781DDB9 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] X = new uint[64];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___X_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_13), (void*)L_0);
		// public Sha256Digest(Sha256Digest t) : base(t)
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_1 = ___t0;
		GeneralDigest__ctor_m5FEBCE63062F398FE39CE4B60A8205F328C7740C(__this, L_1, NULL);
		// CopyIn(t);
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_2 = ___t0;
		Sha256Digest_CopyIn_mF98123BE5243BE72781ECB6AB88EFCA4728CA39D(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_CopyIn_mF98123BE5243BE72781ECB6AB88EFCA4728CA39D (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* ___t0, const RuntimeMethod* method) 
{
	{
		// base.CopyIn(t);
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_0 = ___t0;
		GeneralDigest_CopyIn_m4CFFD85FB94B33F6F9F8C0FBEC061A5AB4C02023(__this, L_0, NULL);
		// H1 = t.H1;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_1 = ___t0;
		NullCheck(L_1);
		uint32_t L_2 = L_1->___H1_5;
		__this->___H1_5 = L_2;
		// H2 = t.H2;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_3 = ___t0;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___H2_6;
		__this->___H2_6 = L_4;
		// H3 = t.H3;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_5 = ___t0;
		NullCheck(L_5);
		uint32_t L_6 = L_5->___H3_7;
		__this->___H3_7 = L_6;
		// H4 = t.H4;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_7 = ___t0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->___H4_8;
		__this->___H4_8 = L_8;
		// H5 = t.H5;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_9 = ___t0;
		NullCheck(L_9);
		uint32_t L_10 = L_9->___H5_9;
		__this->___H5_9 = L_10;
		// H6 = t.H6;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_11 = ___t0;
		NullCheck(L_11);
		uint32_t L_12 = L_11->___H6_10;
		__this->___H6_10 = L_12;
		// H7 = t.H7;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_13 = ___t0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___H7_11;
		__this->___H7_11 = L_14;
		// H8 = t.H8;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_15 = ___t0;
		NullCheck(L_15);
		uint32_t L_16 = L_15->___H8_12;
		__this->___H8_12 = L_16;
		// Array.Copy(t.X, 0, X, 0, t.X.Length);
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_17 = ___t0;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = __this->___X_13;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_20 = ___t0;
		NullCheck(L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___X_13;
		NullCheck(L_21);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)), NULL);
		// xOff = t.xOff;
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_22 = ___t0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___xOff_14;
		__this->___xOff_14 = L_23;
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha256Digest_get_AlgorithmName_m4041A0F3B9139F483D548AA5B8D42E84F1FB6DB7 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C23E639A5A412FD6FD6D1C92298ADD2B8DF4D0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHA-256"; }
		return _stringLiteral4C23E639A5A412FD6FD6D1C92298ADD2B8DF4D0E;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha256Digest_GetDigestSize_mDC45710D85355B061A6229B8F0EB4A7F86580862 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)32);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_ProcessLength_mA63465820A5619490DE94902B20E01EEC452D52E (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		// if (xOff > 14)
		int32_t L_0 = __this->___xOff_14;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0010:
	{
		// X[14] = (uint)((ulong)bitLength >> 32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___X_13;
		int64_t L_2 = ___bitLength0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_2>>((int32_t)32)))));
		// X[15] = (uint)((ulong)bitLength);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___X_13;
		int64_t L_4 = ___bitLength0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(uint32_t)L_4));
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha256Digest_DoFinal_m9EEE5E56B1C6EAC6345CD98F2C8F14A895508AF6 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		GeneralDigest_Finish_m6BC974FD761998E6139ADD173CC60B9B47C88308(__this, NULL);
		// Pack.UInt32_To_BE((uint)H1, output, outOff);
		uint32_t L_0 = __this->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_0, L_1, L_2, NULL);
		// Pack.UInt32_To_BE((uint)H2, output, outOff + 4);
		uint32_t L_3 = __this->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		// Pack.UInt32_To_BE((uint)H3, output, outOff + 8);
		uint32_t L_6 = __this->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		// Pack.UInt32_To_BE((uint)H4, output, outOff + 12);
		uint32_t L_9 = __this->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		// Pack.UInt32_To_BE((uint)H5, output, outOff + 16);
		uint32_t L_12 = __this->___H5_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16))), NULL);
		// Pack.UInt32_To_BE((uint)H6, output, outOff + 20);
		uint32_t L_15 = __this->___H6_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___output0;
		int32_t L_17 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_15, L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)20))), NULL);
		// Pack.UInt32_To_BE((uint)H7, output, outOff + 24);
		uint32_t L_18 = __this->___H7_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___output0;
		int32_t L_20 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)24))), NULL);
		// Pack.UInt32_To_BE((uint)H8, output, outOff + 28);
		uint32_t L_21 = __this->___H8_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output0;
		int32_t L_23 = ___outOff1;
		Pack_UInt32_To_BE_m3CDF1EA56A5557D03BC028082FFD735129F1F5BC(L_21, L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)28))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// return DigestLength;
		return ((int32_t)32);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_Reset_mECD091B424EB47C0958827568EFDF7E159650D00 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		GeneralDigest_Reset_mE400482488156A49D897AD38AADBBF510CA2B6E6(__this, NULL);
		// initHs();
		Sha256Digest_initHs_mFEAF905632D789D1DD579833100288F08536E455(__this, NULL);
		// xOff = 0;
		__this->___xOff_14 = 0;
		// Array.Clear(X, 0, X.Length);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___X_13;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::initHs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_initHs_mFEAF905632D789D1DD579833100288F08536E455 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	{
		// H1 = 0x6a09e667;
		__this->___H1_5 = ((int32_t)1779033703);
		// H2 = 0xbb67ae85;
		__this->___H2_6 = ((int32_t)-1150833019);
		// H3 = 0x3c6ef372;
		__this->___H3_7 = ((int32_t)1013904242);
		// H4 = 0xa54ff53a;
		__this->___H4_8 = ((int32_t)-1521486534);
		// H5 = 0x510e527f;
		__this->___H5_9 = ((int32_t)1359893119);
		// H6 = 0x9b05688c;
		__this->___H6_10 = ((int32_t)-1694144372);
		// H7 = 0x1f83d9ab;
		__this->___H7_11 = ((int32_t)528734635);
		// H8 = 0x5be0cd19;
		__this->___H8_12 = ((int32_t)1541459225);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_ProcessWord_m5416C1C1CB19FE0CB07E1AF2E33137E13EE187ED (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint8_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint64_t* V_13 = NULL;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t* V_17 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_18 = NULL;
	uint32_t* V_19 = NULL;
	uint32_t* V_20 = NULL;
	int32_t V_21 = 0;
	{
		// fixed (uint* pX = X)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint32_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		// fixed (byte* bs = input)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_3 = L_5;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_3;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_002c;
		}
	}

IL_0027:
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		goto IL_0035;
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_3;
		NullCheck(L_7);
		V_2 = (uint8_t*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0035:
	{
		// pX[xOff] = (uint)bs[inOff] << 24 | (uint)bs[inOff + 1] << 16 | (uint)bs[inOff + 2] << 8 | (uint)bs[inOff + 3];
		uint32_t* L_8 = V_0;
		int32_t L_9 = __this->___xOff_14;
		uint8_t* L_10 = V_2;
		int32_t L_11 = ___inOff1;
		int32_t L_12 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, L_11)));
		uint8_t* L_13 = V_2;
		int32_t L_14 = ___inOff1;
		int32_t L_15 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)))));
		uint8_t* L_16 = V_2;
		int32_t L_17 = ___inOff1;
		int32_t L_18 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, ((int32_t)il2cpp_codegen_add(L_17, 2)))));
		uint8_t* L_19 = V_2;
		int32_t L_20 = ___inOff1;
		int32_t L_21 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, ((int32_t)il2cpp_codegen_add(L_20, 3)))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_12<<((int32_t)24)))|((int32_t)(L_15<<((int32_t)16)))))|((int32_t)(L_18<<8))))|L_21));
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// if (++xOff == 16)
		int32_t L_22 = __this->___xOff_14;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_4;
		__this->___xOff_14 = L_23;
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0658;
		}
	}
	{
		// for (int ti = 16; ti <= 63; ti++)
		V_14 = ((int32_t)16);
		goto IL_00fc;
	}

IL_0085:
	{
		// uint x = pX[ti - 2];
		uint32_t* L_25 = V_0;
		int32_t L_26 = V_14;
		int32_t L_27 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_26, 2))), 4)))));
		V_15 = L_27;
		// uint y = pX[ti - 15];
		uint32_t* L_28 = V_0;
		int32_t L_29 = V_14;
		int32_t L_30 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)15)))), 4)))));
		V_16 = L_30;
		// pX[ti] = (((x >> 17) | (x << 15)) ^ ((x >> 19) | (x << 13)) ^ (x >> 10))
		//     + pX[ti - 7]
		//     + (((y >> 7) | (y << 25)) ^ ((y >> 18) | (y << 14)) ^ (y >> 3))
		//     + pX[ti - 16];
		uint32_t* L_31 = V_0;
		int32_t L_32 = V_14;
		uint32_t L_33 = V_15;
		uint32_t L_34 = V_15;
		uint32_t L_35 = V_15;
		uint32_t L_36 = V_15;
		uint32_t L_37 = V_15;
		uint32_t* L_38 = V_0;
		int32_t L_39 = V_14;
		int32_t L_40 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_39, 7))), 4)))));
		uint32_t L_41 = V_16;
		uint32_t L_42 = V_16;
		uint32_t L_43 = V_16;
		uint32_t L_44 = V_16;
		uint32_t L_45 = V_16;
		uint32_t* L_46 = V_0;
		int32_t L_47 = V_14;
		int32_t L_48 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)16)))), 4)))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_33>>((int32_t)17)))|((int32_t)((int32_t)L_34<<((int32_t)15)))))^((int32_t)(((int32_t)((uint32_t)L_35>>((int32_t)19)))|((int32_t)((int32_t)L_36<<((int32_t)13)))))))^((int32_t)((uint32_t)L_37>>((int32_t)10))))), L_40)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_41>>7))|((int32_t)((int32_t)L_42<<((int32_t)25)))))^((int32_t)(((int32_t)((uint32_t)L_43>>((int32_t)18)))|((int32_t)((int32_t)L_44<<((int32_t)14)))))))^((int32_t)((uint32_t)L_45>>3)))))), L_48));
		// for (int ti = 16; ti <= 63; ti++)
		int32_t L_49 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00fc:
	{
		// for (int ti = 16; ti <= 63; ti++)
		int32_t L_50 = V_14;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)63))))
		{
			goto IL_0085;
		}
	}
	{
		// uint a = H1;
		uint32_t L_51 = __this->___H1_5;
		V_5 = L_51;
		// uint b = H2;
		uint32_t L_52 = __this->___H2_6;
		V_6 = L_52;
		// uint c = H3;
		uint32_t L_53 = __this->___H3_7;
		V_7 = L_53;
		// uint d = H4;
		uint32_t L_54 = __this->___H4_8;
		V_8 = L_54;
		// uint e = H5;
		uint32_t L_55 = __this->___H5_9;
		V_9 = L_55;
		// uint f = H6;
		uint32_t L_56 = __this->___H6_10;
		V_10 = L_56;
		// uint g = H7;
		uint32_t L_57 = __this->___H7_11;
		V_11 = L_57;
		// uint h = H8;
		uint32_t L_58 = __this->___H8_12;
		V_12 = L_58;
		// fixed (uint* pK = K)
		il2cpp_codegen_runtime_class_init_inline(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ((Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_StaticFields*)il2cpp_codegen_static_fields_for(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var))->___K_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = L_59;
		V_18 = L_60;
		if (!L_60)
		{
			goto IL_0152;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_18;
		NullCheck(L_61);
		if (((int32_t)(((RuntimeArray*)L_61)->max_length)))
		{
			goto IL_0158;
		}
	}

IL_0152:
	{
		V_17 = (uint32_t*)((uintptr_t)0);
		goto IL_0163;
	}

IL_0158:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_18;
		NullCheck(L_62);
		V_17 = (uint32_t*)((uintptr_t)((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0163:
	{
		// uint* pnfK = pK, pnfX = pX;
		uint32_t* L_63 = V_17;
		V_19 = L_63;
		// uint* pnfK = pK, pnfX = pX;
		uint32_t* L_64 = V_0;
		V_20 = L_64;
		// for (int i = 0; i < 8; ++i)
		V_21 = 0;
		goto IL_0580;
	}

IL_0172:
	{
		// h += ((((e >> 6) | (e << 26)) ^ ((e >> 11) | (e << 21)) ^ ((e >> 25) | (e << 7))) + (g ^ (e & (f ^ g))))/*Sum1Ch(e, f, g)*/ + *pnfK++ + *pnfX++;
		uint32_t L_65 = V_12;
		uint32_t L_66 = V_9;
		uint32_t L_67 = V_9;
		uint32_t L_68 = V_9;
		uint32_t L_69 = V_9;
		uint32_t L_70 = V_9;
		uint32_t L_71 = V_9;
		uint32_t L_72 = V_11;
		uint32_t L_73 = V_9;
		uint32_t L_74 = V_10;
		uint32_t L_75 = V_11;
		uint32_t* L_76 = V_19;
		uint32_t* L_77 = L_76;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_77, 4));
		int32_t L_78 = *((uint32_t*)L_77);
		uint32_t* L_79 = V_20;
		uint32_t* L_80 = L_79;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_80, 4));
		int32_t L_81 = *((uint32_t*)L_80);
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_66>>6))|((int32_t)((int32_t)L_67<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_68>>((int32_t)11)))|((int32_t)((int32_t)L_69<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_70>>((int32_t)25)))|((int32_t)((int32_t)L_71<<7)))))), ((int32_t)((int32_t)L_72^((int32_t)((int32_t)L_73&((int32_t)((int32_t)L_74^(int32_t)L_75)))))))), L_78)), L_81))));
		// d += h;
		uint32_t L_82 = V_8;
		uint32_t L_83 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_83));
		// h += ((((a >> 2) | (a << 30)) ^ ((a >> 13) | (a << 19)) ^ ((a >> 22) | (a << 10))) + ((a & b) | (c & (a ^ b))))/*Sum0Maj(a, b, c)*/;
		uint32_t L_84 = V_12;
		uint32_t L_85 = V_5;
		uint32_t L_86 = V_5;
		uint32_t L_87 = V_5;
		uint32_t L_88 = V_5;
		uint32_t L_89 = V_5;
		uint32_t L_90 = V_5;
		uint32_t L_91 = V_5;
		uint32_t L_92 = V_6;
		uint32_t L_93 = V_7;
		uint32_t L_94 = V_5;
		uint32_t L_95 = V_6;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_85>>2))|((int32_t)((int32_t)L_86<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_87>>((int32_t)13)))|((int32_t)((int32_t)L_88<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_89>>((int32_t)22)))|((int32_t)((int32_t)L_90<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_91&(int32_t)L_92))|((int32_t)((int32_t)L_93&((int32_t)((int32_t)L_94^(int32_t)L_95))))))))));
		// g += ((((d >> 6) | (d << 26)) ^ ((d >> 11) | (d << 21)) ^ ((d >> 25) | (d << 7))) + (f ^ (d & (e ^ f))))/*Sum1Ch(d, e, f)*/ + *pnfK++ + *pnfX++;
		uint32_t L_96 = V_11;
		uint32_t L_97 = V_8;
		uint32_t L_98 = V_8;
		uint32_t L_99 = V_8;
		uint32_t L_100 = V_8;
		uint32_t L_101 = V_8;
		uint32_t L_102 = V_8;
		uint32_t L_103 = V_10;
		uint32_t L_104 = V_8;
		uint32_t L_105 = V_9;
		uint32_t L_106 = V_10;
		uint32_t* L_107 = V_19;
		uint32_t* L_108 = L_107;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_108, 4));
		int32_t L_109 = *((uint32_t*)L_108);
		uint32_t* L_110 = V_20;
		uint32_t* L_111 = L_110;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_111, 4));
		int32_t L_112 = *((uint32_t*)L_111);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_97>>6))|((int32_t)((int32_t)L_98<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_99>>((int32_t)11)))|((int32_t)((int32_t)L_100<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_101>>((int32_t)25)))|((int32_t)((int32_t)L_102<<7)))))), ((int32_t)((int32_t)L_103^((int32_t)((int32_t)L_104&((int32_t)((int32_t)L_105^(int32_t)L_106)))))))), L_109)), L_112))));
		// c += g;
		uint32_t L_113 = V_7;
		uint32_t L_114 = V_11;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_114));
		// g += ((((h >> 2) | (h << 30)) ^ ((h >> 13) | (h << 19)) ^ ((h >> 22) | (h << 10))) + ((h & a) | (b & (h ^ a))))/*Sum0Maj(h, a, b)*/;
		uint32_t L_115 = V_11;
		uint32_t L_116 = V_12;
		uint32_t L_117 = V_12;
		uint32_t L_118 = V_12;
		uint32_t L_119 = V_12;
		uint32_t L_120 = V_12;
		uint32_t L_121 = V_12;
		uint32_t L_122 = V_12;
		uint32_t L_123 = V_5;
		uint32_t L_124 = V_6;
		uint32_t L_125 = V_12;
		uint32_t L_126 = V_5;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_116>>2))|((int32_t)((int32_t)L_117<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_118>>((int32_t)13)))|((int32_t)((int32_t)L_119<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_120>>((int32_t)22)))|((int32_t)((int32_t)L_121<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_122&(int32_t)L_123))|((int32_t)((int32_t)L_124&((int32_t)((int32_t)L_125^(int32_t)L_126))))))))));
		// f += ((((c >> 6) | (c << 26)) ^ ((c >> 11) | (c << 21)) ^ ((c >> 25) | (c << 7))) + (e ^ (c & (d ^ e))))/*Sum1Ch(c, d, e)*/ + *pnfK++ + *pnfX++;
		uint32_t L_127 = V_10;
		uint32_t L_128 = V_7;
		uint32_t L_129 = V_7;
		uint32_t L_130 = V_7;
		uint32_t L_131 = V_7;
		uint32_t L_132 = V_7;
		uint32_t L_133 = V_7;
		uint32_t L_134 = V_9;
		uint32_t L_135 = V_7;
		uint32_t L_136 = V_8;
		uint32_t L_137 = V_9;
		uint32_t* L_138 = V_19;
		uint32_t* L_139 = L_138;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_139, 4));
		int32_t L_140 = *((uint32_t*)L_139);
		uint32_t* L_141 = V_20;
		uint32_t* L_142 = L_141;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_142, 4));
		int32_t L_143 = *((uint32_t*)L_142);
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_128>>6))|((int32_t)((int32_t)L_129<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_130>>((int32_t)11)))|((int32_t)((int32_t)L_131<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_132>>((int32_t)25)))|((int32_t)((int32_t)L_133<<7)))))), ((int32_t)((int32_t)L_134^((int32_t)((int32_t)L_135&((int32_t)((int32_t)L_136^(int32_t)L_137)))))))), L_140)), L_143))));
		// b += f;
		uint32_t L_144 = V_6;
		uint32_t L_145 = V_10;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)L_145));
		// f += ((((g >> 2) | (g << 30)) ^ ((g >> 13) | (g << 19)) ^ ((g >> 22) | (g << 10))) + ((g & h) | (a & (g ^ h))))/*Sum0Maj(g, h, a)*/;
		uint32_t L_146 = V_10;
		uint32_t L_147 = V_11;
		uint32_t L_148 = V_11;
		uint32_t L_149 = V_11;
		uint32_t L_150 = V_11;
		uint32_t L_151 = V_11;
		uint32_t L_152 = V_11;
		uint32_t L_153 = V_11;
		uint32_t L_154 = V_12;
		uint32_t L_155 = V_5;
		uint32_t L_156 = V_11;
		uint32_t L_157 = V_12;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_147>>2))|((int32_t)((int32_t)L_148<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_149>>((int32_t)13)))|((int32_t)((int32_t)L_150<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_151>>((int32_t)22)))|((int32_t)((int32_t)L_152<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_153&(int32_t)L_154))|((int32_t)((int32_t)L_155&((int32_t)((int32_t)L_156^(int32_t)L_157))))))))));
		// e += ((((b >> 6) | (b << 26)) ^ ((b >> 11) | (b << 21)) ^ ((b >> 25) | (b << 7))) + (d ^ (b & (c ^ d))))/*Sum1Ch(b, c, d)*/ + *pnfK++ + *pnfX++;
		uint32_t L_158 = V_9;
		uint32_t L_159 = V_6;
		uint32_t L_160 = V_6;
		uint32_t L_161 = V_6;
		uint32_t L_162 = V_6;
		uint32_t L_163 = V_6;
		uint32_t L_164 = V_6;
		uint32_t L_165 = V_8;
		uint32_t L_166 = V_6;
		uint32_t L_167 = V_7;
		uint32_t L_168 = V_8;
		uint32_t* L_169 = V_19;
		uint32_t* L_170 = L_169;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_170, 4));
		int32_t L_171 = *((uint32_t*)L_170);
		uint32_t* L_172 = V_20;
		uint32_t* L_173 = L_172;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_173, 4));
		int32_t L_174 = *((uint32_t*)L_173);
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_159>>6))|((int32_t)((int32_t)L_160<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_161>>((int32_t)11)))|((int32_t)((int32_t)L_162<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_163>>((int32_t)25)))|((int32_t)((int32_t)L_164<<7)))))), ((int32_t)((int32_t)L_165^((int32_t)((int32_t)L_166&((int32_t)((int32_t)L_167^(int32_t)L_168)))))))), L_171)), L_174))));
		// a += e;
		uint32_t L_175 = V_5;
		uint32_t L_176 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)L_176));
		// e += ((((f >> 2) | (f << 30)) ^ ((f >> 13) | (f << 19)) ^ ((f >> 22) | (f << 10))) + ((f & g) | (h & (f ^ g))))/*Sum0Maj(f, g, h)*/;
		uint32_t L_177 = V_9;
		uint32_t L_178 = V_10;
		uint32_t L_179 = V_10;
		uint32_t L_180 = V_10;
		uint32_t L_181 = V_10;
		uint32_t L_182 = V_10;
		uint32_t L_183 = V_10;
		uint32_t L_184 = V_10;
		uint32_t L_185 = V_11;
		uint32_t L_186 = V_12;
		uint32_t L_187 = V_10;
		uint32_t L_188 = V_11;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_178>>2))|((int32_t)((int32_t)L_179<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_180>>((int32_t)13)))|((int32_t)((int32_t)L_181<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_182>>((int32_t)22)))|((int32_t)((int32_t)L_183<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_184&(int32_t)L_185))|((int32_t)((int32_t)L_186&((int32_t)((int32_t)L_187^(int32_t)L_188))))))))));
		// d += ((((a >> 6) | (a << 26)) ^ ((a >> 11) | (a << 21)) ^ ((a >> 25) | (a << 7))) + (c ^ (a & (b ^ c))))/*Sum1Ch(a, b, c)*/ + *pnfK++ + *pnfX++;
		uint32_t L_189 = V_8;
		uint32_t L_190 = V_5;
		uint32_t L_191 = V_5;
		uint32_t L_192 = V_5;
		uint32_t L_193 = V_5;
		uint32_t L_194 = V_5;
		uint32_t L_195 = V_5;
		uint32_t L_196 = V_7;
		uint32_t L_197 = V_5;
		uint32_t L_198 = V_6;
		uint32_t L_199 = V_7;
		uint32_t* L_200 = V_19;
		uint32_t* L_201 = L_200;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_201, 4));
		int32_t L_202 = *((uint32_t*)L_201);
		uint32_t* L_203 = V_20;
		uint32_t* L_204 = L_203;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_204, 4));
		int32_t L_205 = *((uint32_t*)L_204);
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_190>>6))|((int32_t)((int32_t)L_191<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_192>>((int32_t)11)))|((int32_t)((int32_t)L_193<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_194>>((int32_t)25)))|((int32_t)((int32_t)L_195<<7)))))), ((int32_t)((int32_t)L_196^((int32_t)((int32_t)L_197&((int32_t)((int32_t)L_198^(int32_t)L_199)))))))), L_202)), L_205))));
		// h += d;
		uint32_t L_206 = V_12;
		uint32_t L_207 = V_8;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)L_207));
		// d += ((((e >> 2) | (e << 30)) ^ ((e >> 13) | (e << 19)) ^ ((e >> 22) | (e << 10))) + ((e & f) | (g & (e ^ f))))/*Sum0Maj(e, f, g)*/;
		uint32_t L_208 = V_8;
		uint32_t L_209 = V_9;
		uint32_t L_210 = V_9;
		uint32_t L_211 = V_9;
		uint32_t L_212 = V_9;
		uint32_t L_213 = V_9;
		uint32_t L_214 = V_9;
		uint32_t L_215 = V_9;
		uint32_t L_216 = V_10;
		uint32_t L_217 = V_11;
		uint32_t L_218 = V_9;
		uint32_t L_219 = V_10;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_209>>2))|((int32_t)((int32_t)L_210<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_211>>((int32_t)13)))|((int32_t)((int32_t)L_212<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_213>>((int32_t)22)))|((int32_t)((int32_t)L_214<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_215&(int32_t)L_216))|((int32_t)((int32_t)L_217&((int32_t)((int32_t)L_218^(int32_t)L_219))))))))));
		// c += ((((h >> 6) | (h << 26)) ^ ((h >> 11) | (h << 21)) ^ ((h >> 25) | (h << 7))) + (b ^ (h & (a ^ b))))/*Sum1Ch(h, a, b)*/ + *pnfK++ + *pnfX++;
		uint32_t L_220 = V_7;
		uint32_t L_221 = V_12;
		uint32_t L_222 = V_12;
		uint32_t L_223 = V_12;
		uint32_t L_224 = V_12;
		uint32_t L_225 = V_12;
		uint32_t L_226 = V_12;
		uint32_t L_227 = V_6;
		uint32_t L_228 = V_12;
		uint32_t L_229 = V_5;
		uint32_t L_230 = V_6;
		uint32_t* L_231 = V_19;
		uint32_t* L_232 = L_231;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_232, 4));
		int32_t L_233 = *((uint32_t*)L_232);
		uint32_t* L_234 = V_20;
		uint32_t* L_235 = L_234;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_235, 4));
		int32_t L_236 = *((uint32_t*)L_235);
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_220, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_221>>6))|((int32_t)((int32_t)L_222<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_223>>((int32_t)11)))|((int32_t)((int32_t)L_224<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_225>>((int32_t)25)))|((int32_t)((int32_t)L_226<<7)))))), ((int32_t)((int32_t)L_227^((int32_t)((int32_t)L_228&((int32_t)((int32_t)L_229^(int32_t)L_230)))))))), L_233)), L_236))));
		// g += c;
		uint32_t L_237 = V_11;
		uint32_t L_238 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)L_238));
		// c += ((((d >> 2) | (d << 30)) ^ ((d >> 13) | (d << 19)) ^ ((d >> 22) | (d << 10))) + ((d & e) | (f & (d ^ e))))/*Sum0Maj(d, e, f)*/;
		uint32_t L_239 = V_7;
		uint32_t L_240 = V_8;
		uint32_t L_241 = V_8;
		uint32_t L_242 = V_8;
		uint32_t L_243 = V_8;
		uint32_t L_244 = V_8;
		uint32_t L_245 = V_8;
		uint32_t L_246 = V_8;
		uint32_t L_247 = V_9;
		uint32_t L_248 = V_10;
		uint32_t L_249 = V_8;
		uint32_t L_250 = V_9;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_240>>2))|((int32_t)((int32_t)L_241<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_242>>((int32_t)13)))|((int32_t)((int32_t)L_243<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_244>>((int32_t)22)))|((int32_t)((int32_t)L_245<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_246&(int32_t)L_247))|((int32_t)((int32_t)L_248&((int32_t)((int32_t)L_249^(int32_t)L_250))))))))));
		// b += ((((g >> 6) | (g << 26)) ^ ((g >> 11) | (g << 21)) ^ ((g >> 25) | (g << 7))) + (a ^ (g & (h ^ a))))/*Sum1Ch(g, h, a)*/ + *pnfK++ + *pnfX++;
		uint32_t L_251 = V_6;
		uint32_t L_252 = V_11;
		uint32_t L_253 = V_11;
		uint32_t L_254 = V_11;
		uint32_t L_255 = V_11;
		uint32_t L_256 = V_11;
		uint32_t L_257 = V_11;
		uint32_t L_258 = V_5;
		uint32_t L_259 = V_11;
		uint32_t L_260 = V_12;
		uint32_t L_261 = V_5;
		uint32_t* L_262 = V_19;
		uint32_t* L_263 = L_262;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_263, 4));
		int32_t L_264 = *((uint32_t*)L_263);
		uint32_t* L_265 = V_20;
		uint32_t* L_266 = L_265;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_266, 4));
		int32_t L_267 = *((uint32_t*)L_266);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_251, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_252>>6))|((int32_t)((int32_t)L_253<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_254>>((int32_t)11)))|((int32_t)((int32_t)L_255<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_256>>((int32_t)25)))|((int32_t)((int32_t)L_257<<7)))))), ((int32_t)((int32_t)L_258^((int32_t)((int32_t)L_259&((int32_t)((int32_t)L_260^(int32_t)L_261)))))))), L_264)), L_267))));
		// f += b;
		uint32_t L_268 = V_10;
		uint32_t L_269 = V_6;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_268, (int32_t)L_269));
		// b += ((((c >> 2) | (c << 30)) ^ ((c >> 13) | (c << 19)) ^ ((c >> 22) | (c << 10))) + ((c & d) | (e & (c ^ d))))/*Sum0Maj(c, d, e)*/;
		uint32_t L_270 = V_6;
		uint32_t L_271 = V_7;
		uint32_t L_272 = V_7;
		uint32_t L_273 = V_7;
		uint32_t L_274 = V_7;
		uint32_t L_275 = V_7;
		uint32_t L_276 = V_7;
		uint32_t L_277 = V_7;
		uint32_t L_278 = V_8;
		uint32_t L_279 = V_9;
		uint32_t L_280 = V_7;
		uint32_t L_281 = V_8;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_270, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_271>>2))|((int32_t)((int32_t)L_272<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_273>>((int32_t)13)))|((int32_t)((int32_t)L_274<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_275>>((int32_t)22)))|((int32_t)((int32_t)L_276<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_277&(int32_t)L_278))|((int32_t)((int32_t)L_279&((int32_t)((int32_t)L_280^(int32_t)L_281))))))))));
		// a += ((((f >> 6) | (f << 26)) ^ ((f >> 11) | (f << 21)) ^ ((f >> 25) | (f << 7))) + (h ^ (f & (g ^ h))))/*Sum1Ch(f, g, h)*/ + *pnfK++ + *pnfX++;
		uint32_t L_282 = V_5;
		uint32_t L_283 = V_10;
		uint32_t L_284 = V_10;
		uint32_t L_285 = V_10;
		uint32_t L_286 = V_10;
		uint32_t L_287 = V_10;
		uint32_t L_288 = V_10;
		uint32_t L_289 = V_12;
		uint32_t L_290 = V_10;
		uint32_t L_291 = V_11;
		uint32_t L_292 = V_12;
		uint32_t* L_293 = V_19;
		uint32_t* L_294 = L_293;
		V_19 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_294, 4));
		int32_t L_295 = *((uint32_t*)L_294);
		uint32_t* L_296 = V_20;
		uint32_t* L_297 = L_296;
		V_20 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_297, 4));
		int32_t L_298 = *((uint32_t*)L_297);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_282, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_283>>6))|((int32_t)((int32_t)L_284<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_285>>((int32_t)11)))|((int32_t)((int32_t)L_286<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_287>>((int32_t)25)))|((int32_t)((int32_t)L_288<<7)))))), ((int32_t)((int32_t)L_289^((int32_t)((int32_t)L_290&((int32_t)((int32_t)L_291^(int32_t)L_292)))))))), L_295)), L_298))));
		// e += a;
		uint32_t L_299 = V_9;
		uint32_t L_300 = V_5;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_299, (int32_t)L_300));
		// a += ((((b >> 2) | (b << 30)) ^ ((b >> 13) | (b << 19)) ^ ((b >> 22) | (b << 10))) + ((b & c) | (d & (b ^ c))))/*Sum0Maj(b, c, d)*/;
		uint32_t L_301 = V_5;
		uint32_t L_302 = V_6;
		uint32_t L_303 = V_6;
		uint32_t L_304 = V_6;
		uint32_t L_305 = V_6;
		uint32_t L_306 = V_6;
		uint32_t L_307 = V_6;
		uint32_t L_308 = V_6;
		uint32_t L_309 = V_7;
		uint32_t L_310 = V_8;
		uint32_t L_311 = V_6;
		uint32_t L_312 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_301, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_302>>2))|((int32_t)((int32_t)L_303<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_304>>((int32_t)13)))|((int32_t)((int32_t)L_305<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_306>>((int32_t)22)))|((int32_t)((int32_t)L_307<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_308&(int32_t)L_309))|((int32_t)((int32_t)L_310&((int32_t)((int32_t)L_311^(int32_t)L_312))))))))));
		// for (int i = 0; i < 8; ++i)
		int32_t L_313 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_313, 1));
	}

IL_0580:
	{
		// for (int i = 0; i < 8; ++i)
		int32_t L_314 = V_21;
		if ((((int32_t)L_314) < ((int32_t)8)))
		{
			goto IL_0172;
		}
	}
	{
		V_18 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		// H1 += a;
		uint32_t L_315 = __this->___H1_5;
		uint32_t L_316 = V_5;
		__this->___H1_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_315, (int32_t)L_316));
		// H2 += b;
		uint32_t L_317 = __this->___H2_6;
		uint32_t L_318 = V_6;
		__this->___H2_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_317, (int32_t)L_318));
		// H3 += c;
		uint32_t L_319 = __this->___H3_7;
		uint32_t L_320 = V_7;
		__this->___H3_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_319, (int32_t)L_320));
		// H4 += d;
		uint32_t L_321 = __this->___H4_8;
		uint32_t L_322 = V_8;
		__this->___H4_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_321, (int32_t)L_322));
		// H5 += e;
		uint32_t L_323 = __this->___H5_9;
		uint32_t L_324 = V_9;
		__this->___H5_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)L_324));
		// H6 += f;
		uint32_t L_325 = __this->___H6_10;
		uint32_t L_326 = V_10;
		__this->___H6_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_325, (int32_t)L_326));
		// H7 += g;
		uint32_t L_327 = __this->___H7_11;
		uint32_t L_328 = V_11;
		__this->___H7_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_327, (int32_t)L_328));
		// H8 += h;
		uint32_t L_329 = __this->___H8_12;
		uint32_t L_330 = V_12;
		__this->___H8_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)L_330));
		// xOff = 0;
		__this->___xOff_14 = 0;
		// ulong* pulongX = (ulong*)pX;
		uint32_t* L_331 = V_0;
		V_13 = (uint64_t*)L_331;
		// *pulongX++ = 0;
		uint64_t* L_332 = V_13;
		uint64_t* L_333 = L_332;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_333, 8));
		*((int64_t*)L_333) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_334 = V_13;
		uint64_t* L_335 = L_334;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_335, 8));
		*((int64_t*)L_335) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_336 = V_13;
		uint64_t* L_337 = L_336;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_337, 8));
		*((int64_t*)L_337) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_338 = V_13;
		uint64_t* L_339 = L_338;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_339, 8));
		*((int64_t*)L_339) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_340 = V_13;
		uint64_t* L_341 = L_340;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_341, 8));
		*((int64_t*)L_341) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_342 = V_13;
		uint64_t* L_343 = L_342;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_343, 8));
		*((int64_t*)L_343) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_344 = V_13;
		uint64_t* L_345 = L_344;
		V_13 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_345, 8));
		*((int64_t*)L_345) = (int64_t)((int64_t)0);
		// *pulongX = 0;
		uint64_t* L_346 = V_13;
		*((int64_t*)L_346) = (int64_t)((int64_t)0);
	}

IL_0658:
	{
		V_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_ProcessBlock_m09040ED35B9ACE7FDE62A6D3ADB1B16207C7E7D3 (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t* V_13 = NULL;
	uint32_t* V_14 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_15 = NULL;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	int32_t V_18 = 0;
	uint32_t* V_19 = NULL;
	uint64_t* V_20 = NULL;
	{
		// fixed(uint* pX = X)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_9 = L_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_9;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		V_8 = (uint32_t*)((uintptr_t)0);
		goto IL_0022;
	}

IL_0017:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_9;
		NullCheck(L_3);
		V_8 = (uint32_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0022:
	{
		// for (int ti = 16; ti <= 63; ti++)
		V_10 = ((int32_t)16);
		goto IL_00a4;
	}

IL_0028:
	{
		// uint x = pX[ti - 2];
		uint32_t* L_4 = V_8;
		int32_t L_5 = V_10;
		int32_t L_6 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_5, 2))), 4)))));
		V_11 = L_6;
		// uint y = pX[ti - 15];
		uint32_t* L_7 = V_8;
		int32_t L_8 = V_10;
		int32_t L_9 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)15)))), 4)))));
		V_12 = L_9;
		// pX[ti] = (((x >> 17) | (x << 15)) ^ ((x >> 19) | (x << 13)) ^ (x >> 10))
		//     + pX[ti - 7]
		//     + (((y >> 7) | (y << 25)) ^ ((y >> 18) | (y << 14)) ^ (y >> 3))
		//     + pX[ti - 16];
		uint32_t* L_10 = V_8;
		int32_t L_11 = V_10;
		uint32_t L_12 = V_11;
		uint32_t L_13 = V_11;
		uint32_t L_14 = V_11;
		uint32_t L_15 = V_11;
		uint32_t L_16 = V_11;
		uint32_t* L_17 = V_8;
		int32_t L_18 = V_10;
		int32_t L_19 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_18, 7))), 4)))));
		uint32_t L_20 = V_12;
		uint32_t L_21 = V_12;
		uint32_t L_22 = V_12;
		uint32_t L_23 = V_12;
		uint32_t L_24 = V_12;
		uint32_t* L_25 = V_8;
		int32_t L_26 = V_10;
		int32_t L_27 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)16)))), 4)))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_12>>((int32_t)17)))|((int32_t)((int32_t)L_13<<((int32_t)15)))))^((int32_t)(((int32_t)((uint32_t)L_14>>((int32_t)19)))|((int32_t)((int32_t)L_15<<((int32_t)13)))))))^((int32_t)((uint32_t)L_16>>((int32_t)10))))), L_19)), ((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_20>>7))|((int32_t)((int32_t)L_21<<((int32_t)25)))))^((int32_t)(((int32_t)((uint32_t)L_22>>((int32_t)18)))|((int32_t)((int32_t)L_23<<((int32_t)14)))))))^((int32_t)((uint32_t)L_24>>3)))))), L_27));
		// for (int ti = 16; ti <= 63; ti++)
		int32_t L_28 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a4:
	{
		// for (int ti = 16; ti <= 63; ti++)
		int32_t L_29 = V_10;
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)63))))
		{
			goto IL_0028;
		}
	}
	{
		V_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		// uint a = H1;
		uint32_t L_30 = __this->___H1_5;
		V_0 = L_30;
		// uint b = H2;
		uint32_t L_31 = __this->___H2_6;
		V_1 = L_31;
		// uint c = H3;
		uint32_t L_32 = __this->___H3_7;
		V_2 = L_32;
		// uint d = H4;
		uint32_t L_33 = __this->___H4_8;
		V_3 = L_33;
		// uint e = H5;
		uint32_t L_34 = __this->___H5_9;
		V_4 = L_34;
		// uint f = H6;
		uint32_t L_35 = __this->___H6_10;
		V_5 = L_35;
		// uint g = H7;
		uint32_t L_36 = __this->___H7_11;
		V_6 = L_36;
		// uint h = H8;
		uint32_t L_37 = __this->___H8_12;
		V_7 = L_37;
		// fixed(uint* pX = X, pK = K)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = __this->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38;
		V_9 = L_39;
		if (!L_39)
		{
			goto IL_00fd;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_9;
		NullCheck(L_40);
		if (((int32_t)(((RuntimeArray*)L_40)->max_length)))
		{
			goto IL_0103;
		}
	}

IL_00fd:
	{
		V_13 = (uint32_t*)((uintptr_t)0);
		goto IL_010e;
	}

IL_0103:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_9;
		NullCheck(L_41);
		V_13 = (uint32_t*)((uintptr_t)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_010e:
	{
		// fixed(uint* pX = X, pK = K)
		il2cpp_codegen_runtime_class_init_inline(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ((Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_StaticFields*)il2cpp_codegen_static_fields_for(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var))->___K_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = L_42;
		V_15 = L_43;
		if (!L_43)
		{
			goto IL_011e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_15;
		NullCheck(L_44);
		if (((int32_t)(((RuntimeArray*)L_44)->max_length)))
		{
			goto IL_0124;
		}
	}

IL_011e:
	{
		V_14 = (uint32_t*)((uintptr_t)0);
		goto IL_012f;
	}

IL_0124:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_15;
		NullCheck(L_45);
		V_14 = (uint32_t*)((uintptr_t)((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_012f:
	{
		// uint* pnfK = pK, pnfX = pX;
		uint32_t* L_46 = V_14;
		V_16 = L_46;
		// uint* pnfK = pK, pnfX = pX;
		uint32_t* L_47 = V_13;
		V_17 = L_47;
		// for (int i = 0; i < 8; ++i)
		V_18 = 0;
		goto IL_04dd;
	}

IL_013f:
	{
		// h += ((((e >> 6) | (e << 26)) ^ ((e >> 11) | (e << 21)) ^ ((e >> 25) | (e << 7))) + (g ^ (e & (f ^ g))))/*Sum1Ch(e, f, g)*/ + *pnfK++ + *pnfX++;
		uint32_t L_48 = V_7;
		uint32_t L_49 = V_4;
		uint32_t L_50 = V_4;
		uint32_t L_51 = V_4;
		uint32_t L_52 = V_4;
		uint32_t L_53 = V_4;
		uint32_t L_54 = V_4;
		uint32_t L_55 = V_6;
		uint32_t L_56 = V_4;
		uint32_t L_57 = V_5;
		uint32_t L_58 = V_6;
		uint32_t* L_59 = V_16;
		uint32_t* L_60 = L_59;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_60, 4));
		int32_t L_61 = *((uint32_t*)L_60);
		uint32_t* L_62 = V_17;
		uint32_t* L_63 = L_62;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_63, 4));
		int32_t L_64 = *((uint32_t*)L_63);
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_49>>6))|((int32_t)((int32_t)L_50<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_51>>((int32_t)11)))|((int32_t)((int32_t)L_52<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_53>>((int32_t)25)))|((int32_t)((int32_t)L_54<<7)))))), ((int32_t)((int32_t)L_55^((int32_t)((int32_t)L_56&((int32_t)((int32_t)L_57^(int32_t)L_58)))))))), L_61)), L_64))));
		// d += h;
		uint32_t L_65 = V_3;
		uint32_t L_66 = V_7;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66));
		// h += ((((a >> 2) | (a << 30)) ^ ((a >> 13) | (a << 19)) ^ ((a >> 22) | (a << 10))) + ((a & b) | (c & (a ^ b))))/*Sum0Maj(a, b, c)*/;
		uint32_t L_67 = V_7;
		uint32_t L_68 = V_0;
		uint32_t L_69 = V_0;
		uint32_t L_70 = V_0;
		uint32_t L_71 = V_0;
		uint32_t L_72 = V_0;
		uint32_t L_73 = V_0;
		uint32_t L_74 = V_0;
		uint32_t L_75 = V_1;
		uint32_t L_76 = V_2;
		uint32_t L_77 = V_0;
		uint32_t L_78 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_68>>2))|((int32_t)((int32_t)L_69<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_70>>((int32_t)13)))|((int32_t)((int32_t)L_71<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_72>>((int32_t)22)))|((int32_t)((int32_t)L_73<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_74&(int32_t)L_75))|((int32_t)((int32_t)L_76&((int32_t)((int32_t)L_77^(int32_t)L_78))))))))));
		// g += ((((d >> 6) | (d << 26)) ^ ((d >> 11) | (d << 21)) ^ ((d >> 25) | (d << 7))) + (f ^ (d & (e ^ f))))/*Sum1Ch(d, e, f)*/ + *pnfK++ + *pnfX++;
		uint32_t L_79 = V_6;
		uint32_t L_80 = V_3;
		uint32_t L_81 = V_3;
		uint32_t L_82 = V_3;
		uint32_t L_83 = V_3;
		uint32_t L_84 = V_3;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_5;
		uint32_t L_87 = V_3;
		uint32_t L_88 = V_4;
		uint32_t L_89 = V_5;
		uint32_t* L_90 = V_16;
		uint32_t* L_91 = L_90;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_91, 4));
		int32_t L_92 = *((uint32_t*)L_91);
		uint32_t* L_93 = V_17;
		uint32_t* L_94 = L_93;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_94, 4));
		int32_t L_95 = *((uint32_t*)L_94);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_80>>6))|((int32_t)((int32_t)L_81<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_82>>((int32_t)11)))|((int32_t)((int32_t)L_83<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_84>>((int32_t)25)))|((int32_t)((int32_t)L_85<<7)))))), ((int32_t)((int32_t)L_86^((int32_t)((int32_t)L_87&((int32_t)((int32_t)L_88^(int32_t)L_89)))))))), L_92)), L_95))));
		// c += g;
		uint32_t L_96 = V_2;
		uint32_t L_97 = V_6;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)L_97));
		// g += ((((h >> 2) | (h << 30)) ^ ((h >> 13) | (h << 19)) ^ ((h >> 22) | (h << 10))) + ((h & a) | (b & (h ^ a))))/*Sum0Maj(h, a, b)*/;
		uint32_t L_98 = V_6;
		uint32_t L_99 = V_7;
		uint32_t L_100 = V_7;
		uint32_t L_101 = V_7;
		uint32_t L_102 = V_7;
		uint32_t L_103 = V_7;
		uint32_t L_104 = V_7;
		uint32_t L_105 = V_7;
		uint32_t L_106 = V_0;
		uint32_t L_107 = V_1;
		uint32_t L_108 = V_7;
		uint32_t L_109 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_99>>2))|((int32_t)((int32_t)L_100<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_101>>((int32_t)13)))|((int32_t)((int32_t)L_102<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_103>>((int32_t)22)))|((int32_t)((int32_t)L_104<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_105&(int32_t)L_106))|((int32_t)((int32_t)L_107&((int32_t)((int32_t)L_108^(int32_t)L_109))))))))));
		// f += ((((c >> 6) | (c << 26)) ^ ((c >> 11) | (c << 21)) ^ ((c >> 25) | (c << 7))) + (e ^ (c & (d ^ e))))/*Sum1Ch(c, d, e)*/ + *pnfK++ + *pnfX++;
		uint32_t L_110 = V_5;
		uint32_t L_111 = V_2;
		uint32_t L_112 = V_2;
		uint32_t L_113 = V_2;
		uint32_t L_114 = V_2;
		uint32_t L_115 = V_2;
		uint32_t L_116 = V_2;
		uint32_t L_117 = V_4;
		uint32_t L_118 = V_2;
		uint32_t L_119 = V_3;
		uint32_t L_120 = V_4;
		uint32_t* L_121 = V_16;
		uint32_t* L_122 = L_121;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_122, 4));
		int32_t L_123 = *((uint32_t*)L_122);
		uint32_t* L_124 = V_17;
		uint32_t* L_125 = L_124;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_125, 4));
		int32_t L_126 = *((uint32_t*)L_125);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_111>>6))|((int32_t)((int32_t)L_112<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_113>>((int32_t)11)))|((int32_t)((int32_t)L_114<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_115>>((int32_t)25)))|((int32_t)((int32_t)L_116<<7)))))), ((int32_t)((int32_t)L_117^((int32_t)((int32_t)L_118&((int32_t)((int32_t)L_119^(int32_t)L_120)))))))), L_123)), L_126))));
		// b += f;
		uint32_t L_127 = V_1;
		uint32_t L_128 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)L_128));
		// f += ((((g >> 2) | (g << 30)) ^ ((g >> 13) | (g << 19)) ^ ((g >> 22) | (g << 10))) + ((g & h) | (a & (g ^ h))))/*Sum0Maj(g, h, a)*/;
		uint32_t L_129 = V_5;
		uint32_t L_130 = V_6;
		uint32_t L_131 = V_6;
		uint32_t L_132 = V_6;
		uint32_t L_133 = V_6;
		uint32_t L_134 = V_6;
		uint32_t L_135 = V_6;
		uint32_t L_136 = V_6;
		uint32_t L_137 = V_7;
		uint32_t L_138 = V_0;
		uint32_t L_139 = V_6;
		uint32_t L_140 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_130>>2))|((int32_t)((int32_t)L_131<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_132>>((int32_t)13)))|((int32_t)((int32_t)L_133<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_134>>((int32_t)22)))|((int32_t)((int32_t)L_135<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_136&(int32_t)L_137))|((int32_t)((int32_t)L_138&((int32_t)((int32_t)L_139^(int32_t)L_140))))))))));
		// e += ((((b >> 6) | (b << 26)) ^ ((b >> 11) | (b << 21)) ^ ((b >> 25) | (b << 7))) + (d ^ (b & (c ^ d))))/*Sum1Ch(b, c, d)*/ + *pnfK++ + *pnfX++;
		uint32_t L_141 = V_4;
		uint32_t L_142 = V_1;
		uint32_t L_143 = V_1;
		uint32_t L_144 = V_1;
		uint32_t L_145 = V_1;
		uint32_t L_146 = V_1;
		uint32_t L_147 = V_1;
		uint32_t L_148 = V_3;
		uint32_t L_149 = V_1;
		uint32_t L_150 = V_2;
		uint32_t L_151 = V_3;
		uint32_t* L_152 = V_16;
		uint32_t* L_153 = L_152;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_153, 4));
		int32_t L_154 = *((uint32_t*)L_153);
		uint32_t* L_155 = V_17;
		uint32_t* L_156 = L_155;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_156, 4));
		int32_t L_157 = *((uint32_t*)L_156);
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_142>>6))|((int32_t)((int32_t)L_143<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_144>>((int32_t)11)))|((int32_t)((int32_t)L_145<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_146>>((int32_t)25)))|((int32_t)((int32_t)L_147<<7)))))), ((int32_t)((int32_t)L_148^((int32_t)((int32_t)L_149&((int32_t)((int32_t)L_150^(int32_t)L_151)))))))), L_154)), L_157))));
		// a += e;
		uint32_t L_158 = V_0;
		uint32_t L_159 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)L_159));
		// e += ((((f >> 2) | (f << 30)) ^ ((f >> 13) | (f << 19)) ^ ((f >> 22) | (f << 10))) + ((f & g) | (h & (f ^ g))))/*Sum0Maj(f, g, h)*/;
		uint32_t L_160 = V_4;
		uint32_t L_161 = V_5;
		uint32_t L_162 = V_5;
		uint32_t L_163 = V_5;
		uint32_t L_164 = V_5;
		uint32_t L_165 = V_5;
		uint32_t L_166 = V_5;
		uint32_t L_167 = V_5;
		uint32_t L_168 = V_6;
		uint32_t L_169 = V_7;
		uint32_t L_170 = V_5;
		uint32_t L_171 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_161>>2))|((int32_t)((int32_t)L_162<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_163>>((int32_t)13)))|((int32_t)((int32_t)L_164<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_165>>((int32_t)22)))|((int32_t)((int32_t)L_166<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_167&(int32_t)L_168))|((int32_t)((int32_t)L_169&((int32_t)((int32_t)L_170^(int32_t)L_171))))))))));
		// d += ((((a >> 6) | (a << 26)) ^ ((a >> 11) | (a << 21)) ^ ((a >> 25) | (a << 7))) + (c ^ (a & (b ^ c))))/*Sum1Ch(a, b, c)*/ + *pnfK++ + *pnfX++;
		uint32_t L_172 = V_3;
		uint32_t L_173 = V_0;
		uint32_t L_174 = V_0;
		uint32_t L_175 = V_0;
		uint32_t L_176 = V_0;
		uint32_t L_177 = V_0;
		uint32_t L_178 = V_0;
		uint32_t L_179 = V_2;
		uint32_t L_180 = V_0;
		uint32_t L_181 = V_1;
		uint32_t L_182 = V_2;
		uint32_t* L_183 = V_16;
		uint32_t* L_184 = L_183;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_184, 4));
		int32_t L_185 = *((uint32_t*)L_184);
		uint32_t* L_186 = V_17;
		uint32_t* L_187 = L_186;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_187, 4));
		int32_t L_188 = *((uint32_t*)L_187);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_172, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_173>>6))|((int32_t)((int32_t)L_174<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_175>>((int32_t)11)))|((int32_t)((int32_t)L_176<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_177>>((int32_t)25)))|((int32_t)((int32_t)L_178<<7)))))), ((int32_t)((int32_t)L_179^((int32_t)((int32_t)L_180&((int32_t)((int32_t)L_181^(int32_t)L_182)))))))), L_185)), L_188))));
		// h += d;
		uint32_t L_189 = V_7;
		uint32_t L_190 = V_3;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)L_190));
		// d += ((((e >> 2) | (e << 30)) ^ ((e >> 13) | (e << 19)) ^ ((e >> 22) | (e << 10))) + ((e & f) | (g & (e ^ f))))/*Sum0Maj(e, f, g)*/;
		uint32_t L_191 = V_3;
		uint32_t L_192 = V_4;
		uint32_t L_193 = V_4;
		uint32_t L_194 = V_4;
		uint32_t L_195 = V_4;
		uint32_t L_196 = V_4;
		uint32_t L_197 = V_4;
		uint32_t L_198 = V_4;
		uint32_t L_199 = V_5;
		uint32_t L_200 = V_6;
		uint32_t L_201 = V_4;
		uint32_t L_202 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_191, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_192>>2))|((int32_t)((int32_t)L_193<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_194>>((int32_t)13)))|((int32_t)((int32_t)L_195<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_196>>((int32_t)22)))|((int32_t)((int32_t)L_197<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_198&(int32_t)L_199))|((int32_t)((int32_t)L_200&((int32_t)((int32_t)L_201^(int32_t)L_202))))))))));
		// c += ((((h >> 6) | (h << 26)) ^ ((h >> 11) | (h << 21)) ^ ((h >> 25) | (h << 7))) + (b ^ (h & (a ^ b))))/*Sum1Ch(h, a, b)*/ + *pnfK++ + *pnfX++;
		uint32_t L_203 = V_2;
		uint32_t L_204 = V_7;
		uint32_t L_205 = V_7;
		uint32_t L_206 = V_7;
		uint32_t L_207 = V_7;
		uint32_t L_208 = V_7;
		uint32_t L_209 = V_7;
		uint32_t L_210 = V_1;
		uint32_t L_211 = V_7;
		uint32_t L_212 = V_0;
		uint32_t L_213 = V_1;
		uint32_t* L_214 = V_16;
		uint32_t* L_215 = L_214;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_215, 4));
		int32_t L_216 = *((uint32_t*)L_215);
		uint32_t* L_217 = V_17;
		uint32_t* L_218 = L_217;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_218, 4));
		int32_t L_219 = *((uint32_t*)L_218);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_203, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_204>>6))|((int32_t)((int32_t)L_205<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_206>>((int32_t)11)))|((int32_t)((int32_t)L_207<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_208>>((int32_t)25)))|((int32_t)((int32_t)L_209<<7)))))), ((int32_t)((int32_t)L_210^((int32_t)((int32_t)L_211&((int32_t)((int32_t)L_212^(int32_t)L_213)))))))), L_216)), L_219))));
		// g += c;
		uint32_t L_220 = V_6;
		uint32_t L_221 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_220, (int32_t)L_221));
		// c += ((((d >> 2) | (d << 30)) ^ ((d >> 13) | (d << 19)) ^ ((d >> 22) | (d << 10))) + ((d & e) | (f & (d ^ e))))/*Sum0Maj(d, e, f)*/;
		uint32_t L_222 = V_2;
		uint32_t L_223 = V_3;
		uint32_t L_224 = V_3;
		uint32_t L_225 = V_3;
		uint32_t L_226 = V_3;
		uint32_t L_227 = V_3;
		uint32_t L_228 = V_3;
		uint32_t L_229 = V_3;
		uint32_t L_230 = V_4;
		uint32_t L_231 = V_5;
		uint32_t L_232 = V_3;
		uint32_t L_233 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_223>>2))|((int32_t)((int32_t)L_224<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_225>>((int32_t)13)))|((int32_t)((int32_t)L_226<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_227>>((int32_t)22)))|((int32_t)((int32_t)L_228<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_229&(int32_t)L_230))|((int32_t)((int32_t)L_231&((int32_t)((int32_t)L_232^(int32_t)L_233))))))))));
		// b += ((((g >> 6) | (g << 26)) ^ ((g >> 11) | (g << 21)) ^ ((g >> 25) | (g << 7))) + (a ^ (g & (h ^ a))))/*Sum1Ch(g, h, a)*/ + *pnfK++ + *pnfX++;
		uint32_t L_234 = V_1;
		uint32_t L_235 = V_6;
		uint32_t L_236 = V_6;
		uint32_t L_237 = V_6;
		uint32_t L_238 = V_6;
		uint32_t L_239 = V_6;
		uint32_t L_240 = V_6;
		uint32_t L_241 = V_0;
		uint32_t L_242 = V_6;
		uint32_t L_243 = V_7;
		uint32_t L_244 = V_0;
		uint32_t* L_245 = V_16;
		uint32_t* L_246 = L_245;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_246, 4));
		int32_t L_247 = *((uint32_t*)L_246);
		uint32_t* L_248 = V_17;
		uint32_t* L_249 = L_248;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_249, 4));
		int32_t L_250 = *((uint32_t*)L_249);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_235>>6))|((int32_t)((int32_t)L_236<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_237>>((int32_t)11)))|((int32_t)((int32_t)L_238<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_239>>((int32_t)25)))|((int32_t)((int32_t)L_240<<7)))))), ((int32_t)((int32_t)L_241^((int32_t)((int32_t)L_242&((int32_t)((int32_t)L_243^(int32_t)L_244)))))))), L_247)), L_250))));
		// f += b;
		uint32_t L_251 = V_5;
		uint32_t L_252 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_251, (int32_t)L_252));
		// b += ((((c >> 2) | (c << 30)) ^ ((c >> 13) | (c << 19)) ^ ((c >> 22) | (c << 10))) + ((c & d) | (e & (c ^ d))))/*Sum0Maj(c, d, e)*/;
		uint32_t L_253 = V_1;
		uint32_t L_254 = V_2;
		uint32_t L_255 = V_2;
		uint32_t L_256 = V_2;
		uint32_t L_257 = V_2;
		uint32_t L_258 = V_2;
		uint32_t L_259 = V_2;
		uint32_t L_260 = V_2;
		uint32_t L_261 = V_3;
		uint32_t L_262 = V_4;
		uint32_t L_263 = V_2;
		uint32_t L_264 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_253, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_254>>2))|((int32_t)((int32_t)L_255<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_256>>((int32_t)13)))|((int32_t)((int32_t)L_257<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_258>>((int32_t)22)))|((int32_t)((int32_t)L_259<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_260&(int32_t)L_261))|((int32_t)((int32_t)L_262&((int32_t)((int32_t)L_263^(int32_t)L_264))))))))));
		// a += ((((f >> 6) | (f << 26)) ^ ((f >> 11) | (f << 21)) ^ ((f >> 25) | (f << 7))) + (h ^ (f & (g ^ h))))/*Sum1Ch(f, g, h)*/ + *pnfK++ + *pnfX++;
		uint32_t L_265 = V_0;
		uint32_t L_266 = V_5;
		uint32_t L_267 = V_5;
		uint32_t L_268 = V_5;
		uint32_t L_269 = V_5;
		uint32_t L_270 = V_5;
		uint32_t L_271 = V_5;
		uint32_t L_272 = V_7;
		uint32_t L_273 = V_5;
		uint32_t L_274 = V_6;
		uint32_t L_275 = V_7;
		uint32_t* L_276 = V_16;
		uint32_t* L_277 = L_276;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_277, 4));
		int32_t L_278 = *((uint32_t*)L_277);
		uint32_t* L_279 = V_17;
		uint32_t* L_280 = L_279;
		V_17 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_280, 4));
		int32_t L_281 = *((uint32_t*)L_280);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_266>>6))|((int32_t)((int32_t)L_267<<((int32_t)26)))))^((int32_t)(((int32_t)((uint32_t)L_268>>((int32_t)11)))|((int32_t)((int32_t)L_269<<((int32_t)21)))))))^((int32_t)(((int32_t)((uint32_t)L_270>>((int32_t)25)))|((int32_t)((int32_t)L_271<<7)))))), ((int32_t)((int32_t)L_272^((int32_t)((int32_t)L_273&((int32_t)((int32_t)L_274^(int32_t)L_275)))))))), L_278)), L_281))));
		// e += a;
		uint32_t L_282 = V_4;
		uint32_t L_283 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_282, (int32_t)L_283));
		// a += ((((b >> 2) | (b << 30)) ^ ((b >> 13) | (b << 19)) ^ ((b >> 22) | (b << 10))) + ((b & c) | (d & (b ^ c))))/*Sum0Maj(b, c, d)*/;
		uint32_t L_284 = V_0;
		uint32_t L_285 = V_1;
		uint32_t L_286 = V_1;
		uint32_t L_287 = V_1;
		uint32_t L_288 = V_1;
		uint32_t L_289 = V_1;
		uint32_t L_290 = V_1;
		uint32_t L_291 = V_1;
		uint32_t L_292 = V_2;
		uint32_t L_293 = V_3;
		uint32_t L_294 = V_1;
		uint32_t L_295 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_284, ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_285>>2))|((int32_t)((int32_t)L_286<<((int32_t)30)))))^((int32_t)(((int32_t)((uint32_t)L_287>>((int32_t)13)))|((int32_t)((int32_t)L_288<<((int32_t)19)))))))^((int32_t)(((int32_t)((uint32_t)L_289>>((int32_t)22)))|((int32_t)((int32_t)L_290<<((int32_t)10))))))), ((int32_t)(((int32_t)((int32_t)L_291&(int32_t)L_292))|((int32_t)((int32_t)L_293&((int32_t)((int32_t)L_294^(int32_t)L_295))))))))));
		// for (int i = 0; i < 8; ++i)
		int32_t L_296 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_296, 1));
	}

IL_04dd:
	{
		// for (int i = 0; i < 8; ++i)
		int32_t L_297 = V_18;
		if ((((int32_t)L_297) < ((int32_t)8)))
		{
			goto IL_013f;
		}
	}
	{
		V_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		V_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		// H1 += a;
		uint32_t L_298 = __this->___H1_5;
		uint32_t L_299 = V_0;
		__this->___H1_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_298, (int32_t)L_299));
		// H2 += b;
		uint32_t L_300 = __this->___H2_6;
		uint32_t L_301 = V_1;
		__this->___H2_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_300, (int32_t)L_301));
		// H3 += c;
		uint32_t L_302 = __this->___H3_7;
		uint32_t L_303 = V_2;
		__this->___H3_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_302, (int32_t)L_303));
		// H4 += d;
		uint32_t L_304 = __this->___H4_8;
		uint32_t L_305 = V_3;
		__this->___H4_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_304, (int32_t)L_305));
		// H5 += e;
		uint32_t L_306 = __this->___H5_9;
		uint32_t L_307 = V_4;
		__this->___H5_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_306, (int32_t)L_307));
		// H6 += f;
		uint32_t L_308 = __this->___H6_10;
		uint32_t L_309 = V_5;
		__this->___H6_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_308, (int32_t)L_309));
		// H7 += g;
		uint32_t L_310 = __this->___H7_11;
		uint32_t L_311 = V_6;
		__this->___H7_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_310, (int32_t)L_311));
		// H8 += h;
		uint32_t L_312 = __this->___H8_12;
		uint32_t L_313 = V_7;
		__this->___H8_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_312, (int32_t)L_313));
		// xOff = 0;
		__this->___xOff_14 = 0;
		// fixed (uint* pX = X)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_314 = __this->___X_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_315 = L_314;
		V_15 = L_315;
		if (!L_315)
		{
			goto IL_0577;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_316 = V_15;
		NullCheck(L_316);
		if (((int32_t)(((RuntimeArray*)L_316)->max_length)))
		{
			goto IL_057d;
		}
	}

IL_0577:
	{
		V_19 = (uint32_t*)((uintptr_t)0);
		goto IL_0588;
	}

IL_057d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_317 = V_15;
		NullCheck(L_317);
		V_19 = (uint32_t*)((uintptr_t)((L_317)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0588:
	{
		// ulong* pulongX = (ulong*)pX;
		uint32_t* L_318 = V_19;
		V_20 = (uint64_t*)L_318;
		// *pulongX++ = 0;
		uint64_t* L_319 = V_20;
		uint64_t* L_320 = L_319;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_320, 8));
		*((int64_t*)L_320) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_321 = V_20;
		uint64_t* L_322 = L_321;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_322, 8));
		*((int64_t*)L_322) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_323 = V_20;
		uint64_t* L_324 = L_323;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_324, 8));
		*((int64_t*)L_324) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_325 = V_20;
		uint64_t* L_326 = L_325;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_326, 8));
		*((int64_t*)L_326) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_327 = V_20;
		uint64_t* L_328 = L_327;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_328, 8));
		*((int64_t*)L_328) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_329 = V_20;
		uint64_t* L_330 = L_329;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_330, 8));
		*((int64_t*)L_330) = (int64_t)((int64_t)0);
		// *pulongX++ = 0;
		uint64_t* L_331 = V_20;
		uint64_t* L_332 = L_331;
		V_20 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_332, 8));
		*((int64_t*)L_332) = (int64_t)((int64_t)0);
		// *pulongX = 0;
		uint64_t* L_333 = V_20;
		*((int64_t*)L_333) = (int64_t)((int64_t)0);
		V_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha256Digest_Copy_mA9E3F06D5E437D7364BC3252BF1FB4624F620CCD (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha256Digest(this);
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_0 = (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719*)il2cpp_codegen_object_new(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_mD1172199C905C6B955B65E8E65FFEDBD0781DDB9(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest_Reset_mB717C9654D2470816C726A60F01E196088CE154A (Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* V_0 = NULL;
	{
		// Sha256Digest d = (Sha256Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719*)CastclassSealed((RuntimeObject*)L_0, Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var));
		// CopyIn(d);
		Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719* L_1 = V_0;
		Sha256Digest_CopyIn_mF98123BE5243BE72781ECB6AB88EFCA4728CA39D(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha256Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__cctor_mEE8E4ACD73FCD70157E3AE38B51F0091074A3DCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_130_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly uint[] K = {
		//     0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
		//     0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
		//     0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
		//     0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
		//     0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
		//     0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
		//     0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
		//     0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
		//     0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
		//     0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
		//     0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
		//     0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
		//     0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
		//     0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
		//     0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
		//     0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
		// };
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_130_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_StaticFields*)il2cpp_codegen_static_fields_for(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var))->___K_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_StaticFields*)il2cpp_codegen_static_fields_for(Sha256Digest_tFF367FB26B40ABE6AF59C41C7A5CD5F237DCA719_il2cpp_TypeInfo_var))->___K_15), (void*)L_1);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha384Digest__ctor_m6191418868C804F3E804D05CD9B9A05C6D8C02F9 (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sha384Digest()
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		LongDigest__ctor_m5F04AE6A7C6DFFED3CD1F8DF9BE417CF0887733A(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha384Digest__ctor_m7F7A137875CA2EC9015DCE7FFFE9BEC8183AE673 (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(t)
		Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* L_0 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		LongDigest__ctor_m961D224229FC75781720AF139C02FE0CAC9E37FA(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha384Digest_get_AlgorithmName_m6E40B02A9EDF0546739C9923D1A1FA05383707FF (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131F00C551D8B6B06586707B7CB54DE4DF424670);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHA-384"; }
		return _stringLiteral131F00C551D8B6B06586707B7CB54DE4DF424670;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha384Digest_GetDigestSize_m18E7811F67D3A57CC72C33FBEEE4F05E31692A9A (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)48);
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha384Digest_DoFinal_mC018C486A623D2736BAB6DB54587C2632986B277 (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		LongDigest_Finish_mEFED9FC959F899F1F9F4861AB74117E93F51D37A(__this, NULL);
		// Pack.UInt64_To_BE(H1, output, outOff);
		uint64_t L_0 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_0, L_1, L_2, NULL);
		// Pack.UInt64_To_BE(H2, output, outOff + 8);
		uint64_t L_3 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 8)), NULL);
		// Pack.UInt64_To_BE(H3, output, outOff + 16);
		uint64_t L_6 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16))), NULL);
		// Pack.UInt64_To_BE(H4, output, outOff + 24);
		uint64_t L_9 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)24))), NULL);
		// Pack.UInt64_To_BE(H5, output, outOff + 32);
		uint64_t L_12 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)32))), NULL);
		// Pack.UInt64_To_BE(H6, output, outOff + 40);
		uint64_t L_15 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___output0;
		int32_t L_17 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_15, L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)40))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Reset() */, __this);
		// return DigestLength;
		return ((int32_t)48);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha384Digest_Reset_m7502652C5EC917EE69237C4C083EE2702FC424A0 (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		LongDigest_Reset_m5C86E4ACE37006CBC141F185FB54F019B6B72932(__this, NULL);
		// H1 = 0xcbbb9d5dc1059ed8;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5 = ((int64_t)-3766243637369397544LL);
		// H2 = 0x629a292a367cd507;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6 = ((int64_t)7105036623409894663LL);
		// H3 = 0x9159015a3070dd17;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7 = ((int64_t)-7973340178411365097LL);
		// H4 = 0x152fecd8f70e5939;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8 = ((int64_t)1526699215303891257LL);
		// H5 = 0x67332667ffc00b31;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9 = ((int64_t)7436329637833083697LL);
		// H6 = 0x8eb44a8768581511;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10 = ((int64_t)-8163818279084223215LL);
		// H7 = 0xdb0c2e0d64f98fa7;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11 = ((int64_t)-2662702644619276377LL);
		// H8 = 0x47b5481dbefa4fa4;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12 = ((int64_t)5167115440072839076LL);
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha384Digest_Copy_m6DFD055B26ABDCC40B108712924402CC16315AC5 (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha384Digest(this);
		Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* L_0 = (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893*)il2cpp_codegen_object_new(Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha384Digest__ctor_m7F7A137875CA2EC9015DCE7FFFE9BEC8183AE673(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha384Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha384Digest_Reset_m2D671C57CEC4BC8E62F26ECCBC9176586D5B1BCD (Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* V_0 = NULL;
	{
		// Sha384Digest d = (Sha384Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893*)CastclassClass((RuntimeObject*)L_0, Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893_il2cpp_TypeInfo_var));
		// CopyIn(d);
		Sha384Digest_t1B34F906CB0B224D84D9C7FED51AD371BB832893* L_1 = V_0;
		LongDigest_CopyIn_m126A76D618D4DE0A5EAB42C7E436A5899B7160C5(__this, L_1, NULL);
		// }
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
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::CheckBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha3Digest_CheckBitLength_mB69693EBB7983DA3E96BCD3C4B51589AC790FD20 (int32_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bitLength0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)256))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___bitLength0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)224))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = ___bitLength0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)256))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_002c;
	}

IL_001a:
	{
		int32_t L_3 = ___bitLength0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)384))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = ___bitLength0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return bitLength;
		int32_t L_5 = ___bitLength0;
		return L_5;
	}

IL_002c:
	{
		// throw new ArgumentException(bitLength + " not supported for SHA-3", "bitLength");
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___bitLength0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EBE07D375608F2B13073190C50F126EBAB8BE2C)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sha3Digest_CheckBitLength_mB69693EBB7983DA3E96BCD3C4B51589AC790FD20_RuntimeMethod_var)));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Digest__ctor_mC3A31982D81857571631354283FD82AF1EE6EABE (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, const RuntimeMethod* method) 
{
	{
		// : this(256)
		Sha3Digest__ctor_m28A9B7CA9F124017F09FE7A035159A0578A70EA0(__this, ((int32_t)256), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Digest__ctor_m28A9B7CA9F124017F09FE7A035159A0578A70EA0 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(CheckBitLength(bitLength))
		int32_t L_0 = ___bitLength0;
		int32_t L_1;
		L_1 = Sha3Digest_CheckBitLength_mB69693EBB7983DA3E96BCD3C4B51589AC790FD20(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m87CB81789E6DC4B0E2516036C76EED6714310746(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Digest__ctor_m1A942151995A12934D359D27D32CA0808B4C9F07 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(source)
		Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m5A29023F2DB3CF833DCC7F18229F1B6BA2275FCF(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Digest_get_AlgorithmName_mBE21919C6B26F84FCE24E46E29108CE612DF5584 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF866635403CFB3A2A3F0DCFA3613CC35937DE2B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHA3-" + fixedOutputLength; }
		int32_t* L_0 = (&((KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D*)__this)->___fixedOutputLength_5);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF866635403CFB3A2A3F0DCFA3613CC35937DE2B3, L_1, NULL);
		return L_2;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha3Digest_DoFinal_m925FECD696F26F2031EA7F6680594E711E096987 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// AbsorbBits(0x02, 2);
		KeccakDigest_AbsorbBits_mFCA4A94BC382A779A3041E2B7A16CA58DFE2FD1C(__this, 2, 2, NULL);
		// return base.DoFinal(output,  outOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2;
		L_2 = KeccakDigest_DoFinal_mB3C1B14F87DAE0D21BF17E37E31EE37C73980B09(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha3Digest_DoFinal_m204FC006BB3873BBD025068CC65870715F7410A1 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (partialBits < 0 || partialBits > 7)
		int32_t L_0 = ___partialBits3;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___partialBits3;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		// throw new ArgumentException("must be in the range [0,7]", "partialBits");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral551A56E699A1D330BA6125604C7025562B94E331)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FDAB44963B739C563B4CBB8193839AB37E78B75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sha3Digest_DoFinal_m204FC006BB3873BBD025068CC65870715F7410A1_RuntimeMethod_var)));
	}

IL_001a:
	{
		// int finalInput = (partialByte & ((1 << partialBits) - 1)) | (0x02 << partialBits);
		uint8_t L_3 = ___partialByte2;
		int32_t L_4 = ___partialBits3;
		int32_t L_5 = ___partialBits3;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_3&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_4&((int32_t)31))))), 1))))|((int32_t)(2<<((int32_t)(L_5&((int32_t)31)))))));
		// int finalBits = partialBits + 2;
		int32_t L_6 = ___partialBits3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 2));
		// if (finalBits >= 8)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0047;
		}
	}
	{
		// Absorb((byte)finalInput);
		int32_t L_8 = V_0;
		KeccakDigest_Absorb_mCA0ABF4447D24301D75EF6B52820C0C9D4958BD7(__this, (uint8_t)((int32_t)(uint8_t)L_8), NULL);
		// finalBits -= 8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
		// finalInput >>= 8;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)(L_10>>8));
	}

IL_0047:
	{
		// return base.DoFinal(output, outOff, (byte)finalInput, finalBits);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output0;
		int32_t L_12 = ___outOff1;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = KeccakDigest_DoFinal_m1F87E736B95EAAC0C755CFCD609E24668C09B9A2(__this, L_11, L_12, (uint8_t)((int32_t)(uint8_t)L_13), L_14, NULL);
		return L_15;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha3Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha3Digest_Copy_m8DB96620E9344BD7224B9D3F1DD23EA70B2E6549 (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha3Digest(this);
		Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7* L_0 = (Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7*)il2cpp_codegen_object_new(Sha3Digest_tB39E932C13F662CDEE718C60608FCD223429FED7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha3Digest__ctor_m1A942151995A12934D359D27D32CA0808B4C9F07(L_0, __this, NULL);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest__ctor_mB727CCFFE4EC36BFC1813C176E076408CF2FF2CC (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sha512Digest()
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		LongDigest__ctor_m5F04AE6A7C6DFFED3CD1F8DF9BE417CF0887733A(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest__ctor_m2CDE51E1F44ED7F20ACAAF1B84807D4255F0AB5A (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(t)
		Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* L_0 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		LongDigest__ctor_m961D224229FC75781720AF139C02FE0CAC9E37FA(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha512Digest_get_AlgorithmName_m0BC485EDA8E065858CA1F27F242B20608B4447D0 (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral894BC5458F5E1105129CC92FE8166EA51C2E0DCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHA-512"; }
		return _stringLiteral894BC5458F5E1105129CC92FE8166EA51C2E0DCC;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha512Digest_GetDigestSize_mF9771CC280DD7AA02BAA53A9A17CEEAC478A313D (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)64);
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha512Digest_DoFinal_mE2B1A42B1B204443E932E287DD74DD09063E7102 (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		LongDigest_Finish_mEFED9FC959F899F1F9F4861AB74117E93F51D37A(__this, NULL);
		// Pack.UInt64_To_BE(H1, output, outOff);
		uint64_t L_0 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_0, L_1, L_2, NULL);
		// Pack.UInt64_To_BE(H2, output, outOff + 8);
		uint64_t L_3 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 8)), NULL);
		// Pack.UInt64_To_BE(H3, output, outOff + 16);
		uint64_t L_6 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16))), NULL);
		// Pack.UInt64_To_BE(H4, output, outOff + 24);
		uint64_t L_9 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)24))), NULL);
		// Pack.UInt64_To_BE(H5, output, outOff + 32);
		uint64_t L_12 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)32))), NULL);
		// Pack.UInt64_To_BE(H6, output, outOff + 40);
		uint64_t L_15 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___output0;
		int32_t L_17 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_15, L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)40))), NULL);
		// Pack.UInt64_To_BE(H7, output, outOff + 48);
		uint64_t L_18 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___output0;
		int32_t L_20 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)48))), NULL);
		// Pack.UInt64_To_BE(H8, output, outOff + 56);
		uint64_t L_21 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output0;
		int32_t L_23 = ___outOff1;
		Pack_UInt64_To_BE_m3899F872B82C80B6FA44642D0FBC998A9EED81E5(L_21, L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)56))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Reset() */, __this);
		// return DigestLength;
		return ((int32_t)64);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest_Reset_m90AB14D5C0094A4F31EBD865E32215454E23A054 (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		LongDigest_Reset_m5C86E4ACE37006CBC141F185FB54F019B6B72932(__this, NULL);
		// H1 = 0x6a09e667f3bcc908;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5 = ((int64_t)7640891576956012808LL);
		// H2 = 0xbb67ae8584caa73b;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6 = ((int64_t)-4942790177534073029LL);
		// H3 = 0x3c6ef372fe94f82b;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7 = ((int64_t)4354685564936845355LL);
		// H4 = 0xa54ff53a5f1d36f1;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8 = ((int64_t)-6534734903238641935LL);
		// H5 = 0x510e527fade682d1;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9 = ((int64_t)5840696475078001361LL);
		// H6 = 0x9b05688c2b3e6c1f;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10 = ((int64_t)-7276294671716946913LL);
		// H7 = 0x1f83d9abfb41bd6b;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11 = ((int64_t)2270897969802886507LL);
		// H8 = 0x5be0cd19137e2179;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12 = ((int64_t)6620516959819538809LL);
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha512Digest_Copy_mD7D9CD3C224638B540178110F3CA4C734D7F808E (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha512Digest(this);
		Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* L_0 = (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F*)il2cpp_codegen_object_new(Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha512Digest__ctor_m2CDE51E1F44ED7F20ACAAF1B84807D4255F0AB5A(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest_Reset_m11745314903DB76EC22E99D7581C29C06CDBF704 (Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* V_0 = NULL;
	{
		// Sha512Digest d = (Sha512Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F*)CastclassClass((RuntimeObject*)L_0, Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F_il2cpp_TypeInfo_var));
		// CopyIn(d);
		Sha512Digest_t2E936681B1BD8DFB2CED7B79CC440F43B24EE31F* L_1 = V_0;
		LongDigest_CopyIn_m126A76D618D4DE0A5EAB42C7E436A5899B7160C5(__this, L_1, NULL);
		// }
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest__ctor_m1C2817FEC9054FECBF64B3009029D1AFAC453261 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sha512tDigest(int bitLength)
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		LongDigest__ctor_m5F04AE6A7C6DFFED3CD1F8DF9BE417CF0887733A(__this, NULL);
		// if (bitLength >= 512)
		int32_t L_0 = ___bitLength0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)512))))
		{
			goto IL_001e;
		}
	}
	{
		// throw new ArgumentException("cannot be >= 512", "bitLength");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA6B7FD3C25F0A8391DBCA3F608C0B7EA6427785)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sha512tDigest__ctor_m1C2817FEC9054FECBF64B3009029D1AFAC453261_RuntimeMethod_var)));
	}

IL_001e:
	{
		// if (bitLength % 8 != 0)
		int32_t L_2 = ___bitLength0;
		if (!((int32_t)(L_2%8)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentException("needs to be a multiple of 8", "bitLength");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C4BD11123512A80040FC81B0941838E6447553E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sha512tDigest__ctor_m1C2817FEC9054FECBF64B3009029D1AFAC453261_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (bitLength == 384)
		int32_t L_4 = ___bitLength0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)384)))))
		{
			goto IL_004b;
		}
	}
	{
		// throw new ArgumentException("cannot be 384 use SHA384 instead", "bitLength");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B92D139CA7A86C206481EC1152F4AE74E94133F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sha512tDigest__ctor_m1C2817FEC9054FECBF64B3009029D1AFAC453261_RuntimeMethod_var)));
	}

IL_004b:
	{
		// this.digestLength = bitLength / 8;
		int32_t L_6 = ___bitLength0;
		__this->___digestLength_17 = ((int32_t)(L_6/8));
		// tIvGenerate(digestLength * 8);
		int32_t L_7 = __this->___digestLength_17;
		Sha512tDigest_tIvGenerate_m1E0C019D7DF37A37267E7E427F2427D6E9D8D7C4(__this, ((int32_t)il2cpp_codegen_multiply(L_7, 8)), NULL);
		// Reset();
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Reset() */, __this);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest__ctor_m21EB7CFAC916074EFAB2548F5CDDFDE3B8950AE5 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(t)
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_0 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(LongDigest_tA357972A044812353537647F06ACA9A88542B543_il2cpp_TypeInfo_var);
		LongDigest__ctor_m961D224229FC75781720AF139C02FE0CAC9E37FA(__this, L_0, NULL);
		// this.digestLength = t.digestLength;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___digestLength_17;
		__this->___digestLength_17 = L_2;
		// Reset(t);
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_3 = ___t0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(18 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable) */, __this, L_3);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha512tDigest_get_AlgorithmName_m7E10CC41E08BF2B88C79F4062F8402F5DD060C56 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF77B23DA45ED0CA56CC77CC0BDA992194AB941B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return "SHA-512/" + (digestLength * 8); }
		int32_t L_0 = __this->___digestLength_17;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 8));
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCF77B23DA45ED0CA56CC77CC0BDA992194AB941B, L_1, NULL);
		return L_2;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha512tDigest_GetDigestSize_mC59919D5457722654AF003F1030F9DF77356FD72 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, const RuntimeMethod* method) 
{
	{
		// return digestLength;
		int32_t L_0 = __this->___digestLength_17;
		return L_0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sha512tDigest_DoFinal_mB366AF2C0354637EEFC693A15F1D4C2E3BB67CE3 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		LongDigest_Finish_mEFED9FC959F899F1F9F4861AB74117E93F51D37A(__this, NULL);
		// UInt64_To_BE(H1, output, outOff, digestLength);
		uint64_t L_0 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		int32_t L_3 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_0, L_1, L_2, L_3, NULL);
		// UInt64_To_BE(H2, output, outOff + 8, digestLength - 8);
		uint64_t L_4 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___output0;
		int32_t L_6 = ___outOff1;
		int32_t L_7 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_4, L_5, ((int32_t)il2cpp_codegen_add(L_6, 8)), ((int32_t)il2cpp_codegen_subtract(L_7, 8)), NULL);
		// UInt64_To_BE(H3, output, outOff + 16, digestLength - 16);
		uint64_t L_8 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output0;
		int32_t L_10 = ___outOff1;
		int32_t L_11 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_8, L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)16))), ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)16))), NULL);
		// UInt64_To_BE(H4, output, outOff + 24, digestLength - 24);
		uint64_t L_12 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output0;
		int32_t L_14 = ___outOff1;
		int32_t L_15 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)24))), ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)24))), NULL);
		// UInt64_To_BE(H5, output, outOff + 32, digestLength - 32);
		uint64_t L_16 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___output0;
		int32_t L_18 = ___outOff1;
		int32_t L_19 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_16, L_17, ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)32))), ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)32))), NULL);
		// UInt64_To_BE(H6, output, outOff + 40, digestLength - 40);
		uint64_t L_20 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___output0;
		int32_t L_22 = ___outOff1;
		int32_t L_23 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_20, L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)40))), ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)40))), NULL);
		// UInt64_To_BE(H7, output, outOff + 48, digestLength - 48);
		uint64_t L_24 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___output0;
		int32_t L_26 = ___outOff1;
		int32_t L_27 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_24, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)48))), ((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)48))), NULL);
		// UInt64_To_BE(H8, output, outOff + 56, digestLength - 56);
		uint64_t L_28 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___output0;
		int32_t L_30 = ___outOff1;
		int32_t L_31 = __this->___digestLength_17;
		Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD(L_28, L_29, ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)56))), ((int32_t)il2cpp_codegen_subtract(L_31, ((int32_t)56))), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.LongDigest::Reset() */, __this);
		// return digestLength;
		int32_t L_32 = __this->___digestLength_17;
		return L_32;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_Reset_m95EB31751B98C69E14081128FE75A8CB67F47796 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		LongDigest_Reset_m5C86E4ACE37006CBC141F185FB54F019B6B72932(__this, NULL);
		// H1 = H1t;
		uint64_t L_0 = __this->___H1t_18;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5 = L_0;
		// H2 = H2t;
		uint64_t L_1 = __this->___H2t_19;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6 = L_1;
		// H3 = H3t;
		uint64_t L_2 = __this->___H3t_20;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7 = L_2;
		// H4 = H4t;
		uint64_t L_3 = __this->___H4t_21;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8 = L_3;
		// H5 = H5t;
		uint64_t L_4 = __this->___H5t_22;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9 = L_4;
		// H6 = H6t;
		uint64_t L_5 = __this->___H6t_23;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10 = L_5;
		// H7 = H7t;
		uint64_t L_6 = __this->___H7t_24;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11 = L_6;
		// H8 = H8t;
		uint64_t L_7 = __this->___H8t_25;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12 = L_7;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::tIvGenerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_tIvGenerate_m1E0C019D7DF37A37267E7E427F2427D6E9D8D7C4 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		// H1 = 0x6a09e667f3bcc908UL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5 = ((int64_t)-3482333909917012819LL);
		// H2 = 0xbb67ae8584caa73bUL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6 = ((int64_t)2216346199247487646LL);
		// H3 = 0x3c6ef372fe94f82bUL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7 = ((int64_t)-7364697282686394994LL);
		// H4 = 0xa54ff53a5f1d36f1UL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8 = ((int64_t)65953792586715988LL);
		// H5 = 0x510e527fade682d1UL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9 = ((int64_t)-816286391624063116LL);
		// H6 = 0x9b05688c2b3e6c1fUL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10 = ((int64_t)4512832404995164602LL);
		// H7 = 0x1f83d9abfb41bd6bUL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11 = ((int64_t)-5033199132376557362LL);
		// H8 = 0x5be0cd19137e2179UL ^ A5;
		((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12 = ((int64_t)-124578254951840548LL);
		// Update(0x53);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)83), NULL);
		// Update(0x48);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)72), NULL);
		// Update(0x41);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)65), NULL);
		// Update(0x2D);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)45), NULL);
		// Update(0x35);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)53), NULL);
		// Update(0x31);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)49), NULL);
		// Update(0x32);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)50), NULL);
		// Update(0x2F);
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)47), NULL);
		// if (bitLength > 100)
		int32_t L_0 = ___bitLength0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)100))))
		{
			goto IL_00f2;
		}
	}
	{
		// Update((byte)(bitLength / 100 + 0x30));
		int32_t L_1 = ___bitLength0;
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_1/((int32_t)100))), ((int32_t)48)))), NULL);
		// bitLength = bitLength % 100;
		int32_t L_2 = ___bitLength0;
		___bitLength0 = ((int32_t)(L_2%((int32_t)100)));
		// Update((byte)(bitLength / 10 + 0x30));
		int32_t L_3 = ___bitLength0;
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_3/((int32_t)10))), ((int32_t)48)))), NULL);
		// bitLength = bitLength % 10;
		int32_t L_4 = ___bitLength0;
		___bitLength0 = ((int32_t)(L_4%((int32_t)10)));
		// Update((byte)(bitLength + 0x30));
		int32_t L_5 = ___bitLength0;
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_5, ((int32_t)48)))), NULL);
		goto IL_0123;
	}

IL_00f2:
	{
		// else if (bitLength > 10)
		int32_t L_6 = ___bitLength0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0118;
		}
	}
	{
		// Update((byte)(bitLength / 10 + 0x30));
		int32_t L_7 = ___bitLength0;
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_7/((int32_t)10))), ((int32_t)48)))), NULL);
		// bitLength = bitLength % 10;
		int32_t L_8 = ___bitLength0;
		___bitLength0 = ((int32_t)(L_8%((int32_t)10)));
		// Update((byte)(bitLength + 0x30));
		int32_t L_9 = ___bitLength0;
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_9, ((int32_t)48)))), NULL);
		goto IL_0123;
	}

IL_0118:
	{
		// Update((byte)(bitLength + 0x30));
		int32_t L_10 = ___bitLength0;
		LongDigest_Update_m561E080D35F0410CC2352867A32FCC1D894A4820(__this, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_10, ((int32_t)48)))), NULL);
	}

IL_0123:
	{
		// Finish();
		LongDigest_Finish_mEFED9FC959F899F1F9F4861AB74117E93F51D37A(__this, NULL);
		// H1t = H1;
		uint64_t L_11 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H1_5;
		__this->___H1t_18 = L_11;
		// H2t = H2;
		uint64_t L_12 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H2_6;
		__this->___H2t_19 = L_12;
		// H3t = H3;
		uint64_t L_13 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H3_7;
		__this->___H3t_20 = L_13;
		// H4t = H4;
		uint64_t L_14 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H4_8;
		__this->___H4t_21 = L_14;
		// H5t = H5;
		uint64_t L_15 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H5_9;
		__this->___H5t_22 = L_15;
		// H6t = H6;
		uint64_t L_16 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H6_10;
		__this->___H6t_23 = L_16;
		// H7t = H7;
		uint64_t L_17 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H7_11;
		__this->___H7t_24 = L_17;
		// H8t = H8;
		uint64_t L_18 = ((LongDigest_tA357972A044812353537647F06ACA9A88542B543*)__this)->___H8_12;
		__this->___H8t_25 = L_18;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_UInt64_To_BE_m835B178943D17359759C9CF00E89653A0F726EBD (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, int32_t ___max3, const RuntimeMethod* method) 
{
	{
		// if (max > 0)
		int32_t L_0 = ___max3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// UInt32_To_BE((uint)(n >> 32), bs, off, max);
		uint64_t L_1 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs1;
		int32_t L_3 = ___off2;
		int32_t L_4 = ___max3;
		Sha512tDigest_UInt32_To_BE_m37F55E980F5A07FD6EB7C6C18AD43D6CB42B9A1E(((int32_t)(uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32)))), L_2, L_3, L_4, NULL);
		// if (max > 4)
		int32_t L_5 = ___max3;
		if ((((int32_t)L_5) <= ((int32_t)4)))
		{
			goto IL_0023;
		}
	}
	{
		// UInt32_To_BE((uint)n, bs, off + 4, max - 4);
		uint64_t L_6 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ___max3;
		Sha512tDigest_UInt32_To_BE_m37F55E980F5A07FD6EB7C6C18AD43D6CB42B9A1E(((int32_t)(uint32_t)L_6), L_7, ((int32_t)il2cpp_codegen_add(L_8, 4)), ((int32_t)il2cpp_codegen_subtract(L_9, 4)), NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_UInt32_To_BE_m37F55E980F5A07FD6EB7C6C18AD43D6CB42B9A1E (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, int32_t ___max3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int num = System.Math.Min(4, max);
		int32_t L_0 = ___max3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(4, L_0, NULL);
		V_0 = L_1;
		goto IL_001c;
	}

IL_000a:
	{
		// int shift = 8 * (3 - num);
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, ((int32_t)il2cpp_codegen_subtract(3, L_2))));
		// bs[off + num] = (byte)(n >> shift);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = V_0;
		uint32_t L_6 = ___n0;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, L_5))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>((int32_t)(L_7&((int32_t)31)))))));
	}

IL_001c:
	{
		// while (--num >= 0)
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		V_0 = L_9;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sha512tDigest_Copy_m3CFA0DABEF7F0714EBB28E13F36FDB7E9F77B6AB (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Sha512tDigest(this);
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_0 = (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F*)il2cpp_codegen_object_new(Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha512tDigest__ctor_m21EB7CFAC916074EFAB2548F5CDDFDE3B8950AE5(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.Sha512tDigest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512tDigest_Reset_m7C98F4210BCB93B19A75BC89B95B482774EEBCE3 (Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* V_0 = NULL;
	{
		// Sha512tDigest t = (Sha512tDigest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F*)CastclassClass((RuntimeObject*)L_0, Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F_il2cpp_TypeInfo_var));
		// if (this.digestLength != t.digestLength)
		int32_t L_1 = __this->___digestLength_17;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___digestLength_17;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		// throw new MemoableResetException("digestLength inappropriate in other");
		MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F* L_4 = (MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		MemoableResetException__ctor_m13307148B6AEE2877DB60E4209237375D9FCC98B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890D118BC84244AFFCF60EAA8FFFEA9CE8344FE9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Sha512tDigest_Reset_m7C98F4210BCB93B19A75BC89B95B482774EEBCE3_RuntimeMethod_var)));
	}

IL_0020:
	{
		// base.CopyIn(t);
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_5 = V_0;
		LongDigest_CopyIn_m126A76D618D4DE0A5EAB42C7E436A5899B7160C5(__this, L_5, NULL);
		// this.H1t = t.H1t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_6 = V_0;
		NullCheck(L_6);
		uint64_t L_7 = L_6->___H1t_18;
		__this->___H1t_18 = L_7;
		// this.H2t = t.H2t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_8 = V_0;
		NullCheck(L_8);
		uint64_t L_9 = L_8->___H2t_19;
		__this->___H2t_19 = L_9;
		// this.H3t = t.H3t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_10 = V_0;
		NullCheck(L_10);
		uint64_t L_11 = L_10->___H3t_20;
		__this->___H3t_20 = L_11;
		// this.H4t = t.H4t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_12 = V_0;
		NullCheck(L_12);
		uint64_t L_13 = L_12->___H4t_21;
		__this->___H4t_21 = L_13;
		// this.H5t = t.H5t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_14 = V_0;
		NullCheck(L_14);
		uint64_t L_15 = L_14->___H5t_22;
		__this->___H5t_22 = L_15;
		// this.H6t = t.H6t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_16 = V_0;
		NullCheck(L_16);
		uint64_t L_17 = L_16->___H6t_23;
		__this->___H6t_23 = L_17;
		// this.H7t = t.H7t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_18 = V_0;
		NullCheck(L_18);
		uint64_t L_19 = L_18->___H7t_24;
		__this->___H7t_24 = L_19;
		// this.H8t = t.H8t;
		Sha512tDigest_t180A1DDB88950643B7C1D7B0E1334DEE5DAEC08F* L_20 = V_0;
		NullCheck(L_20);
		uint64_t L_21 = L_20->___H8t_25;
		__this->___H8t_25 = L_21;
		// }
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
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::CheckBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_CheckBitLength_m8A1A55948098A0BDB6D137264F3E03729BAF7A40 (int32_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bitLength0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)128))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___bitLength0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return bitLength;
		int32_t L_2 = ___bitLength0;
		return L_2;
	}

IL_0012:
	{
		// throw new ArgumentException(bitLength + " not supported for SHAKE", "bitLength");
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___bitLength0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50A03276CDCF780E3EC05BDBA7CD074DBB6471DE)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShakeDigest_CheckBitLength_m8A1A55948098A0BDB6D137264F3E03729BAF7A40_RuntimeMethod_var)));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_mA6C56120B7E828F8B4F56215014BB8146C388998 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, const RuntimeMethod* method) 
{
	{
		// : this(128)
		ShakeDigest__ctor_m773AA739141D2B3CF7B146D3D1E6F94615A6750B(__this, ((int32_t)128), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m773AA739141D2B3CF7B146D3D1E6F94615A6750B (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(CheckBitLength(bitLength))
		int32_t L_0 = ___bitLength0;
		int32_t L_1;
		L_1 = ShakeDigest_CheckBitLength_m8A1A55948098A0BDB6D137264F3E03729BAF7A40(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m87CB81789E6DC4B0E2516036C76EED6714310746(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m33C108CBAB3A6DECF2DBE08FF6C336882AFE8745 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(source)
		ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m5A29023F2DB3CF833DCC7F18229F1B6BA2275FCF(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShakeDigest_get_AlgorithmName_m2492CCD2BD32134310966BF66DBBDACB56ACB7DF (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4BE569CCF2D02C05077C0DD81A65D77B046AD39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SHAKE" + fixedOutputLength; }
		int32_t* L_0 = (&((KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D*)__this)->___fixedOutputLength_5);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA4BE569CCF2D02C05077C0DD81A65D77B046AD39, L_1, NULL);
		return L_2;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_GetDigestSize_m53E7A795EF1FFA842E6F09904A36097BCA2B580D (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, const RuntimeMethod* method) 
{
	{
		// return fixedOutputLength >> 2;
		int32_t L_0 = ((KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D*)__this)->___fixedOutputLength_5;
		return ((int32_t)(L_0>>2));
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_mCEA4CB3CFE97AB13B16B4E91DBC8667797A57018 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// return DoFinal(output, outOff, GetDigestSize());
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, __this);
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32) */, __this, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_m0DC3AF2A5789617E8924E830524A8B92E348B407 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, const RuntimeMethod* method) 
{
	{
		// int length = DoOutput(output, outOff, outLen);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2 = ___outLen2;
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoOutput(System.Byte[],System.Int32,System.Int32) */, __this, L_0, L_1, L_2);
		// Reset();
		VirtualActionInvoker0::Invoke(19 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset() */, __this);
		// return length;
		return L_3;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoOutput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoOutput_m01E20A2FDF2774557B21F20ED051D32DDC53A025 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, const RuntimeMethod* method) 
{
	{
		// if (!squeezing)
		bool L_0 = ((KeccakDigest_t5FE047CA6A54EDAC8F4E7C50BCCC1E961D9B8C1D*)__this)->___squeezing_6;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// AbsorbBits(0x0F, 4);
		KeccakDigest_AbsorbBits_mFCA4A94BC382A779A3041E2B7A16CA58DFE2FD1C(__this, ((int32_t)15), 4, NULL);
	}

IL_0011:
	{
		// Squeeze(output, outOff, (long)outLen << 3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		int32_t L_3 = ___outLen2;
		KeccakDigest_Squeeze_m26D0A211F041EBDE458D30663B1AE6D70FD09E55(__this, L_1, L_2, ((int64_t)(((int64_t)L_3)<<3)), NULL);
		// return outLen;
		int32_t L_4 = ___outLen2;
		return L_4;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_mF5FC0B3AC55286BCA11A54DC400D3691BF491DE9 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method) 
{
	{
		// return DoFinal(output, outOff, GetDigestSize(), partialByte, partialBits);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, __this);
		uint8_t L_3 = ___partialByte2;
		int32_t L_4 = ___partialBits3;
		int32_t L_5;
		L_5 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, uint8_t, int32_t >::Invoke(27 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte,System.Int32) */, __this, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_m1FDA45E31FA0E7A1CBFA4DD8885491CE7CA4D9B6 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, uint8_t ___partialByte3, int32_t ___partialBits4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (partialBits < 0 || partialBits > 7)
		int32_t L_0 = ___partialBits4;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___partialBits4;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		// throw new ArgumentException("must be in the range [0,7]", "partialBits");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral551A56E699A1D330BA6125604C7025562B94E331)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FDAB44963B739C563B4CBB8193839AB37E78B75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShakeDigest_DoFinal_m1FDA45E31FA0E7A1CBFA4DD8885491CE7CA4D9B6_RuntimeMethod_var)));
	}

IL_001a:
	{
		// int finalInput = (partialByte & ((1 << partialBits) - 1)) | (0x0F << partialBits);
		uint8_t L_3 = ___partialByte3;
		int32_t L_4 = ___partialBits4;
		int32_t L_5 = ___partialBits4;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_3&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_4&((int32_t)31))))), 1))))|((int32_t)(((int32_t)15)<<((int32_t)(L_5&((int32_t)31)))))));
		// int finalBits = partialBits + 4;
		int32_t L_6 = ___partialBits4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 4));
		// if (finalBits >= 8)
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0049;
		}
	}
	{
		// Absorb((byte)finalInput);
		int32_t L_8 = V_0;
		KeccakDigest_Absorb_mCA0ABF4447D24301D75EF6B52820C0C9D4958BD7(__this, (uint8_t)((int32_t)(uint8_t)L_8), NULL);
		// finalBits -= 8;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
		// finalInput >>= 8;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)(L_10>>8));
	}

IL_0049:
	{
		// if (finalBits > 0)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		// AbsorbBits(finalInput, finalBits);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		KeccakDigest_AbsorbBits_mFCA4A94BC382A779A3041E2B7A16CA58DFE2FD1C(__this, L_12, L_13, NULL);
	}

IL_0055:
	{
		// Squeeze(output, outOff, (long)outLen << 3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output0;
		int32_t L_15 = ___outOff1;
		int32_t L_16 = ___outLen2;
		KeccakDigest_Squeeze_m26D0A211F041EBDE458D30663B1AE6D70FD09E55(__this, L_14, L_15, ((int64_t)(((int64_t)L_16)<<3)), NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(19 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset() */, __this);
		// return outLen;
		int32_t L_17 = ___outLen2;
		return L_17;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShakeDigest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShakeDigest_Copy_mAC5C7D59EB938C52F6046B256F39BFF66CB03FA5 (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ShakeDigest(this);
		ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1* L_0 = (ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1*)il2cpp_codegen_object_new(ShakeDigest_tB6621239E288A577A2FE365F78236A89C48B52D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShakeDigest__ctor_m33C108CBAB3A6DECF2DBE08FF6C336882AFE8745(L_0, __this, NULL);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortenedDigest__ctor_m481CD1A90FB8AE8858E2CD011CF5133FAC88D12F (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, RuntimeObject* ___baseDigest0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShortenedDigest(
		//     IDigest    baseDigest,
		//     int        length)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (baseDigest == null)
		RuntimeObject* L_0 = ___baseDigest0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("baseDigest");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3432BEFEC70FFAAEC3E17E139E849DC1F8251267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShortenedDigest__ctor_m481CD1A90FB8AE8858E2CD011CF5133FAC88D12F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (length > baseDigest.GetDigestSize())
		int32_t L_2 = ___length1;
		RuntimeObject* L_3 = ___baseDigest0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentException("baseDigest output not large enough to support length");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralADBE8343A9CF02BC319373112FD79001EEAB35B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShortenedDigest__ctor_m481CD1A90FB8AE8858E2CD011CF5133FAC88D12F_RuntimeMethod_var)));
	}

IL_0028:
	{
		// this.baseDigest = baseDigest;
		RuntimeObject* L_6 = ___baseDigest0;
		__this->___baseDigest_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseDigest_0), (void*)L_6);
		// this.length = length;
		int32_t L_7 = ___length1;
		__this->___length_1 = L_7;
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShortenedDigest_get_AlgorithmName_m4838CA1D3AF2B8D4B819C3660D009EA8F2E48B58 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return baseDigest.AlgorithmName + "(" + length * 8 + ")"; }
		RuntimeObject* L_0 = __this->___baseDigest_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::get_AlgorithmName() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = __this->___length_1;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 8));
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, L_3, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_4;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortenedDigest_GetDigestSize_m57566667F12C5BEC15BC2BC9FE2C05B85629FF05 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, const RuntimeMethod* method) 
{
	{
		// return length;
		int32_t L_0 = __this->___length_1;
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortenedDigest_Update_m851460DBE45C13CA29BA4942AD404704A21D4712 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseDigest.Update(input);
		RuntimeObject* L_0 = __this->___baseDigest_0;
		uint8_t L_1 = ___input0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::Update(System.Byte) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortenedDigest_BlockUpdate_m16952C92BDDACC0CF9B2186C193D4FA00E871081 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseDigest.BlockUpdate(input, inOff, length);
		RuntimeObject* L_0 = __this->___baseDigest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortenedDigest_DoFinal_m4098245D0EDFD0A1325C838DC0A726DAC44F2CB7 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] tmp = new byte[baseDigest.GetDigestSize()];
		RuntimeObject* L_0 = __this->___baseDigest_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// baseDigest.DoFinal(tmp, 0);
		RuntimeObject* L_3 = __this->___baseDigest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_3, L_4, 0);
		// Array.Copy(tmp, 0, output, outOff, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		int32_t L_9 = __this->___length_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, L_8, L_9, NULL);
		// return length;
		int32_t L_10 = __this->___length_1;
		return L_10;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortenedDigest_Reset_mD8218F74F4FD5AB0A72066DBF77B72B4718F3525 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// baseDigest.Reset();
		RuntimeObject* L_0 = __this->___baseDigest_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.ShortenedDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortenedDigest_GetByteLength_m962394A1421389FF7CFD77ABD030BEBEC446FC92 (ShortenedDigest_t95134051684C24C2FC66E2343596E4EF3504D434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return baseDigest.GetByteLength();
		RuntimeObject* L_0 = __this->___baseDigest_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.IDigest::GetByteLength() */, IDigest_tA4B7011D922E10A064770B59C3DD12E9C357D783_il2cpp_TypeInfo_var, L_0);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest__ctor_m9893D81818CA68AA3FC4E77AD7BD12F0686630AC (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, int32_t ___stateSizeBits0, int32_t ___digestSizeBits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SkeinDigest(int stateSizeBits, int digestSizeBits)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.engine = new SkeinEngine(stateSizeBits, digestSizeBits);
		int32_t L_0 = ___stateSizeBits0;
		int32_t L_1 = ___digestSizeBits1;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_2 = (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A*)il2cpp_codegen_object_new(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SkeinEngine__ctor_mD917A8F9EF5925AF33FFD85ADECFBBEC0837789F(L_2, L_0, L_1, NULL);
		__this->___engine_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_3), (void*)L_2);
		// Init(null);
		SkeinDigest_Init_mF728F2A87DDB6358C1395FC66276FD31D2122726(__this, (SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F*)NULL, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest__ctor_mBB1AEB7FD63757AE33867E0B2C96D1F2DDC972AA (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* ___digest0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SkeinDigest(SkeinDigest digest)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.engine = new SkeinEngine(digest.engine);
		SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* L_0 = ___digest0;
		NullCheck(L_0);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_1 = L_0->___engine_3;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_2 = (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A*)il2cpp_codegen_object_new(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SkeinEngine__ctor_mF13A5F241076A7A34810359B2D128904EBF74515(L_2, L_1, NULL);
		__this->___engine_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_3), (void*)L_2);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest_Reset_m1DD09D1CE517BDF3D1A3A263B629EB86A5D463C3 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* V_0 = NULL;
	{
		// SkeinDigest d = (SkeinDigest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9*)CastclassClass((RuntimeObject*)L_0, SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9_il2cpp_TypeInfo_var));
		// engine.Reset(d.engine);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_1 = __this->___engine_3;
		SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* L_2 = V_0;
		NullCheck(L_2);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_3 = L_2->___engine_3;
		NullCheck(L_1);
		SkeinEngine_Reset_m54EEB7783A8E34C1DB3099A2BD5289F3A8F1FEBB(L_1, L_3, NULL);
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkeinDigest_Copy_m620EA3A7AA20113BFDF988A8E82C274C79DA9006 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new SkeinDigest(this);
		SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* L_0 = (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9*)il2cpp_codegen_object_new(SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SkeinDigest__ctor_mBB1AEB7FD63757AE33867E0B2C96D1F2DDC972AA(L_0, __this, NULL);
		return L_0;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeinDigest_get_AlgorithmName_m8108C45B80F529A781C91B03A29A7357DBF196F7 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E0BF3F5A585BAF695A88C3131EB727125BD40A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return "Skein-" + (engine.BlockSize * 8) + "-" + (engine.OutputSize * 8); }
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, 8));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_3 = __this->___engine_3;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3_inline(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 8));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral89E0BF3F5A585BAF695A88C3131EB727125BD40A, L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_5, NULL);
		return L_6;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinDigest_GetDigestSize_m2B8ABFFC75A9BDA6E100A4062A4B56AC98FC95D6 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, const RuntimeMethod* method) 
{
	{
		// return engine.OutputSize;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinDigest_GetByteLength_m1DDE65E393E924D88E39927AF69711FC80083612 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, const RuntimeMethod* method) 
{
	{
		// return engine.BlockSize;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(L_0, NULL);
		return L_1;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::Init(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest_Init_mF728F2A87DDB6358C1395FC66276FD31D2122726 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* ___parameters0, const RuntimeMethod* method) 
{
	{
		// engine.Init(parameters);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* L_1 = ___parameters0;
		NullCheck(L_0);
		SkeinEngine_Init_m1CBBFAA8FDB2701F1428FD8438FB7BDBBA9796D3(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest_Reset_m21605A0995CB8E7D7A09B75ACF6CFAD38C017139 (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, const RuntimeMethod* method) 
{
	{
		// engine.Reset();
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		NullCheck(L_0);
		SkeinEngine_Reset_m9673B51AFFACB2F0DF8C434A5A317FFB86BEF937(L_0, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest_Update_m8C7E3EEDE3F28FDC548E78D8948ED4DF4C2E209B (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, uint8_t ___inByte0, const RuntimeMethod* method) 
{
	{
		// engine.Update(inByte);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		uint8_t L_1 = ___inByte0;
		NullCheck(L_0);
		SkeinEngine_Update_m89DB8950E6E94BDEF060D053A434D20D6615B1D3(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinDigest_BlockUpdate_m2AE567442808AA4A3B35CDDD6C60833292292C5E (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		// engine.Update(inBytes, inOff, len);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inBytes0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		NullCheck(L_0);
		SkeinEngine_Update_m140A69E4E1AF8290CC9EBE5E6F58E68FF08DC068(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinDigest_DoFinal_m40844B89F4CDB3A7EA6A2AC57D626EB0AA2C966B (SkeinDigest_t12CFB9881B8232AFE1C5799256F847A644839CC9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// return engine.DoFinal(outBytes, outOff);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___outBytes0;
		int32_t L_2 = ___outOff1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = SkeinEngine_DoFinal_mAE3054CA1825CE685B343DECC8675C4314836E80(L_0, L_1, L_2, NULL);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__cctor_mB0C3A7DDAEA4FC862DFE4AC5E0B635E0F97DA502 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____14A03AA4516FE146356EF9D4F549B8662F9C50A467974D3BFAC45B474D65B864_19_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____2C9D6B105EC78E8E02279FB1266932E3468A575B0EB9818985DBE9468B991CCE_40_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____2F2C71B5B311BF139FD4B797EF2308F928EFE5092D7E11DC070CF41038A079B9_45_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____62A191EC74B0F281659DD81132751B7656F065A2AD5A8E892CAE1A8E4DBFD0B5_113_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____971488BE36A194DB27CE385237DEA12A31333F2FBD2BB3B60701BE542B27AAE2_167_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____B93B37392B6BF36325C2B8E6047E7EF31B87C67E59B16D30A60CAF2E18D9C73C_221_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____C51FEE572495EE6ED75353FC262F765FF558EED94FCB9EE64987AEE6C8548E12_240_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____C90D4186D61A339F3078D8C7A6CBB1F005BFF5039C44C37F526BDCE2E00200BE_245_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____CDAEE7E50DA05783C75D649650C5CDC6ABB06447D6A9CFBB2E7212421547E53B_252_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IDictionary INITIAL_STATES = BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.CreateHashtable();
		il2cpp_codegen_runtime_class_init_inline(Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Platform_CreateHashtable_mD3CB20D5B695B1EBB9636894C51CC9EA909D9149(NULL);
		((SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_StaticFields*)il2cpp_codegen_static_fields_for(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var))->___INITIAL_STATES_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_StaticFields*)il2cpp_codegen_static_fields_for(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var))->___INITIAL_STATES_7), (void*)L_0);
		// InitialState(SKEIN_256, 128, new ulong[]{
		//     0xe1111906964d7260UL,
		//     0x883daaa77c8d811cUL,
		//     0x10080df491960f7aUL,
		//     0xccf7dde5b45bc1c2UL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____14A03AA4516FE146356EF9D4F549B8662F9C50A467974D3BFAC45B474D65B864_19_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)256), ((int32_t)128), L_2, NULL);
		// InitialState(SKEIN_256, 160, new ulong[]{
		//     0x1420231472825e98UL,
		//     0x2ac4e9a25a77e590UL,
		//     0xd47a58568838d63eUL,
		//     0x2dd2e4968586ab7dUL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____2F2C71B5B311BF139FD4B797EF2308F928EFE5092D7E11DC070CF41038A079B9_45_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)256), ((int32_t)160), L_5, NULL);
		// InitialState(SKEIN_256, 224, new ulong[]{
		//     0xc6098a8c9ae5ea0bUL,
		//     0x876d568608c5191cUL,
		//     0x99cb88d7d7f53884UL,
		//     0x384bddb1aeddb5deUL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = L_7;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____C51FEE572495EE6ED75353FC262F765FF558EED94FCB9EE64987AEE6C8548E12_240_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_8, L_9, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)256), ((int32_t)224), L_8, NULL);
		// InitialState(SKEIN_256, 256, new ulong[]{
		//     0xfc9da860d048b449UL,
		//     0x2fca66479fa7d833UL,
		//     0xb33bc3896656840fUL,
		//     0x6a54e920fde8da69UL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____CDAEE7E50DA05783C75D649650C5CDC6ABB06447D6A9CFBB2E7212421547E53B_252_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_11, L_12, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)256), ((int32_t)256), L_11, NULL);
		// InitialState(SKEIN_512, 128, new ulong[]{
		//     0xa8bc7bf36fbf9f52UL,
		//     0x1e9872cebd1af0aaUL,
		//     0x309b1790b32190d3UL,
		//     0xbcfbb8543f94805cUL,
		//     0x0da61bcd6e31b11bUL,
		//     0x1a18ebead46a32e3UL,
		//     0xa2cc5b18ce84aa82UL,
		//     0x6982ab289d46982dUL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = L_13;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____2C9D6B105EC78E8E02279FB1266932E3468A575B0EB9818985DBE9468B991CCE_40_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_14, L_15, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)512), ((int32_t)128), L_14, NULL);
		// InitialState(SKEIN_512, 160, new ulong[]{
		//     0x28b81a2ae013bd91UL,
		//     0xc2f11668b5bdf78fUL,
		//     0x1760d8f3f6a56f12UL,
		//     0x4fb747588239904fUL,
		//     0x21ede07f7eaf5056UL,
		//     0xd908922e63ed70b8UL,
		//     0xb8ec76ffeccb52faUL,
		//     0x01a47bb8a3f27a6eUL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____62A191EC74B0F281659DD81132751B7656F065A2AD5A8E892CAE1A8E4DBFD0B5_113_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_17, L_18, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)512), ((int32_t)160), L_17, NULL);
		// InitialState(SKEIN_512, 224, new ulong[]{
		//     0xccd0616248677224UL,
		//     0xcba65cf3a92339efUL,
		//     0x8ccd69d652ff4b64UL,
		//     0x398aed7b3ab890b4UL,
		//     0x0f59d1b1457d2bd0UL,
		//     0x6776fe6575d4eb3dUL,
		//     0x99fbc70e997413e9UL,
		//     0x9e2cfccfe1c41ef7UL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = L_19;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____C90D4186D61A339F3078D8C7A6CBB1F005BFF5039C44C37F526BDCE2E00200BE_245_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_20, L_21, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)512), ((int32_t)224), L_20, NULL);
		// InitialState(SKEIN_512, 384, new ulong[]{
		//     0xa3f6c6bf3a75ef5fUL,
		//     0xb0fef9ccfd84faa4UL,
		//     0x9d77dd663d770cfeUL,
		//     0xd798cbf3b468fddaUL,
		//     0x1bc4a6668a0e4465UL,
		//     0x7ed7d434e5807407UL,
		//     0x548fc1acd4ec44d6UL,
		//     0x266e17546aa18ff8UL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = L_22;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____971488BE36A194DB27CE385237DEA12A31333F2FBD2BB3B60701BE542B27AAE2_167_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_23, L_24, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)512), ((int32_t)384), L_23, NULL);
		// InitialState(SKEIN_512, 512, new ulong[]{
		//     0x4903adff749c51ceUL,
		//     0x0d95de399746df03UL,
		//     0x8fd1934127c79bceUL,
		//     0x9a255629ff352cb1UL,
		//     0x5db62599df6ca7b0UL,
		//     0xeabe394ca9d5c3f4UL,
		//     0x991112c71a75b523UL,
		//     0xae18a40b660fcc33UL});
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = L_25;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_27 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____B93B37392B6BF36325C2B8E6047E7EF31B87C67E59B16D30A60CAF2E18D9C73C_221_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_26, L_27, NULL);
		SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59(((int32_t)512), ((int32_t)512), L_26, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::InitialState(System.Int32,System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_InitialState_mE9B95AC4CF969ACF16C42FB723C7E8B9136FEC59 (int32_t ___blockSize0, int32_t ___outputSize1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// INITIAL_STATES.Add(VariantIdentifier(blockSize / 8, outputSize / 8), state);
		il2cpp_codegen_runtime_class_init_inline(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_StaticFields*)il2cpp_codegen_static_fields_for(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var))->___INITIAL_STATES_7;
		int32_t L_1 = ___blockSize0;
		int32_t L_2 = ___outputSize1;
		int32_t L_3;
		L_3 = SkeinEngine_VariantIdentifier_mBEAA9D2D1C144A2C84EDE137D425F79451ABEDF4(((int32_t)(L_1/8)), ((int32_t)(L_2/8)), NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___state2;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_5, (RuntimeObject*)L_6);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::VariantIdentifier(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_VariantIdentifier_mBEAA9D2D1C144A2C84EDE137D425F79451ABEDF4 (int32_t ___blockSizeBytes0, int32_t ___outputSizeBytes1, const RuntimeMethod* method) 
{
	{
		// return (outputSizeBytes << 16) | blockSizeBytes;
		int32_t L_0 = ___outputSizeBytes1;
		int32_t L_1 = ___blockSizeBytes0;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)16)))|L_1));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_mD917A8F9EF5925AF33FFD85ADECFBBEC0837789F (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, int32_t ___blockSizeBits0, int32_t ___outputSizeBits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly byte[] singleByte = new byte[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___singleByte_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleByte_16), (void*)L_0);
		// public SkeinEngine(int blockSizeBits, int outputSizeBits)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (outputSizeBits % 8 != 0)
		int32_t L_1 = ___outputSizeBits1;
		if (!((int32_t)(L_1%8)))
		{
			goto IL_002e;
		}
	}
	{
		// throw new ArgumentException("Output size must be a multiple of 8 bits. :" + outputSizeBits);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___outputSizeBits1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AFE3341C252D09D14363C6B369DB12C49850B0E)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinEngine__ctor_mD917A8F9EF5925AF33FFD85ADECFBBEC0837789F_RuntimeMethod_var)));
	}

IL_002e:
	{
		// this.outputSizeBytes = outputSizeBits / 8;
		int32_t L_5 = ___outputSizeBits1;
		__this->___outputSizeBytes_9 = ((int32_t)(L_5/8));
		// this.threefish = new ThreefishEngine(blockSizeBits);
		int32_t L_6 = ___blockSizeBits0;
		ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* L_7 = (ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC*)il2cpp_codegen_object_new(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ThreefishEngine__ctor_m67C5C61065D6F10E0AA06D334C2E48034DF2EA91(L_7, L_6, NULL);
		__this->___threefish_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___threefish_8), (void*)L_7);
		// this.ubi = new UBI(this,threefish.GetBlockSize());
		ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* L_8 = __this->___threefish_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::GetBlockSize() */, L_8);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_10 = (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86*)il2cpp_codegen_object_new(UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UBI__ctor_mD9AFD29219A116C8BD6C5FA3DB3DDE01466BA0CF(L_10, __this, L_9, NULL);
		__this->___ubi_15 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ubi_15), (void*)L_10);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_mF13A5F241076A7A34810359B2D128904EBF74515 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine0, const RuntimeMethod* method) 
{
	{
		// : this(engine.BlockSize * 8, engine.OutputSize * 8)
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = ___engine0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(L_0, NULL);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_2 = ___engine0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3_inline(L_2, NULL);
		SkeinEngine__ctor_mD917A8F9EF5925AF33FFD85ADECFBBEC0837789F(__this, ((int32_t)il2cpp_codegen_multiply(L_1, 8)), ((int32_t)il2cpp_codegen_multiply(L_3, 8)), NULL);
		// CopyIn(engine);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_4 = ___engine0;
		SkeinEngine_CopyIn_m97217376559C715051CAC010F3E6AC59C3B355F6(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_CopyIn_m97217376559C715051CAC010F3E6AC59C3B355F6 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.ubi.Reset(engine.ubi);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_0 = __this->___ubi_15;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_1 = ___engine0;
		NullCheck(L_1);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_2 = L_1->___ubi_15;
		NullCheck(L_0);
		UBI_Reset_mB10E90F29E2209F7BD6F3C2615C8F65E62596985(L_0, L_2, NULL);
		// this.chain = Arrays.Clone(engine.chain, this.chain);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_3 = ___engine0;
		NullCheck(L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3->___chain_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___chain_10;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6;
		L_6 = Arrays_Clone_m3EF31F57343FAD32D98122A4B7F24C350BF5CAAC(L_4, L_5, NULL);
		__this->___chain_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chain_10), (void*)L_6);
		// this.initialState = Arrays.Clone(engine.initialState, this.initialState);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_7 = ___engine0;
		NullCheck(L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = L_7->___initialState_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = __this->___initialState_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10;
		L_10 = Arrays_Clone_m3EF31F57343FAD32D98122A4B7F24C350BF5CAAC(L_8, L_9, NULL);
		__this->___initialState_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialState_11), (void*)L_10);
		// this.key = Arrays.Clone(engine.key, this.key);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_11 = ___engine0;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___key_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___key_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Arrays_Clone_m7F3ED4979E099F6BF047D7F5EFF2446342585F31(L_12, L_13, NULL);
		__this->___key_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_12), (void*)L_14);
		// this.preMessageParameters = Clone(engine.preMessageParameters, this.preMessageParameters);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_15 = ___engine0;
		NullCheck(L_15);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_16 = L_15->___preMessageParameters_13;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_17 = __this->___preMessageParameters_13;
		il2cpp_codegen_runtime_class_init_inline(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_18;
		L_18 = SkeinEngine_Clone_m7B2F9379FA474F776E74EB9A20091B703D4DC7DC(L_16, L_17, NULL);
		__this->___preMessageParameters_13 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___preMessageParameters_13), (void*)L_18);
		// this.postMessageParameters = Clone(engine.postMessageParameters, this.postMessageParameters);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_19 = ___engine0;
		NullCheck(L_19);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_20 = L_19->___postMessageParameters_14;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_21 = __this->___postMessageParameters_14;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_22;
		L_22 = SkeinEngine_Clone_m7B2F9379FA474F776E74EB9A20091B703D4DC7DC(L_20, L_21, NULL);
		__this->___postMessageParameters_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postMessageParameters_14), (void*)L_22);
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Clone(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[],BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* SkeinEngine_Clone_m7B2F9379FA474F776E74EB9A20091B703D4DC7DC (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___data0, ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* ___existing1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (data == null)
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_0 = ___data0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)NULL;
	}

IL_0005:
	{
		// if ((existing == null) || (existing.Length != data.Length))
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_1 = ___existing1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_2 = ___existing1;
		NullCheck(L_2);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_3 = ___data0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
		// existing = new Parameter[data.Length];
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_4 = ___data0;
		NullCheck(L_4);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_5 = (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)SZArrayNew(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		___existing1 = L_5;
	}

IL_001a:
	{
		// Array.Copy(data, 0, existing, 0, existing.Length);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_6 = ___data0;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_7 = ___existing1;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_8 = ___existing1;
		NullCheck(L_8);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		// return existing;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_9 = ___existing1;
		return L_9;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkeinEngine_Copy_m57A142DA3C8C2C01348C3F5E65CD386B500D5831 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new SkeinEngine(this);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A*)il2cpp_codegen_object_new(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SkeinEngine__ctor_mF13A5F241076A7A34810359B2D128904EBF74515(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Reset_m54EEB7783A8E34C1DB3099A2BD5289F3A8F1FEBB (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* V_0 = NULL;
	{
		// SkeinEngine s = (SkeinEngine)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A*)CastclassClass((RuntimeObject*)L_0, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var));
		// if ((BlockSize != s.BlockSize) || (outputSizeBytes != s.outputSizeBytes))
		int32_t L_1;
		L_1 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(__this, NULL);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = __this->___outputSizeBytes_9;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___outputSizeBytes_9;
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		// throw new MemoableResetException("Incompatible parameters in provided SkeinEngine.");
		MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F* L_7 = (MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemoableResetException_tC985C058F8FD0B93116AA13D72AB3D212852725F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		MemoableResetException__ctor_m13307148B6AEE2877DB60E4209237375D9FCC98B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral385E85254A14B73C5A43C2B05896B2A6782C16A1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinEngine_Reset_m54EEB7783A8E34C1DB3099A2BD5289F3A8F1FEBB_RuntimeMethod_var)));
	}

IL_002e:
	{
		// CopyIn(s);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_8 = V_0;
		SkeinEngine_CopyIn_m97217376559C715051CAC010F3E6AC59C3B355F6(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_OutputSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	{
		// get { return outputSizeBytes; }
		int32_t L_0 = __this->___outputSizeBytes_9;
		return L_0;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	{
		// get { return threefish.GetBlockSize (); }
		ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* L_0 = __this->___threefish_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Engines.ThreefishEngine::GetBlockSize() */, L_0);
		return L_1;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Init(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.SkeinParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Init_m1CBBFAA8FDB2701F1428FD8438FB7BDBBA9796D3 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* ___parameters0, const RuntimeMethod* method) 
{
	{
		// this.chain = null;
		__this->___chain_10 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chain_10), (void*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)NULL);
		// this.key = null;
		__this->___key_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_12), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// this.preMessageParameters = null;
		__this->___preMessageParameters_13 = (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___preMessageParameters_13), (void*)(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)NULL);
		// this.postMessageParameters = null;
		__this->___postMessageParameters_14 = (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postMessageParameters_14), (void*)(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)NULL);
		// if (parameters != null)
		SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* L_0 = ___parameters0;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// byte[] key = parameters.GetKey();
		SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* L_1 = ___parameters0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = SkeinParameters_GetKey_m3FA3C5FA3CEB568E72E520A7B26F0DA04076676D(L_1, NULL);
		// if (key.Length < 16)
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0036;
		}
	}
	{
		// throw new ArgumentException("Skein key must be at least 128 bits.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB5D610D72476F4C53BBAF56C4E027216B1D06949)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinEngine_Init_m1CBBFAA8FDB2701F1428FD8438FB7BDBBA9796D3_RuntimeMethod_var)));
	}

IL_0036:
	{
		// InitParams(parameters.GetParameters());
		SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* L_4 = ___parameters0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = SkeinParameters_GetParameters_m18A2224F60C71CB1A6A2C4BEC05A8C721F1824EB_inline(L_4, NULL);
		SkeinEngine_InitParams_m1D19F07E8CEA9F580EE52F1E18BE2FBDB715606D(__this, L_5, NULL);
	}

IL_0042:
	{
		// CreateInitialState();
		SkeinEngine_CreateInitialState_m61E32687E85CDB66EA98959D6CFFD5736FBDE64C(__this, NULL);
		// UbiInit(PARAM_TYPE_MESSAGE);
		SkeinEngine_UbiInit_m5148E7F99495EA388AECC6F81AD79F9B126AAC94(__this, ((int32_t)48), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::InitParams(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_InitParams_m1D19F07E8CEA9F580EE52F1E18BE2FBDB715606D (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// IEnumerator keys = parameters.Keys.GetEnumerator();
		RuntimeObject* L_0 = ___parameters0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		// IList pre = BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.CreateArrayList();
		il2cpp_codegen_runtime_class_init_inline(Platform_tC977DC2D832DA875FC4E0B00085E413B221ECCF2_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Platform_CreateArrayList_m7E0B2315630228380C240E8C560A6574F295AB07(NULL);
		V_1 = L_3;
		// IList post = BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Platform.CreateArrayList();
		RuntimeObject* L_4;
		L_4 = Platform_CreateArrayList_m7E0B2315630228380C240E8C560A6574F295AB07(NULL);
		V_2 = L_4;
		goto IL_006b;
	}

IL_001a:
	{
		// int type = (int)keys.Current;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_6, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		// byte[] value = (byte[])parameters[type];
		RuntimeObject* L_7 = ___parameters0;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_7, L_10);
		V_4 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_11, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		// if (type == PARAM_TYPE_KEY)
		int32_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		// this.key = value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		__this->___key_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___key_12), (void*)L_13);
		goto IL_006b;
	}

IL_0046:
	{
		// else if (type < PARAM_TYPE_MESSAGE)
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)48))))
		{
			goto IL_005c;
		}
	}
	{
		// pre.Add(new Parameter(type, value));
		RuntimeObject* L_15 = V_1;
		int32_t L_16 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_18 = (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B*)il2cpp_codegen_object_new(Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Parameter__ctor_m165FE16947B394824668A324EE2878878B81CFEE(L_18, L_16, L_17, NULL);
		NullCheck(L_15);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_15, L_18);
		goto IL_006b;
	}

IL_005c:
	{
		// post.Add(new Parameter(type, value));
		RuntimeObject* L_20 = V_2;
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_23 = (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B*)il2cpp_codegen_object_new(Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Parameter__ctor_m165FE16947B394824668A324EE2878878B81CFEE(L_23, L_21, L_22, NULL);
		NullCheck(L_20);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_20, L_23);
	}

IL_006b:
	{
		// while (keys.MoveNext())
		RuntimeObject* L_25 = V_0;
		NullCheck(L_25);
		bool L_26;
		L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
		if (L_26)
		{
			goto IL_001a;
		}
	}
	{
		// preMessageParameters = new Parameter[pre.Count];
		RuntimeObject* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_27);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_29 = (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)SZArrayNew(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D_il2cpp_TypeInfo_var, (uint32_t)L_28);
		__this->___preMessageParameters_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___preMessageParameters_13), (void*)L_29);
		// pre.CopyTo(preMessageParameters, 0);
		RuntimeObject* L_30 = V_1;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_31 = __this->___preMessageParameters_13;
		NullCheck(L_30);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_30, (RuntimeArray*)L_31, 0);
		// Array.Sort(preMessageParameters);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_32 = __this->___preMessageParameters_13;
		Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE(L_32, Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE_RuntimeMethod_var);
		// postMessageParameters = new Parameter[post.Count];
		RuntimeObject* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_33);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_35 = (ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D*)SZArrayNew(ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D_il2cpp_TypeInfo_var, (uint32_t)L_34);
		__this->___postMessageParameters_14 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___postMessageParameters_14), (void*)L_35);
		// post.CopyTo(postMessageParameters, 0);
		RuntimeObject* L_36 = V_2;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_37 = __this->___postMessageParameters_14;
		NullCheck(L_36);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_36, (RuntimeArray*)L_37, 0);
		// Array.Sort(postMessageParameters);
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_38 = __this->___postMessageParameters_14;
		Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE(L_38, Array_Sort_TisParameter_t80478854220731B1B02877D2E6592A8E4C0C539B_mF9DD853BEDECE37495A33D5EFB464A73584E51FE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::CreateInitialState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_CreateInitialState_m61E32687E85CDB66EA98959D6CFFD5736FBDE64C (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* V_2 = NULL;
	{
		// ulong[] precalc = (ulong[])INITIAL_STATES[VariantIdentifier(BlockSize, OutputSize)];
		il2cpp_codegen_runtime_class_init_inline(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_StaticFields*)il2cpp_codegen_static_fields_for(SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A_il2cpp_TypeInfo_var))->___INITIAL_STATES_7;
		int32_t L_1;
		L_1 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(__this, NULL);
		int32_t L_2;
		L_2 = SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3_inline(__this, NULL);
		int32_t L_3;
		L_3 = SkeinEngine_VariantIdentifier_mBEAA9D2D1C144A2C84EDE137D425F79451ABEDF4(L_1, L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_5);
		V_0 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_6, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var));
		// if ((key == null) && (precalc != null))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___key_12;
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_0;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		// chain = Arrays.Clone(precalc);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10;
		L_10 = Arrays_Clone_m68960FB4ADE4717CEC3592AD4FF7ACB7F0F038F6(L_9, NULL);
		__this->___chain_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chain_10), (void*)L_10);
		goto IL_0081;
	}

IL_003f:
	{
		// chain = new ulong[BlockSize / 8];
		int32_t L_11;
		L_11 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(__this, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_11/8)));
		__this->___chain_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chain_10), (void*)L_12);
		// if (key != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___key_12;
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		// UbiComplete(SkeinParameters.PARAM_TYPE_KEY, key);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___key_12;
		SkeinEngine_UbiComplete_m599284A2D2363C74736D35EF9C8707B28B1480F0(__this, 0, L_14, NULL);
	}

IL_0067:
	{
		// UbiComplete(PARAM_TYPE_CONFIG, new Configuration(outputSizeBytes * 8).Bytes);
		int32_t L_15 = __this->___outputSizeBytes_9;
		Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11* L_16 = (Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11*)il2cpp_codegen_object_new(Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Configuration__ctor_m6256014AF510D89D0B02AAE083D9AA487479CE82(L_16, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_15, 8))), NULL);
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = Configuration_get_Bytes_mA48468E7D9C23817482325A6E61364C9D0382952_inline(L_16, NULL);
		SkeinEngine_UbiComplete_m599284A2D2363C74736D35EF9C8707B28B1480F0(__this, 4, L_17, NULL);
	}

IL_0081:
	{
		// if (preMessageParameters != null)
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_18 = __this->___preMessageParameters_13;
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		// for (int i = 0; i < preMessageParameters.Length; i++)
		V_1 = 0;
		goto IL_00ac;
	}

IL_008d:
	{
		// Parameter param = preMessageParameters[i];
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_19 = __this->___preMessageParameters_13;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		// UbiComplete(param.Type, param.Value);
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Parameter_get_Type_mEFFB2DBBDAAA302084D0635E88A46137D00FE1CC_inline(L_23, NULL);
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_25 = V_2;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = Parameter_get_Value_m039C3F12F280A72B8DFC6439E09F584A94120E5A_inline(L_25, NULL);
		SkeinEngine_UbiComplete_m599284A2D2363C74736D35EF9C8707B28B1480F0(__this, L_24, L_26, NULL);
		// for (int i = 0; i < preMessageParameters.Length; i++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00ac:
	{
		// for (int i = 0; i < preMessageParameters.Length; i++)
		int32_t L_28 = V_1;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_29 = __this->___preMessageParameters_13;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_00b7:
	{
		// initialState = Arrays.Clone(chain);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_30 = __this->___chain_10;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31;
		L_31 = Arrays_Clone_m68960FB4ADE4717CEC3592AD4FF7ACB7F0F038F6(L_30, NULL);
		__this->___initialState_11 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialState_11), (void*)L_31);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Reset_m9673B51AFFACB2F0DF8C434A5A317FFB86BEF937 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	{
		// Array.Copy(initialState, 0, chain, 0, chain.Length);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___initialState_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___chain_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___chain_10;
		NullCheck(L_2);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		// UbiInit(PARAM_TYPE_MESSAGE);
		SkeinEngine_UbiInit_m5148E7F99495EA388AECC6F81AD79F9B126AAC94(__this, ((int32_t)48), NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiComplete(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_UbiComplete_m599284A2D2363C74736D35EF9C8707B28B1480F0 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, int32_t ___type0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) 
{
	{
		// UbiInit(type);
		int32_t L_0 = ___type0;
		SkeinEngine_UbiInit_m5148E7F99495EA388AECC6F81AD79F9B126AAC94(__this, L_0, NULL);
		// this.ubi.Update(value, 0, value.Length, chain);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_1 = __this->___ubi_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___value1;
		NullCheck(L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___chain_10;
		NullCheck(L_1);
		UBI_Update_mEB0F0DFD785738FF466DDEB785880CCDEF3839D4(L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4, NULL);
		// UbiFinal();
		SkeinEngine_UbiFinal_mC2090DB91FE90203A7D7CF962A109150D7FCC2C5(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_UbiInit_m5148E7F99495EA388AECC6F81AD79F9B126AAC94 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// this.ubi.Reset(type);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_0 = __this->___ubi_15;
		int32_t L_1 = ___type0;
		NullCheck(L_0);
		UBI_Reset_mF223E98CFC03F580DB4FD515CB6EC37AB31FEECF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::UbiFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_UbiFinal_mC2090DB91FE90203A7D7CF962A109150D7FCC2C5 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	{
		// ubi.DoFinal(chain);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_0 = __this->___ubi_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___chain_10;
		NullCheck(L_0);
		UBI_DoFinal_mB1BCBED3D9168F7FCC0AA862B6F82F105FC2E2CD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::CheckInitialised()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_CheckInitialised_m38007CC319BFA40D19EB75C2B784397C0A002D85 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	{
		// if (this.ubi == null)
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_0 = __this->___ubi_15;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException("Skein engine is not initialised.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB1B0864EEC2DBC9265FA9A46A5569FD88CE71706)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinEngine_CheckInitialised_m38007CC319BFA40D19EB75C2B784397C0A002D85_RuntimeMethod_var)));
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m89DB8950E6E94BDEF060D053A434D20D6615B1D3 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, uint8_t ___inByte0, const RuntimeMethod* method) 
{
	{
		// singleByte[0] = inByte;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___singleByte_16;
		uint8_t L_1 = ___inByte0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_1);
		// Update(singleByte, 0, 1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___singleByte_16;
		SkeinEngine_Update_m140A69E4E1AF8290CC9EBE5E6F58E68FF08DC068(__this, L_2, 0, 1, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m140A69E4E1AF8290CC9EBE5E6F58E68FF08DC068 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		// CheckInitialised();
		SkeinEngine_CheckInitialised_m38007CC319BFA40D19EB75C2B784397C0A002D85(__this, NULL);
		// ubi.Update(inBytes, inOff, len, chain);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_0 = __this->___ubi_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inBytes0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___chain_10;
		NullCheck(L_0);
		UBI_Update_mEB0F0DFD785738FF466DDEB785880CCDEF3839D4(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_DoFinal_mAE3054CA1825CE685B343DECC8675C4314836E80 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// CheckInitialised();
		SkeinEngine_CheckInitialised_m38007CC319BFA40D19EB75C2B784397C0A002D85(__this, NULL);
		// if (outBytes.Length < (outOff + outputSizeBytes))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes0;
		NullCheck(L_0);
		int32_t L_1 = ___outOff1;
		int32_t L_2 = __this->___outputSizeBytes_9;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2)))))
		{
			goto IL_001e;
		}
	}
	{
		// throw new DataLengthException("Output buffer is too short to hold output");
		DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251* L_3 = (DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_t42E5224DAC5B9D7E110D1964C60982578D537251_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m8DFDECC92EA7438CEC8ED781C5CD1A03F4EB0374(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC8142DC23100ACC04095E4B94669B4BDC88233A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinEngine_DoFinal_mAE3054CA1825CE685B343DECC8675C4314836E80_RuntimeMethod_var)));
	}

IL_001e:
	{
		// UbiFinal();
		SkeinEngine_UbiFinal_mC2090DB91FE90203A7D7CF962A109150D7FCC2C5(__this, NULL);
		// if (postMessageParameters != null)
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_4 = __this->___postMessageParameters_14;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		// for (int i = 0; i < postMessageParameters.Length; i++)
		V_2 = 0;
		goto IL_004f;
	}

IL_0030:
	{
		// Parameter param = postMessageParameters[i];
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_5 = __this->___postMessageParameters_14;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// UbiComplete(param.Type, param.Value);
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_9 = V_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Parameter_get_Type_mEFFB2DBBDAAA302084D0635E88A46137D00FE1CC_inline(L_9, NULL);
		Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* L_11 = V_3;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Parameter_get_Value_m039C3F12F280A72B8DFC6439E09F584A94120E5A_inline(L_11, NULL);
		SkeinEngine_UbiComplete_m599284A2D2363C74736D35EF9C8707B28B1480F0(__this, L_10, L_12, NULL);
		// for (int i = 0; i < postMessageParameters.Length; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < postMessageParameters.Length; i++)
		int32_t L_14 = V_2;
		ParameterU5BU5D_t697FD1D2C0F46A518BF31E79EFC1B74C9C4B462D* L_15 = __this->___postMessageParameters_14;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_005a:
	{
		// int blockSize = BlockSize;
		int32_t L_16;
		L_16 = SkeinEngine_get_BlockSize_m80723F2BBE2ED6AC6DCA15E2C9FEBB53FD7E7A34(__this, NULL);
		V_0 = L_16;
		// int blocksRequired = ((outputSizeBytes + blockSize - 1) / blockSize);
		int32_t L_17 = __this->___outputSizeBytes_9;
		int32_t L_18 = V_0;
		int32_t L_19 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_17, L_18)), 1))/L_19));
		// for (int i = 0; i < blocksRequired; i++)
		V_4 = 0;
		goto IL_009e;
	}

IL_0073:
	{
		// int toWrite = System.Math.Min(blockSize, outputSizeBytes - (i * blockSize));
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___outputSizeBytes_9;
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)))), NULL);
		V_5 = L_24;
		// Output((ulong)i, outBytes, outOff + (i * blockSize), toWrite);
		int32_t L_25 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___outBytes0;
		int32_t L_27 = ___outOff1;
		int32_t L_28 = V_4;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		SkeinEngine_Output_mC280B2CE102DEBC157AD5AD507BE50C3ABC568E4(__this, ((int64_t)L_25), L_26, ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_multiply(L_28, L_29)))), L_30, NULL);
		// for (int i = 0; i < blocksRequired; i++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_009e:
	{
		// for (int i = 0; i < blocksRequired; i++)
		int32_t L_32 = V_4;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0073;
		}
	}
	{
		// Reset();
		SkeinEngine_Reset_m9673B51AFFACB2F0DF8C434A5A317FFB86BEF937(__this, NULL);
		// return outputSizeBytes;
		int32_t L_34 = __this->___outputSizeBytes_9;
		return L_34;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine::Output(System.UInt64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Output_mC280B2CE102DEBC157AD5AD507BE50C3ABC568E4 (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, uint64_t ___outputSequence0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, int32_t ___outputBytes3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// byte[] currentBytes = new byte[8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		// ThreefishEngine.WordToBytes(outputSequence, currentBytes, 0);
		uint64_t L_1 = ___outputSequence0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3(L_1, L_2, 0, NULL);
		// ulong[] outputWords = new ulong[chain.Length];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___chain_10;
		NullCheck(L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		// UbiInit(PARAM_TYPE_OUTPUT);
		SkeinEngine_UbiInit_m5148E7F99495EA388AECC6F81AD79F9B126AAC94(__this, ((int32_t)63), NULL);
		// this.ubi.Update(currentBytes, 0, currentBytes.Length, outputWords);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_5 = __this->___ubi_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_1;
		NullCheck(L_5);
		UBI_Update_mEB0F0DFD785738FF466DDEB785880CCDEF3839D4(L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8, NULL);
		// ubi.DoFinal(outputWords);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_9 = __this->___ubi_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_1;
		NullCheck(L_9);
		UBI_DoFinal_mB1BCBED3D9168F7FCC0AA862B6F82F105FC2E2CD(L_9, L_10, NULL);
		// int wordsRequired = ((outputBytes + 8 - 1) / 8);
		int32_t L_11 = ___outputBytes3;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, 8)), 1))/8));
		// for (int i = 0; i < wordsRequired; i++)
		V_3 = 0;
		goto IL_008f;
	}

IL_004f:
	{
		// int toWrite = System.Math.Min(8, outputBytes - (i * 8));
		int32_t L_12 = ___outputBytes3;
		int32_t L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)il2cpp_codegen_multiply(L_13, 8)))), NULL);
		V_4 = L_14;
		// if (toWrite == 8)
		int32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_0072;
		}
	}
	{
		// ThreefishEngine.WordToBytes(outputWords[i], outBytes, outOff + (i * 8));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int64_t L_19 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___outBytes1;
		int32_t L_21 = ___outOff2;
		int32_t L_22 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3(L_19, L_20, ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_multiply(L_22, 8)))), NULL);
		goto IL_008b;
	}

IL_0072:
	{
		// ThreefishEngine.WordToBytes(outputWords[i], currentBytes, 0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = V_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3(L_26, L_27, 0, NULL);
		// Array.Copy(currentBytes, 0, outBytes, outOff + (i * 8), toWrite);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___outBytes1;
		int32_t L_30 = ___outOff2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)il2cpp_codegen_multiply(L_31, 8)))), L_32, NULL);
	}

IL_008b:
	{
		// for (int i = 0; i < wordsRequired; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008f:
	{
		// for (int i = 0; i < wordsRequired; i++)
		int32_t L_34 = V_3;
		int32_t L_35 = V_2;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_004f;
		}
	}
	{
		// }
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m6256014AF510D89D0B02AAE083D9AA487479CE82 (Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11* __this, int64_t ___outputSizeBits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[] bytes = new byte[32];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___bytes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bytes_0), (void*)L_0);
		// public Configuration(long outputSizeBits)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// bytes[0] = (byte)'S';
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___bytes_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)83));
		// bytes[1] = (byte)'H';
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___bytes_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)72));
		// bytes[2] = (byte)'A';
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___bytes_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)65));
		// bytes[3] = (byte)'3';
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___bytes_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)51));
		// bytes[4] = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___bytes_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)1);
		// bytes[5] = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___bytes_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)0);
		// ThreefishEngine.WordToBytes((ulong)outputSizeBits, bytes, 8);
		int64_t L_7 = ___outputSizeBits0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___bytes_0;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		ThreefishEngine_WordToBytes_mB805E04A359922FB75ED2F4106F18F9F09EC95F3(L_7, L_8, 8, NULL);
		// }
		return;
	}
}
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Configuration::get_Bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Configuration_get_Bytes_mA48468E7D9C23817482325A6E61364C9D0382952 (Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11* __this, const RuntimeMethod* method) 
{
	{
		// get { return bytes; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___bytes_0;
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::.ctor(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parameter__ctor_m165FE16947B394824668A324EE2878878B81CFEE (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, int32_t ___type0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, const RuntimeMethod* method) 
{
	{
		// public Parameter(int type, byte[] value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		int32_t L_0 = ___type0;
		__this->___type_0 = L_0;
		// this.value = value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parameter_get_Type_mEFFB2DBBDAAA302084D0635E88A46137D00FE1CC (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, const RuntimeMethod* method) 
{
	{
		// get { return type; }
		int32_t L_0 = __this->___type_0;
		return L_0;
	}
}
// System.Byte[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Parameter_get_Value_m039C3F12F280A72B8DFC6439E09F584A94120E5A (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, const RuntimeMethod* method) 
{
	{
		// get { return value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___value_1;
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak__ctor_m594680C2CE76BEE2FA2C9051E3176F9F86549F69 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ulong[] tweak = new ulong[2];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___tweak_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tweak_3), (void*)L_0);
		// public UbiTweak()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Reset();
		UbiTweak_Reset_m60728F1343EA29836CBE0B1EE6BF44F7BA802E99(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_Reset_m42838EED9B646851CC354B287D15FCEF386A74E1 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* ___tweak0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.tweak = Arrays.Clone(tweak.tweak, this.tweak);
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_0 = ___tweak0;
		NullCheck(L_0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0->___tweak_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___tweak_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3;
		L_3 = Arrays_Clone_m3EF31F57343FAD32D98122A4B7F24C350BF5CAAC(L_1, L_2, NULL);
		__this->___tweak_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tweak_3), (void*)L_3);
		// this.extendedPosition = tweak.extendedPosition;
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_4 = ___tweak0;
		NullCheck(L_4);
		bool L_5 = L_4->___extendedPosition_4;
		__this->___extendedPosition_4 = L_5;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_Reset_m60728F1343EA29836CBE0B1EE6BF44F7BA802E99 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	{
		// tweak[0] = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)0));
		// tweak[1] = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___tweak_3;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)0));
		// extendedPosition = false;
		__this->___extendedPosition_4 = (bool)0;
		// First = true;
		UbiTweak_set_First_mDDE0D0EF509C14B8E799020BF7737B762C8AE710(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UbiTweak_get_Type_m6801F62CEE72E55898CF47F4D85BD7C020EE7F2B (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	{
		// return (uint)((tweak[1] >> 56) & 0x3FUL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)L_2>>((int32_t)56)))&((int64_t)((int32_t)63)))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::set_Type(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_set_Type_m78E3F8F65E4D193EDB4204804D8663597E7E69F6 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// tweak[1] = (tweak[1] & 0xFFFFFFC000000000UL) | ((value & 0x3FUL) << 56);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___tweak_3;
		NullCheck(L_1);
		int32_t L_2 = 1;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)(L_3&((int64_t)-274877906944LL)))|((int64_t)(((int64_t)(((int64_t)(uint64_t)L_4)&((int64_t)((int32_t)63))))<<((int32_t)56))))));
		// }
		return;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::get_First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UbiTweak_get_First_m2F86E39859F8EEA165D9FCE4D8A496C758D5C51F (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	{
		// return ((tweak[1] & T1_FIRST) != 0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (bool)((!(((uint64_t)((int64_t)(L_2&((int64_t)4611686018427387904LL)))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::set_First(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_set_First_mDDE0D0EF509C14B8E799020BF7737B762C8AE710 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// tweak[1] |= T1_FIRST;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___tweak_3;
		NullCheck(L_1);
		uint64_t* L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_3 = *((int64_t*)L_2);
		*((int64_t*)L_2) = (int64_t)((int64_t)(L_3|((int64_t)4611686018427387904LL)));
		return;
	}

IL_001d:
	{
		// tweak[1] &= ~T1_FIRST;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___tweak_3;
		NullCheck(L_4);
		uint64_t* L_5 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_5) = (int64_t)((int64_t)(L_6&((int64_t)-4611686018427387905LL)));
		// }
		return;
	}
}
// System.Boolean BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::get_Final()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UbiTweak_get_Final_mD295FD8B5FA69245F045CCB68E0D4579BDCB43B5 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	{
		// return ((tweak[1] & T1_FINAL) != 0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (bool)((!(((uint64_t)((int64_t)(L_2&((int64_t)(std::numeric_limits<int64_t>::min)())))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::set_Final(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_set_Final_mD2C55F9A9E874F8B89501A0043A3C17F8A77DF17 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// tweak[1] |= T1_FINAL;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___tweak_3;
		NullCheck(L_1);
		uint64_t* L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_3 = *((int64_t*)L_2);
		*((int64_t*)L_2) = (int64_t)((int64_t)(L_3|((int64_t)(std::numeric_limits<int64_t>::min)())));
		return;
	}

IL_001d:
	{
		// tweak[1] &= ~T1_FINAL;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->___tweak_3;
		NullCheck(L_4);
		uint64_t* L_5 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_5) = (int64_t)((int64_t)(L_6&((int64_t)(std::numeric_limits<int64_t>::max)())));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::AdvancePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UbiTweak_AdvancePosition_m25737FA15FC474066F0CFFBFC05886706DB52E92 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, int32_t ___advance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		// if (extendedPosition)
		bool L_0 = __this->___extendedPosition_4;
		if (!L_0)
		{
			goto IL_0099;
		}
	}
	{
		// ulong[] parts = new ulong[3];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_1;
		// parts[0] = tweak[0] & 0xFFFFFFFFUL;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___tweak_3;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int64_t L_5 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(L_5&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// parts[1] = (tweak[0] >> 32) & 0xFFFFFFFFUL;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->___tweak_3;
		NullCheck(L_7);
		int32_t L_8 = 0;
		int64_t L_9 = (int64_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_9>>((int32_t)32)))&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// parts[2] = tweak[1] & 0xFFFFFFFFUL;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___tweak_3;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)((int64_t)(L_13&((int64_t)(uint64_t)((uint32_t)(-1))))));
		// ulong carry = (ulong)advance;
		int32_t L_14 = ___advance0;
		V_1 = ((int64_t)L_14);
		// for (int i = 0; i < parts.Length; i++)
		V_2 = 0;
		goto IL_0059;
	}

IL_0046:
	{
		// carry += parts[i];
		uint64_t L_15 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int64_t L_19 = (int64_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, L_19));
		// parts[i] = carry;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = V_0;
		int32_t L_21 = V_2;
		uint64_t L_22 = V_1;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint64_t)L_22);
		// carry >>= 32;
		uint64_t L_23 = V_1;
		V_1 = ((int64_t)((uint64_t)L_23>>((int32_t)32)));
		// for (int i = 0; i < parts.Length; i++)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < parts.Length; i++)
		int32_t L_25 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0046;
		}
	}
	{
		// tweak[0] = ((parts[1] & 0xFFFFFFFFUL) << 32) | (parts[0] & 0xFFFFFFFFUL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = __this->___tweak_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		int64_t L_30 = (int64_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 0;
		int64_t L_33 = (int64_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)(((int64_t)(L_30&((int64_t)(uint64_t)((uint32_t)(-1)))))<<((int32_t)32)))|((int64_t)(L_33&((int64_t)(uint64_t)((uint32_t)(-1))))))));
		// tweak[1] = (tweak[1] & 0xFFFFFFFF00000000UL) | (parts[2] & 0xFFFFFFFFUL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = __this->___tweak_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = __this->___tweak_3;
		NullCheck(L_35);
		int32_t L_36 = 1;
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = 2;
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)(L_37&((int64_t)-4294967296LL)))|((int64_t)(L_40&((int64_t)(uint64_t)((uint32_t)(-1))))))));
		return;
	}

IL_0099:
	{
		// ulong position = tweak[0];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = __this->___tweak_3;
		NullCheck(L_41);
		int32_t L_42 = 0;
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_3 = L_43;
		// position += (uint)advance;
		uint64_t L_44 = V_3;
		int32_t L_45 = ___advance0;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, ((int64_t)(uint64_t)((uint32_t)L_45))));
		// tweak[0] = position;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = __this->___tweak_3;
		uint64_t L_47 = V_3;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_47);
		// if (position > LOW_RANGE)
		uint64_t L_48 = V_3;
		if ((!(((uint64_t)L_48) > ((uint64_t)((int64_t)-4294967296LL)))))
		{
			goto IL_00c3;
		}
	}
	{
		// extendedPosition = true;
		__this->___extendedPosition_4 = (bool)1;
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.UInt64[] BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::GetWords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* UbiTweak_GetWords_m53F1D9DE6D782CE2183FB186D2DCD6F10E521F6A (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	{
		// return tweak;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		return L_0;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UbiTweak::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UbiTweak_ToString_mA77AF1AE18C8A390D0F94BD5BB2536566C7DD640 (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13403584747D3219DCE8F228F6AED3D9858A93D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BD1F810B97C00A1EB8EFC41DD9F4399C152AE0);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		// return Type + " first: " + First + ", final: " + Final;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		uint32_t L_2;
		L_2 = UbiTweak_get_Type_m6801F62CEE72E55898CF47F4D85BD7C020EE7F2B(__this, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_0), NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral98BD1F810B97C00A1EB8EFC41DD9F4399C152AE0);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral98BD1F810B97C00A1EB8EFC41DD9F4399C152AE0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		bool L_6;
		L_6 = UbiTweak_get_First_m2F86E39859F8EEA165D9FCE4D8A496C758D5C51F(__this, NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral13403584747D3219DCE8F228F6AED3D9858A93D2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral13403584747D3219DCE8F228F6AED3D9858A93D2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		bool L_10;
		L_10 = UbiTweak_get_Final_mD295FD8B5FA69245F045CCB68E0D4579BDCB43B5(__this, NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI__ctor_mD9AFD29219A116C8BD6C5FA3DB3DDE01466BA0CF (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* ___engine0, int32_t ___blockSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly UbiTweak tweak = new UbiTweak();
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_0 = (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45*)il2cpp_codegen_object_new(UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UbiTweak__ctor_m594680C2CE76BEE2FA2C9051E3176F9F86549F69(L_0, NULL);
		__this->___tweak_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tweak_0), (void*)L_0);
		// public UBI(SkeinEngine engine, int blockSize)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.engine = engine;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_1 = ___engine0;
		__this->___engine_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_1), (void*)L_1);
		// currentBlock = new byte[blockSize];
		int32_t L_2 = ___blockSize1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___currentBlock_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock_2), (void*)L_3);
		// message = new ulong[currentBlock.Length / 8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___currentBlock_2;
		NullCheck(L_4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_4)->max_length))/8)));
		__this->___message_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_4), (void*)L_5);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_Reset_mB10E90F29E2209F7BD6F3C2615C8F65E62596985 (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* ___ubi0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentBlock = Arrays.Clone(ubi.currentBlock, currentBlock);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_0 = ___ubi0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___currentBlock_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___currentBlock_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_tDD3D4809B191CBB32624B5603FC159F40C7F810D_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Arrays_Clone_m7F3ED4979E099F6BF047D7F5EFF2446342585F31(L_1, L_2, NULL);
		__this->___currentBlock_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock_2), (void*)L_3);
		// currentOffset = ubi.currentOffset;
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_4 = ___ubi0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___currentOffset_3;
		__this->___currentOffset_3 = L_5;
		// message = Arrays.Clone(ubi.message, this.message);
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_6 = ___ubi0;
		NullCheck(L_6);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = L_6->___message_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___message_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9;
		L_9 = Arrays_Clone_m3EF31F57343FAD32D98122A4B7F24C350BF5CAAC(L_7, L_8, NULL);
		__this->___message_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_4), (void*)L_9);
		// tweak.Reset(ubi.tweak);
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_10 = __this->___tweak_0;
		UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* L_11 = ___ubi0;
		NullCheck(L_11);
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_12 = L_11->___tweak_0;
		NullCheck(L_10);
		UbiTweak_Reset_m42838EED9B646851CC354B287D15FCEF386A74E1(L_10, L_12, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::Reset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_Reset_mF223E98CFC03F580DB4FD515CB6EC37AB31FEECF (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// tweak.Reset();
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_0 = __this->___tweak_0;
		NullCheck(L_0);
		UbiTweak_Reset_m60728F1343EA29836CBE0B1EE6BF44F7BA802E99(L_0, NULL);
		// tweak.Type = (uint)type;
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_1 = __this->___tweak_0;
		int32_t L_2 = ___type0;
		NullCheck(L_1);
		UbiTweak_set_Type_m78E3F8F65E4D193EDB4204804D8663597E7E69F6(L_1, L_2, NULL);
		// currentOffset = 0;
		__this->___currentOffset_3 = 0;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::Update(System.Byte[],System.Int32,System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_Update_mEB0F0DFD785738FF466DDEB785880CCDEF3839D4 (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___offset1, int32_t ___len2, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int copied = 0;
		V_0 = 0;
		goto IL_007b;
	}

IL_0004:
	{
		// if (currentOffset == currentBlock.Length)
		int32_t L_0 = __this->___currentOffset_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___currentBlock_2;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		// ProcessBlock(output);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___output3;
		UBI_ProcessBlock_mE8955E57B5E7F08E9FD6ACD396496D0443C8ED62(__this, L_2, NULL);
		// tweak.First = false;
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_3 = __this->___tweak_0;
		NullCheck(L_3);
		UbiTweak_set_First_mDDE0D0EF509C14B8E799020BF7737B762C8AE710(L_3, (bool)0, NULL);
		// currentOffset = 0;
		__this->___currentOffset_3 = 0;
	}

IL_002f:
	{
		// int toCopy = System.Math.Min((len - copied), currentBlock.Length - currentOffset);
		int32_t L_4 = ___len2;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___currentBlock_2;
		NullCheck(L_6);
		int32_t L_7 = __this->___currentOffset_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_4, L_5)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7)), NULL);
		V_1 = L_8;
		// Array.Copy(value, offset + copied, currentBlock, currentOffset, toCopy);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___value0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___currentBlock_2;
		int32_t L_13 = __this->___currentOffset_3;
		int32_t L_14 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), (RuntimeArray*)L_12, L_13, L_14, NULL);
		// copied += toCopy;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		// currentOffset += toCopy;
		int32_t L_17 = __this->___currentOffset_3;
		int32_t L_18 = V_1;
		__this->___currentOffset_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		// tweak.AdvancePosition(toCopy);
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_19 = __this->___tweak_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		UbiTweak_AdvancePosition_m25737FA15FC474066F0CFFBFC05886706DB52E92(L_19, L_20, NULL);
	}

IL_007b:
	{
		// while (len > copied)
		int32_t L_21 = ___len2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) > ((int32_t)L_22)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::ProcessBlock(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_ProcessBlock_mE8955E57B5E7F08E9FD6ACD396496D0443C8ED62 (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// engine.threefish.Init(true, engine.chain, tweak.GetWords());
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_0 = __this->___engine_1;
		NullCheck(L_0);
		ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* L_1 = L_0->___threefish_8;
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_2 = __this->___engine_1;
		NullCheck(L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = L_2->___chain_10;
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_4 = __this->___tweak_0;
		NullCheck(L_4);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = UbiTweak_GetWords_m53F1D9DE6D782CE2183FB186D2DCD6F10E521F6A_inline(L_4, NULL);
		NullCheck(L_1);
		ThreefishEngine_Init_m66861B6AC30D5EE08ED8F6F0679628581E0CA7AA(L_1, (bool)1, L_3, L_5, NULL);
		// for (int i = 0; i < message.Length; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_002b:
	{
		// message[i] = ThreefishEngine.BytesToWord(currentBlock, i * 8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___message_4;
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___currentBlock_2;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC_il2cpp_TypeInfo_var);
		uint64_t L_10;
		L_10 = ThreefishEngine_BytesToWord_m8741B648268811419E6840B19BF0C7A93F23B53A(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, 8)), NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_10);
		// for (int i = 0; i < message.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < message.Length; i++)
		int32_t L_12 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___message_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// engine.threefish.ProcessBlock(message, output);
		SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* L_14 = __this->___engine_1;
		NullCheck(L_14);
		ThreefishEngine_tA3582423D36B08D6D14794CA5C51946F98D41DFC* L_15 = L_14->___threefish_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___message_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___output0;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = ThreefishEngine_ProcessBlock_mE255D010C78546727B5FA0334D382554908E2961(L_15, L_16, L_17, NULL);
		// for (int i = 0; i < output.Length; i++)
		V_1 = 0;
		goto IL_0083;
	}

IL_006c:
	{
		// output[i] ^= message[i];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = ___output0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		uint64_t* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		int64_t L_22 = *((int64_t*)L_21);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___message_4;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		*((int64_t*)L_21) = (int64_t)((int64_t)(L_22^L_26));
		// for (int i = 0; i < output.Length; i++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < output.Length; i++)
		int32_t L_28 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___output0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI::DoFinal(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UBI_DoFinal_mB1BCBED3D9168F7FCC0AA862B6F82F105FC2E2CD (UBI_t69B05C0AB907D5EF453CDDF319BAA0C15C56DE86* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___output0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = currentOffset; i < currentBlock.Length; i++)
		int32_t L_0 = __this->___currentOffset_3;
		V_0 = L_0;
		goto IL_0016;
	}

IL_0009:
	{
		// currentBlock[i] = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___currentBlock_2;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)0);
		// for (int i = currentOffset; i < currentBlock.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0016:
	{
		// for (int i = currentOffset; i < currentBlock.Length; i++)
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___currentBlock_2;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0009;
		}
	}
	{
		// tweak.Final = true;
		UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* L_6 = __this->___tweak_0;
		NullCheck(L_6);
		UbiTweak_set_Final_mD2C55F9A9E874F8B89501A0043A3C17F8A77DF17(L_6, (bool)1, NULL);
		// ProcessBlock(output);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___output0;
		UBI_ProcessBlock_mE8955E57B5E7F08E9FD6ACD396496D0443C8ED62(__this, L_7, NULL);
		// }
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest__cctor_mB0C1F304C7A9980722539F9E426438283A09CE60 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		// private static readonly uint[] T = new uint[64];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		((SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields*)il2cpp_codegen_static_fields_for(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var))->___T_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields*)il2cpp_codegen_static_fields_for(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var))->___T_10), (void*)L_0);
		// for (int i = 0; i < 16; ++i)
		V_0 = 0;
		goto IL_0031;
	}

IL_0010:
	{
		// uint t = 0x79CC4519;
		V_1 = ((int32_t)2043430169);
		// T[i] = (t << i) | (t >> (32 - i));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ((SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields*)il2cpp_codegen_static_fields_for(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var))->___T_10;
		int32_t L_2 = V_0;
		uint32_t L_3 = V_1;
		int32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)(L_4&((int32_t)31)))))|((int32_t)((uint32_t)L_5>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_6))&((int32_t)31))))))));
		// for (int i = 0; i < 16; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < 16; ++i)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = 16; i < 64; ++i)
		V_2 = ((int32_t)16);
		goto IL_0064;
	}

IL_003b:
	{
		// int n = i % 32;
		int32_t L_9 = V_2;
		V_3 = ((int32_t)(L_9%((int32_t)32)));
		// uint t = 0x7A879D8A;
		V_4 = ((int32_t)2055708042);
		// T[i] = (t << n) | (t >> (32 - n));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields*)il2cpp_codegen_static_fields_for(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var))->___T_10;
		int32_t L_11 = V_2;
		uint32_t L_12 = V_4;
		int32_t L_13 = V_3;
		uint32_t L_14 = V_4;
		int32_t L_15 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)(L_13&((int32_t)31)))))|((int32_t)((uint32_t)L_14>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_15))&((int32_t)31))))))));
		// for (int i = 16; i < 64; ++i)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0064:
	{
		// for (int i = 16; i < 64; ++i)
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)64))))
		{
			goto IL_003b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest__ctor_m95C3E5DE913191266CB039DD72EBAB1B59C9263B (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] V = new uint[DIGEST_LENGTH / 4]; // in 32 bit ints (8 ints)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___V_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___V_6), (void*)L_0);
		// private uint[] inwords = new uint[BLOCK_SIZE];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___inwords_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inwords_7), (void*)L_1);
		// private uint[] W = new uint[68];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)68));
		__this->___W_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_9), (void*)L_2);
		// public SM3Digest()
		GeneralDigest__ctor_m2FA9104A9BF67F3D9F3E36FC2E59D27C2E2E9C22(__this, NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest__ctor_m4E66FC5BE8B0251C2C14D46021F8078AF86DE2E5 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, SM3Digest_t183E330F597B8D4496163054F79D647449092E00* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private uint[] V = new uint[DIGEST_LENGTH / 4]; // in 32 bit ints (8 ints)
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___V_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___V_6), (void*)L_0);
		// private uint[] inwords = new uint[BLOCK_SIZE];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___inwords_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inwords_7), (void*)L_1);
		// private uint[] W = new uint[68];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)68));
		__this->___W_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_9), (void*)L_2);
		// : base(t)
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_3 = ___t0;
		GeneralDigest__ctor_m5FEBCE63062F398FE39CE4B60A8205F328C7740C(__this, L_3, NULL);
		// CopyIn(t);
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_4 = ___t0;
		SM3Digest_CopyIn_m14D6D4C138914272C98DA0F6721B4ECF3C76C785(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::CopyIn(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_CopyIn_m14D6D4C138914272C98DA0F6721B4ECF3C76C785 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, SM3Digest_t183E330F597B8D4496163054F79D647449092E00* ___t0, const RuntimeMethod* method) 
{
	{
		// Array.Copy(t.V, 0, this.V, 0, this.V.Length);
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_0 = ___t0;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___V_6;
		NullCheck(L_3);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		// Array.Copy(t.inwords, 0, this.inwords, 0, this.inwords.Length);
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_4 = ___t0;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___inwords_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___inwords_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___inwords_7;
		NullCheck(L_7);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		// xOff = t.xOff;
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_8 = ___t0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___xOff_8;
		__this->___xOff_8 = L_9;
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SM3Digest_get_AlgorithmName_m82C7CCD21C0868E43D40668F4FFDA73C8C684861 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8433BD965D142199E7AB5E056E38005569163F7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "SM3"; }
		return _stringLiteral8433BD965D142199E7AB5E056E38005569163F7B;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SM3Digest_GetDigestSize_m03284EE2C744C6FA08FD7D09AB3A3AFE0117B433 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) 
{
	{
		// return DIGEST_LENGTH;
		return ((int32_t)32);
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SM3Digest_Copy_m73E2CBB322FD8E1866384096F25CC32670D4BD8C (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new SM3Digest(this);
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_0 = (SM3Digest_t183E330F597B8D4496163054F79D647449092E00*)il2cpp_codegen_object_new(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SM3Digest__ctor_m4E66FC5BE8B0251C2C14D46021F8078AF86DE2E5(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_Reset_m762A10F98D1A3673232B7043724EE1FBBFB44D92 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SM3Digest_t183E330F597B8D4496163054F79D647449092E00* V_0 = NULL;
	{
		// SM3Digest d = (SM3Digest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((SM3Digest_t183E330F597B8D4496163054F79D647449092E00*)CastclassClass((RuntimeObject*)L_0, SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var));
		// base.CopyIn(d);
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_1 = V_0;
		GeneralDigest_CopyIn_m4CFFD85FB94B33F6F9F8C0FBEC061A5AB4C02023(__this, L_1, NULL);
		// CopyIn(d);
		SM3Digest_t183E330F597B8D4496163054F79D647449092E00* L_2 = V_0;
		SM3Digest_CopyIn_m14D6D4C138914272C98DA0F6721B4ECF3C76C785(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_Reset_m2AD2371B69FB4AD5AF8FCE006337045B233582D7 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		GeneralDigest_Reset_mE400482488156A49D897AD38AADBBF510CA2B6E6(__this, NULL);
		// this.V[0] = 0x7380166F;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___V_6;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)1937774191));
		// this.V[1] = 0x4914B2B9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___V_6;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)1226093241));
		// this.V[2] = 0x172442D7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___V_6;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)388252375));
		// this.V[3] = 0xDA8A0600;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___V_6;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)-628488704));
		// this.V[4] = 0xA96F30BC;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___V_6;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)-1452330820));
		// this.V[5] = 0x163138AA;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___V_6;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)372324522));
		// this.V[6] = 0xE38DEE4D;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->___V_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)-477237683));
		// this.V[7] = 0xB0FB0E4E;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___V_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)-1325724082));
		// this.xOff = 0;
		__this->___xOff_8 = 0;
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SM3Digest_DoFinal_mE72F2DB33B235C46F6DB383A012718149842E8B6 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		GeneralDigest_Finish_m6BC974FD761998E6139ADD173CC60B9B47C88308(__this, NULL);
		// Pack.UInt32_To_BE(V, output, outOff);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt32_To_BE_m33B3851BD5D87C5BA78DB254C3C50E1F012275B6(L_0, L_1, L_2, NULL);
		// Reset();
		VirtualActionInvoker0::Invoke(13 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		// return DIGEST_LENGTH;
		return ((int32_t)32);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_ProcessWord_mFAB7C02FB504A9A3291D52FB61701B9A6DD2D37F (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// uint n = Pack.BE_To_UInt32(input, inOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m0C3CBB1B347B0305CA52FC38CAFF2108940C777F(L_0, L_1, NULL);
		V_0 = L_2;
		// this.inwords[this.xOff] = n;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___inwords_7;
		int32_t L_4 = __this->___xOff_8;
		uint32_t L_5 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint32_t)L_5);
		// ++this.xOff;
		int32_t L_6 = __this->___xOff_8;
		__this->___xOff_8 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// if (this.xOff >= 16)
		int32_t L_7 = __this->___xOff_8;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)16))))
		{
			goto IL_0034;
		}
	}
	{
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_ProcessLength_m0ADD09AC9E50443EE2223924B5C24858E337203A (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (this.xOff > (BLOCK_SIZE - 2))
		int32_t L_0 = __this->___xOff_8;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_004a;
		}
	}
	{
		// this.inwords[this.xOff] = 0; // fill with zero
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___inwords_7;
		int32_t L_2 = __this->___xOff_8;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)0);
		// ++this.xOff;
		int32_t L_3 = __this->___xOff_8;
		__this->___xOff_8 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// ProcessBlock();
		VirtualActionInvoker0::Invoke(16 /* System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
		goto IL_004a;
	}

IL_002e:
	{
		// this.inwords[this.xOff] = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___inwords_7;
		int32_t L_5 = __this->___xOff_8;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)0);
		// ++this.xOff;
		int32_t L_6 = __this->___xOff_8;
		__this->___xOff_8 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_004a:
	{
		// while (this.xOff < (BLOCK_SIZE - 2))
		int32_t L_7 = __this->___xOff_8;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)14))))
		{
			goto IL_002e;
		}
	}
	{
		// this.inwords[this.xOff++] = (uint)(bitLength >> 32);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___inwords_7;
		int32_t L_9 = __this->___xOff_8;
		V_0 = L_9;
		int32_t L_10 = V_0;
		__this->___xOff_8 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_0;
		int64_t L_12 = ___bitLength0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)((int64_t)(L_12>>((int32_t)32)))));
		// this.inwords[this.xOff++] = (uint)(bitLength);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->___inwords_7;
		int32_t L_14 = __this->___xOff_8;
		V_0 = L_14;
		int32_t L_15 = V_0;
		__this->___xOff_8 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_0;
		int64_t L_17 = ___bitLength0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)L_17));
		// }
		return;
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::P0(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_P0_m3ED0CE3CC270C80FF97249FE28EC89DC4374FBCC (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		// uint r9 = ((x << 9) | (x >> (32 - 9)));
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)9)))|((int32_t)((uint32_t)L_1>>((int32_t)23)))));
		// uint r17 = ((x << 17) | (x >> (32 - 17)));
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_2<<((int32_t)17)))|((int32_t)((uint32_t)L_3>>((int32_t)15)))));
		// return (x ^ r9 ^ r17);
		uint32_t L_4 = ___x0;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		return ((int32_t)(((int32_t)((int32_t)L_4^(int32_t)L_5))^(int32_t)L_6));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::P1(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_P1_mD7E95B28B01CC667D5875D646B500E22B78F2556 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		// uint r15 = ((x << 15) | (x >> (32 - 15)));
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___x0;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)15)))|((int32_t)((uint32_t)L_1>>((int32_t)17)))));
		// uint r23 = ((x << 23) | (x >> (32 - 23)));
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___x0;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_2<<((int32_t)23)))|((int32_t)((uint32_t)L_3>>((int32_t)9)))));
		// return (x ^ r15 ^ r23);
		uint32_t L_4 = ___x0;
		uint32_t L_5 = V_0;
		uint32_t L_6 = V_1;
		return ((int32_t)(((int32_t)((int32_t)L_4^(int32_t)L_5))^(int32_t)L_6));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::FF0(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_FF0_m2F39FA6C503504B51C3D938CFCAA86C93D790151 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x ^ y ^ z);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::FF1(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_FF1_m6E045BE1681982FC6805F5434122EADF36BDEAE6 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return ((x & y) | (x & z) | (y & z));
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___z2;
		uint32_t L_4 = ___y1;
		uint32_t L_5 = ___z2;
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)L_2&(int32_t)L_3))))|((int32_t)((int32_t)L_4&(int32_t)L_5))));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::GG0(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_GG0_m1AFF4B7191C91F75D5DDB148C7F859EA583219E6 (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return (x ^ y ^ z);
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
// System.UInt32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::GG1(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SM3Digest_GG1_mDE31DC82C3752CAC3B3D9A303E0B44DBD1A0A9EC (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, uint32_t ___x0, uint32_t ___y1, uint32_t ___z2, const RuntimeMethod* method) 
{
	{
		// return ((x & y) | ((~x) & z));
		uint32_t L_0 = ___x0;
		uint32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		uint32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)((~L_2))&(int32_t)L_3))));
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.SM3Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SM3Digest_ProcessBlock_m7D529DA29F915D4EAF988DAD579C95C75E94724F (SM3Digest_t183E330F597B8D4496163054F79D647449092E00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	int32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	{
		// for (int j = 0; j < 16; ++j)
		V_8 = 0;
		goto IL_001d;
	}

IL_0005:
	{
		// this.W[j] = this.inwords[j];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___W_9;
		int32_t L_1 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___inwords_7;
		int32_t L_3 = V_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		// for (int j = 0; j < 16; ++j)
		int32_t L_6 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// for (int j = 0; j < 16; ++j)
		int32_t L_7 = V_8;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)16))))
		{
			goto IL_0005;
		}
	}
	{
		// for (int j = 16; j < 68; ++j)
		V_9 = ((int32_t)16);
		goto IL_009d;
	}

IL_0029:
	{
		// uint wj3 = this.W[j - 3];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___W_9;
		int32_t L_9 = V_9;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 3));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_10 = L_11;
		// uint r15 = ((wj3 << 15) | (wj3 >> (32 - 15)));
		uint32_t L_12 = V_10;
		uint32_t L_13 = V_10;
		V_11 = ((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)15)))|((int32_t)((uint32_t)L_13>>((int32_t)17)))));
		// uint wj13 = this.W[j - 13];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = __this->___W_9;
		int32_t L_15 = V_9;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)13)));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_12 = L_17;
		// uint r7 = ((wj13 << 7) | (wj13 >> (32 - 7)));
		uint32_t L_18 = V_12;
		uint32_t L_19 = V_12;
		V_13 = ((int32_t)(((int32_t)((int32_t)L_18<<7))|((int32_t)((uint32_t)L_19>>((int32_t)25)))));
		// this.W[j] = P1(this.W[j - 16] ^ this.W[j - 9] ^ r15) ^ r7 ^ this.W[j - 6];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___W_9;
		int32_t L_21 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___W_9;
		int32_t L_23 = V_9;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)16)));
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = __this->___W_9;
		int32_t L_27 = V_9;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)9)));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint32_t L_30 = V_11;
		uint32_t L_31;
		L_31 = SM3Digest_P1_mD7E95B28B01CC667D5875D646B500E22B78F2556(__this, ((int32_t)(((int32_t)((int32_t)L_25^(int32_t)L_29))^(int32_t)L_30)), NULL);
		uint32_t L_32 = V_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->___W_9;
		int32_t L_34 = V_9;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 6));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint32_t)((int32_t)(((int32_t)((int32_t)L_31^(int32_t)L_32))^(int32_t)L_36)));
		// for (int j = 16; j < 68; ++j)
		int32_t L_37 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_009d:
	{
		// for (int j = 16; j < 68; ++j)
		int32_t L_38 = V_9;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)68))))
		{
			goto IL_0029;
		}
	}
	{
		// uint A = this.V[0];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___V_6;
		NullCheck(L_39);
		int32_t L_40 = 0;
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_0 = L_41;
		// uint B = this.V[1];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___V_6;
		NullCheck(L_42);
		int32_t L_43 = 1;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_1 = L_44;
		// uint C = this.V[2];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = __this->___V_6;
		NullCheck(L_45);
		int32_t L_46 = 2;
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_2 = L_47;
		// uint D = this.V[3];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___V_6;
		NullCheck(L_48);
		int32_t L_49 = 3;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_3 = L_50;
		// uint E = this.V[4];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = __this->___V_6;
		NullCheck(L_51);
		int32_t L_52 = 4;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = L_53;
		// uint F = this.V[5];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___V_6;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_5 = L_56;
		// uint G = this.V[6];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = __this->___V_6;
		NullCheck(L_57);
		int32_t L_58 = 6;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_6 = L_59;
		// uint H = this.V[7];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = __this->___V_6;
		NullCheck(L_60);
		int32_t L_61 = 7;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_7 = L_62;
		// for (int j = 0; j < 16; ++j)
		V_14 = 0;
		goto IL_019c;
	}

IL_00f7:
	{
		// uint a12 = ((A << 12) | (A >> (32 - 12)));
		uint32_t L_63 = V_0;
		uint32_t L_64 = V_0;
		V_15 = ((int32_t)(((int32_t)((int32_t)L_63<<((int32_t)12)))|((int32_t)((uint32_t)L_64>>((int32_t)20)))));
		// uint s1_ = a12 + E + T[j];
		uint32_t L_65 = V_15;
		uint32_t L_66 = V_4;
		il2cpp_codegen_runtime_class_init_inline(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ((SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields*)il2cpp_codegen_static_fields_for(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var))->___T_10;
		int32_t L_68 = V_14;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), (int32_t)L_70));
		// uint SS1 = ((s1_ << 7) | (s1_ >> (32 - 7)));
		uint32_t L_71 = V_16;
		uint32_t L_72 = V_16;
		V_17 = ((int32_t)(((int32_t)((int32_t)L_71<<7))|((int32_t)((uint32_t)L_72>>((int32_t)25)))));
		// uint SS2 = SS1 ^ a12;
		uint32_t L_73 = V_17;
		uint32_t L_74 = V_15;
		V_18 = ((int32_t)((int32_t)L_73^(int32_t)L_74));
		// uint Wj = W[j];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = __this->___W_9;
		int32_t L_76 = V_14;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_19 = L_78;
		// uint W1j = Wj ^ W[j + 4];
		uint32_t L_79 = V_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = __this->___W_9;
		int32_t L_81 = V_14;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_20 = ((int32_t)((int32_t)L_79^(int32_t)L_83));
		// uint TT1 = FF0(A, B, C) + D + SS2 + W1j;
		uint32_t L_84 = V_0;
		uint32_t L_85 = V_1;
		uint32_t L_86 = V_2;
		uint32_t L_87;
		L_87 = SM3Digest_FF0_m2F39FA6C503504B51C3D938CFCAA86C93D790151(__this, L_84, L_85, L_86, NULL);
		uint32_t L_88 = V_3;
		uint32_t L_89 = V_18;
		uint32_t L_90 = V_20;
		// uint TT2 = GG0(E, F, G) + H + SS1 + Wj;
		uint32_t L_91 = V_4;
		uint32_t L_92 = V_5;
		uint32_t L_93 = V_6;
		uint32_t L_94;
		L_94 = SM3Digest_GG0_m1AFF4B7191C91F75D5DDB148C7F859EA583219E6(__this, L_91, L_92, L_93, NULL);
		uint32_t L_95 = V_7;
		uint32_t L_96 = V_17;
		uint32_t L_97 = V_19;
		V_21 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)L_95)), (int32_t)L_96)), (int32_t)L_97));
		// D = C;
		uint32_t L_98 = V_2;
		V_3 = L_98;
		// C = ((B << 9) | (B >> (32 - 9)));
		uint32_t L_99 = V_1;
		uint32_t L_100 = V_1;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_99<<((int32_t)9)))|((int32_t)((uint32_t)L_100>>((int32_t)23)))));
		// B = A;
		uint32_t L_101 = V_0;
		V_1 = L_101;
		// A = TT1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88)), (int32_t)L_89)), (int32_t)L_90));
		// H = G;
		uint32_t L_102 = V_6;
		V_7 = L_102;
		// G = ((F << 19) | (F >> (32 - 19)));
		uint32_t L_103 = V_5;
		uint32_t L_104 = V_5;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_103<<((int32_t)19)))|((int32_t)((uint32_t)L_104>>((int32_t)13)))));
		// F = E;
		uint32_t L_105 = V_4;
		V_5 = L_105;
		// E = P0(TT2);
		uint32_t L_106 = V_21;
		uint32_t L_107;
		L_107 = SM3Digest_P0_m3ED0CE3CC270C80FF97249FE28EC89DC4374FBCC(__this, L_106, NULL);
		V_4 = L_107;
		// for (int j = 0; j < 16; ++j)
		int32_t L_108 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_019c:
	{
		// for (int j = 0; j < 16; ++j)
		int32_t L_109 = V_14;
		if ((((int32_t)L_109) < ((int32_t)((int32_t)16))))
		{
			goto IL_00f7;
		}
	}
	{
		// for (int j = 16; j < 64; ++j)
		V_22 = ((int32_t)16);
		goto IL_0253;
	}

IL_01ae:
	{
		// uint a12 = ((A << 12) | (A >> (32 - 12)));
		uint32_t L_110 = V_0;
		uint32_t L_111 = V_0;
		V_23 = ((int32_t)(((int32_t)((int32_t)L_110<<((int32_t)12)))|((int32_t)((uint32_t)L_111>>((int32_t)20)))));
		// uint s1_ = a12 + E + T[j];
		uint32_t L_112 = V_23;
		uint32_t L_113 = V_4;
		il2cpp_codegen_runtime_class_init_inline(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = ((SM3Digest_t183E330F597B8D4496163054F79D647449092E00_StaticFields*)il2cpp_codegen_static_fields_for(SM3Digest_t183E330F597B8D4496163054F79D647449092E00_il2cpp_TypeInfo_var))->___T_10;
		int32_t L_115 = V_22;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		uint32_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_24 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)L_113)), (int32_t)L_117));
		// uint SS1 = ((s1_ << 7) | (s1_ >> (32 - 7)));
		uint32_t L_118 = V_24;
		uint32_t L_119 = V_24;
		V_25 = ((int32_t)(((int32_t)((int32_t)L_118<<7))|((int32_t)((uint32_t)L_119>>((int32_t)25)))));
		// uint SS2 = SS1 ^ a12;
		uint32_t L_120 = V_25;
		uint32_t L_121 = V_23;
		V_26 = ((int32_t)((int32_t)L_120^(int32_t)L_121));
		// uint Wj = W[j];
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = __this->___W_9;
		int32_t L_123 = V_22;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		uint32_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_27 = L_125;
		// uint W1j = Wj ^ W[j + 4];
		uint32_t L_126 = V_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = __this->___W_9;
		int32_t L_128 = V_22;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_add(L_128, 4));
		uint32_t L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		V_28 = ((int32_t)((int32_t)L_126^(int32_t)L_130));
		// uint TT1 = FF1(A, B, C) + D + SS2 + W1j;
		uint32_t L_131 = V_0;
		uint32_t L_132 = V_1;
		uint32_t L_133 = V_2;
		uint32_t L_134;
		L_134 = SM3Digest_FF1_m6E045BE1681982FC6805F5434122EADF36BDEAE6(__this, L_131, L_132, L_133, NULL);
		uint32_t L_135 = V_3;
		uint32_t L_136 = V_26;
		uint32_t L_137 = V_28;
		// uint TT2 = GG1(E, F, G) + H + SS1 + Wj;
		uint32_t L_138 = V_4;
		uint32_t L_139 = V_5;
		uint32_t L_140 = V_6;
		uint32_t L_141;
		L_141 = SM3Digest_GG1_mDE31DC82C3752CAC3B3D9A303E0B44DBD1A0A9EC(__this, L_138, L_139, L_140, NULL);
		uint32_t L_142 = V_7;
		uint32_t L_143 = V_25;
		uint32_t L_144 = V_27;
		V_29 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)L_142)), (int32_t)L_143)), (int32_t)L_144));
		// D = C;
		uint32_t L_145 = V_2;
		V_3 = L_145;
		// C = ((B << 9) | (B >> (32 - 9)));
		uint32_t L_146 = V_1;
		uint32_t L_147 = V_1;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_146<<((int32_t)9)))|((int32_t)((uint32_t)L_147>>((int32_t)23)))));
		// B = A;
		uint32_t L_148 = V_0;
		V_1 = L_148;
		// A = TT1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)L_135)), (int32_t)L_136)), (int32_t)L_137));
		// H = G;
		uint32_t L_149 = V_6;
		V_7 = L_149;
		// G = ((F << 19) | (F >> (32 - 19)));
		uint32_t L_150 = V_5;
		uint32_t L_151 = V_5;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_150<<((int32_t)19)))|((int32_t)((uint32_t)L_151>>((int32_t)13)))));
		// F = E;
		uint32_t L_152 = V_4;
		V_5 = L_152;
		// E = P0(TT2);
		uint32_t L_153 = V_29;
		uint32_t L_154;
		L_154 = SM3Digest_P0_m3ED0CE3CC270C80FF97249FE28EC89DC4374FBCC(__this, L_153, NULL);
		V_4 = L_154;
		// for (int j = 16; j < 64; ++j)
		int32_t L_155 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_155, 1));
	}

IL_0253:
	{
		// for (int j = 16; j < 64; ++j)
		int32_t L_156 = V_22;
		if ((((int32_t)L_156) < ((int32_t)((int32_t)64))))
		{
			goto IL_01ae;
		}
	}
	{
		// this.V[0] ^= A;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_157 = __this->___V_6;
		NullCheck(L_157);
		uint32_t* L_158 = ((L_157)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_159 = *((uint32_t*)L_158);
		uint32_t L_160 = V_0;
		*((int32_t*)L_158) = (int32_t)((int32_t)(L_159^(int32_t)L_160));
		// this.V[1] ^= B;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = __this->___V_6;
		NullCheck(L_161);
		uint32_t* L_162 = ((L_161)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_163 = *((uint32_t*)L_162);
		uint32_t L_164 = V_1;
		*((int32_t*)L_162) = (int32_t)((int32_t)(L_163^(int32_t)L_164));
		// this.V[2] ^= C;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = __this->___V_6;
		NullCheck(L_165);
		uint32_t* L_166 = ((L_165)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int32_t L_167 = *((uint32_t*)L_166);
		uint32_t L_168 = V_2;
		*((int32_t*)L_166) = (int32_t)((int32_t)(L_167^(int32_t)L_168));
		// this.V[3] ^= D;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = __this->___V_6;
		NullCheck(L_169);
		uint32_t* L_170 = ((L_169)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int32_t L_171 = *((uint32_t*)L_170);
		uint32_t L_172 = V_3;
		*((int32_t*)L_170) = (int32_t)((int32_t)(L_171^(int32_t)L_172));
		// this.V[4] ^= E;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_173 = __this->___V_6;
		NullCheck(L_173);
		uint32_t* L_174 = ((L_173)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)));
		int32_t L_175 = *((uint32_t*)L_174);
		uint32_t L_176 = V_4;
		*((int32_t*)L_174) = (int32_t)((int32_t)(L_175^(int32_t)L_176));
		// this.V[5] ^= F;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = __this->___V_6;
		NullCheck(L_177);
		uint32_t* L_178 = ((L_177)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)));
		int32_t L_179 = *((uint32_t*)L_178);
		uint32_t L_180 = V_5;
		*((int32_t*)L_178) = (int32_t)((int32_t)(L_179^(int32_t)L_180));
		// this.V[6] ^= G;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = __this->___V_6;
		NullCheck(L_181);
		uint32_t* L_182 = ((L_181)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)));
		int32_t L_183 = *((uint32_t*)L_182);
		uint32_t L_184 = V_6;
		*((int32_t*)L_182) = (int32_t)((int32_t)(L_183^(int32_t)L_184));
		// this.V[7] ^= H;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = __this->___V_6;
		NullCheck(L_185);
		uint32_t* L_186 = ((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_187 = *((uint32_t*)L_186);
		uint32_t L_188 = V_7;
		*((int32_t*)L_186) = (int32_t)((int32_t)(L_187^(int32_t)L_188));
		// this.xOff = 0;
		__this->___xOff_8 = 0;
		// }
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
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest__ctor_m95892E84EFD8F52C0FCF6EEC9C14E00986CD4BA1 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[]  Buffer = new byte[8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Buffer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffer_10), (void*)L_0);
		// private long[]  x = new long[8];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___x_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_12), (void*)L_1);
		// public TigerDigest()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Reset();
		TigerDigest_Reset_m5684D97AA80B24CC9DC94AE01879233291FEDF9B(__this, NULL);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::.ctor(BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest__ctor_m17762CE9CA3205D9D8D955C08412640F516ECF60 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private byte[]  Buffer = new byte[8];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Buffer_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffer_10), (void*)L_0);
		// private long[]  x = new long[8];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___x_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_12), (void*)L_1);
		// public TigerDigest(TigerDigest t)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Reset(t);
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_2 = ___t0;
		TigerDigest_Reset_mB9BAEF7FB70C722322F5B4DD5C452B12D705646B(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TigerDigest_get_AlgorithmName_m01954426F6AC066CFA4C47BAB3AF0E62D10F11CF (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE71C5444F9327DDA2F1D69B7510ABF59B80672F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Tiger"; }
		return _stringLiteralFE71C5444F9327DDA2F1D69B7510ABF59B80672F;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TigerDigest_GetDigestSize_mC57B9683870F64CB38FEDDEB7B82667DDA249BD1 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	{
		// return DigestLength;
		return ((int32_t)24);
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TigerDigest_GetByteLength_m31206702328DDB5A67EE5B346676D091A304E763 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	{
		// return MyByteLength;
		return ((int32_t)64);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_ProcessWord_m53341AE2CE64ED10B858CE10E9A39D62D6B56034 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, int32_t ___off1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// x[xOff++] =   ((long)(b[off + 7] & 0xff) << 56)
		//             | ((long)(b[off + 6] & 0xff) << 48)
		//             | ((long)(b[off + 5] & 0xff) << 40)
		//             | ((long)(b[off + 4] & 0xff) << 32)
		//             | ((long)(b[off + 3] & 0xff) << 24)
		//             | ((long)(b[off + 2] & 0xff) << 16)
		//             | ((long)(b[off + 1] & 0xff) << 8)
		//             | ((uint)(b[off + 0] & 0xff));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___x_12;
		int32_t L_1 = __this->___xOff_13;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___xOff_13 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___b0;
		int32_t L_5 = ___off1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 7));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___b0;
		int32_t L_9 = ___off1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 6));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___b0;
		int32_t L_13 = ___off1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 5));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___b0;
		int32_t L_17 = ___off1;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___b0;
		int32_t L_21 = ___off1;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 3));
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___b0;
		int32_t L_25 = ___off1;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 2));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___b0;
		int32_t L_29 = ___off1;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___b0;
		int32_t L_33 = ___off1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((int32_t)((int32_t)L_7&((int32_t)255))))<<((int32_t)56)))|((int64_t)(((int64_t)((int32_t)((int32_t)L_11&((int32_t)255))))<<((int32_t)48)))))|((int64_t)(((int64_t)((int32_t)((int32_t)L_15&((int32_t)255))))<<((int32_t)40)))))|((int64_t)(((int64_t)((int32_t)((int32_t)L_19&((int32_t)255))))<<((int32_t)32)))))|((int64_t)(((int64_t)((int32_t)((int32_t)L_23&((int32_t)255))))<<((int32_t)24)))))|((int64_t)(((int64_t)((int32_t)((int32_t)L_27&((int32_t)255))))<<((int32_t)16)))))|((int64_t)(((int64_t)((int32_t)((int32_t)L_31&((int32_t)255))))<<8))))|((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35&((int32_t)255))))))));
		// if (xOff == x.Length)
		int32_t L_36 = __this->___xOff_13;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_37 = __this->___x_12;
		NullCheck(L_37);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_00a7;
		}
	}
	{
		// ProcessBlock();
		TigerDigest_ProcessBlock_mB70BDAD780BD9E936FA0361D240392B757281492(__this, NULL);
	}

IL_00a7:
	{
		// bOff = 0;
		__this->___bOff_11 = 0;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Update_mD242754049FB9F36BC3FE74DDD537D51C7D153FF (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Buffer[bOff++] = input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___Buffer_10;
		int32_t L_1 = __this->___bOff_11;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___bOff_11 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		// if (bOff == Buffer.Length)
		int32_t L_5 = __this->___bOff_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___Buffer_10;
		NullCheck(L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		// ProcessWord(Buffer, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___Buffer_10;
		TigerDigest_ProcessWord_m53341AE2CE64ED10B858CE10E9A39D62D6B56034(__this, L_7, 0, NULL);
	}

IL_0036:
	{
		// byteCount++;
		int64_t L_8 = __this->___byteCount_9;
		__this->___byteCount_9 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)1)));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_BlockUpdate_m91E84E5980932C99CDAB7D8B9F27F8FF9E5BB50A (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		// Update(input[inOff]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		TigerDigest_Update_mD242754049FB9F36BC3FE74DDD537D51C7D153FF(__this, L_3, NULL);
		// inOff++;
		int32_t L_4 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// length--;
		int32_t L_5 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0015:
	{
		// while ((bOff != 0) && (length > 0))
		int32_t L_6 = __this->___bOff_11;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7 = ___length2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0044;
	}

IL_0023:
	{
		// ProcessWord(input, inOff);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		TigerDigest_ProcessWord_m53341AE2CE64ED10B858CE10E9A39D62D6B56034(__this, L_8, L_9, NULL);
		// inOff += 8;
		int32_t L_10 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_10, 8));
		// length -= 8;
		int32_t L_11 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_11, 8));
		// byteCount += 8;
		int64_t L_12 = __this->___byteCount_9;
		__this->___byteCount_9 = ((int64_t)il2cpp_codegen_add(L_12, ((int64_t)8)));
	}

IL_0044:
	{
		// while (length > 8)
		int32_t L_13 = ___length2;
		if ((((int32_t)L_13) > ((int32_t)8)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_005d;
	}

IL_004a:
	{
		// Update(input[inOff]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___input0;
		int32_t L_15 = ___inOff1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		TigerDigest_Update_mD242754049FB9F36BC3FE74DDD537D51C7D153FF(__this, L_17, NULL);
		// inOff++;
		int32_t L_18 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// length--;
		int32_t L_19 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_005d:
	{
		// while (length > 0)
		int32_t L_20 = ___length2;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundABC(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___x0, int64_t ___mul1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// c ^= x ;
		int64_t L_0 = __this->___c_8;
		int64_t L_1 = ___x0;
		__this->___c_8 = ((int64_t)(L_0^L_1));
		// a -= t1[(int)c & 0xff] ^ t2[(int)(c >> 16) & 0xff]
		//         ^ t3[(int)(c >> 32) & 0xff] ^ t4[(int)(c >> 48) & 0xff];
		int64_t L_2 = __this->___a_6;
		il2cpp_codegen_runtime_class_init_inline(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1;
		int64_t L_4 = __this->___c_8;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)(((int32_t)L_4)&((int32_t)255)));
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2;
		int64_t L_8 = __this->___c_8;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)(((int32_t)((int64_t)(L_8>>((int32_t)16))))&((int32_t)255)));
		int64_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3;
		int64_t L_12 = __this->___c_8;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(((int32_t)((int64_t)(L_12>>((int32_t)32))))&((int32_t)255)));
		int64_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4;
		int64_t L_16 = __this->___c_8;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)(((int32_t)((int64_t)(L_16>>((int32_t)48))))&((int32_t)255)));
		int64_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___a_6 = ((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)(((int64_t)(((int64_t)(L_6^L_10))^L_14))^L_18))));
		// b += t4[(int)(c >> 8) & 0xff] ^ t3[(int)(c >> 24) & 0xff]
		//         ^ t2[(int)(c >> 40) & 0xff] ^ t1[(int)(c >> 56) & 0xff];
		int64_t L_19 = __this->___b_7;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_20 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4;
		int64_t L_21 = __this->___c_8;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(((int32_t)((int64_t)(L_21>>8)))&((int32_t)255)));
		int64_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3;
		int64_t L_25 = __this->___c_8;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)(((int32_t)((int64_t)(L_25>>((int32_t)24))))&((int32_t)255)));
		int64_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_28 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2;
		int64_t L_29 = __this->___c_8;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)(((int32_t)((int64_t)(L_29>>((int32_t)40))))&((int32_t)255)));
		int64_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_32 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1;
		int64_t L_33 = __this->___c_8;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(((int32_t)((int64_t)(L_33>>((int32_t)56))))&((int32_t)255)));
		int64_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		__this->___b_7 = ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)(((int64_t)(((int64_t)(L_23^L_27))^L_31))^L_35))));
		// b *= mul;
		int64_t L_36 = __this->___b_7;
		int64_t L_37 = ___mul1;
		__this->___b_7 = ((int64_t)il2cpp_codegen_multiply(L_36, L_37));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundBCA(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___x0, int64_t ___mul1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// a ^= x ;
		int64_t L_0 = __this->___a_6;
		int64_t L_1 = ___x0;
		__this->___a_6 = ((int64_t)(L_0^L_1));
		// b -= t1[(int)a & 0xff] ^ t2[(int)(a >> 16) & 0xff]
		//         ^ t3[(int)(a >> 32) & 0xff] ^ t4[(int)(a >> 48) & 0xff];
		int64_t L_2 = __this->___b_7;
		il2cpp_codegen_runtime_class_init_inline(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1;
		int64_t L_4 = __this->___a_6;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)(((int32_t)L_4)&((int32_t)255)));
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2;
		int64_t L_8 = __this->___a_6;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)(((int32_t)((int64_t)(L_8>>((int32_t)16))))&((int32_t)255)));
		int64_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3;
		int64_t L_12 = __this->___a_6;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(((int32_t)((int64_t)(L_12>>((int32_t)32))))&((int32_t)255)));
		int64_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4;
		int64_t L_16 = __this->___a_6;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)(((int32_t)((int64_t)(L_16>>((int32_t)48))))&((int32_t)255)));
		int64_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___b_7 = ((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)(((int64_t)(((int64_t)(L_6^L_10))^L_14))^L_18))));
		// c += t4[(int)(a >> 8) & 0xff] ^ t3[(int)(a >> 24) & 0xff]
		//         ^ t2[(int)(a >> 40) & 0xff] ^ t1[(int)(a >> 56) & 0xff];
		int64_t L_19 = __this->___c_8;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_20 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4;
		int64_t L_21 = __this->___a_6;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(((int32_t)((int64_t)(L_21>>8)))&((int32_t)255)));
		int64_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3;
		int64_t L_25 = __this->___a_6;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)(((int32_t)((int64_t)(L_25>>((int32_t)24))))&((int32_t)255)));
		int64_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_28 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2;
		int64_t L_29 = __this->___a_6;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)(((int32_t)((int64_t)(L_29>>((int32_t)40))))&((int32_t)255)));
		int64_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_32 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1;
		int64_t L_33 = __this->___a_6;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(((int32_t)((int64_t)(L_33>>((int32_t)56))))&((int32_t)255)));
		int64_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		__this->___c_8 = ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)(((int64_t)(((int64_t)(L_23^L_27))^L_31))^L_35))));
		// c *= mul;
		int64_t L_36 = __this->___c_8;
		int64_t L_37 = ___mul1;
		__this->___c_8 = ((int64_t)il2cpp_codegen_multiply(L_36, L_37));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::RoundCAB(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___x0, int64_t ___mul1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// b ^= x ;
		int64_t L_0 = __this->___b_7;
		int64_t L_1 = ___x0;
		__this->___b_7 = ((int64_t)(L_0^L_1));
		// c -= t1[(int)b & 0xff] ^ t2[(int)(b >> 16) & 0xff]
		//         ^ t3[(int)(b >> 32) & 0xff] ^ t4[(int)(b >> 48) & 0xff];
		int64_t L_2 = __this->___c_8;
		il2cpp_codegen_runtime_class_init_inline(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1;
		int64_t L_4 = __this->___b_7;
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)(((int32_t)L_4)&((int32_t)255)));
		int64_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2;
		int64_t L_8 = __this->___b_7;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)(((int32_t)((int64_t)(L_8>>((int32_t)16))))&((int32_t)255)));
		int64_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3;
		int64_t L_12 = __this->___b_7;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(((int32_t)((int64_t)(L_12>>((int32_t)32))))&((int32_t)255)));
		int64_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4;
		int64_t L_16 = __this->___b_7;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)(((int32_t)((int64_t)(L_16>>((int32_t)48))))&((int32_t)255)));
		int64_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___c_8 = ((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)(((int64_t)(((int64_t)(L_6^L_10))^L_14))^L_18))));
		// a += t4[(int)(b >> 8) & 0xff] ^ t3[(int)(b >> 24) & 0xff]
		//         ^ t2[(int)(b >> 40) & 0xff] ^ t1[(int)(b >> 56) & 0xff];
		int64_t L_19 = __this->___a_6;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_20 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4;
		int64_t L_21 = __this->___b_7;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)(((int32_t)((int64_t)(L_21>>8)))&((int32_t)255)));
		int64_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3;
		int64_t L_25 = __this->___b_7;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)(((int32_t)((int64_t)(L_25>>((int32_t)24))))&((int32_t)255)));
		int64_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_28 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2;
		int64_t L_29 = __this->___b_7;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)(((int32_t)((int64_t)(L_29>>((int32_t)40))))&((int32_t)255)));
		int64_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_32 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1;
		int64_t L_33 = __this->___b_7;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(((int32_t)((int64_t)(L_33>>((int32_t)56))))&((int32_t)255)));
		int64_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		__this->___a_6 = ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)(((int64_t)(((int64_t)(L_23^L_27))^L_31))^L_35))));
		// a *= mul;
		int64_t L_36 = __this->___a_6;
		int64_t L_37 = ___mul1;
		__this->___a_6 = ((int64_t)il2cpp_codegen_multiply(L_36, L_37));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::KeySchedule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_KeySchedule_m72D423A4DC706119D8AB86619721B783548B88A4 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	{
		// x[0] -= x[7] ^ unchecked ((long) 0xA5A5A5A5A5A5A5A5L);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___x_12;
		NullCheck(L_0);
		int64_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_2 = *((int64_t*)L_1);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->___x_12;
		NullCheck(L_3);
		int32_t L_4 = 7;
		int64_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*((int64_t*)L_1) = (int64_t)((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)(L_5^((int64_t)-6510615555426900571LL)))));
		// x[1] ^= x[0];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->___x_12;
		NullCheck(L_6);
		int64_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_8 = *((int64_t*)L_7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->___x_12;
		NullCheck(L_9);
		int32_t L_10 = 0;
		int64_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int64_t*)L_7) = (int64_t)((int64_t)(L_8^L_11));
		// x[2] += x[1];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = __this->___x_12;
		NullCheck(L_12);
		int64_t* L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int64_t L_14 = *((int64_t*)L_13);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = __this->___x_12;
		NullCheck(L_15);
		int32_t L_16 = 1;
		int64_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int64_t*)L_13) = (int64_t)((int64_t)il2cpp_codegen_add(L_14, L_17));
		// x[3] -= x[2] ^ ((~x[1]) << 19);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = __this->___x_12;
		NullCheck(L_18);
		int64_t* L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int64_t L_20 = *((int64_t*)L_19);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_21 = __this->___x_12;
		NullCheck(L_21);
		int32_t L_22 = 2;
		int64_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = __this->___x_12;
		NullCheck(L_24);
		int32_t L_25 = 1;
		int64_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		*((int64_t*)L_19) = (int64_t)((int64_t)il2cpp_codegen_subtract(L_20, ((int64_t)(L_23^((int64_t)(((~L_26))<<((int32_t)19)))))));
		// x[4] ^= x[3];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = __this->___x_12;
		NullCheck(L_27);
		int64_t* L_28 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)));
		int64_t L_29 = *((int64_t*)L_28);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = __this->___x_12;
		NullCheck(L_30);
		int32_t L_31 = 3;
		int64_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		*((int64_t*)L_28) = (int64_t)((int64_t)(L_29^L_32));
		// x[5] += x[4];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_33 = __this->___x_12;
		NullCheck(L_33);
		int64_t* L_34 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)));
		int64_t L_35 = *((int64_t*)L_34);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_36 = __this->___x_12;
		NullCheck(L_36);
		int32_t L_37 = 4;
		int64_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		*((int64_t*)L_34) = (int64_t)((int64_t)il2cpp_codegen_add(L_35, L_38));
		// x[6] -= x[5] ^ (long) ((ulong) (~x[4]) >> 23);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_39 = __this->___x_12;
		NullCheck(L_39);
		int64_t* L_40 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)));
		int64_t L_41 = *((int64_t*)L_40);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = __this->___x_12;
		NullCheck(L_42);
		int32_t L_43 = 5;
		int64_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_45 = __this->___x_12;
		NullCheck(L_45);
		int32_t L_46 = 4;
		int64_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		*((int64_t*)L_40) = (int64_t)((int64_t)il2cpp_codegen_subtract(L_41, ((int64_t)(L_44^((int64_t)((uint64_t)((~L_47))>>((int32_t)23)))))));
		// x[7] ^= x[6];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_48 = __this->___x_12;
		NullCheck(L_48);
		int64_t* L_49 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int64_t L_50 = *((int64_t*)L_49);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51 = __this->___x_12;
		NullCheck(L_51);
		int32_t L_52 = 6;
		int64_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		*((int64_t*)L_49) = (int64_t)((int64_t)(L_50^L_53));
		// x[0] += x[7];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_54 = __this->___x_12;
		NullCheck(L_54);
		int64_t* L_55 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_56 = *((int64_t*)L_55);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_57 = __this->___x_12;
		NullCheck(L_57);
		int32_t L_58 = 7;
		int64_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		*((int64_t*)L_55) = (int64_t)((int64_t)il2cpp_codegen_add(L_56, L_59));
		// x[1] -= x[0] ^ ((~x[7]) << 19);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_60 = __this->___x_12;
		NullCheck(L_60);
		int64_t* L_61 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_62 = *((int64_t*)L_61);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_63 = __this->___x_12;
		NullCheck(L_63);
		int32_t L_64 = 0;
		int64_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_66 = __this->___x_12;
		NullCheck(L_66);
		int32_t L_67 = 7;
		int64_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		*((int64_t*)L_61) = (int64_t)((int64_t)il2cpp_codegen_subtract(L_62, ((int64_t)(L_65^((int64_t)(((~L_68))<<((int32_t)19)))))));
		// x[2] ^= x[1];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_69 = __this->___x_12;
		NullCheck(L_69);
		int64_t* L_70 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int64_t L_71 = *((int64_t*)L_70);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = __this->___x_12;
		NullCheck(L_72);
		int32_t L_73 = 1;
		int64_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		*((int64_t*)L_70) = (int64_t)((int64_t)(L_71^L_74));
		// x[3] += x[2];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_75 = __this->___x_12;
		NullCheck(L_75);
		int64_t* L_76 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int64_t L_77 = *((int64_t*)L_76);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_78 = __this->___x_12;
		NullCheck(L_78);
		int32_t L_79 = 2;
		int64_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		*((int64_t*)L_76) = (int64_t)((int64_t)il2cpp_codegen_add(L_77, L_80));
		// x[4] -= x[3] ^ (long) ((ulong) (~x[2]) >> 23);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_81 = __this->___x_12;
		NullCheck(L_81);
		int64_t* L_82 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)));
		int64_t L_83 = *((int64_t*)L_82);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_84 = __this->___x_12;
		NullCheck(L_84);
		int32_t L_85 = 3;
		int64_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_87 = __this->___x_12;
		NullCheck(L_87);
		int32_t L_88 = 2;
		int64_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		*((int64_t*)L_82) = (int64_t)((int64_t)il2cpp_codegen_subtract(L_83, ((int64_t)(L_86^((int64_t)((uint64_t)((~L_89))>>((int32_t)23)))))));
		// x[5] ^= x[4];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_90 = __this->___x_12;
		NullCheck(L_90);
		int64_t* L_91 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)));
		int64_t L_92 = *((int64_t*)L_91);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_93 = __this->___x_12;
		NullCheck(L_93);
		int32_t L_94 = 4;
		int64_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		*((int64_t*)L_91) = (int64_t)((int64_t)(L_92^L_95));
		// x[6] += x[5];
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_96 = __this->___x_12;
		NullCheck(L_96);
		int64_t* L_97 = ((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)));
		int64_t L_98 = *((int64_t*)L_97);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_99 = __this->___x_12;
		NullCheck(L_99);
		int32_t L_100 = 5;
		int64_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		*((int64_t*)L_97) = (int64_t)((int64_t)il2cpp_codegen_add(L_98, L_101));
		// x[7] -= x[6] ^ 0x0123456789ABCDEFL;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_102 = __this->___x_12;
		NullCheck(L_102);
		int64_t* L_103 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int64_t L_104 = *((int64_t*)L_103);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_105 = __this->___x_12;
		NullCheck(L_105);
		int32_t L_106 = 6;
		int64_t L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		*((int64_t*)L_103) = (int64_t)((int64_t)il2cpp_codegen_subtract(L_104, ((int64_t)(L_107^((int64_t)81985529216486895LL)))));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_ProcessBlock_mB70BDAD780BD9E936FA0361D240392B757281492 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// long aa = a;
		int64_t L_0 = __this->___a_6;
		V_0 = L_0;
		// long bb = b;
		int64_t L_1 = __this->___b_7;
		V_1 = L_1;
		// long cc = c;
		int64_t L_2 = __this->___c_8;
		V_2 = L_2;
		// RoundABC(x[0], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = __this->___x_12;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int64_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_5, ((int64_t)5), NULL);
		// RoundBCA(x[1], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = __this->___x_12;
		NullCheck(L_6);
		int32_t L_7 = 1;
		int64_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_8, ((int64_t)5), NULL);
		// RoundCAB(x[2], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->___x_12;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_11, ((int64_t)5), NULL);
		// RoundABC(x[3], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_12 = __this->___x_12;
		NullCheck(L_12);
		int32_t L_13 = 3;
		int64_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_14, ((int64_t)5), NULL);
		// RoundBCA(x[4], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_15 = __this->___x_12;
		NullCheck(L_15);
		int32_t L_16 = 4;
		int64_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_17, ((int64_t)5), NULL);
		// RoundCAB(x[5], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_18 = __this->___x_12;
		NullCheck(L_18);
		int32_t L_19 = 5;
		int64_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_20, ((int64_t)5), NULL);
		// RoundABC(x[6], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_21 = __this->___x_12;
		NullCheck(L_21);
		int32_t L_22 = 6;
		int64_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_23, ((int64_t)5), NULL);
		// RoundBCA(x[7], 5);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_24 = __this->___x_12;
		NullCheck(L_24);
		int32_t L_25 = 7;
		int64_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_26, ((int64_t)5), NULL);
		// KeySchedule();
		TigerDigest_KeySchedule_m72D423A4DC706119D8AB86619721B783548B88A4(__this, NULL);
		// RoundCAB(x[0], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_27 = __this->___x_12;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int64_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_29, ((int64_t)7), NULL);
		// RoundABC(x[1], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_30 = __this->___x_12;
		NullCheck(L_30);
		int32_t L_31 = 1;
		int64_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_32, ((int64_t)7), NULL);
		// RoundBCA(x[2], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_33 = __this->___x_12;
		NullCheck(L_33);
		int32_t L_34 = 2;
		int64_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_35, ((int64_t)7), NULL);
		// RoundCAB(x[3], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_36 = __this->___x_12;
		NullCheck(L_36);
		int32_t L_37 = 3;
		int64_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_38, ((int64_t)7), NULL);
		// RoundABC(x[4], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_39 = __this->___x_12;
		NullCheck(L_39);
		int32_t L_40 = 4;
		int64_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_41, ((int64_t)7), NULL);
		// RoundBCA(x[5], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_42 = __this->___x_12;
		NullCheck(L_42);
		int32_t L_43 = 5;
		int64_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_44, ((int64_t)7), NULL);
		// RoundCAB(x[6], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_45 = __this->___x_12;
		NullCheck(L_45);
		int32_t L_46 = 6;
		int64_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_47, ((int64_t)7), NULL);
		// RoundABC(x[7], 7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_48 = __this->___x_12;
		NullCheck(L_48);
		int32_t L_49 = 7;
		int64_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_50, ((int64_t)7), NULL);
		// KeySchedule();
		TigerDigest_KeySchedule_m72D423A4DC706119D8AB86619721B783548B88A4(__this, NULL);
		// RoundBCA(x[0], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51 = __this->___x_12;
		NullCheck(L_51);
		int32_t L_52 = 0;
		int64_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_53, ((int64_t)((int32_t)9)), NULL);
		// RoundCAB(x[1], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_54 = __this->___x_12;
		NullCheck(L_54);
		int32_t L_55 = 1;
		int64_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_56, ((int64_t)((int32_t)9)), NULL);
		// RoundABC(x[2], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_57 = __this->___x_12;
		NullCheck(L_57);
		int32_t L_58 = 2;
		int64_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_59, ((int64_t)((int32_t)9)), NULL);
		// RoundBCA(x[3], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_60 = __this->___x_12;
		NullCheck(L_60);
		int32_t L_61 = 3;
		int64_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_62, ((int64_t)((int32_t)9)), NULL);
		// RoundCAB(x[4], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_63 = __this->___x_12;
		NullCheck(L_63);
		int32_t L_64 = 4;
		int64_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_65, ((int64_t)((int32_t)9)), NULL);
		// RoundABC(x[5], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_66 = __this->___x_12;
		NullCheck(L_66);
		int32_t L_67 = 5;
		int64_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		TigerDigest_RoundABC_mCB969BC538D116617F669E1D2266F07BDADED17E(__this, L_68, ((int64_t)((int32_t)9)), NULL);
		// RoundBCA(x[6], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_69 = __this->___x_12;
		NullCheck(L_69);
		int32_t L_70 = 6;
		int64_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		TigerDigest_RoundBCA_mE17555B4FCAE74A72ED26495C6A481AFBD66D68B(__this, L_71, ((int64_t)((int32_t)9)), NULL);
		// RoundCAB(x[7], 9);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_72 = __this->___x_12;
		NullCheck(L_72);
		int32_t L_73 = 7;
		int64_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		TigerDigest_RoundCAB_m99FA0317014743FED147C32825E5F15B589ED9E9(__this, L_74, ((int64_t)((int32_t)9)), NULL);
		// a ^= aa;
		int64_t L_75 = __this->___a_6;
		int64_t L_76 = V_0;
		__this->___a_6 = ((int64_t)(L_75^L_76));
		// b -= bb;
		int64_t L_77 = __this->___b_7;
		int64_t L_78 = V_1;
		__this->___b_7 = ((int64_t)il2cpp_codegen_subtract(L_77, L_78));
		// c += cc;
		int64_t L_79 = __this->___c_8;
		int64_t L_80 = V_2;
		__this->___c_8 = ((int64_t)il2cpp_codegen_add(L_79, L_80));
		// xOff = 0;
		__this->___xOff_13 = 0;
		// for (int i = 0; i != x.Length; i++)
		V_3 = 0;
		goto IL_01ec;
	}

IL_01de:
	{
		// x[i] = 0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_81 = __this->___x_12;
		int32_t L_82 = V_3;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (int64_t)((int64_t)0));
		// for (int i = 0; i != x.Length; i++)
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_01ec:
	{
		// for (int i = 0; i != x.Length; i++)
		int32_t L_84 = V_3;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_85 = __this->___x_12;
		NullCheck(L_85);
		if ((!(((uint32_t)L_84) == ((uint32_t)((int32_t)(((RuntimeArray*)L_85)->max_length))))))
		{
			goto IL_01de;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::UnpackWord(System.Int64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_UnpackWord_m84A0C20C68C659BA186B409E3360C51C467DFD4F (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		// output[outOff + 7]     = (byte)(r >> 56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output1;
		int32_t L_1 = ___outOff2;
		int64_t L_2 = ___r0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 7))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_2>>((int32_t)56)))));
		// output[outOff + 6] = (byte)(r >> 48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output1;
		int32_t L_4 = ___outOff2;
		int64_t L_5 = ___r0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 6))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_5>>((int32_t)48)))));
		// output[outOff + 5] = (byte)(r >> 40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output1;
		int32_t L_7 = ___outOff2;
		int64_t L_8 = ___r0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 5))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_8>>((int32_t)40)))));
		// output[outOff + 4] = (byte)(r >> 32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output1;
		int32_t L_10 = ___outOff2;
		int64_t L_11 = ___r0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 4))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_11>>((int32_t)32)))));
		// output[outOff + 3] = (byte)(r >> 24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output1;
		int32_t L_13 = ___outOff2;
		int64_t L_14 = ___r0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, 3))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_14>>((int32_t)24)))));
		// output[outOff + 2] = (byte)(r >> 16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___output1;
		int32_t L_16 = ___outOff2;
		int64_t L_17 = ___r0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 2))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_17>>((int32_t)16)))));
		// output[outOff + 1] = (byte)(r >> 8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___output1;
		int32_t L_19 = ___outOff2;
		int64_t L_20 = ___r0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_20>>8))));
		// output[outOff] = (byte)r;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___output1;
		int32_t L_22 = ___outOff2;
		int64_t L_23 = ___r0;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)(uint8_t)L_23));
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_ProcessLength_mDFE5B5A47B845AFF8E42FC8DA07CE5941260FBE5 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		// x[7] = bitLength;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___x_12;
		int64_t L_1 = ___bitLength0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(7), (int64_t)L_1);
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Finish_mF27575AB44DCBDD0030D7017D7E474CABC1DC195 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// long    bitLength = (byteCount << 3);
		int64_t L_0 = __this->___byteCount_9;
		V_0 = ((int64_t)(L_0<<3));
		// Update((byte)0x01);
		TigerDigest_Update_mD242754049FB9F36BC3FE74DDD537D51C7D153FF(__this, (uint8_t)1, NULL);
		goto IL_0019;
	}

IL_0012:
	{
		// Update((byte)0);
		TigerDigest_Update_mD242754049FB9F36BC3FE74DDD537D51C7D153FF(__this, (uint8_t)0, NULL);
	}

IL_0019:
	{
		// while (bOff != 0)
		int32_t L_1 = __this->___bOff_11;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// ProcessLength(bitLength);
		int64_t L_2 = V_0;
		TigerDigest_ProcessLength_mDFE5B5A47B845AFF8E42FC8DA07CE5941260FBE5(__this, L_2, NULL);
		// ProcessBlock();
		TigerDigest_ProcessBlock_mB70BDAD780BD9E936FA0361D240392B757281492(__this, NULL);
		// }
		return;
	}
}
// System.Int32 BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TigerDigest_DoFinal_m7E8F24ED0BC15CB6F37FEAA8B6A45F8325D7C5D2 (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		// Finish();
		TigerDigest_Finish_mF27575AB44DCBDD0030D7017D7E474CABC1DC195(__this, NULL);
		// UnpackWord(a, output, outOff);
		int64_t L_0 = __this->___a_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		TigerDigest_UnpackWord_m84A0C20C68C659BA186B409E3360C51C467DFD4F(__this, L_0, L_1, L_2, NULL);
		// UnpackWord(b, output, outOff + 8);
		int64_t L_3 = __this->___b_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		TigerDigest_UnpackWord_m84A0C20C68C659BA186B409E3360C51C467DFD4F(__this, L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 8)), NULL);
		// UnpackWord(c, output, outOff + 16);
		int64_t L_6 = __this->___c_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		TigerDigest_UnpackWord_m84A0C20C68C659BA186B409E3360C51C467DFD4F(__this, L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16))), NULL);
		// Reset();
		TigerDigest_Reset_m5684D97AA80B24CC9DC94AE01879233291FEDF9B(__this, NULL);
		// return DigestLength;
		return ((int32_t)24);
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Reset_m5684D97AA80B24CC9DC94AE01879233291FEDF9B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// a = unchecked((long) 0x0123456789ABCDEFL);
		__this->___a_6 = ((int64_t)81985529216486895LL);
		// b = unchecked((long) 0xFEDCBA9876543210L);
		__this->___b_7 = ((int64_t)-81985529216486896LL);
		// c = unchecked((long) 0xF096A5B4C3B2E187L);
		__this->___c_8 = ((int64_t)-1110518062304271993LL);
		// xOff = 0;
		__this->___xOff_13 = 0;
		// for (int i = 0; i != x.Length; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0038:
	{
		// x[i] = 0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = __this->___x_12;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int64_t)((int64_t)0));
		// for (int i = 0; i != x.Length; i++)
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0046:
	{
		// for (int i = 0; i != x.Length; i++)
		int32_t L_3 = V_0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = __this->___x_12;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// bOff = 0;
		__this->___bOff_11 = 0;
		// for (int i = 0; i != Buffer.Length; i++)
		V_1 = 0;
		goto IL_0069;
	}

IL_005c:
	{
		// Buffer[i] = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___Buffer_10;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)0);
		// for (int i = 0; i != Buffer.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0069:
	{
		// for (int i = 0; i != Buffer.Length; i++)
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___Buffer_10;
		NullCheck(L_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		// byteCount = 0;
		__this->___byteCount_9 = ((int64_t)0);
		// }
		return;
	}
}
// BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TigerDigest_Copy_m83112ED4943E8B4829C57358538C3CC16EF5DF2B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new TigerDigest(this);
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_0 = (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4*)il2cpp_codegen_object_new(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TigerDigest__ctor_m17762CE9CA3205D9D8D955C08412640F516ECF60(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::Reset(BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest_Reset_mB9BAEF7FB70C722322F5B4DD5C452B12D705646B (TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* V_0 = NULL;
	{
		// TigerDigest t = (TigerDigest)other;
		RuntimeObject* L_0 = ___other0;
		V_0 = ((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4*)CastclassClass((RuntimeObject*)L_0, TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var));
		// a = t.a;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_1 = V_0;
		NullCheck(L_1);
		int64_t L_2 = L_1->___a_6;
		__this->___a_6 = L_2;
		// b = t.b;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_3 = V_0;
		NullCheck(L_3);
		int64_t L_4 = L_3->___b_7;
		__this->___b_7 = L_4;
		// c = t.c;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_5 = V_0;
		NullCheck(L_5);
		int64_t L_6 = L_5->___c_8;
		__this->___c_8 = L_6;
		// Array.Copy(t.x, 0, x, 0, t.x.Length);
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_7 = V_0;
		NullCheck(L_7);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = L_7->___x_12;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = __this->___x_12;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_10 = V_0;
		NullCheck(L_10);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_11 = L_10->___x_12;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		// xOff = t.xOff;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___xOff_13;
		__this->___xOff_13 = L_13;
		// Array.Copy(t.Buffer, 0, Buffer, 0, t.Buffer.Length);
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___Buffer_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___Buffer_10;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___Buffer_10;
		NullCheck(L_18);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		// bOff = t.bOff;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___bOff_11;
		__this->___bOff_11 = L_20;
		// byteCount = t.byteCount;
		TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4* L_21 = V_0;
		NullCheck(L_21);
		int64_t L_22 = L_21->___byteCount_9;
		__this->___byteCount_9 = L_22;
		// }
		return;
	}
}
// System.Void BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Digests.TigerDigest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TigerDigest__cctor_m3D6C6DA4F9C195972FA686B95CE8DA677239D7AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____3CA024F96B6FA0D283063E7C2B60A83C2B07F26AE1788CDFAEEB231C7725ED92_64_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____586CB2936F35105D4A71FF1186E81528F1980A2E5BB1E2719E0D86809CB1080A_99_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____AC7FC16C704375F0F1DB433E70C6C2B90B1D797B17806DD74E7664CAD8BFA778_201_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E5325952F9FF2214CCE24E320F2BCD6A71C6EB4127F6069352CE065883AE80D0_283_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly long[] t1 = {
		//     unchecked((long) 0x02AAB17CF7E90C5EL)   /*    0 */,    unchecked((long) 0xAC424B03E243A8ECL)   /*    1 */,
		//     unchecked((long) 0x72CD5BE30DD5FCD3L)   /*    2 */,    unchecked((long) 0x6D019B93F6F97F3AL)   /*    3 */,
		//     unchecked((long) 0xCD9978FFD21F9193L)   /*    4 */,    unchecked((long) 0x7573A1C9708029E2L)   /*    5 */,
		//     unchecked((long) 0xB164326B922A83C3L)   /*    6 */,    unchecked((long) 0x46883EEE04915870L)   /*    7 */,
		//     unchecked((long) 0xEAACE3057103ECE6L)   /*    8 */,    unchecked((long) 0xC54169B808A3535CL)   /*    9 */,
		//     unchecked((long) 0x4CE754918DDEC47CL)   /*   10 */,    unchecked((long) 0x0AA2F4DFDC0DF40CL)   /*   11 */,
		//     unchecked((long) 0x10B76F18A74DBEFAL)   /*   12 */,    unchecked((long) 0xC6CCB6235AD1AB6AL)   /*   13 */,
		//     unchecked((long) 0x13726121572FE2FFL)   /*   14 */,    unchecked((long) 0x1A488C6F199D921EL)   /*   15 */,
		//     unchecked((long) 0x4BC9F9F4DA0007CAL)   /*   16 */,    unchecked((long) 0x26F5E6F6E85241C7L)   /*   17 */,
		//     unchecked((long) 0x859079DBEA5947B6L)   /*   18 */,    unchecked((long) 0x4F1885C5C99E8C92L)   /*   19 */,
		//     unchecked((long) 0xD78E761EA96F864BL)   /*   20 */,    unchecked((long) 0x8E36428C52B5C17DL)   /*   21 */,
		//     unchecked((long) 0x69CF6827373063C1L)   /*   22 */,    unchecked((long) 0xB607C93D9BB4C56EL)   /*   23 */,
		//     unchecked((long) 0x7D820E760E76B5EAL)   /*   24 */,    unchecked((long) 0x645C9CC6F07FDC42L)   /*   25 */,
		//     unchecked((long) 0xBF38A078243342E0L)   /*   26 */,    unchecked((long) 0x5F6B343C9D2E7D04L)   /*   27 */,
		//     unchecked((long) 0xF2C28AEB600B0EC6L)   /*   28 */,    unchecked((long) 0x6C0ED85F7254BCACL)   /*   29 */,
		//     unchecked((long) 0x71592281A4DB4FE5L)   /*   30 */,    unchecked((long) 0x1967FA69CE0FED9FL)   /*   31 */,
		//     unchecked((long) 0xFD5293F8B96545DBL)   /*   32 */,    unchecked((long) 0xC879E9D7F2A7600BL)   /*   33 */,
		//     unchecked((long) 0x860248920193194EL)   /*   34 */,    unchecked((long) 0xA4F9533B2D9CC0B3L)   /*   35 */,
		//     unchecked((long) 0x9053836C15957613L)   /*   36 */,    unchecked((long) 0xDB6DCF8AFC357BF1L)   /*   37 */,
		//     unchecked((long) 0x18BEEA7A7A370F57L)   /*   38 */,    unchecked((long) 0x037117CA50B99066L)   /*   39 */,
		//     unchecked((long) 0x6AB30A9774424A35L)   /*   40 */,    unchecked((long) 0xF4E92F02E325249BL)   /*   41 */,
		//     unchecked((long) 0x7739DB07061CCAE1L)   /*   42 */,    unchecked((long) 0xD8F3B49CECA42A05L)   /*   43 */,
		//     unchecked((long) 0xBD56BE3F51382F73L)   /*   44 */,    unchecked((long) 0x45FAED5843B0BB28L)   /*   45 */,
		//     unchecked((long) 0x1C813D5C11BF1F83L)   /*   46 */,    unchecked((long) 0x8AF0E4B6D75FA169L)   /*   47 */,
		//     unchecked((long) 0x33EE18A487AD9999L)   /*   48 */,    unchecked((long) 0x3C26E8EAB1C94410L)   /*   49 */,
		//     unchecked((long) 0xB510102BC0A822F9L)   /*   50 */,    unchecked((long) 0x141EEF310CE6123BL)   /*   51 */,
		//     unchecked((long) 0xFC65B90059DDB154L)   /*   52 */,    unchecked((long) 0xE0158640C5E0E607L)   /*   53 */,
		//     unchecked((long) 0x884E079826C3A3CFL)   /*   54 */,    unchecked((long) 0x930D0D9523C535FDL)   /*   55 */,
		//     unchecked((long) 0x35638D754E9A2B00L)   /*   56 */,    unchecked((long) 0x4085FCCF40469DD5L)   /*   57 */,
		//     unchecked((long) 0xC4B17AD28BE23A4CL)   /*   58 */,    unchecked((long) 0xCAB2F0FC6A3E6A2EL)   /*   59 */,
		//     unchecked((long) 0x2860971A6B943FCDL)   /*   60 */,    unchecked((long) 0x3DDE6EE212E30446L)   /*   61 */,
		//     unchecked((long) 0x6222F32AE01765AEL)   /*   62 */,    unchecked((long) 0x5D550BB5478308FEL)   /*   63 */,
		//     unchecked((long) 0xA9EFA98DA0EDA22AL)   /*   64 */,    unchecked((long) 0xC351A71686C40DA7L)   /*   65 */,
		//     unchecked((long) 0x1105586D9C867C84L)   /*   66 */,    unchecked((long) 0xDCFFEE85FDA22853L)   /*   67 */,
		//     unchecked((long) 0xCCFBD0262C5EEF76L)   /*   68 */,    unchecked((long) 0xBAF294CB8990D201L)   /*   69 */,
		//     unchecked((long) 0xE69464F52AFAD975L)   /*   70 */,    unchecked((long) 0x94B013AFDF133E14L)   /*   71 */,
		//     unchecked((long) 0x06A7D1A32823C958L)   /*   72 */,    unchecked((long) 0x6F95FE5130F61119L)   /*   73 */,
		//     unchecked((long) 0xD92AB34E462C06C0L)   /*   74 */,    unchecked((long) 0xED7BDE33887C71D2L)   /*   75 */,
		//     unchecked((long) 0x79746D6E6518393EL)   /*   76 */,    unchecked((long) 0x5BA419385D713329L)   /*   77 */,
		//     unchecked((long) 0x7C1BA6B948A97564L)   /*   78 */,    unchecked((long) 0x31987C197BFDAC67L)   /*   79 */,
		//     unchecked((long) 0xDE6C23C44B053D02L)   /*   80 */,    unchecked((long) 0x581C49FED002D64DL)   /*   81 */,
		//     unchecked((long) 0xDD474D6338261571L)   /*   82 */,    unchecked((long) 0xAA4546C3E473D062L)   /*   83 */,
		//     unchecked((long) 0x928FCE349455F860L)   /*   84 */,    unchecked((long) 0x48161BBACAAB94D9L)   /*   85 */,
		//     unchecked((long) 0x63912430770E6F68L)   /*   86 */,    unchecked((long) 0x6EC8A5E602C6641CL)   /*   87 */,
		//     unchecked((long) 0x87282515337DDD2BL)   /*   88 */,    unchecked((long) 0x2CDA6B42034B701BL)   /*   89 */,
		//     unchecked((long) 0xB03D37C181CB096DL)   /*   90 */,    unchecked((long) 0xE108438266C71C6FL)   /*   91 */,
		//     unchecked((long) 0x2B3180C7EB51B255L)   /*   92 */,    unchecked((long) 0xDF92B82F96C08BBCL)   /*   93 */,
		//     unchecked((long) 0x5C68C8C0A632F3BAL)   /*   94 */,    unchecked((long) 0x5504CC861C3D0556L)   /*   95 */,
		//     unchecked((long) 0xABBFA4E55FB26B8FL)   /*   96 */,    unchecked((long) 0x41848B0AB3BACEB4L)   /*   97 */,
		//     unchecked((long) 0xB334A273AA445D32L)   /*   98 */,    unchecked((long) 0xBCA696F0A85AD881L)   /*   99 */,
		//     unchecked((long) 0x24F6EC65B528D56CL)   /*  100 */,    unchecked((long) 0x0CE1512E90F4524AL)   /*  101 */,
		//     unchecked((long) 0x4E9DD79D5506D35AL)   /*  102 */,    unchecked((long) 0x258905FAC6CE9779L)   /*  103 */,
		//     unchecked((long) 0x2019295B3E109B33L)   /*  104 */,    unchecked((long) 0xF8A9478B73A054CCL)   /*  105 */,
		//     unchecked((long) 0x2924F2F934417EB0L)   /*  106 */,    unchecked((long) 0x3993357D536D1BC4L)   /*  107 */,
		//     unchecked((long) 0x38A81AC21DB6FF8BL)   /*  108 */,    unchecked((long) 0x47C4FBF17D6016BFL)   /*  109 */,
		//     unchecked((long) 0x1E0FAADD7667E3F5L)   /*  110 */,    unchecked((long) 0x7ABCFF62938BEB96L)   /*  111 */,
		//     unchecked((long) 0xA78DAD948FC179C9L)   /*  112 */,    unchecked((long) 0x8F1F98B72911E50DL)   /*  113 */,
		//     unchecked((long) 0x61E48EAE27121A91L)   /*  114 */,    unchecked((long) 0x4D62F7AD31859808L)   /*  115 */,
		//     unchecked((long) 0xECEBA345EF5CEAEBL)   /*  116 */,    unchecked((long) 0xF5CEB25EBC9684CEL)   /*  117 */,
		//     unchecked((long) 0xF633E20CB7F76221L)   /*  118 */,    unchecked((long) 0xA32CDF06AB8293E4L)   /*  119 */,
		//     unchecked((long) 0x985A202CA5EE2CA4L)   /*  120 */,    unchecked((long) 0xCF0B8447CC8A8FB1L)   /*  121 */,
		//     unchecked((long) 0x9F765244979859A3L)   /*  122 */,    unchecked((long) 0xA8D516B1A1240017L)   /*  123 */,
		//     unchecked((long) 0x0BD7BA3EBB5DC726L)   /*  124 */,    unchecked((long) 0xE54BCA55B86ADB39L)   /*  125 */,
		//     unchecked((long) 0x1D7A3AFD6C478063L)   /*  126 */,    unchecked((long) 0x519EC608E7669EDDL)   /*  127 */,
		//     unchecked((long) 0x0E5715A2D149AA23L)   /*  128 */,    unchecked((long) 0x177D4571848FF194L)   /*  129 */,
		//     unchecked((long) 0xEEB55F3241014C22L)   /*  130 */,    unchecked((long) 0x0F5E5CA13A6E2EC2L)   /*  131 */,
		//     unchecked((long) 0x8029927B75F5C361L)   /*  132 */,    unchecked((long) 0xAD139FABC3D6E436L)   /*  133 */,
		//     unchecked((long) 0x0D5DF1A94CCF402FL)   /*  134 */,    unchecked((long) 0x3E8BD948BEA5DFC8L)   /*  135 */,
		//     unchecked((long) 0xA5A0D357BD3FF77EL)   /*  136 */,    unchecked((long) 0xA2D12E251F74F645L)   /*  137 */,
		//     unchecked((long) 0x66FD9E525E81A082L)   /*  138 */,    unchecked((long) 0x2E0C90CE7F687A49L)   /*  139 */,
		//     unchecked((long) 0xC2E8BCBEBA973BC5L)   /*  140 */,    unchecked((long) 0x000001BCE509745FL)   /*  141 */,
		//     unchecked((long) 0x423777BBE6DAB3D6L)   /*  142 */,    unchecked((long) 0xD1661C7EAEF06EB5L)   /*  143 */,
		//     unchecked((long) 0xA1781F354DAACFD8L)   /*  144 */,    unchecked((long) 0x2D11284A2B16AFFCL)   /*  145 */,
		//     unchecked((long) 0xF1FC4F67FA891D1FL)   /*  146 */,    unchecked((long) 0x73ECC25DCB920ADAL)   /*  147 */,
		//     unchecked((long) 0xAE610C22C2A12651L)   /*  148 */,    unchecked((long) 0x96E0A810D356B78AL)   /*  149 */,
		//     unchecked((long) 0x5A9A381F2FE7870FL)   /*  150 */,    unchecked((long) 0xD5AD62EDE94E5530L)   /*  151 */,
		//     unchecked((long) 0xD225E5E8368D1427L)   /*  152 */,    unchecked((long) 0x65977B70C7AF4631L)   /*  153 */,
		//     unchecked((long) 0x99F889B2DE39D74FL)   /*  154 */,    unchecked((long) 0x233F30BF54E1D143L)   /*  155 */,
		//     unchecked((long) 0x9A9675D3D9A63C97L)   /*  156 */,    unchecked((long) 0x5470554FF334F9A8L)   /*  157 */,
		//     unchecked((long) 0x166ACB744A4F5688L)   /*  158 */,    unchecked((long) 0x70C74CAAB2E4AEADL)   /*  159 */,
		//     unchecked((long) 0xF0D091646F294D12L)   /*  160 */,    unchecked((long) 0x57B82A89684031D1L)   /*  161 */,
		//     unchecked((long) 0xEFD95A5A61BE0B6BL)   /*  162 */,    unchecked((long) 0x2FBD12E969F2F29AL)   /*  163 */,
		//     unchecked((long) 0x9BD37013FEFF9FE8L)   /*  164 */,    unchecked((long) 0x3F9B0404D6085A06L)   /*  165 */,
		//     unchecked((long) 0x4940C1F3166CFE15L)   /*  166 */,    unchecked((long) 0x09542C4DCDF3DEFBL)   /*  167 */,
		//     unchecked((long) 0xB4C5218385CD5CE3L)   /*  168 */,    unchecked((long) 0xC935B7DC4462A641L)   /*  169 */,
		//     unchecked((long) 0x3417F8A68ED3B63FL)   /*  170 */,    unchecked((long) 0xB80959295B215B40L)   /*  171 */,
		//     unchecked((long) 0xF99CDAEF3B8C8572L)   /*  172 */,    unchecked((long) 0x018C0614F8FCB95DL)   /*  173 */,
		//     unchecked((long) 0x1B14ACCD1A3ACDF3L)   /*  174 */,    unchecked((long) 0x84D471F200BB732DL)   /*  175 */,
		//     unchecked((long) 0xC1A3110E95E8DA16L)   /*  176 */,    unchecked((long) 0x430A7220BF1A82B8L)   /*  177 */,
		//     unchecked((long) 0xB77E090D39DF210EL)   /*  178 */,    unchecked((long) 0x5EF4BD9F3CD05E9DL)   /*  179 */,
		//     unchecked((long) 0x9D4FF6DA7E57A444L)   /*  180 */,    unchecked((long) 0xDA1D60E183D4A5F8L)   /*  181 */,
		//     unchecked((long) 0xB287C38417998E47L)   /*  182 */,    unchecked((long) 0xFE3EDC121BB31886L)   /*  183 */,
		//     unchecked((long) 0xC7FE3CCC980CCBEFL)   /*  184 */,    unchecked((long) 0xE46FB590189BFD03L)   /*  185 */,
		//     unchecked((long) 0x3732FD469A4C57DCL)   /*  186 */,    unchecked((long) 0x7EF700A07CF1AD65L)   /*  187 */,
		//     unchecked((long) 0x59C64468A31D8859L)   /*  188 */,    unchecked((long) 0x762FB0B4D45B61F6L)   /*  189 */,
		//     unchecked((long) 0x155BAED099047718L)   /*  190 */,    unchecked((long) 0x68755E4C3D50BAA6L)   /*  191 */,
		//     unchecked((long) 0xE9214E7F22D8B4DFL)   /*  192 */,    unchecked((long) 0x2ADDBF532EAC95F4L)   /*  193 */,
		//     unchecked((long) 0x32AE3909B4BD0109L)   /*  194 */,    unchecked((long) 0x834DF537B08E3450L)   /*  195 */,
		//     unchecked((long) 0xFA209DA84220728DL)   /*  196 */,    unchecked((long) 0x9E691D9B9EFE23F7L)   /*  197 */,
		//     unchecked((long) 0x0446D288C4AE8D7FL)   /*  198 */,    unchecked((long) 0x7B4CC524E169785BL)   /*  199 */,
		//     unchecked((long) 0x21D87F0135CA1385L)   /*  200 */,    unchecked((long) 0xCEBB400F137B8AA5L)   /*  201 */,
		//     unchecked((long) 0x272E2B66580796BEL)   /*  202 */,    unchecked((long) 0x3612264125C2B0DEL)   /*  203 */,
		//     unchecked((long) 0x057702BDAD1EFBB2L)   /*  204 */,    unchecked((long) 0xD4BABB8EACF84BE9L)   /*  205 */,
		//     unchecked((long) 0x91583139641BC67BL)   /*  206 */,    unchecked((long) 0x8BDC2DE08036E024L)   /*  207 */,
		//     unchecked((long) 0x603C8156F49F68EDL)   /*  208 */,    unchecked((long) 0xF7D236F7DBEF5111L)   /*  209 */,
		//     unchecked((long) 0x9727C4598AD21E80L)   /*  210 */,    unchecked((long) 0xA08A0896670A5FD7L)   /*  211 */,
		//     unchecked((long) 0xCB4A8F4309EBA9CBL)   /*  212 */,    unchecked((long) 0x81AF564B0F7036A1L)   /*  213 */,
		//     unchecked((long) 0xC0B99AA778199ABDL)   /*  214 */,    unchecked((long) 0x959F1EC83FC8E952L)   /*  215 */,
		//     unchecked((long) 0x8C505077794A81B9L)   /*  216 */,    unchecked((long) 0x3ACAAF8F056338F0L)   /*  217 */,
		//     unchecked((long) 0x07B43F50627A6778L)   /*  218 */,    unchecked((long) 0x4A44AB49F5ECCC77L)   /*  219 */,
		//     unchecked((long) 0x3BC3D6E4B679EE98L)   /*  220 */,    unchecked((long) 0x9CC0D4D1CF14108CL)   /*  221 */,
		//     unchecked((long) 0x4406C00B206BC8A0L)   /*  222 */,    unchecked((long) 0x82A18854C8D72D89L)   /*  223 */,
		//     unchecked((long) 0x67E366B35C3C432CL)   /*  224 */,    unchecked((long) 0xB923DD61102B37F2L)   /*  225 */,
		//     unchecked((long) 0x56AB2779D884271DL)   /*  226 */,    unchecked((long) 0xBE83E1B0FF1525AFL)   /*  227 */,
		//     unchecked((long) 0xFB7C65D4217E49A9L)   /*  228 */,    unchecked((long) 0x6BDBE0E76D48E7D4L)   /*  229 */,
		//     unchecked((long) 0x08DF828745D9179EL)   /*  230 */,    unchecked((long) 0x22EA6A9ADD53BD34L)   /*  231 */,
		//     unchecked((long) 0xE36E141C5622200AL)   /*  232 */,    unchecked((long) 0x7F805D1B8CB750EEL)   /*  233 */,
		//     unchecked((long) 0xAFE5C7A59F58E837L)   /*  234 */,    unchecked((long) 0xE27F996A4FB1C23CL)   /*  235 */,
		//     unchecked((long) 0xD3867DFB0775F0D0L)   /*  236 */,    unchecked((long) 0xD0E673DE6E88891AL)   /*  237 */,
		//     unchecked((long) 0x123AEB9EAFB86C25L)   /*  238 */,    unchecked((long) 0x30F1D5D5C145B895L)   /*  239 */,
		//     unchecked((long) 0xBB434A2DEE7269E7L)   /*  240 */,    unchecked((long) 0x78CB67ECF931FA38L)   /*  241 */,
		//     unchecked((long) 0xF33B0372323BBF9CL)   /*  242 */,    unchecked((long) 0x52D66336FB279C74L)   /*  243 */,
		//     unchecked((long) 0x505F33AC0AFB4EAAL)   /*  244 */,    unchecked((long) 0xE8A5CD99A2CCE187L)   /*  245 */,
		//     unchecked((long) 0x534974801E2D30BBL)   /*  246 */,    unchecked((long) 0x8D2D5711D5876D90L)   /*  247 */,
		//     unchecked((long) 0x1F1A412891BC038EL)   /*  248 */,    unchecked((long) 0xD6E2E71D82E56648L)   /*  249 */,
		//     unchecked((long) 0x74036C3A497732B7L)   /*  250 */,    unchecked((long) 0x89B67ED96361F5ABL)   /*  251 */,
		//     unchecked((long) 0xFFED95D8F1EA02A2L)   /*  252 */,    unchecked((long) 0xE72B3BD61464D43DL)   /*  253 */,
		//     unchecked((long) 0xA6300F170BDC4820L)   /*  254 */,    unchecked((long) 0xEBC18760ED78A77AL)   /*  255 */,
		// };
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____E5325952F9FF2214CCE24E320F2BCD6A71C6EB4127F6069352CE065883AE80D0_283_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t1_1), (void*)L_1);
		// private static readonly long[] t2 = {
		//     unchecked((long) 0xE6A6BE5A05A12138L)   /*  256 */,    unchecked((long) 0xB5A122A5B4F87C98L)   /*  257 */,
		//     unchecked((long) 0x563C6089140B6990L)   /*  258 */,    unchecked((long) 0x4C46CB2E391F5DD5L)   /*  259 */,
		//     unchecked((long) 0xD932ADDBC9B79434L)   /*  260 */,    unchecked((long) 0x08EA70E42015AFF5L)   /*  261 */,
		//     unchecked((long) 0xD765A6673E478CF1L)   /*  262 */,    unchecked((long) 0xC4FB757EAB278D99L)   /*  263 */,
		//     unchecked((long) 0xDF11C6862D6E0692L)   /*  264 */,    unchecked((long) 0xDDEB84F10D7F3B16L)   /*  265 */,
		//     unchecked((long) 0x6F2EF604A665EA04L)   /*  266 */,    unchecked((long) 0x4A8E0F0FF0E0DFB3L)   /*  267 */,
		//     unchecked((long) 0xA5EDEEF83DBCBA51L)   /*  268 */,    unchecked((long) 0xFC4F0A2A0EA4371EL)   /*  269 */,
		//     unchecked((long) 0xE83E1DA85CB38429L)   /*  270 */,    unchecked((long) 0xDC8FF882BA1B1CE2L)   /*  271 */,
		//     unchecked((long) 0xCD45505E8353E80DL)   /*  272 */,    unchecked((long) 0x18D19A00D4DB0717L)   /*  273 */,
		//     unchecked((long) 0x34A0CFEDA5F38101L)   /*  274 */,    unchecked((long) 0x0BE77E518887CAF2L)   /*  275 */,
		//     unchecked((long) 0x1E341438B3C45136L)   /*  276 */,    unchecked((long) 0xE05797F49089CCF9L)   /*  277 */,
		//     unchecked((long) 0xFFD23F9DF2591D14L)   /*  278 */,    unchecked((long) 0x543DDA228595C5CDL)   /*  279 */,
		//     unchecked((long) 0x661F81FD99052A33L)   /*  280 */,    unchecked((long) 0x8736E641DB0F7B76L)   /*  281 */,
		//     unchecked((long) 0x15227725418E5307L)   /*  282 */,    unchecked((long) 0xE25F7F46162EB2FAL)   /*  283 */,
		//     unchecked((long) 0x48A8B2126C13D9FEL)   /*  284 */,    unchecked((long) 0xAFDC541792E76EEAL)   /*  285 */,
		//     unchecked((long) 0x03D912BFC6D1898FL)   /*  286 */,    unchecked((long) 0x31B1AAFA1B83F51BL)   /*  287 */,
		//     unchecked((long) 0xF1AC2796E42AB7D9L)   /*  288 */,    unchecked((long) 0x40A3A7D7FCD2EBACL)   /*  289 */,
		//     unchecked((long) 0x1056136D0AFBBCC5L)   /*  290 */,    unchecked((long) 0x7889E1DD9A6D0C85L)   /*  291 */,
		//     unchecked((long) 0xD33525782A7974AAL)   /*  292 */,    unchecked((long) 0xA7E25D09078AC09BL)   /*  293 */,
		//     unchecked((long) 0xBD4138B3EAC6EDD0L)   /*  294 */,    unchecked((long) 0x920ABFBE71EB9E70L)   /*  295 */,
		//     unchecked((long) 0xA2A5D0F54FC2625CL)   /*  296 */,    unchecked((long) 0xC054E36B0B1290A3L)   /*  297 */,
		//     unchecked((long) 0xF6DD59FF62FE932BL)   /*  298 */,    unchecked((long) 0x3537354511A8AC7DL)   /*  299 */,
		//     unchecked((long) 0xCA845E9172FADCD4L)   /*  300 */,    unchecked((long) 0x84F82B60329D20DCL)   /*  301 */,
		//     unchecked((long) 0x79C62CE1CD672F18L)   /*  302 */,    unchecked((long) 0x8B09A2ADD124642CL)   /*  303 */,
		//     unchecked((long) 0xD0C1E96A19D9E726L)   /*  304 */,    unchecked((long) 0x5A786A9B4BA9500CL)   /*  305 */,
		//     unchecked((long) 0x0E020336634C43F3L)   /*  306 */,    unchecked((long) 0xC17B474AEB66D822L)   /*  307 */,
		//     unchecked((long) 0x6A731AE3EC9BAAC2L)   /*  308 */,    unchecked((long) 0x8226667AE0840258L)   /*  309 */,
		//     unchecked((long) 0x67D4567691CAECA5L)   /*  310 */,    unchecked((long) 0x1D94155C4875ADB5L)   /*  311 */,
		//     unchecked((long) 0x6D00FD985B813FDFL)   /*  312 */,    unchecked((long) 0x51286EFCB774CD06L)   /*  313 */,
		//     unchecked((long) 0x5E8834471FA744AFL)   /*  314 */,    unchecked((long) 0xF72CA0AEE761AE2EL)   /*  315 */,
		//     unchecked((long) 0xBE40E4CDAEE8E09AL)   /*  316 */,    unchecked((long) 0xE9970BBB5118F665L)   /*  317 */,
		//     unchecked((long) 0x726E4BEB33DF1964L)   /*  318 */,    unchecked((long) 0x703B000729199762L)   /*  319 */,
		//     unchecked((long) 0x4631D816F5EF30A7L)   /*  320 */,    unchecked((long) 0xB880B5B51504A6BEL)   /*  321 */,
		//     unchecked((long) 0x641793C37ED84B6CL)   /*  322 */,    unchecked((long) 0x7B21ED77F6E97D96L)   /*  323 */,
		//     unchecked((long) 0x776306312EF96B73L)   /*  324 */,    unchecked((long) 0xAE528948E86FF3F4L)   /*  325 */,
		//     unchecked((long) 0x53DBD7F286A3F8F8L)   /*  326 */,    unchecked((long) 0x16CADCE74CFC1063L)   /*  327 */,
		//     unchecked((long) 0x005C19BDFA52C6DDL)   /*  328 */,    unchecked((long) 0x68868F5D64D46AD3L)   /*  329 */,
		//     unchecked((long) 0x3A9D512CCF1E186AL)   /*  330 */,    unchecked((long) 0x367E62C2385660AEL)   /*  331 */,
		//     unchecked((long) 0xE359E7EA77DCB1D7L)   /*  332 */,    unchecked((long) 0x526C0773749ABE6EL)   /*  333 */,
		//     unchecked((long) 0x735AE5F9D09F734BL)   /*  334 */,    unchecked((long) 0x493FC7CC8A558BA8L)   /*  335 */,
		//     unchecked((long) 0xB0B9C1533041AB45L)   /*  336 */,    unchecked((long) 0x321958BA470A59BDL)   /*  337 */,
		//     unchecked((long) 0x852DB00B5F46C393L)   /*  338 */,    unchecked((long) 0x91209B2BD336B0E5L)   /*  339 */,
		//     unchecked((long) 0x6E604F7D659EF19FL)   /*  340 */,    unchecked((long) 0xB99A8AE2782CCB24L)   /*  341 */,
		//     unchecked((long) 0xCCF52AB6C814C4C7L)   /*  342 */,    unchecked((long) 0x4727D9AFBE11727BL)   /*  343 */,
		//     unchecked((long) 0x7E950D0C0121B34DL)   /*  344 */,    unchecked((long) 0x756F435670AD471FL)   /*  345 */,
		//     unchecked((long) 0xF5ADD442615A6849L)   /*  346 */,    unchecked((long) 0x4E87E09980B9957AL)   /*  347 */,
		//     unchecked((long) 0x2ACFA1DF50AEE355L)   /*  348 */,    unchecked((long) 0xD898263AFD2FD556L)   /*  349 */,
		//     unchecked((long) 0xC8F4924DD80C8FD6L)   /*  350 */,    unchecked((long) 0xCF99CA3D754A173AL)   /*  351 */,
		//     unchecked((long) 0xFE477BACAF91BF3CL)   /*  352 */,    unchecked((long) 0xED5371F6D690C12DL)   /*  353 */,
		//     unchecked((long) 0x831A5C285E687094L)   /*  354 */,    unchecked((long) 0xC5D3C90A3708A0A4L)   /*  355 */,
		//     unchecked((long) 0x0F7F903717D06580L)   /*  356 */,    unchecked((long) 0x19F9BB13B8FDF27FL)   /*  357 */,
		//     unchecked((long) 0xB1BD6F1B4D502843L)   /*  358 */,    unchecked((long) 0x1C761BA38FFF4012L)   /*  359 */,
		//     unchecked((long) 0x0D1530C4E2E21F3BL)   /*  360 */,    unchecked((long) 0x8943CE69A7372C8AL)   /*  361 */,
		//     unchecked((long) 0xE5184E11FEB5CE66L)   /*  362 */,    unchecked((long) 0x618BDB80BD736621L)   /*  363 */,
		//     unchecked((long) 0x7D29BAD68B574D0BL)   /*  364 */,    unchecked((long) 0x81BB613E25E6FE5BL)   /*  365 */,
		//     unchecked((long) 0x071C9C10BC07913FL)   /*  366 */,    unchecked((long) 0xC7BEEB7909AC2D97L)   /*  367 */,
		//     unchecked((long) 0xC3E58D353BC5D757L)   /*  368 */,    unchecked((long) 0xEB017892F38F61E8L)   /*  369 */,
		//     unchecked((long) 0xD4EFFB9C9B1CC21AL)   /*  370 */,    unchecked((long) 0x99727D26F494F7ABL)   /*  371 */,
		//     unchecked((long) 0xA3E063A2956B3E03L)   /*  372 */,    unchecked((long) 0x9D4A8B9A4AA09C30L)   /*  373 */,
		//     unchecked((long) 0x3F6AB7D500090FB4L)   /*  374 */,    unchecked((long) 0x9CC0F2A057268AC0L)   /*  375 */,
		//     unchecked((long) 0x3DEE9D2DEDBF42D1L)   /*  376 */,    unchecked((long) 0x330F49C87960A972L)   /*  377 */,
		//     unchecked((long) 0xC6B2720287421B41L)   /*  378 */,    unchecked((long) 0x0AC59EC07C00369CL)   /*  379 */,
		//     unchecked((long) 0xEF4EAC49CB353425L)   /*  380 */,    unchecked((long) 0xF450244EEF0129D8L)   /*  381 */,
		//     unchecked((long) 0x8ACC46E5CAF4DEB6L)   /*  382 */,    unchecked((long) 0x2FFEAB63989263F7L)   /*  383 */,
		//     unchecked((long) 0x8F7CB9FE5D7A4578L)   /*  384 */,    unchecked((long) 0x5BD8F7644E634635L)   /*  385 */,
		//     unchecked((long) 0x427A7315BF2DC900L)   /*  386 */,    unchecked((long) 0x17D0C4AA2125261CL)   /*  387 */,
		//     unchecked((long) 0x3992486C93518E50L)   /*  388 */,    unchecked((long) 0xB4CBFEE0A2D7D4C3L)   /*  389 */,
		//     unchecked((long) 0x7C75D6202C5DDD8DL)   /*  390 */,    unchecked((long) 0xDBC295D8E35B6C61L)   /*  391 */,
		//     unchecked((long) 0x60B369D302032B19L)   /*  392 */,    unchecked((long) 0xCE42685FDCE44132L)   /*  393 */,
		//     unchecked((long) 0x06F3DDB9DDF65610L)   /*  394 */,    unchecked((long) 0x8EA4D21DB5E148F0L)   /*  395 */,
		//     unchecked((long) 0x20B0FCE62FCD496FL)   /*  396 */,    unchecked((long) 0x2C1B912358B0EE31L)   /*  397 */,
		//     unchecked((long) 0xB28317B818F5A308L)   /*  398 */,    unchecked((long) 0xA89C1E189CA6D2CFL)   /*  399 */,
		//     unchecked((long) 0x0C6B18576AAADBC8L)   /*  400 */,    unchecked((long) 0xB65DEAA91299FAE3L)   /*  401 */,
		//     unchecked((long) 0xFB2B794B7F1027E7L)   /*  402 */,    unchecked((long) 0x04E4317F443B5BEBL)   /*  403 */,
		//     unchecked((long) 0x4B852D325939D0A6L)   /*  404 */,    unchecked((long) 0xD5AE6BEEFB207FFCL)   /*  405 */,
		//     unchecked((long) 0x309682B281C7D374L)   /*  406 */,    unchecked((long) 0xBAE309A194C3B475L)   /*  407 */,
		//     unchecked((long) 0x8CC3F97B13B49F05L)   /*  408 */,    unchecked((long) 0x98A9422FF8293967L)   /*  409 */,
		//     unchecked((long) 0x244B16B01076FF7CL)   /*  410 */,    unchecked((long) 0xF8BF571C663D67EEL)   /*  411 */,
		//     unchecked((long) 0x1F0D6758EEE30DA1L)   /*  412 */,    unchecked((long) 0xC9B611D97ADEB9B7L)   /*  413 */,
		//     unchecked((long) 0xB7AFD5887B6C57A2L)   /*  414 */,    unchecked((long) 0x6290AE846B984FE1L)   /*  415 */,
		//     unchecked((long) 0x94DF4CDEACC1A5FDL)   /*  416 */,    unchecked((long) 0x058A5BD1C5483AFFL)   /*  417 */,
		//     unchecked((long) 0x63166CC142BA3C37L)   /*  418 */,    unchecked((long) 0x8DB8526EB2F76F40L)   /*  419 */,
		//     unchecked((long) 0xE10880036F0D6D4EL)   /*  420 */,    unchecked((long) 0x9E0523C9971D311DL)   /*  421 */,
		//     unchecked((long) 0x45EC2824CC7CD691L)   /*  422 */,    unchecked((long) 0x575B8359E62382C9L)   /*  423 */,
		//     unchecked((long) 0xFA9E400DC4889995L)   /*  424 */,    unchecked((long) 0xD1823ECB45721568L)   /*  425 */,
		//     unchecked((long) 0xDAFD983B8206082FL)   /*  426 */,    unchecked((long) 0xAA7D29082386A8CBL)   /*  427 */,
		//     unchecked((long) 0x269FCD4403B87588L)   /*  428 */,    unchecked((long) 0x1B91F5F728BDD1E0L)   /*  429 */,
		//     unchecked((long) 0xE4669F39040201F6L)   /*  430 */,    unchecked((long) 0x7A1D7C218CF04ADEL)   /*  431 */,
		//     unchecked((long) 0x65623C29D79CE5CEL)   /*  432 */,    unchecked((long) 0x2368449096C00BB1L)   /*  433 */,
		//     unchecked((long) 0xAB9BF1879DA503BAL)   /*  434 */,    unchecked((long) 0xBC23ECB1A458058EL)   /*  435 */,
		//     unchecked((long) 0x9A58DF01BB401ECCL)   /*  436 */,    unchecked((long) 0xA070E868A85F143DL)   /*  437 */,
		//     unchecked((long) 0x4FF188307DF2239EL)   /*  438 */,    unchecked((long) 0x14D565B41A641183L)   /*  439 */,
		//     unchecked((long) 0xEE13337452701602L)   /*  440 */,    unchecked((long) 0x950E3DCF3F285E09L)   /*  441 */,
		//     unchecked((long) 0x59930254B9C80953L)   /*  442 */,    unchecked((long) 0x3BF299408930DA6DL)   /*  443 */,
		//     unchecked((long) 0xA955943F53691387L)   /*  444 */,    unchecked((long) 0xA15EDECAA9CB8784L)   /*  445 */,
		//     unchecked((long) 0x29142127352BE9A0L)   /*  446 */,    unchecked((long) 0x76F0371FFF4E7AFBL)   /*  447 */,
		//     unchecked((long) 0x0239F450274F2228L)   /*  448 */,    unchecked((long) 0xBB073AF01D5E868BL)   /*  449 */,
		//     unchecked((long) 0xBFC80571C10E96C1L)   /*  450 */,    unchecked((long) 0xD267088568222E23L)   /*  451 */,
		//     unchecked((long) 0x9671A3D48E80B5B0L)   /*  452 */,    unchecked((long) 0x55B5D38AE193BB81L)   /*  453 */,
		//     unchecked((long) 0x693AE2D0A18B04B8L)   /*  454 */,    unchecked((long) 0x5C48B4ECADD5335FL)   /*  455 */,
		//     unchecked((long) 0xFD743B194916A1CAL)   /*  456 */,    unchecked((long) 0x2577018134BE98C4L)   /*  457 */,
		//     unchecked((long) 0xE77987E83C54A4ADL)   /*  458 */,    unchecked((long) 0x28E11014DA33E1B9L)   /*  459 */,
		//     unchecked((long) 0x270CC59E226AA213L)   /*  460 */,    unchecked((long) 0x71495F756D1A5F60L)   /*  461 */,
		//     unchecked((long) 0x9BE853FB60AFEF77L)   /*  462 */,    unchecked((long) 0xADC786A7F7443DBFL)   /*  463 */,
		//     unchecked((long) 0x0904456173B29A82L)   /*  464 */,    unchecked((long) 0x58BC7A66C232BD5EL)   /*  465 */,
		//     unchecked((long) 0xF306558C673AC8B2L)   /*  466 */,    unchecked((long) 0x41F639C6B6C9772AL)   /*  467 */,
		//     unchecked((long) 0x216DEFE99FDA35DAL)   /*  468 */,    unchecked((long) 0x11640CC71C7BE615L)   /*  469 */,
		//     unchecked((long) 0x93C43694565C5527L)   /*  470 */,    unchecked((long) 0xEA038E6246777839L)   /*  471 */,
		//     unchecked((long) 0xF9ABF3CE5A3E2469L)   /*  472 */,    unchecked((long) 0x741E768D0FD312D2L)   /*  473 */,
		//     unchecked((long) 0x0144B883CED652C6L)   /*  474 */,    unchecked((long) 0xC20B5A5BA33F8552L)   /*  475 */,
		//     unchecked((long) 0x1AE69633C3435A9DL)   /*  476 */,    unchecked((long) 0x97A28CA4088CFDECL)   /*  477 */,
		//     unchecked((long) 0x8824A43C1E96F420L)   /*  478 */,    unchecked((long) 0x37612FA66EEEA746L)   /*  479 */,
		//     unchecked((long) 0x6B4CB165F9CF0E5AL)   /*  480 */,    unchecked((long) 0x43AA1C06A0ABFB4AL)   /*  481 */,
		//     unchecked((long) 0x7F4DC26FF162796BL)   /*  482 */,    unchecked((long) 0x6CBACC8E54ED9B0FL)   /*  483 */,
		//     unchecked((long) 0xA6B7FFEFD2BB253EL)   /*  484 */,    unchecked((long) 0x2E25BC95B0A29D4FL)   /*  485 */,
		//     unchecked((long) 0x86D6A58BDEF1388CL)   /*  486 */,    unchecked((long) 0xDED74AC576B6F054L)   /*  487 */,
		//     unchecked((long) 0x8030BDBC2B45805DL)   /*  488 */,    unchecked((long) 0x3C81AF70E94D9289L)   /*  489 */,
		//     unchecked((long) 0x3EFF6DDA9E3100DBL)   /*  490 */,    unchecked((long) 0xB38DC39FDFCC8847L)   /*  491 */,
		//     unchecked((long) 0x123885528D17B87EL)   /*  492 */,    unchecked((long) 0xF2DA0ED240B1B642L)   /*  493 */,
		//     unchecked((long) 0x44CEFADCD54BF9A9L)   /*  494 */,    unchecked((long) 0x1312200E433C7EE6L)   /*  495 */,
		//     unchecked((long) 0x9FFCC84F3A78C748L)   /*  496 */,    unchecked((long) 0xF0CD1F72248576BBL)   /*  497 */,
		//     unchecked((long) 0xEC6974053638CFE4L)   /*  498 */,    unchecked((long) 0x2BA7B67C0CEC4E4CL)   /*  499 */,
		//     unchecked((long) 0xAC2F4DF3E5CE32EDL)   /*  500 */,    unchecked((long) 0xCB33D14326EA4C11L)   /*  501 */,
		//     unchecked((long) 0xA4E9044CC77E58BCL)   /*  502 */,    unchecked((long) 0x5F513293D934FCEFL)   /*  503 */,
		//     unchecked((long) 0x5DC9645506E55444L)   /*  504 */,    unchecked((long) 0x50DE418F317DE40AL)   /*  505 */,
		//     unchecked((long) 0x388CB31A69DDE259L)   /*  506 */,    unchecked((long) 0x2DB4A83455820A86L)   /*  507 */,
		//     unchecked((long) 0x9010A91E84711AE9L)   /*  508 */,    unchecked((long) 0x4DF7F0B7B1498371L)   /*  509 */,
		//     unchecked((long) 0xD62A2EABC0977179L)   /*  510 */,    unchecked((long) 0x22FAC097AA8D5C0EL)   /*  511 */,
		// };
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_3 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____AC7FC16C704375F0F1DB433E70C6C2B90B1D797B17806DD74E7664CAD8BFA778_201_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t2_2), (void*)L_4);
		// private static readonly long[] t3 = {
		//     unchecked((long) 0xF49FCC2FF1DAF39BL)   /*  512 */,    unchecked((long) 0x487FD5C66FF29281L)   /*  513 */,
		//     unchecked((long) 0xE8A30667FCDCA83FL)   /*  514 */,    unchecked((long) 0x2C9B4BE3D2FCCE63L)   /*  515 */,
		//     unchecked((long) 0xDA3FF74B93FBBBC2L)   /*  516 */,    unchecked((long) 0x2FA165D2FE70BA66L)   /*  517 */,
		//     unchecked((long) 0xA103E279970E93D4L)   /*  518 */,    unchecked((long) 0xBECDEC77B0E45E71L)   /*  519 */,
		//     unchecked((long) 0xCFB41E723985E497L)   /*  520 */,    unchecked((long) 0xB70AAA025EF75017L)   /*  521 */,
		//     unchecked((long) 0xD42309F03840B8E0L)   /*  522 */,    unchecked((long) 0x8EFC1AD035898579L)   /*  523 */,
		//     unchecked((long) 0x96C6920BE2B2ABC5L)   /*  524 */,    unchecked((long) 0x66AF4163375A9172L)   /*  525 */,
		//     unchecked((long) 0x2174ABDCCA7127FBL)   /*  526 */,    unchecked((long) 0xB33CCEA64A72FF41L)   /*  527 */,
		//     unchecked((long) 0xF04A4933083066A5L)   /*  528 */,    unchecked((long) 0x8D970ACDD7289AF5L)   /*  529 */,
		//     unchecked((long) 0x8F96E8E031C8C25EL)   /*  530 */,    unchecked((long) 0xF3FEC02276875D47L)   /*  531 */,
		//     unchecked((long) 0xEC7BF310056190DDL)   /*  532 */,    unchecked((long) 0xF5ADB0AEBB0F1491L)   /*  533 */,
		//     unchecked((long) 0x9B50F8850FD58892L)   /*  534 */,    unchecked((long) 0x4975488358B74DE8L)   /*  535 */,
		//     unchecked((long) 0xA3354FF691531C61L)   /*  536 */,    unchecked((long) 0x0702BBE481D2C6EEL)   /*  537 */,
		//     unchecked((long) 0x89FB24057DEDED98L)   /*  538 */,    unchecked((long) 0xAC3075138596E902L)   /*  539 */,
		//     unchecked((long) 0x1D2D3580172772EDL)   /*  540 */,    unchecked((long) 0xEB738FC28E6BC30DL)   /*  541 */,
		//     unchecked((long) 0x5854EF8F63044326L)   /*  542 */,    unchecked((long) 0x9E5C52325ADD3BBEL)   /*  543 */,
		//     unchecked((long) 0x90AA53CF325C4623L)   /*  544 */,    unchecked((long) 0xC1D24D51349DD067L)   /*  545 */,
		//     unchecked((long) 0x2051CFEEA69EA624L)   /*  546 */,    unchecked((long) 0x13220F0A862E7E4FL)   /*  547 */,
		//     unchecked((long) 0xCE39399404E04864L)   /*  548 */,    unchecked((long) 0xD9C42CA47086FCB7L)   /*  549 */,
		//     unchecked((long) 0x685AD2238A03E7CCL)   /*  550 */,    unchecked((long) 0x066484B2AB2FF1DBL)   /*  551 */,
		//     unchecked((long) 0xFE9D5D70EFBF79ECL)   /*  552 */,    unchecked((long) 0x5B13B9DD9C481854L)   /*  553 */,
		//     unchecked((long) 0x15F0D475ED1509ADL)   /*  554 */,    unchecked((long) 0x0BEBCD060EC79851L)   /*  555 */,
		//     unchecked((long) 0xD58C6791183AB7F8L)   /*  556 */,    unchecked((long) 0xD1187C5052F3EEE4L)   /*  557 */,
		//     unchecked((long) 0xC95D1192E54E82FFL)   /*  558 */,    unchecked((long) 0x86EEA14CB9AC6CA2L)   /*  559 */,
		//     unchecked((long) 0x3485BEB153677D5DL)   /*  560 */,    unchecked((long) 0xDD191D781F8C492AL)   /*  561 */,
		//     unchecked((long) 0xF60866BAA784EBF9L)   /*  562 */,    unchecked((long) 0x518F643BA2D08C74L)   /*  563 */,
		//     unchecked((long) 0x8852E956E1087C22L)   /*  564 */,    unchecked((long) 0xA768CB8DC410AE8DL)   /*  565 */,
		//     unchecked((long) 0x38047726BFEC8E1AL)   /*  566 */,    unchecked((long) 0xA67738B4CD3B45AAL)   /*  567 */,
		//     unchecked((long) 0xAD16691CEC0DDE19L)   /*  568 */,    unchecked((long) 0xC6D4319380462E07L)   /*  569 */,
		//     unchecked((long) 0xC5A5876D0BA61938L)   /*  570 */,    unchecked((long) 0x16B9FA1FA58FD840L)   /*  571 */,
		//     unchecked((long) 0x188AB1173CA74F18L)   /*  572 */,    unchecked((long) 0xABDA2F98C99C021FL)   /*  573 */,
		//     unchecked((long) 0x3E0580AB134AE816L)   /*  574 */,    unchecked((long) 0x5F3B05B773645ABBL)   /*  575 */,
		//     unchecked((long) 0x2501A2BE5575F2F6L)   /*  576 */,    unchecked((long) 0x1B2F74004E7E8BA9L)   /*  577 */,
		//     unchecked((long) 0x1CD7580371E8D953L)   /*  578 */,    unchecked((long) 0x7F6ED89562764E30L)   /*  579 */,
		//     unchecked((long) 0xB15926FF596F003DL)   /*  580 */,    unchecked((long) 0x9F65293DA8C5D6B9L)   /*  581 */,
		//     unchecked((long) 0x6ECEF04DD690F84CL)   /*  582 */,    unchecked((long) 0x4782275FFF33AF88L)   /*  583 */,
		//     unchecked((long) 0xE41433083F820801L)   /*  584 */,    unchecked((long) 0xFD0DFE409A1AF9B5L)   /*  585 */,
		//     unchecked((long) 0x4325A3342CDB396BL)   /*  586 */,    unchecked((long) 0x8AE77E62B301B252L)   /*  587 */,
		//     unchecked((long) 0xC36F9E9F6655615AL)   /*  588 */,    unchecked((long) 0x85455A2D92D32C09L)   /*  589 */,
		//     unchecked((long) 0xF2C7DEA949477485L)   /*  590 */,    unchecked((long) 0x63CFB4C133A39EBAL)   /*  591 */,
		//     unchecked((long) 0x83B040CC6EBC5462L)   /*  592 */,    unchecked((long) 0x3B9454C8FDB326B0L)   /*  593 */,
		//     unchecked((long) 0x56F56A9E87FFD78CL)   /*  594 */,    unchecked((long) 0x2DC2940D99F42BC6L)   /*  595 */,
		//     unchecked((long) 0x98F7DF096B096E2DL)   /*  596 */,    unchecked((long) 0x19A6E01E3AD852BFL)   /*  597 */,
		//     unchecked((long) 0x42A99CCBDBD4B40BL)   /*  598 */,    unchecked((long) 0xA59998AF45E9C559L)   /*  599 */,
		//     unchecked((long) 0x366295E807D93186L)   /*  600 */,    unchecked((long) 0x6B48181BFAA1F773L)   /*  601 */,
		//     unchecked((long) 0x1FEC57E2157A0A1DL)   /*  602 */,    unchecked((long) 0x4667446AF6201AD5L)   /*  603 */,
		//     unchecked((long) 0xE615EBCACFB0F075L)   /*  604 */,    unchecked((long) 0xB8F31F4F68290778L)   /*  605 */,
		//     unchecked((long) 0x22713ED6CE22D11EL)   /*  606 */,    unchecked((long) 0x3057C1A72EC3C93BL)   /*  607 */,
		//     unchecked((long) 0xCB46ACC37C3F1F2FL)   /*  608 */,    unchecked((long) 0xDBB893FD02AAF50EL)   /*  609 */,
		//     unchecked((long) 0x331FD92E600B9FCFL)   /*  610 */,    unchecked((long) 0xA498F96148EA3AD6L)   /*  611 */,
		//     unchecked((long) 0xA8D8426E8B6A83EAL)   /*  612 */,    unchecked((long) 0xA089B274B7735CDCL)   /*  613 */,
		//     unchecked((long) 0x87F6B3731E524A11L)   /*  614 */,    unchecked((long) 0x118808E5CBC96749L)   /*  615 */,
		//     unchecked((long) 0x9906E4C7B19BD394L)   /*  616 */,    unchecked((long) 0xAFED7F7E9B24A20CL)   /*  617 */,
		//     unchecked((long) 0x6509EADEEB3644A7L)   /*  618 */,    unchecked((long) 0x6C1EF1D3E8EF0EDEL)   /*  619 */,
		//     unchecked((long) 0xB9C97D43E9798FB4L)   /*  620 */,    unchecked((long) 0xA2F2D784740C28A3L)   /*  621 */,
		//     unchecked((long) 0x7B8496476197566FL)   /*  622 */,    unchecked((long) 0x7A5BE3E6B65F069DL)   /*  623 */,
		//     unchecked((long) 0xF96330ED78BE6F10L)   /*  624 */,    unchecked((long) 0xEEE60DE77A076A15L)   /*  625 */,
		//     unchecked((long) 0x2B4BEE4AA08B9BD0L)   /*  626 */,    unchecked((long) 0x6A56A63EC7B8894EL)   /*  627 */,
		//     unchecked((long) 0x02121359BA34FEF4L)   /*  628 */,    unchecked((long) 0x4CBF99F8283703FCL)   /*  629 */,
		//     unchecked((long) 0x398071350CAF30C8L)   /*  630 */,    unchecked((long) 0xD0A77A89F017687AL)   /*  631 */,
		//     unchecked((long) 0xF1C1A9EB9E423569L)   /*  632 */,    unchecked((long) 0x8C7976282DEE8199L)   /*  633 */,
		//     unchecked((long) 0x5D1737A5DD1F7ABDL)   /*  634 */,    unchecked((long) 0x4F53433C09A9FA80L)   /*  635 */,
		//     unchecked((long) 0xFA8B0C53DF7CA1D9L)   /*  636 */,    unchecked((long) 0x3FD9DCBC886CCB77L)   /*  637 */,
		//     unchecked((long) 0xC040917CA91B4720L)   /*  638 */,    unchecked((long) 0x7DD00142F9D1DCDFL)   /*  639 */,
		//     unchecked((long) 0x8476FC1D4F387B58L)   /*  640 */,    unchecked((long) 0x23F8E7C5F3316503L)   /*  641 */,
		//     unchecked((long) 0x032A2244E7E37339L)   /*  642 */,    unchecked((long) 0x5C87A5D750F5A74BL)   /*  643 */,
		//     unchecked((long) 0x082B4CC43698992EL)   /*  644 */,    unchecked((long) 0xDF917BECB858F63CL)   /*  645 */,
		//     unchecked((long) 0x3270B8FC5BF86DDAL)   /*  646 */,    unchecked((long) 0x10AE72BB29B5DD76L)   /*  647 */,
		//     unchecked((long) 0x576AC94E7700362BL)   /*  648 */,    unchecked((long) 0x1AD112DAC61EFB8FL)   /*  649 */,
		//     unchecked((long) 0x691BC30EC5FAA427L)   /*  650 */,    unchecked((long) 0xFF246311CC327143L)   /*  651 */,
		//     unchecked((long) 0x3142368E30E53206L)   /*  652 */,    unchecked((long) 0x71380E31E02CA396L)   /*  653 */,
		//     unchecked((long) 0x958D5C960AAD76F1L)   /*  654 */,    unchecked((long) 0xF8D6F430C16DA536L)   /*  655 */,
		//     unchecked((long) 0xC8FFD13F1BE7E1D2L)   /*  656 */,    unchecked((long) 0x7578AE66004DDBE1L)   /*  657 */,
		//     unchecked((long) 0x05833F01067BE646L)   /*  658 */,    unchecked((long) 0xBB34B5AD3BFE586DL)   /*  659 */,
		//     unchecked((long) 0x095F34C9A12B97F0L)   /*  660 */,    unchecked((long) 0x247AB64525D60CA8L)   /*  661 */,
		//     unchecked((long) 0xDCDBC6F3017477D1L)   /*  662 */,    unchecked((long) 0x4A2E14D4DECAD24DL)   /*  663 */,
		//     unchecked((long) 0xBDB5E6D9BE0A1EEBL)   /*  664 */,    unchecked((long) 0x2A7E70F7794301ABL)   /*  665 */,
		//     unchecked((long) 0xDEF42D8A270540FDL)   /*  666 */,    unchecked((long) 0x01078EC0A34C22C1L)   /*  667 */,
		//     unchecked((long) 0xE5DE511AF4C16387L)   /*  668 */,    unchecked((long) 0x7EBB3A52BD9A330AL)   /*  669 */,
		//     unchecked((long) 0x77697857AA7D6435L)   /*  670 */,    unchecked((long) 0x004E831603AE4C32L)   /*  671 */,
		//     unchecked((long) 0xE7A21020AD78E312L)   /*  672 */,    unchecked((long) 0x9D41A70C6AB420F2L)   /*  673 */,
		//     unchecked((long) 0x28E06C18EA1141E6L)   /*  674 */,    unchecked((long) 0xD2B28CBD984F6B28L)   /*  675 */,
		//     unchecked((long) 0x26B75F6C446E9D83L)   /*  676 */,    unchecked((long) 0xBA47568C4D418D7FL)   /*  677 */,
		//     unchecked((long) 0xD80BADBFE6183D8EL)   /*  678 */,    unchecked((long) 0x0E206D7F5F166044L)   /*  679 */,
		//     unchecked((long) 0xE258A43911CBCA3EL)   /*  680 */,    unchecked((long) 0x723A1746B21DC0BCL)   /*  681 */,
		//     unchecked((long) 0xC7CAA854F5D7CDD3L)   /*  682 */,    unchecked((long) 0x7CAC32883D261D9CL)   /*  683 */,
		//     unchecked((long) 0x7690C26423BA942CL)   /*  684 */,    unchecked((long) 0x17E55524478042B8L)   /*  685 */,
		//     unchecked((long) 0xE0BE477656A2389FL)   /*  686 */,    unchecked((long) 0x4D289B5E67AB2DA0L)   /*  687 */,
		//     unchecked((long) 0x44862B9C8FBBFD31L)   /*  688 */,    unchecked((long) 0xB47CC8049D141365L)   /*  689 */,
		//     unchecked((long) 0x822C1B362B91C793L)   /*  690 */,    unchecked((long) 0x4EB14655FB13DFD8L)   /*  691 */,
		//     unchecked((long) 0x1ECBBA0714E2A97BL)   /*  692 */,    unchecked((long) 0x6143459D5CDE5F14L)   /*  693 */,
		//     unchecked((long) 0x53A8FBF1D5F0AC89L)   /*  694 */,    unchecked((long) 0x97EA04D81C5E5B00L)   /*  695 */,
		//     unchecked((long) 0x622181A8D4FDB3F3L)   /*  696 */,    unchecked((long) 0xE9BCD341572A1208L)   /*  697 */,
		//     unchecked((long) 0x1411258643CCE58AL)   /*  698 */,    unchecked((long) 0x9144C5FEA4C6E0A4L)   /*  699 */,
		//     unchecked((long) 0x0D33D06565CF620FL)   /*  700 */,    unchecked((long) 0x54A48D489F219CA1L)   /*  701 */,
		//     unchecked((long) 0xC43E5EAC6D63C821L)   /*  702 */,    unchecked((long) 0xA9728B3A72770DAFL)   /*  703 */,
		//     unchecked((long) 0xD7934E7B20DF87EFL)   /*  704 */,    unchecked((long) 0xE35503B61A3E86E5L)   /*  705 */,
		//     unchecked((long) 0xCAE321FBC819D504L)   /*  706 */,    unchecked((long) 0x129A50B3AC60BFA6L)   /*  707 */,
		//     unchecked((long) 0xCD5E68EA7E9FB6C3L)   /*  708 */,    unchecked((long) 0xB01C90199483B1C7L)   /*  709 */,
		//     unchecked((long) 0x3DE93CD5C295376CL)   /*  710 */,    unchecked((long) 0xAED52EDF2AB9AD13L)   /*  711 */,
		//     unchecked((long) 0x2E60F512C0A07884L)   /*  712 */,    unchecked((long) 0xBC3D86A3E36210C9L)   /*  713 */,
		//     unchecked((long) 0x35269D9B163951CEL)   /*  714 */,    unchecked((long) 0x0C7D6E2AD0CDB5FAL)   /*  715 */,
		//     unchecked((long) 0x59E86297D87F5733L)   /*  716 */,    unchecked((long) 0x298EF221898DB0E7L)   /*  717 */,
		//     unchecked((long) 0x55000029D1A5AA7EL)   /*  718 */,    unchecked((long) 0x8BC08AE1B5061B45L)   /*  719 */,
		//     unchecked((long) 0xC2C31C2B6C92703AL)   /*  720 */,    unchecked((long) 0x94CC596BAF25EF42L)   /*  721 */,
		//     unchecked((long) 0x0A1D73DB22540456L)   /*  722 */,    unchecked((long) 0x04B6A0F9D9C4179AL)   /*  723 */,
		//     unchecked((long) 0xEFFDAFA2AE3D3C60L)   /*  724 */,    unchecked((long) 0xF7C8075BB49496C4L)   /*  725 */,
		//     unchecked((long) 0x9CC5C7141D1CD4E3L)   /*  726 */,    unchecked((long) 0x78BD1638218E5534L)   /*  727 */,
		//     unchecked((long) 0xB2F11568F850246AL)   /*  728 */,    unchecked((long) 0xEDFABCFA9502BC29L)   /*  729 */,
		//     unchecked((long) 0x796CE5F2DA23051BL)   /*  730 */,    unchecked((long) 0xAAE128B0DC93537CL)   /*  731 */,
		//     unchecked((long) 0x3A493DA0EE4B29AEL)   /*  732 */,    unchecked((long) 0xB5DF6B2C416895D7L)   /*  733 */,
		//     unchecked((long) 0xFCABBD25122D7F37L)   /*  734 */,    unchecked((long) 0x70810B58105DC4B1L)   /*  735 */,
		//     unchecked((long) 0xE10FDD37F7882A90L)   /*  736 */,    unchecked((long) 0x524DCAB5518A3F5CL)   /*  737 */,
		//     unchecked((long) 0x3C9E85878451255BL)   /*  738 */,    unchecked((long) 0x4029828119BD34E2L)   /*  739 */,
		//     unchecked((long) 0x74A05B6F5D3CECCBL)   /*  740 */,    unchecked((long) 0xB610021542E13ECAL)   /*  741 */,
		//     unchecked((long) 0x0FF979D12F59E2ACL)   /*  742 */,    unchecked((long) 0x6037DA27E4F9CC50L)   /*  743 */,
		//     unchecked((long) 0x5E92975A0DF1847DL)   /*  744 */,    unchecked((long) 0xD66DE190D3E623FEL)   /*  745 */,
		//     unchecked((long) 0x5032D6B87B568048L)   /*  746 */,    unchecked((long) 0x9A36B7CE8235216EL)   /*  747 */,
		//     unchecked((long) 0x80272A7A24F64B4AL)   /*  748 */,    unchecked((long) 0x93EFED8B8C6916F7L)   /*  749 */,
		//     unchecked((long) 0x37DDBFF44CCE1555L)   /*  750 */,    unchecked((long) 0x4B95DB5D4B99BD25L)   /*  751 */,
		//     unchecked((long) 0x92D3FDA169812FC0L)   /*  752 */,    unchecked((long) 0xFB1A4A9A90660BB6L)   /*  753 */,
		//     unchecked((long) 0x730C196946A4B9B2L)   /*  754 */,    unchecked((long) 0x81E289AA7F49DA68L)   /*  755 */,
		//     unchecked((long) 0x64669A0F83B1A05FL)   /*  756 */,    unchecked((long) 0x27B3FF7D9644F48BL)   /*  757 */,
		//     unchecked((long) 0xCC6B615C8DB675B3L)   /*  758 */,    unchecked((long) 0x674F20B9BCEBBE95L)   /*  759 */,
		//     unchecked((long) 0x6F31238275655982L)   /*  760 */,    unchecked((long) 0x5AE488713E45CF05L)   /*  761 */,
		//     unchecked((long) 0xBF619F9954C21157L)   /*  762 */,    unchecked((long) 0xEABAC46040A8EAE9L)   /*  763 */,
		//     unchecked((long) 0x454C6FE9F2C0C1CDL)   /*  764 */,    unchecked((long) 0x419CF6496412691CL)   /*  765 */,
		//     unchecked((long) 0xD3DC3BEF265B0F70L)   /*  766 */,    unchecked((long) 0x6D0E60F5C3578A9EL)   /*  767 */,
		// };
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_6 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____3CA024F96B6FA0D283063E7C2B60A83C2B07F26AE1788CDFAEEB231C7725ED92_64_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t3_3), (void*)L_7);
		// private static readonly long[] t4 = {
		//     unchecked((long) 0x5B0E608526323C55L)   /*  768 */,    unchecked((long) 0x1A46C1A9FA1B59F5L)   /*  769 */,
		//     unchecked((long) 0xA9E245A17C4C8FFAL)   /*  770 */,    unchecked((long) 0x65CA5159DB2955D7L)   /*  771 */,
		//     unchecked((long) 0x05DB0A76CE35AFC2L)   /*  772 */,    unchecked((long) 0x81EAC77EA9113D45L)   /*  773 */,
		//     unchecked((long) 0x528EF88AB6AC0A0DL)   /*  774 */,    unchecked((long) 0xA09EA253597BE3FFL)   /*  775 */,
		//     unchecked((long) 0x430DDFB3AC48CD56L)   /*  776 */,    unchecked((long) 0xC4B3A67AF45CE46FL)   /*  777 */,
		//     unchecked((long) 0x4ECECFD8FBE2D05EL)   /*  778 */,    unchecked((long) 0x3EF56F10B39935F0L)   /*  779 */,
		//     unchecked((long) 0x0B22D6829CD619C6L)   /*  780 */,    unchecked((long) 0x17FD460A74DF2069L)   /*  781 */,
		//     unchecked((long) 0x6CF8CC8E8510ED40L)   /*  782 */,    unchecked((long) 0xD6C824BF3A6ECAA7L)   /*  783 */,
		//     unchecked((long) 0x61243D581A817049L)   /*  784 */,    unchecked((long) 0x048BACB6BBC163A2L)   /*  785 */,
		//     unchecked((long) 0xD9A38AC27D44CC32L)   /*  786 */,    unchecked((long) 0x7FDDFF5BAAF410ABL)   /*  787 */,
		//     unchecked((long) 0xAD6D495AA804824BL)   /*  788 */,    unchecked((long) 0xE1A6A74F2D8C9F94L)   /*  789 */,
		//     unchecked((long) 0xD4F7851235DEE8E3L)   /*  790 */,    unchecked((long) 0xFD4B7F886540D893L)   /*  791 */,
		//     unchecked((long) 0x247C20042AA4BFDAL)   /*  792 */,    unchecked((long) 0x096EA1C517D1327CL)   /*  793 */,
		//     unchecked((long) 0xD56966B4361A6685L)   /*  794 */,    unchecked((long) 0x277DA5C31221057DL)   /*  795 */,
		//     unchecked((long) 0x94D59893A43ACFF7L)   /*  796 */,    unchecked((long) 0x64F0C51CCDC02281L)   /*  797 */,
		//     unchecked((long) 0x3D33BCC4FF6189DBL)   /*  798 */,    unchecked((long) 0xE005CB184CE66AF1L)   /*  799 */,
		//     unchecked((long) 0xFF5CCD1D1DB99BEAL)   /*  800 */,    unchecked((long) 0xB0B854A7FE42980FL)   /*  801 */,
		//     unchecked((long) 0x7BD46A6A718D4B9FL)   /*  802 */,    unchecked((long) 0xD10FA8CC22A5FD8CL)   /*  803 */,
		//     unchecked((long) 0xD31484952BE4BD31L)   /*  804 */,    unchecked((long) 0xC7FA975FCB243847L)   /*  805 */,
		//     unchecked((long) 0x4886ED1E5846C407L)   /*  806 */,    unchecked((long) 0x28CDDB791EB70B04L)   /*  807 */,
		//     unchecked((long) 0xC2B00BE2F573417FL)   /*  808 */,    unchecked((long) 0x5C9590452180F877L)   /*  809 */,
		//     unchecked((long) 0x7A6BDDFFF370EB00L)   /*  810 */,    unchecked((long) 0xCE509E38D6D9D6A4L)   /*  811 */,
		//     unchecked((long) 0xEBEB0F00647FA702L)   /*  812 */,    unchecked((long) 0x1DCC06CF76606F06L)   /*  813 */,
		//     unchecked((long) 0xE4D9F28BA286FF0AL)   /*  814 */,    unchecked((long) 0xD85A305DC918C262L)   /*  815 */,
		//     unchecked((long) 0x475B1D8732225F54L)   /*  816 */,    unchecked((long) 0x2D4FB51668CCB5FEL)   /*  817 */,
		//     unchecked((long) 0xA679B9D9D72BBA20L)   /*  818 */,    unchecked((long) 0x53841C0D912D43A5L)   /*  819 */,
		//     unchecked((long) 0x3B7EAA48BF12A4E8L)   /*  820 */,    unchecked((long) 0x781E0E47F22F1DDFL)   /*  821 */,
		//     unchecked((long) 0xEFF20CE60AB50973L)   /*  822 */,    unchecked((long) 0x20D261D19DFFB742L)   /*  823 */,
		//     unchecked((long) 0x16A12B03062A2E39L)   /*  824 */,    unchecked((long) 0x1960EB2239650495L)   /*  825 */,
		//     unchecked((long) 0x251C16FED50EB8B8L)   /*  826 */,    unchecked((long) 0x9AC0C330F826016EL)   /*  827 */,
		//     unchecked((long) 0xED152665953E7671L)   /*  828 */,    unchecked((long) 0x02D63194A6369570L)   /*  829 */,
		//     unchecked((long) 0x5074F08394B1C987L)   /*  830 */,    unchecked((long) 0x70BA598C90B25CE1L)   /*  831 */,
		//     unchecked((long) 0x794A15810B9742F6L)   /*  832 */,    unchecked((long) 0x0D5925E9FCAF8C6CL)   /*  833 */,
		//     unchecked((long) 0x3067716CD868744EL)   /*  834 */,    unchecked((long) 0x910AB077E8D7731BL)   /*  835 */,
		//     unchecked((long) 0x6A61BBDB5AC42F61L)   /*  836 */,    unchecked((long) 0x93513EFBF0851567L)   /*  837 */,
		//     unchecked((long) 0xF494724B9E83E9D5L)   /*  838 */,    unchecked((long) 0xE887E1985C09648DL)   /*  839 */,
		//     unchecked((long) 0x34B1D3C675370CFDL)   /*  840 */,    unchecked((long) 0xDC35E433BC0D255DL)   /*  841 */,
		//     unchecked((long) 0xD0AAB84234131BE0L)   /*  842 */,    unchecked((long) 0x08042A50B48B7EAFL)   /*  843 */,
		//     unchecked((long) 0x9997C4EE44A3AB35L)   /*  844 */,    unchecked((long) 0x829A7B49201799D0L)   /*  845 */,
		//     unchecked((long) 0x263B8307B7C54441L)   /*  846 */,    unchecked((long) 0x752F95F4FD6A6CA6L)   /*  847 */,
		//     unchecked((long) 0x927217402C08C6E5L)   /*  848 */,    unchecked((long) 0x2A8AB754A795D9EEL)   /*  849 */,
		//     unchecked((long) 0xA442F7552F72943DL)   /*  850 */,    unchecked((long) 0x2C31334E19781208L)   /*  851 */,
		//     unchecked((long) 0x4FA98D7CEAEE6291L)   /*  852 */,    unchecked((long) 0x55C3862F665DB309L)   /*  853 */,
		//     unchecked((long) 0xBD0610175D53B1F3L)   /*  854 */,    unchecked((long) 0x46FE6CB840413F27L)   /*  855 */,
		//     unchecked((long) 0x3FE03792DF0CFA59L)   /*  856 */,    unchecked((long) 0xCFE700372EB85E8FL)   /*  857 */,
		//     unchecked((long) 0xA7BE29E7ADBCE118L)   /*  858 */,    unchecked((long) 0xE544EE5CDE8431DDL)   /*  859 */,
		//     unchecked((long) 0x8A781B1B41F1873EL)   /*  860 */,    unchecked((long) 0xA5C94C78A0D2F0E7L)   /*  861 */,
		//     unchecked((long) 0x39412E2877B60728L)   /*  862 */,    unchecked((long) 0xA1265EF3AFC9A62CL)   /*  863 */,
		//     unchecked((long) 0xBCC2770C6A2506C5L)   /*  864 */,    unchecked((long) 0x3AB66DD5DCE1CE12L)   /*  865 */,
		//     unchecked((long) 0xE65499D04A675B37L)   /*  866 */,    unchecked((long) 0x7D8F523481BFD216L)   /*  867 */,
		//     unchecked((long) 0x0F6F64FCEC15F389L)   /*  868 */,    unchecked((long) 0x74EFBE618B5B13C8L)   /*  869 */,
		//     unchecked((long) 0xACDC82B714273E1DL)   /*  870 */,    unchecked((long) 0xDD40BFE003199D17L)   /*  871 */,
		//     unchecked((long) 0x37E99257E7E061F8L)   /*  872 */,    unchecked((long) 0xFA52626904775AAAL)   /*  873 */,
		//     unchecked((long) 0x8BBBF63A463D56F9L)   /*  874 */,    unchecked((long) 0xF0013F1543A26E64L)   /*  875 */,
		//     unchecked((long) 0xA8307E9F879EC898L)   /*  876 */,    unchecked((long) 0xCC4C27A4150177CCL)   /*  877 */,
		//     unchecked((long) 0x1B432F2CCA1D3348L)   /*  878 */,    unchecked((long) 0xDE1D1F8F9F6FA013L)   /*  879 */,
		//     unchecked((long) 0x606602A047A7DDD6L)   /*  880 */,    unchecked((long) 0xD237AB64CC1CB2C7L)   /*  881 */,
		//     unchecked((long) 0x9B938E7225FCD1D3L)   /*  882 */,    unchecked((long) 0xEC4E03708E0FF476L)   /*  883 */,
		//     unchecked((long) 0xFEB2FBDA3D03C12DL)   /*  884 */,    unchecked((long) 0xAE0BCED2EE43889AL)   /*  885 */,
		//     unchecked((long) 0x22CB8923EBFB4F43L)   /*  886 */,    unchecked((long) 0x69360D013CF7396DL)   /*  887 */,
		//     unchecked((long) 0x855E3602D2D4E022L)   /*  888 */,    unchecked((long) 0x073805BAD01F784CL)   /*  889 */,
		//     unchecked((long) 0x33E17A133852F546L)   /*  890 */,    unchecked((long) 0xDF4874058AC7B638L)   /*  891 */,
		//     unchecked((long) 0xBA92B29C678AA14AL)   /*  892 */,    unchecked((long) 0x0CE89FC76CFAADCDL)   /*  893 */,
		//     unchecked((long) 0x5F9D4E0908339E34L)   /*  894 */,    unchecked((long) 0xF1AFE9291F5923B9L)   /*  895 */,
		//     unchecked((long) 0x6E3480F60F4A265FL)   /*  896 */,    unchecked((long) 0xEEBF3A2AB29B841CL)   /*  897 */,
		//     unchecked((long) 0xE21938A88F91B4ADL)   /*  898 */,    unchecked((long) 0x57DFEFF845C6D3C3L)   /*  899 */,
		//     unchecked((long) 0x2F006B0BF62CAAF2L)   /*  900 */,    unchecked((long) 0x62F479EF6F75EE78L)   /*  901 */,
		//     unchecked((long) 0x11A55AD41C8916A9L)   /*  902 */,    unchecked((long) 0xF229D29084FED453L)   /*  903 */,
		//     unchecked((long) 0x42F1C27B16B000E6L)   /*  904 */,    unchecked((long) 0x2B1F76749823C074L)   /*  905 */,
		//     unchecked((long) 0x4B76ECA3C2745360L)   /*  906 */,    unchecked((long) 0x8C98F463B91691BDL)   /*  907 */,
		//     unchecked((long) 0x14BCC93CF1ADE66AL)   /*  908 */,    unchecked((long) 0x8885213E6D458397L)   /*  909 */,
		//     unchecked((long) 0x8E177DF0274D4711L)   /*  910 */,    unchecked((long) 0xB49B73B5503F2951L)   /*  911 */,
		//     unchecked((long) 0x10168168C3F96B6BL)   /*  912 */,    unchecked((long) 0x0E3D963B63CAB0AEL)   /*  913 */,
		//     unchecked((long) 0x8DFC4B5655A1DB14L)   /*  914 */,    unchecked((long) 0xF789F1356E14DE5CL)   /*  915 */,
		//     unchecked((long) 0x683E68AF4E51DAC1L)   /*  916 */,    unchecked((long) 0xC9A84F9D8D4B0FD9L)   /*  917 */,
		//     unchecked((long) 0x3691E03F52A0F9D1L)   /*  918 */,    unchecked((long) 0x5ED86E46E1878E80L)   /*  919 */,
		//     unchecked((long) 0x3C711A0E99D07150L)   /*  920 */,    unchecked((long) 0x5A0865B20C4E9310L)   /*  921 */,
		//     unchecked((long) 0x56FBFC1FE4F0682EL)   /*  922 */,    unchecked((long) 0xEA8D5DE3105EDF9BL)   /*  923 */,
		//     unchecked((long) 0x71ABFDB12379187AL)   /*  924 */,    unchecked((long) 0x2EB99DE1BEE77B9CL)   /*  925 */,
		//     unchecked((long) 0x21ECC0EA33CF4523L)   /*  926 */,    unchecked((long) 0x59A4D7521805C7A1L)   /*  927 */,
		//     unchecked((long) 0x3896F5EB56AE7C72L)   /*  928 */,    unchecked((long) 0xAA638F3DB18F75DCL)   /*  929 */,
		//     unchecked((long) 0x9F39358DABE9808EL)   /*  930 */,    unchecked((long) 0xB7DEFA91C00B72ACL)   /*  931 */,
		//     unchecked((long) 0x6B5541FD62492D92L)   /*  932 */,    unchecked((long) 0x6DC6DEE8F92E4D5BL)   /*  933 */,
		//     unchecked((long) 0x353F57ABC4BEEA7EL)   /*  934 */,    unchecked((long) 0x735769D6DA5690CEL)   /*  935 */,
		//     unchecked((long) 0x0A234AA642391484L)   /*  936 */,    unchecked((long) 0xF6F9508028F80D9DL)   /*  937 */,
		//     unchecked((long) 0xB8E319A27AB3F215L)   /*  938 */,    unchecked((long) 0x31AD9C1151341A4DL)   /*  939 */,
		//     unchecked((long) 0x773C22A57BEF5805L)   /*  940 */,    unchecked((long) 0x45C7561A07968633L)   /*  941 */,
		//     unchecked((long) 0xF913DA9E249DBE36L)   /*  942 */,    unchecked((long) 0xDA652D9B78A64C68L)   /*  943 */,
		//     unchecked((long) 0x4C27A97F3BC334EFL)   /*  944 */,    unchecked((long) 0x76621220E66B17F4L)   /*  945 */,
		//     unchecked((long) 0x967743899ACD7D0BL)   /*  946 */,    unchecked((long) 0xF3EE5BCAE0ED6782L)   /*  947 */,
		//     unchecked((long) 0x409F753600C879FCL)   /*  948 */,    unchecked((long) 0x06D09A39B5926DB6L)   /*  949 */,
		//     unchecked((long) 0x6F83AEB0317AC588L)   /*  950 */,    unchecked((long) 0x01E6CA4A86381F21L)   /*  951 */,
		//     unchecked((long) 0x66FF3462D19F3025L)   /*  952 */,    unchecked((long) 0x72207C24DDFD3BFBL)   /*  953 */,
		//     unchecked((long) 0x4AF6B6D3E2ECE2EBL)   /*  954 */,    unchecked((long) 0x9C994DBEC7EA08DEL)   /*  955 */,
		//     unchecked((long) 0x49ACE597B09A8BC4L)   /*  956 */,    unchecked((long) 0xB38C4766CF0797BAL)   /*  957 */,
		//     unchecked((long) 0x131B9373C57C2A75L)   /*  958 */,    unchecked((long) 0xB1822CCE61931E58L)   /*  959 */,
		//     unchecked((long) 0x9D7555B909BA1C0CL)   /*  960 */,    unchecked((long) 0x127FAFDD937D11D2L)   /*  961 */,
		//     unchecked((long) 0x29DA3BADC66D92E4L)   /*  962 */,    unchecked((long) 0xA2C1D57154C2ECBCL)   /*  963 */,
		//     unchecked((long) 0x58C5134D82F6FE24L)   /*  964 */,    unchecked((long) 0x1C3AE3515B62274FL)   /*  965 */,
		//     unchecked((long) 0xE907C82E01CB8126L)   /*  966 */,    unchecked((long) 0xF8ED091913E37FCBL)   /*  967 */,
		//     unchecked((long) 0x3249D8F9C80046C9L)   /*  968 */,    unchecked((long) 0x80CF9BEDE388FB63L)   /*  969 */,
		//     unchecked((long) 0x1881539A116CF19EL)   /*  970 */,    unchecked((long) 0x5103F3F76BD52457L)   /*  971 */,
		//     unchecked((long) 0x15B7E6F5AE47F7A8L)   /*  972 */,    unchecked((long) 0xDBD7C6DED47E9CCFL)   /*  973 */,
		//     unchecked((long) 0x44E55C410228BB1AL)   /*  974 */,    unchecked((long) 0xB647D4255EDB4E99L)   /*  975 */,
		//     unchecked((long) 0x5D11882BB8AAFC30L)   /*  976 */,    unchecked((long) 0xF5098BBB29D3212AL)   /*  977 */,
		//     unchecked((long) 0x8FB5EA14E90296B3L)   /*  978 */,    unchecked((long) 0x677B942157DD025AL)   /*  979 */,
		//     unchecked((long) 0xFB58E7C0A390ACB5L)   /*  980 */,    unchecked((long) 0x89D3674C83BD4A01L)   /*  981 */,
		//     unchecked((long) 0x9E2DA4DF4BF3B93BL)   /*  982 */,    unchecked((long) 0xFCC41E328CAB4829L)   /*  983 */,
		//     unchecked((long) 0x03F38C96BA582C52L)   /*  984 */,    unchecked((long) 0xCAD1BDBD7FD85DB2L)   /*  985 */,
		//     unchecked((long) 0xBBB442C16082AE83L)   /*  986 */,    unchecked((long) 0xB95FE86BA5DA9AB0L)   /*  987 */,
		//     unchecked((long) 0xB22E04673771A93FL)   /*  988 */,    unchecked((long) 0x845358C9493152D8L)   /*  989 */,
		//     unchecked((long) 0xBE2A488697B4541EL)   /*  990 */,    unchecked((long) 0x95A2DC2DD38E6966L)   /*  991 */,
		//     unchecked((long) 0xC02C11AC923C852BL)   /*  992 */,    unchecked((long) 0x2388B1990DF2A87BL)   /*  993 */,
		//     unchecked((long) 0x7C8008FA1B4F37BEL)   /*  994 */,    unchecked((long) 0x1F70D0C84D54E503L)   /*  995 */,
		//     unchecked((long) 0x5490ADEC7ECE57D4L)   /*  996 */,    unchecked((long) 0x002B3C27D9063A3AL)   /*  997 */,
		//     unchecked((long) 0x7EAEA3848030A2BFL)   /*  998 */,    unchecked((long) 0xC602326DED2003C0L)   /*  999 */,
		//     unchecked((long) 0x83A7287D69A94086L)   /* 1000 */,    unchecked((long) 0xC57A5FCB30F57A8AL)   /* 1001 */,
		//     unchecked((long) 0xB56844E479EBE779L)   /* 1002 */,    unchecked((long) 0xA373B40F05DCBCE9L)   /* 1003 */,
		//     unchecked((long) 0xD71A786E88570EE2L)   /* 1004 */,    unchecked((long) 0x879CBACDBDE8F6A0L)   /* 1005 */,
		//     unchecked((long) 0x976AD1BCC164A32FL)   /* 1006 */,    unchecked((long) 0xAB21E25E9666D78BL)   /* 1007 */,
		//     unchecked((long) 0x901063AAE5E5C33CL)   /* 1008 */,    unchecked((long) 0x9818B34448698D90L)   /* 1009 */,
		//     unchecked((long) 0xE36487AE3E1E8ABBL)   /* 1010 */,    unchecked((long) 0xAFBDF931893BDCB4L)   /* 1011 */,
		//     unchecked((long) 0x6345A0DC5FBBD519L)   /* 1012 */,    unchecked((long) 0x8628FE269B9465CAL)   /* 1013 */,
		//     unchecked((long) 0x1E5D01603F9C51ECL)   /* 1014 */,    unchecked((long) 0x4DE44006A15049B7L)   /* 1015 */,
		//     unchecked((long) 0xBF6C70E5F776CBB1L)   /* 1016 */,    unchecked((long) 0x411218F2EF552BEDL)   /* 1017 */,
		//     unchecked((long) 0xCB0C0708705A36A3L)   /* 1018 */,    unchecked((long) 0xE74D14754F986044L)   /* 1019 */,
		//     unchecked((long) 0xCD56D9430EA8280EL)   /* 1020 */,    unchecked((long) 0xC12591D7535F5065L)   /* 1021 */,
		//     unchecked((long) 0xC83223F1720AEF96L)   /* 1022 */,    unchecked((long) 0xC3A0396F7363A51FL)   /* 1023 *
		// };
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_9 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF436980306317222E001A0A68381021F1226B5E0____586CB2936F35105D4A71FF1186E81528F1980A2E5BB1E2719E0D86809CB1080A_99_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_10, L_11, NULL);
		((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_StaticFields*)il2cpp_codegen_static_fields_for(TigerDigest_t3E424316C9D3047AEB0481AA7BD1597C158EF8C4_il2cpp_TypeInfo_var))->___t4_4), (void*)L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m76B7F3BBEE3AE4938053ABF9E37659B6BA4E77F3_inline (SkeinEngine_t6823DA6278601CAAB2783AD60AF51D5AED19983A* __this, const RuntimeMethod* method) 
{
	{
		// get { return outputSizeBytes; }
		int32_t L_0 = __this->___outputSizeBytes_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SkeinParameters_GetParameters_m18A2224F60C71CB1A6A2C4BEC05A8C721F1824EB_inline (SkeinParameters_t77C8310E972F24A62C9FAEAB0244D1A9B73FAD1F* __this, const RuntimeMethod* method) 
{
	{
		// return parameters;
		RuntimeObject* L_0 = __this->___parameters_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Configuration_get_Bytes_mA48468E7D9C23817482325A6E61364C9D0382952_inline (Configuration_tA2717A2208DB36C5AE15C43B8D3ACFABECD5AA11* __this, const RuntimeMethod* method) 
{
	{
		// get { return bytes; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___bytes_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Parameter_get_Type_mEFFB2DBBDAAA302084D0635E88A46137D00FE1CC_inline (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, const RuntimeMethod* method) 
{
	{
		// get { return type; }
		int32_t L_0 = __this->___type_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Parameter_get_Value_m039C3F12F280A72B8DFC6439E09F584A94120E5A_inline (Parameter_t80478854220731B1B02877D2E6592A8E4C0C539B* __this, const RuntimeMethod* method) 
{
	{
		// get { return value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* UbiTweak_GetWords_m53F1D9DE6D782CE2183FB186D2DCD6F10E521F6A_inline (UbiTweak_t9337887F56F00648879249C2116E085EE8A99A45* __this, const RuntimeMethod* method) 
{
	{
		// return tweak;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___tweak_3;
		return L_0;
	}
}
