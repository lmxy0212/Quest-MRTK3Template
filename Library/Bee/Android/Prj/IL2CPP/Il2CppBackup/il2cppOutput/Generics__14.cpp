#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
struct Action_1_t73F54689827A9ABA52544F8F9DE632CAE44102A4;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct CallbackInvoker_t7B1D830368B639771EEBC710E0963430C03F4A1C;
struct CallbackInvoker_tB899044B0C790309A3F7E7E26084D7C17E439139;
struct CallbackInvoker_tBAB7BC73C960D7A11DCF4FD301E85FB575B92841;
struct CallbackInvoker_tEA72D8661279A0F1FDBF2FC099C2B7B98E0C7CFE;
struct CallbackRemover_t65BD77AF88C6404891B411CF179A9EE1C22777A3;
struct CallbackRemover_t7F14FFFDBA16330F1146855D512501A6804A944F;
struct CallbackRemover_t42041398FB31EB02EBF4E3E7C55BEF2B9593AD63;
struct CallbackRemover_t1BE5CF7191F227A788CE300E3D9A9EFB06590670;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B;
struct Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17;
struct Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3;
struct Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F;
struct Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA;
struct Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6;
struct Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D;
struct EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331;
struct EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC;
struct EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240;
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4;
struct EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD;
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399;
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct IDictionary_2_t582902AD08996C5CEA140E02F2181F3BD0136F25;
struct IDictionary_2_t11615A0566ACF590C3A4150CD9D840E293394AAD;
struct IDictionary_2_t975A7FE29572E346C85BF8D1D737DE9AAB58E842;
struct IDictionary_2_t5B746B12F31DAF703C23EFF71109B1F81E9050D7;
struct IDictionary_2_t72BA6A234F741B496F5F9CFB9C3287231B75B7E0;
struct IDictionary_2_t961576C13E09D75F0F04096A722178AE282A64FB;
struct IDictionary_2_t0F70F6CC504777870A2ECFE67E98B78F8777DBFD;
struct IEnumerable_1_tCA4BA00CACC21EAEED9D646A955605E354E9CDA3;
struct IEnumerable_1_t2981472752247224A605B5C05014A56EBC57EC77;
struct IEnumerable_1_t7751CC29DE65A3020F811D2957F1D774ED1E6656;
struct IEnumerable_1_t6066FC0AC2C405A5FD2DE6F4A24DD23E9216DBFF;
struct IEnumerable_1_tBAEF4538BBF1F426489E5BCC14DE71510BA403A6;
struct IEnumerable_1_tA2185DB4778AEF4D3930ED9CE5C0FF142FDAA2B6;
struct IEnumerable_1_t6AD47CB8BEC813E15985AA93F7394F6ECE74088A;
struct IEnumerable_1_t7E13FCC61B2DB26146CA569CB146A0200C4618D1;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerator_1_t755CF6551BAF52FF254436211D7BC8957D3F13EB;
struct IEnumerator_1_t8052B10B6C4290D6BCC90E8A6010867F929F2608;
struct IEnumerator_1_tA10216FAAB24103FDBB9CDD05D5A217F1F6A8024;
struct IEnumerator_1_t01B237D5D928D9460A6EC64E99B007A5DB7ED296;
struct IEnumerator_1_t2E1456FED2BB52C59F1F283E1202AE7FC06F6B3B;
struct IEnumerator_1_t04065275D41F5132369010FF898E9C91204AC481;
struct IEnumerator_1_t514A4849BB492E862252CFA7304913B779C20F36;
struct IEqualityComparer_1_t0941D7FC47166420134AA077FF0A0089769D1E31;
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
struct KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695;
struct KeyCollection_tD205DC053009DE7E61543565DA831601D981930A;
struct KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941;
struct KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273;
struct KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337;
struct KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD;
struct KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111;
struct ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42;
struct ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE;
struct ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA;
struct ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210;
struct ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7;
struct ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F;
struct ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612;
struct EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F;
struct EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF;
struct EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101;
struct EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130;
struct EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D;
struct EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F;
struct EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52;
struct KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2;
struct KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188;
struct KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265;
struct KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67;
struct KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66;
struct KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44;
struct KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F;
struct EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF;
struct EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101;
struct EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130;
struct EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D;
struct EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F;
struct EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52;
struct KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2;
struct KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188;
struct KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265;
struct KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67;
struct KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66;
struct KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44;
struct KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* ____keys;
	ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* ____keys;
	ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* ____keys;
	ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* ____keys;
	ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* ____keys;
	ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* ____keys;
	ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* ____keys;
	ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D  : public RuntimeObject
{
};
struct EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331  : public RuntimeObject
{
};
struct EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC  : public RuntimeObject
{
};
struct EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240  : public RuntimeObject
{
};
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4  : public RuntimeObject
{
};
struct EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD  : public RuntimeObject
{
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399  : public RuntimeObject
{
};
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695  : public RuntimeObject
{
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ____dictionary;
};
struct KeyCollection_tD205DC053009DE7E61543565DA831601D981930A  : public RuntimeObject
{
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ____dictionary;
};
struct KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941  : public RuntimeObject
{
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ____dictionary;
};
struct KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273  : public RuntimeObject
{
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ____dictionary;
};
struct KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337  : public RuntimeObject
{
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ____dictionary;
};
struct KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD  : public RuntimeObject
{
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ____dictionary;
};
struct KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111  : public RuntimeObject
{
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ____dictionary;
};
struct ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42  : public RuntimeObject
{
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ____dictionary;
};
struct ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE  : public RuntimeObject
{
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ____dictionary;
};
struct ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA  : public RuntimeObject
{
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ____dictionary;
};
struct ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210  : public RuntimeObject
{
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ____dictionary;
};
struct ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7  : public RuntimeObject
{
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ____dictionary;
};
struct ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F  : public RuntimeObject
{
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ____dictionary;
};
struct ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612  : public RuntimeObject
{
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ____delegate;
};
struct Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 
{
	Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* ____delegate;
};
struct Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D 
{
	Action_1_t73F54689827A9ABA52544F8F9DE632CAE44102A4* ____delegate;
};
struct Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____delegate;
};
struct Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint8_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 
{
	uint8_t ___key;
	RuntimeObject* ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
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
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint8_t ___key;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value;
};
struct Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___value;
};
struct Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___value;
};
struct Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___value;
};
struct Entry_tE12DDB853028C74C406A19C917837D50A3688455 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___value;
};
struct Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E 
{
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 
{
	uint8_t ___key;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value;
};
struct KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F 
{
	Guid_t ___key;
	Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___value;
};
struct KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 
{
	Guid_t ___key;
	Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___value;
};
struct KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 
{
	Guid_t ___key;
	Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___value;
};
struct KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 
{
	Guid_t ___key;
	Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___value;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint8_t ___key;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value;
};
struct Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 
{
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 
{
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 
{
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 
{
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 
{
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A 
{
	uint8_t ___key;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A 
{
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ____current;
	int32_t ____getEnumeratorRetType;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D_StaticFields
{
	EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* ___defaultComparer;
};
struct EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331_StaticFields
{
	EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* ___defaultComparer;
};
struct EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC_StaticFields
{
	EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* ___defaultComparer;
};
struct EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240_StaticFields
{
	EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* ___defaultComparer;
};
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4_StaticFields
{
	EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* ___defaultComparer;
};
struct EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD_StaticFields
{
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* ___defaultComparer;
};
struct EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* ___defaultComparer;
};
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5_StaticFields
{
	EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE_StaticFields
{
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___Callbacks;
	CallbackInvoker_t7B1D830368B639771EEBC710E0963430C03F4A1C* ___Invoker;
	CallbackRemover_t65BD77AF88C6404891B411CF179A9EE1C22777A3* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4_StaticFields
{
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___Callbacks;
	CallbackInvoker_tB899044B0C790309A3F7E7E26084D7C17E439139* ___Invoker;
	CallbackRemover_t7F14FFFDBA16330F1146855D512501A6804A944F* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D_StaticFields
{
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___Callbacks;
	CallbackInvoker_tBAB7BC73C960D7A11DCF4FD301E85FB575B92841* ___Invoker;
	CallbackRemover_t42041398FB31EB02EBF4E3E7C55BEF2B9593AD63* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE_StaticFields
{
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___Callbacks;
	CallbackInvoker_tEA72D8661279A0F1FDBF2FC099C2B7B98E0C7CFE* ___Invoker;
	CallbackRemover_t1BE5CF7191F227A788CE300E3D9A9EFB06590670* ___Remover;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clearer;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
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
struct EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 m_Items[1];

	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t07F9DA227B348B898B974EC6998611CC6640AF81 value)
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
struct KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A m_Items[1];

	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A value)
	{
		m_Items[index] = value;
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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
struct EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C m_Items[1];

	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 m_Items[1];

	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF m_Items[1];

	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 m_Items[1];

	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943 m_Items[1];

	inline Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F m_Items[1];

	inline KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3 m_Items[1];

	inline Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 m_Items[1];

	inline KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869 m_Items[1];

	inline Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 m_Items[1];

	inline KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tE12DDB853028C74C406A19C917837D50A3688455 m_Items[1];

	inline Entry_tE12DDB853028C74C406A19C917837D50A3688455 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tE12DDB853028C74C406A19C917837D50A3688455* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tE12DDB853028C74C406A19C917837D50A3688455 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline Entry_tE12DDB853028C74C406A19C917837D50A3688455 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tE12DDB853028C74C406A19C917837D50A3688455* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tE12DDB853028C74C406A19C917837D50A3688455 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 m_Items[1];

	inline KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
	inline KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->____delegate), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m284C5239592F164F54B26B01CB0A23EC393A6CCD_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mDF41BDC357DCCB8A789D4E8413940745EC2D9EB5_gshared (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m9DD51F26BB2053FF3AA2B716BC390D2EB157229E_gshared (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m20392D7647C2766DCC37240FB8639F91D0AD2610_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9_gshared (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275_gshared (Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5DF5B4A7753CA5A1864ED703C669219DD3294874_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE7A6ECAF79E05847933AA231E52DA59FC837F4C0_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* Dictionary_2_get_Keys_m76E9597C035A7EA40953AF06FE99F3B793DEB183_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF5219B0A18791A9CC300501648241FC0FB8D60AF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5BDAAAFD210E7DE21AD0C4BE5541F616E9E974E9_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEB5C699113C11F9A86DDED7B2D942D75700A6854_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD2013EE4C57ED1CD8B13D3F7B8704E76BFCF9E4D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9538B7F27C6BF88D7E8FF28B8F30716F29DC12AA_gshared (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mF98AD1281578E2B61392A1C1BDDCCE4D891DB255_gshared (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA3BD98697C4ED371334A2481D82A6B249ED7AA97_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6_gshared (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B_gshared (Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1441FBBBE53A02191397220412D59FE437BFD905_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5A5E4DA99DC685B4AB4F829C35D711C289322A32_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* Dictionary_2_get_Keys_mE1391DBE4F1A52C697F80723E769785A5EBACD08_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBEB8417F878E9294BE74EA39EDEA7E6041D6917D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F01327800F4BB3E563D8EB67BDF689622270092_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m43B0FA732CA72F6CCFCC11F7DB821E8CF80BD2CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m329EC796C6F33776091F7194E64F5CCF1D99EE0A_gshared (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mB8C8E29B4A03621C9D501ABAD0694AC436D7B99D_gshared (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7F4605B5DEABAA0D5BDF9C95CF4FC2EB8F04E8DE_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87_gshared (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE_gshared (Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m147BFDB256594BB6486F7BFBA338A3745EA6F5F8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3AA3AE68DA106D282A49A24D371A22778DEC54B0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* Dictionary_2_get_Keys_mECFF75E3EB3CB0659B12486554B2EE26C30ABEE6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBDD1BCCC321B7CE2F8FB7F999841C362592D1825_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5885AF143D280F83A838647D341C15DE8AD9DF60_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_gshared_inline (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_gshared_inline (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m5326B8F257656E93EFE8B9506DAA7CC84760549A_gshared (KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* __this, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mBC76EAF124157C65148C44E9FD34CF25DCC00671_gshared (ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* __this, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5E377414CA8A3172C83DFB56CE71200B3D498AD9_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m91575320D207B3A88566A2AB9BCAED9502ABB260_gshared (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312_gshared (Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7* __this, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m14200E0A57932994D029BBC0F1118EE8FAAC0FF7_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4EBB6F49DE40A5675E66A6A925692667070F1D90_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* Dictionary_2_get_Keys_m793F33DE73DC19BEB2E2B38263F29AA50E9F6154_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5803A1B2D92039348DEB8A7807B28273A546E3B8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE_mD95136B8093BDEBF4FC639E11BB5CE51133EE824_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE0B8F7218F882326D42B2E1502A88AE838EAED7A_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC190522AF573D2AC2FA14CBF442689A30E92DE1F_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC87ED122746DC5856F04587D4E53F410F9DC5CE_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_gshared_inline (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_gshared_inline (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m780ABEDA20E256062FF6E55D2BD7706501022117_gshared (KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* __this, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mE3002447A24D66CA1C0BAFD86FF5201C2C15C56A_gshared (ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* __this, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3FC5BCD6594BA01CD6C0AD38ACA49FC14FE857CF_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8031D17ED3DA3179E21E1FFC15ABD285C68E451D_gshared (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686_gshared (Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209* __this, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC885804DAA641A4A0C0237429F000CB064252941_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFC55BFCAF33C9E8EFF6B6B7154A766AFEC15A432_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* Dictionary_2_get_Keys_mCF85EB1F606556A2418E5FB9561EB73A469086B7_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA912D756C185531C32025B875E9C2D8F59C7FC0E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4_mE74ED45FE96103DCD07C59414C919C6763DCD308_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m13CE3A908BBECB10F1AF73BF568E8E18B07F5BB8_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m92897A7730C611342D5F32EA88A079048DB02204_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1737BEDD454FAE627A3CEFAAFA246615235EC2AA_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_gshared_inline (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_gshared_inline (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m0BB25BEA22A451D467CA18FB8E436CFBC3B12776_gshared (KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* __this, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mC857ADEDD99F536AC07BF56C7F358B9A1E14C236_gshared (ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* __this, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m912A8D1CAC7F08216D259E41EDEA56CF9BED6814_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m23097C59E407A144A35AD450661785EA951FAA2A_gshared (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8_gshared (Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27* __this, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD7C2EC640A5BDE437B1B02EB7EAC3CFC882F1DD1_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C9CF54A5A7F801B751C36F24464B9372A7AC708_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* Dictionary_2_get_Keys_mF5BA17AEF908AE725E423B76C4572B7D8430DA74_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5ED77F974BE3DDFCD20B0F59E8081C1561EBF2BA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tDD62871DDDB23AE8D2FB86739A3B61911539882D_mA2B065D010A3BCC973F9A63869AC2547CB1A5D7C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m49FCFF872644C1EF9793A056127F10430F137634_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9B82402A2ECA44A465084C8943CE445E79AE0947_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m078BBFD7D7F21FBC2C09F539FBA72025DBFCD318_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_gshared_inline (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_gshared_inline (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m8FEAB1B4C222F6E9626A0A914CE3C334F7F924D8_gshared (KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* __this, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m568999F633929CA6F60B8D8C2FEEB467E2D82308_gshared (ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* __this, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF27E7C9723396E0B044B8FE0CE4C2E484C14BBBD_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mA1DEEACDF4E89D9E8E673CB9A8520D1DACFEBC1F_gshared (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696_gshared (Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7* __this, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C9A15B9287AEB099F13B1D5C9E09C7E4210D73E_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCB240B923F5001CA9AC25472FAD1C4D46D2725BC_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* Dictionary_2_get_Keys_m7249D3C87E399D8BE9439BA82806105DC518A881_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m96E6149BDFB6BD0D82CBEE56F5EF292EDA4B6D45_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE_mB25AA8169E831DDD3D2E9E8405251FBF4825EF4C_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3A2B178114314577D14C451BC140569F8B4BF7B5_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m378C2E374A1A48EC48E4582D7ED0FD5C22D60B53_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* EqualityComparer_1_CreateComparer_m115646114263A1DA09A9F691E981D56844E4B429_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* EqualityComparer_1_CreateComparer_m0054EEC692876436E2D9DBCA90DAE91D47DFB2D2_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* EqualityComparer_1_CreateComparer_m76E3B6A64F464409400ECDB059646D693677207B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* EqualityComparer_1_CreateComparer_mC75F07932782EDD3D831CEE26404D10D781A8925_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* EqualityComparer_1_CreateComparer_mB8A46655C4B4CE4149E7216D5CA7A31253811A21_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* EqualityComparer_1_CreateComparer_mFCE65A24CEF2BECF4859D2CABC947E1429A0EFD1_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* EqualityComparer_1_CreateComparer_m4026E3B18EB3856304350A8DF5B11F236A69E2F0_gshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m284C5239592F164F54B26B01CB0A23EC393A6CCD (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m284C5239592F164F54B26B01CB0A23EC393A6CCD_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C_gshared)(__this, ___0_key, ___1_value, method);
}
inline uint8_t KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A*, const RuntimeMethod*))KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_gshared_inline)(__this, method);
}
inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method)
{
	return ((  Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 (*) (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mDF41BDC357DCCB8A789D4E8413940745EC2D9EB5 (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))KeyCollection__ctor_mDF41BDC357DCCB8A789D4E8413940745EC2D9EB5_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m9DD51F26BB2053FF3AA2B716BC390D2EB157229E (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))ValueCollection__ctor_m9DD51F26BB2053FF3AA2B716BC390D2EB157229E_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m20392D7647C2766DCC37240FB8639F91D0AD2610 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))Dictionary_2_Remove_m20392D7647C2766DCC37240FB8639F91D0AD2610_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9 (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275 (Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A* __this, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A*, Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, const RuntimeMethod*))Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m5DF5B4A7753CA5A1864ED703C669219DD3294874 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))Dictionary_2_Resize_m5DF5B4A7753CA5A1864ED703C669219DD3294874_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_mE7A6ECAF79E05847933AA231E52DA59FC837F4C0 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mE7A6ECAF79E05847933AA231E52DA59FC837F4C0_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* Dictionary_2_get_Keys_m76E9597C035A7EA40953AF06FE99F3B793DEB183 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, const RuntimeMethod*))Dictionary_2_get_Keys_m76E9597C035A7EA40953AF06FE99F3B793DEB183_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF5219B0A18791A9CC300501648241FC0FB8D60AF (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF5219B0A18791A9CC300501648241FC0FB8D60AF_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m5BDAAAFD210E7DE21AD0C4BE5541F616E9E974E9 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, const RuntimeMethod*))Dictionary_2_set_Item_m5BDAAAFD210E7DE21AD0C4BE5541F616E9E974E9_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mEB5C699113C11F9A86DDED7B2D942D75700A6854 (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mEB5C699113C11F9A86DDED7B2D942D75700A6854_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mD2013EE4C57ED1CD8B13D3F7B8704E76BFCF9E4D (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD2013EE4C57ED1CD8B13D3F7B8704E76BFCF9E4D_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC_gshared)(__this, ___0_key, ___1_value, method);
}
inline uint8_t KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10*, const RuntimeMethod*))KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_gshared_inline)(__this, method);
}
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m9538B7F27C6BF88D7E8FF28B8F30716F29DC12AA (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))KeyCollection__ctor_m9538B7F27C6BF88D7E8FF28B8F30716F29DC12AA_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mF98AD1281578E2B61392A1C1BDDCCE4D891DB255 (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))ValueCollection__ctor_mF98AD1281578E2B61392A1C1BDDCCE4D891DB255_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mA3BD98697C4ED371334A2481D82A6B249ED7AA97 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))Dictionary_2_Remove_mA3BD98697C4ED371334A2481D82A6B249ED7AA97_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6 (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B (Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33* __this, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33*, Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, const RuntimeMethod*))Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m1441FBBBE53A02191397220412D59FE437BFD905 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))Dictionary_2_Resize_m1441FBBBE53A02191397220412D59FE437BFD905_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m5A5E4DA99DC685B4AB4F829C35D711C289322A32 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m5A5E4DA99DC685B4AB4F829C35D711C289322A32_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* Dictionary_2_get_Keys_mE1391DBE4F1A52C697F80723E769785A5EBACD08 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, const RuntimeMethod*))Dictionary_2_get_Keys_mE1391DBE4F1A52C697F80723E769785A5EBACD08_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mBEB8417F878E9294BE74EA39EDEA7E6041D6917D (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))Dictionary_2_set_Item_mBEB8417F878E9294BE74EA39EDEA7E6041D6917D_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m3F01327800F4BB3E563D8EB67BDF689622270092 (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m3F01327800F4BB3E563D8EB67BDF689622270092_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m43B0FA732CA72F6CCFCC11F7DB821E8CF80BD2CF (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m43B0FA732CA72F6CCFCC11F7DB821E8CF80BD2CF_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6_gshared)(__this, ___0_key, ___1_value, method);
}
inline uint8_t KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370*, const RuntimeMethod*))KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370*, const RuntimeMethod*))KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m329EC796C6F33776091F7194E64F5CCF1D99EE0A (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))KeyCollection__ctor_m329EC796C6F33776091F7194E64F5CCF1D99EE0A_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mB8C8E29B4A03621C9D501ABAD0694AC436D7B99D (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))ValueCollection__ctor_mB8C8E29B4A03621C9D501ABAD0694AC436D7B99D_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m7F4605B5DEABAA0D5BDF9C95CF4FC2EB8F04E8DE (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))Dictionary_2_Remove_m7F4605B5DEABAA0D5BDF9C95CF4FC2EB8F04E8DE_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87 (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370*, uint8_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE (Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E* __this, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E*, Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, const RuntimeMethod*))Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m147BFDB256594BB6486F7BFBA338A3745EA6F5F8 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))Dictionary_2_Resize_m147BFDB256594BB6486F7BFBA338A3745EA6F5F8_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m3AA3AE68DA106D282A49A24D371A22778DEC54B0 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m3AA3AE68DA106D282A49A24D371A22778DEC54B0_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* Dictionary_2_get_Keys_mECFF75E3EB3CB0659B12486554B2EE26C30ABEE6 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, const RuntimeMethod*))Dictionary_2_get_Keys_mECFF75E3EB3CB0659B12486554B2EE26C30ABEE6_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mBDD1BCCC321B7CE2F8FB7F999841C362592D1825 (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mBDD1BCCC321B7CE2F8FB7F999841C362592D1825_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m5885AF143D280F83A838647D341C15DE8AD9DF60 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5885AF143D280F83A838647D341C15DE8AD9DF60_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, Guid_t, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, const RuntimeMethod*))Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F*, const RuntimeMethod*))KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_gshared_inline)(__this, method);
}
inline Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_inline (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, const RuntimeMethod* method)
{
	return ((  Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE (*) (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F*, const RuntimeMethod*))KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m5326B8F257656E93EFE8B9506DAA7CC84760549A (KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* __this, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273*, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, const RuntimeMethod*))KeyCollection__ctor_m5326B8F257656E93EFE8B9506DAA7CC84760549A_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mBC76EAF124157C65148C44E9FD34CF25DCC00671 (ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* __this, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210*, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, const RuntimeMethod*))ValueCollection__ctor_mBC76EAF124157C65148C44E9FD34CF25DCC00671_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, Guid_t, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m5E377414CA8A3172C83DFB56CE71200B3D498AD9 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m5E377414CA8A3172C83DFB56CE71200B3D498AD9_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, const RuntimeMethod*))Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m91575320D207B3A88566A2AB9BCAED9502ABB260 (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F*, Guid_t, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, const RuntimeMethod*))KeyValuePair_2__ctor_m91575320D207B3A88566A2AB9BCAED9502ABB260_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312 (Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7* __this, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7*, Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m14200E0A57932994D029BBC0F1118EE8FAAC0FF7 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, const RuntimeMethod*))Dictionary_2_Resize_m14200E0A57932994D029BBC0F1118EE8FAAC0FF7_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m4EBB6F49DE40A5675E66A6A925692667070F1D90 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m4EBB6F49DE40A5675E66A6A925692667070F1D90_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* Dictionary_2_get_Keys_m793F33DE73DC19BEB2E2B38263F29AA50E9F6154 (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, const RuntimeMethod*))Dictionary_2_get_Keys_m793F33DE73DC19BEB2E2B38263F29AA50E9F6154_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m5803A1B2D92039348DEB8A7807B28273A546E3B8 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m5803A1B2D92039348DEB8A7807B28273A546E3B8_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE_mD95136B8093BDEBF4FC639E11BB5CE51133EE824 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE_mD95136B8093BDEBF4FC639E11BB5CE51133EE824_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mE0B8F7218F882326D42B2E1502A88AE838EAED7A (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, Guid_t, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, const RuntimeMethod*))Dictionary_2_set_Item_mE0B8F7218F882326D42B2E1502A88AE838EAED7A_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mC190522AF573D2AC2FA14CBF442689A30E92DE1F (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mC190522AF573D2AC2FA14CBF442689A30E92DE1F_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mCC87ED122746DC5856F04587D4E53F410F9DC5CE (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCC87ED122746DC5856F04587D4E53F410F9DC5CE_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, Guid_t, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, const RuntimeMethod*))Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775*, const RuntimeMethod*))KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_gshared_inline)(__this, method);
}
inline Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_inline (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, const RuntimeMethod* method)
{
	return ((  Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 (*) (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775*, const RuntimeMethod*))KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m780ABEDA20E256062FF6E55D2BD7706501022117 (KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* __this, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337*, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, const RuntimeMethod*))KeyCollection__ctor_m780ABEDA20E256062FF6E55D2BD7706501022117_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mE3002447A24D66CA1C0BAFD86FF5201C2C15C56A (ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* __this, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7*, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, const RuntimeMethod*))ValueCollection__ctor_mE3002447A24D66CA1C0BAFD86FF5201C2C15C56A_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, Guid_t, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m3FC5BCD6594BA01CD6C0AD38ACA49FC14FE857CF (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m3FC5BCD6594BA01CD6C0AD38ACA49FC14FE857CF_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, const RuntimeMethod*))Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m8031D17ED3DA3179E21E1FFC15ABD285C68E451D (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775*, Guid_t, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, const RuntimeMethod*))KeyValuePair_2__ctor_m8031D17ED3DA3179E21E1FFC15ABD285C68E451D_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686 (Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209* __this, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209*, Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, int32_t, const RuntimeMethod*))Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mC885804DAA641A4A0C0237429F000CB064252941 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, const RuntimeMethod*))Dictionary_2_Resize_mC885804DAA641A4A0C0237429F000CB064252941_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mFC55BFCAF33C9E8EFF6B6B7154A766AFEC15A432 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mFC55BFCAF33C9E8EFF6B6B7154A766AFEC15A432_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* Dictionary_2_get_Keys_mCF85EB1F606556A2418E5FB9561EB73A469086B7 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, const RuntimeMethod*))Dictionary_2_get_Keys_mCF85EB1F606556A2418E5FB9561EB73A469086B7_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mA912D756C185531C32025B875E9C2D8F59C7FC0E (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mA912D756C185531C32025B875E9C2D8F59C7FC0E_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4_mE74ED45FE96103DCD07C59414C919C6763DCD308 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4_mE74ED45FE96103DCD07C59414C919C6763DCD308_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m13CE3A908BBECB10F1AF73BF568E8E18B07F5BB8 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, Guid_t, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, const RuntimeMethod*))Dictionary_2_set_Item_m13CE3A908BBECB10F1AF73BF568E8E18B07F5BB8_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m92897A7730C611342D5F32EA88A079048DB02204 (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m92897A7730C611342D5F32EA88A079048DB02204_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m1737BEDD454FAE627A3CEFAAFA246615235EC2AA (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m1737BEDD454FAE627A3CEFAAFA246615235EC2AA_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, Guid_t, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, const RuntimeMethod*))Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_gshared_inline)(__this, method);
}
inline Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_inline (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, const RuntimeMethod* method)
{
	return ((  Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D (*) (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m0BB25BEA22A451D467CA18FB8E436CFBC3B12776 (KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* __this, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD*, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, const RuntimeMethod*))KeyCollection__ctor_m0BB25BEA22A451D467CA18FB8E436CFBC3B12776_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mC857ADEDD99F536AC07BF56C7F358B9A1E14C236 (ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* __this, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F*, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, const RuntimeMethod*))ValueCollection__ctor_mC857ADEDD99F536AC07BF56C7F358B9A1E14C236_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, Guid_t, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m912A8D1CAC7F08216D259E41EDEA56CF9BED6814 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_m912A8D1CAC7F08216D259E41EDEA56CF9BED6814_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, const RuntimeMethod*))Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m23097C59E407A144A35AD450661785EA951FAA2A (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171*, Guid_t, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, const RuntimeMethod*))KeyValuePair_2__ctor_m23097C59E407A144A35AD450661785EA951FAA2A_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8 (Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27* __this, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27*, Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, int32_t, const RuntimeMethod*))Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mD7C2EC640A5BDE437B1B02EB7EAC3CFC882F1DD1 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, const RuntimeMethod*))Dictionary_2_Resize_mD7C2EC640A5BDE437B1B02EB7EAC3CFC882F1DD1_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m9C9CF54A5A7F801B751C36F24464B9372A7AC708 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m9C9CF54A5A7F801B751C36F24464B9372A7AC708_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* Dictionary_2_get_Keys_mF5BA17AEF908AE725E423B76C4572B7D8430DA74 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, const RuntimeMethod*))Dictionary_2_get_Keys_mF5BA17AEF908AE725E423B76C4572B7D8430DA74_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m5ED77F974BE3DDFCD20B0F59E8081C1561EBF2BA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m5ED77F974BE3DDFCD20B0F59E8081C1561EBF2BA_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tDD62871DDDB23AE8D2FB86739A3B61911539882D_mA2B065D010A3BCC973F9A63869AC2547CB1A5D7C (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tDD62871DDDB23AE8D2FB86739A3B61911539882D_mA2B065D010A3BCC973F9A63869AC2547CB1A5D7C_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m49FCFF872644C1EF9793A056127F10430F137634 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, Guid_t, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, const RuntimeMethod*))Dictionary_2_set_Item_m49FCFF872644C1EF9793A056127F10430F137634_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m9B82402A2ECA44A465084C8943CE445E79AE0947 (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m9B82402A2ECA44A465084C8943CE445E79AE0947_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m078BBFD7D7F21FBC2C09F539FBA72025DBFCD318 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m078BBFD7D7F21FBC2C09F539FBA72025DBFCD318_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, Guid_t, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, const RuntimeMethod*))Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14_gshared)(__this, ___0_key, ___1_value, method);
}
inline Guid_t KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, const RuntimeMethod* method)
{
	return ((  Guid_t (*) (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_gshared_inline)(__this, method);
}
inline Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_inline (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, const RuntimeMethod* method)
{
	return ((  Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE (*) (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_gshared_inline)(__this, method);
}
inline void KeyCollection__ctor_m8FEAB1B4C222F6E9626A0A914CE3C334F7F924D8 (KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* __this, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111*, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, const RuntimeMethod*))KeyCollection__ctor_m8FEAB1B4C222F6E9626A0A914CE3C334F7F924D8_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m568999F633929CA6F60B8D8C2FEEB467E2D82308 (ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* __this, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612*, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, const RuntimeMethod*))ValueCollection__ctor_m568999F633929CA6F60B8D8C2FEEB467E2D82308_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, Guid_t, const RuntimeMethod*))Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, Guid_t, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_mF27E7C9723396E0B044B8FE0CE4C2E484C14BBBD (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, Guid_t, const RuntimeMethod*))Dictionary_2_Remove_mF27E7C9723396E0B044B8FE0CE4C2E484C14BBBD_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, const RuntimeMethod*))Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mA1DEEACDF4E89D9E8E673CB9A8520D1DACFEBC1F (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21*, Guid_t, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, const RuntimeMethod*))KeyValuePair_2__ctor_mA1DEEACDF4E89D9E8E673CB9A8520D1DACFEBC1F_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696 (Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7* __this, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7*, Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, int32_t, const RuntimeMethod*))Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m9C9A15B9287AEB099F13B1D5C9E09C7E4210D73E (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, const RuntimeMethod*))Dictionary_2_Resize_m9C9A15B9287AEB099F13B1D5C9E09C7E4210D73E_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mCB240B923F5001CA9AC25472FAD1C4D46D2725BC (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mCB240B923F5001CA9AC25472FAD1C4D46D2725BC_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* Dictionary_2_get_Keys_m7249D3C87E399D8BE9439BA82806105DC518A881 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, const RuntimeMethod*))Dictionary_2_get_Keys_m7249D3C87E399D8BE9439BA82806105DC518A881_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m96E6149BDFB6BD0D82CBEE56F5EF292EDA4B6D45 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m96E6149BDFB6BD0D82CBEE56F5EF292EDA4B6D45_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE_mB25AA8169E831DDD3D2E9E8405251FBF4825EF4C (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE_mB25AA8169E831DDD3D2E9E8405251FBF4825EF4C_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m3A2B178114314577D14C451BC140569F8B4BF7B5 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, Guid_t, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, const RuntimeMethod*))Dictionary_2_set_Item_m3A2B178114314577D14C451BC140569F8B4BF7B5_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m378C2E374A1A48EC48E4582D7ED0FD5C22D60B53 (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*, Guid_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m378C2E374A1A48EC48E4582D7ED0FD5C22D60B53_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* EqualityComparer_1_CreateComparer_m115646114263A1DA09A9F691E981D56844E4B429 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m115646114263A1DA09A9F691E981D56844E4B429_gshared)(method);
}
inline EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* EqualityComparer_1_CreateComparer_m0054EEC692876436E2D9DBCA90DAE91D47DFB2D2 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m0054EEC692876436E2D9DBCA90DAE91D47DFB2D2_gshared)(method);
}
inline EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* EqualityComparer_1_CreateComparer_m76E3B6A64F464409400ECDB059646D693677207B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m76E3B6A64F464409400ECDB059646D693677207B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A_gshared)(method);
}
inline EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* EqualityComparer_1_CreateComparer_mC75F07932782EDD3D831CEE26404D10D781A8925 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mC75F07932782EDD3D831CEE26404D10D781A8925_gshared)(method);
}
inline EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* EqualityComparer_1_CreateComparer_mB8A46655C4B4CE4149E7216D5CA7A31253811A21 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mB8A46655C4B4CE4149E7216D5CA7A31253811A21_gshared)(method);
}
inline EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* EqualityComparer_1_CreateComparer_mFCE65A24CEF2BECF4859D2CABC947E1429A0EFD1 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mFCE65A24CEF2BECF4859D2CABC947E1429A0EFD1_gshared)(method);
}
inline EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* EqualityComparer_1_CreateComparer_m4026E3B18EB3856304350A8DF5B11F236A69E2F0 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m4026E3B18EB3856304350A8DF5B11F236A69E2F0_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m37FEF4043FAAC1F3557E8326224B5F0B4BBFFF67_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0871552888A5E4905B8E1B97019753670EA0EE71_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m058283D0A0385745EDE7663C5B861A1DF258F462_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_5;
		L_5 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9B6D8DBF99FE6D6506760623D3A10952FC89305C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m284C5239592F164F54B26B01CB0A23EC393A6CCD(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m284C5239592F164F54B26B01CB0A23EC393A6CCD_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* G_B2_0 = NULL;
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m7255AC9655B55B0108752510869D88B2A057EE82(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* L_11 = ((Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33;
				L_33 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m70609B9FDB781149B694FF0E54D9ACBD70DECC48_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* Dictionary_2_get_Keys_m76E9597C035A7EA40953AF06FE99F3B793DEB183_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_1 = (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mDF41BDC357DCCB8A789D4E8413940745EC2D9EB5(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m176B161999A2EF5567D7B869E48AF65FDDAF2D19_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_1 = (KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_mDF41BDC357DCCB8A789D4E8413940745EC2D9EB5(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* Dictionary_2_get_Values_m3C6D2CB219704A0F8178A6EF2A5F80A51310EBEB_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_1 = (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m9DD51F26BB2053FF3AA2B716BC390D2EB157229E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mA91308DFB83B464E02A59E84D4528ABC63E66C05_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_1 = (ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m9DD51F26BB2053FF3AA2B716BC390D2EB157229E(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t21288C35594BB53A679A5BBEB716BA1477133A42* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Dictionary_2_get_Item_mE20A4988C6F03780C06540251286057486C8E412_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m5BDAAAFD210E7DE21AD0C4BE5541F616E9E974E9_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m7CEEE3BD07294AF3618FF0E1B2B1C60ECD651533_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mC67307DC74B0FA26513EFF56324E8ECE323EF69B_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_3;
		L_3 = EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m005C431901502D0FF5EB90E8EBBB7715EDB6F857_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_3;
		L_3 = EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m20392D7647C2766DCC37240FB8639F91D0AD2610(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mF0A0F05800356482493B759AB4EF3A6CF076DE8A_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEB5C699113C11F9A86DDED7B2D942D75700A6854_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m283D07004B0F55F62D355109342BDEB5A1F7C40A_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_0 = NULL;
	int32_t V_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_6;
		L_6 = EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A Dictionary_2_GetEnumerator_mDCD3CF43033A0C8DD8A342354F391CB6E7BB735F_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m60E8463C274D935B1DDBABD05E7410F38D5DE56E_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m0BFD54AEE463B5652E89C73632E2A392EC094553_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_6;
		L_6 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_14 = (KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)(KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_15 = V_0;
		Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_19;
		L_19 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint8_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint8_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		uint8_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = (EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)(EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* V_10 = NULL;
	uint8_t V_11 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_24;
		L_24 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint8_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		uint8_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_61 = ___0_key;
		uint8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m5DF5B4A7753CA5A1864ED703C669219DD3294874(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_94 = V_10;
		uint8_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_96 = V_10;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mE85AC79BBDB2074E8E64C14C45D6699FB589F2F8_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m684FED1DF9543E4BA117E309493013B2E02CE862(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_27;
		L_27 = KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m885EF7E3297E860F53629EF0B57F839AA3C71A3C(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5DF5B4A7753CA5A1864ED703C669219DD3294874_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mE7A6ECAF79E05847933AA231E52DA59FC837F4C0(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mE7A6ECAF79E05847933AA231E52DA59FC837F4C0_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_3 = (EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)(EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = __this->____entries;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint8_t* L_17 = (uint8_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m20392D7647C2766DCC37240FB8639F91D0AD2610_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_20;
		L_20 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_21 = V_4;
		uint8_t L_22 = L_21->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_25 = V_4;
		uint8_t L_26 = L_25->___key;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t07F9DA227B348B898B974EC6998611CC6640AF81* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB42C01C5269106390560AAA36134A4F88B2EB094_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3 = ___1_value;
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m972ED434B799AD146CF5FB81AB8E6909559887AF_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, uint8_t ___0_key, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC3346C6B72BDBF5CF7F2D35C569E3BF655279CC8(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8992094D2FB7CB6BDE5968968E6E3572B26D65DC_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE5A9972DA01A4DF3AEBA83661F3F03EE8DF2B035_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD59196BE2439E73EABF606D929777F1F50C22A2C_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mBC2ACBD6251A62343A94FD35D33F9F08132F06F7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t8069EC75F8492A9D8F3C6EC0EA75B6555C3248C2* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m2365176FFA147D354E7C5C41DEBB671FB02EE7CD(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint8_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mEF4259818A510DF8C922DF297EAC5A8C7779A5D9((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mC33073193F8281A5A5E48D38590B8CC6CC77C291_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m7141CABF9925023A9D7A14FE40C71C8F439C2190_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mC7330D21BE95EAB8366F79FB207566EC4EB532CE_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3B8894CFB476965EEA6E591EA6A2C9A7E4900695* L_0;
		L_0 = Dictionary_2_get_Keys_m76E9597C035A7EA40953AF06FE99F3B793DEB183(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m5E8CB61ACA1D973F93C90E7BAA9982C79B6D7C2F_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m445AC7A12E6DBB71578B870693D29118CA5F58A6(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD84CFE4E31EF5A31154FB030ED2248486AA6478F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m133F9A14F8C2EAEC188ABA4AB9791876057365EC_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mF5219B0A18791A9CC300501648241FC0FB8D60AF(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m5BDAAAFD210E7DE21AD0C4BE5541F616E9E974E9(__this, L_3, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m04F91F32D75C87BA4B3F43C079029504EFFE86B6_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m91FB3616063C4E78EE12AE9614C45BECE2D6AF96(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mEB5C699113C11F9A86DDED7B2D942D75700A6854(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m538D315525C7AE66F03B46B3405409DD13195170_gshared (Dictionary_2_t64A149D0E2F7C9C96B5001A8C6D8B1296E4C498B* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC7522D9013344CAEC04E8FEC3389E76BC740A275((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t784B4B1F8AD0BD60AAAF0978D316BFF7E82DAA1A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ADFD65BA1C15B7892439D4080AD31784F775904_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCF8B2CF56C361A01732D8C7AB5D46FEDE26EF690_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0C801045F132D66ADCAD6AB8C8BAC8A657B4FE0B_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_5;
		L_5 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAE88E684A4480EABDCB373CB503F2E50A2568095_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mD2013EE4C57ED1CD8B13D3F7B8704E76BFCF9E4D(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD2013EE4C57ED1CD8B13D3F7B8704E76BFCF9E4D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* G_B2_0 = NULL;
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mB9C028AC47DF32A41C42DD48194915F013172E3A(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* L_11 = ((Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33;
				L_33 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1A8E3429EF7A6FE94F9B267A18AB3C6EC0696D2A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* Dictionary_2_get_Keys_mE1391DBE4F1A52C697F80723E769785A5EBACD08_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_1 = (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9538B7F27C6BF88D7E8FF28B8F30716F29DC12AA(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m836C3BAC8014A527ABEE3EECF32BC77C5A275BB1_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_1 = (KeyCollection_tD205DC053009DE7E61543565DA831601D981930A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m9538B7F27C6BF88D7E8FF28B8F30716F29DC12AA(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* Dictionary_2_get_Values_m8C7B94EE3C16778A486D7D2FE82F36382BE6CBD8_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_1 = (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mF98AD1281578E2B61392A1C1BDDCCE4D891DB255(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mE87B2B65E49A2260C4F283AE889A66DF5BB2A9BA_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_1 = (ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mF98AD1281578E2B61392A1C1BDDCCE4D891DB255(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tD75E47B7BCCFD896B81C9042A7DAA8966B8BF6FE* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Dictionary_2_get_Item_m9562A1751B9E07257BC310CC6491556790A26BB9_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mBEB8417F878E9294BE74EA39EDEA7E6041D6917D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mD8AB2FC47C1ACB01EF840FC3CBEE7E0DC81E25D6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mF870F545C1974DC2E611800995D8E693A16848A6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_3;
		L_3 = EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA22BB4AE834CE963B978683CBEC596334B059645_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_3;
		L_3 = EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mA3BD98697C4ED371334A2481D82A6B249ED7AA97(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8F8F999C75C16F810624448FB3F30D1E92ADE24C_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F01327800F4BB3E563D8EB67BDF689622270092_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m77DE55084904EAFDF6148B19F0D5C35ABECB5554_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_0 = NULL;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_6;
		L_6 = EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 Dictionary_2_GetEnumerator_m886998C9D599DCA25FAE983588E848BE80A225B0_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA878AA6F86CA596E576DB5710D969C0D19C0DC75_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE6129572DBEF3301EF843CA70341A16B7BEB7323_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_6;
		L_6 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_14 = (KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)(KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_15 = V_0;
		Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_19;
		L_19 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint8_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint8_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		uint8_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = (EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)(EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* V_10 = NULL;
	uint8_t V_11 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_24;
		L_24 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint8_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		uint8_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_61 = ___0_key;
		uint8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m1441FBBBE53A02191397220412D59FE437BFD905(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_94 = V_10;
		uint8_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_96 = V_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m83C279319BAAC7D1313F899CA66462D89DFAB03C_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m65D3D494F61FFD98317F40724A4B46AC4BAE26EF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27;
		L_27 = KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m9BD0D09D458494D3EBEAB855563F9A90FABDBBDC(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1441FBBBE53A02191397220412D59FE437BFD905_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m5A5E4DA99DC685B4AB4F829C35D711C289322A32(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m5A5E4DA99DC685B4AB4F829C35D711C289322A32_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_3 = (EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)(EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = __this->____entries;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint8_t* L_17 = (uint8_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mA3BD98697C4ED371334A2481D82A6B249ED7AA97_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_20;
		L_20 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_21 = V_4;
		uint8_t L_22 = L_21->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_25 = V_4;
		uint8_t L_26 = L_25->___key;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t1E0B4F3E7E88740149F048F71307CB7F10C7949C* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m53EF3BA24E32EF1CBEF3441E25AC9EB076040417_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_value;
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6BFF0A49461BE1B9923146FFBA565332BC5511EF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, uint8_t ___0_key, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m59828DB6831DCD592C5091A0D510245C42EE8797(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE76D569395D697D84969275D3C5B1DAEACACCB05_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mB3BA0411207D898231F7FF67948BC7FD4C0070DD_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD458A67C078B0B6F5A04459445BF3B64CB2A997B_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF4E04E75BB79007EC3AB5605137B085732BFFCD1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t174C2BB21B92E1567CBEE447AE4101F13863C188* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m6415965860321B75F656F858CFB7CB68FBE948E6(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			uint8_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m2B9BA537EE671CA90CB4F8F95816D886DFCF64B6((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m734D931A34DB78934BA4B9E1D8ECD04A55D0A8B2_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1D25379F2A4AE3A24712E9FDA5E4643AA049C997_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m80D4B69060B006C349975F47CF255BD8A0B22D43_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD205DC053009DE7E61543565DA831601D981930A* L_0;
		L_0 = Dictionary_2_get_Keys_mE1391DBE4F1A52C697F80723E769785A5EBACD08(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7A88D5110A7E8BD6F50F8A39C8807FCA64BB531A_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m3E6FF16ED88182BAC85FA1AE282F86AA763FD8D5(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tEC1D089D6CE7CB0BA34A4A6CCDE20A8900288BCF* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m4353155DE0352C59FE863B4D530B3E39208A6BBF_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mBEB8417F878E9294BE74EA39EDEA7E6041D6917D(__this, L_3, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mB47084B057B036DBF8C5A46CE02361D089031D31_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m5CA3DE180F3A7F01D34EE4367A7C6C45FE87D33B(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3F01327800F4BB3E563D8EB67BDF689622270092(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3E12F8F3EE9A9D79D3E56924D218B962A1D2EF6D_gshared (Dictionary_2_tA03C4056FEC6F184179CD9BABAEABFBF06BB8B17* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3C1A451CDC310B00A4D630115F42D46E98DC4F2B((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t2BB71063860C279E4A30F76990CD46F618592B33 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49FD888D8D338F6EA9E65990F9C9A287E5CE63CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA544F184DB5615554C5986EF937133232E075256_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5705821E71695496A8598955283409C4C85BB4B8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_5;
		L_5 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0699C00BEE505FF2592307B95C2EDEA644C4EDF7_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m43B0FA732CA72F6CCFCC11F7DB821E8CF80BD2CF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m43B0FA732CA72F6CCFCC11F7DB821E8CF80BD2CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* G_B2_0 = NULL;
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mF15C91D22B78D45270AE3659B7F9FF59E275A186(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* L_11 = ((Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		uint8_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		RuntimeObject* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				uint8_t L_32;
				L_32 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				RuntimeObject* L_33;
				L_33 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E3B2CF64D3E35E48BC30AD5C60DE1B217407096_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* Dictionary_2_get_Keys_mECFF75E3EB3CB0659B12486554B2EE26C30ABEE6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_1 = (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m329EC796C6F33776091F7194E64F5CCF1D99EE0A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m99E6A211BF23DE9EB4691037A80A7A1FBF8886A5_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_1 = (KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m329EC796C6F33776091F7194E64F5CCF1D99EE0A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* Dictionary_2_get_Values_m042157447A9EE6556B8173FE6D5403C1DF12C4C6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_1 = (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mB8C8E29B4A03621C9D501ABAD0694AC436D7B99D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m3EBF451740E5F869AB5AAAF65B4AC720DAF2E500_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_1 = (ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mB8C8E29B4A03621C9D501ABAD0694AC436D7B99D(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t014605DF155F32CFCEF61CDBD32D8A4732BE5EEA* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m6FC6A0D9FA0F9B1204DA02700234FAB91B67CF02_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		uint8_t L_6 = ___0_key;
		uint8_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m68B2860321AE9BFC2FF8F6E2EF94B0123DF0C7D7_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A2475D76FE313437F290AE7E281B1D13938B8A8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF6B63C1415C7BCD30B91F91D20087866710FA7E5_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0;
		L_0 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_9;
		L_9 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m7F4605B5DEABAA0D5BDF9C95CF4FC2EB8F04E8DE(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m273C8C51BC29D2A145CA6816DF27FBAA00FCE628_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBDD1BCCC321B7CE2F8FB7F999841C362592D1825_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m649EE7524C9A9430B009028E439A12A97E9FF842_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_16 = V_0;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		RuntimeObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		RuntimeObject* L_31 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		NullCheck(L_28);
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		uint8_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		RuntimeObject* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E Dictionary_2_GetEnumerator_m92899B4D24094F60488CAEBBD6FCA9F315F23779_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mB31B639FDDA38DACEC32FE52B8670C2AEC19C544_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m95BD7EB6CB6C1902C55E729C0BCA7793E3A8E774_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_6;
		L_6 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_14 = (KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)(KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_15 = V_0;
		Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(uint8_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_19;
		L_19 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		uint8_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		uint8_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		uint8_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = (EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)(EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* V_10 = NULL;
	uint8_t V_11 = 0;
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		uint8_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(uint8_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_24;
		L_24 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		uint8_t L_35 = ___0_key;
		uint8_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		uint8_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		uint8_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		uint8_t L_61 = ___0_key;
		uint8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m147BFDB256594BB6486F7BFBA338A3745EA6F5F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_94 = V_10;
		uint8_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mAD14F4770D6DD0676E312D547F4D33E19A8C06C1_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m1E21D7AD02ED6AB2A2B43CEA232F8386EB2DA040(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint8_t L_21;
		L_21 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		uint8_t L_24;
		L_24 = KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mDB8AA597F49917F29D99ACADD6C2E0DE4086F2E6(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m147BFDB256594BB6486F7BFBA338A3745EA6F5F8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m3AA3AE68DA106D282A49A24D371A22778DEC54B0(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m3AA3AE68DA106D282A49A24D371A22778DEC54B0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_3 = (EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)(EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = __this->____entries;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint8_t* L_17 = (uint8_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_17, NULL);
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7F4605B5DEABAA0D5BDF9C95CF4FC2EB8F04E8DE_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_key), NULL);
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_20;
		L_20 = EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_21 = V_4;
		uint8_t L_22 = L_21->___key;
		uint8_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_25 = V_4;
		uint8_t L_26 = L_25->___key;
		uint8_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_41 = V_4;
		RuntimeObject** L_42 = (RuntimeObject**)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t659CBE26663956D18C2742F62B83981D65BDFBAF* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1952F6E96CC33AD75408DC0142628C39E1E542AA_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m44967EBBD0FB7CE938A636439CFC837AB3B4E495_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, uint8_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7BCE69C0E01B982F51AFDCDFC812766223177BD0(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m904328E55FFC4F34BE0953B695C36B5BEA4CC2B7_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mAB67524AB4F8A86E2CC41F37AFC5E1A9ED087475_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mFFD10245EBA2EC749015BCD877D7A2FDD7818D84_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF35B403A90D0C6605F2707938BC5319F3B07DF48(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBEB7635E6B4DC683BF6CB0E20ACE72D61F818265* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7382D38295B2BDAD7A6531C73F23974064304BB4(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		uint8_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		uint8_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		RuntimeObject* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			uint8_t L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m0A2E14AA65328A99B5668E8BE73BB864537A6E87((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m07664EFF84A855733AF937AD20067B285B3E30C0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9763EA2CEBE5519F7E692205F8DFA4C5CA4BE71C_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m8D0B00F89D334EB56A48E5E0C4EC7AACD1B835F8_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tD84F6CBE060E52F0DD35DC391AEE5D3C51A0E941* L_0;
		L_0 = Dictionary_2_get_Keys_mECFF75E3EB3CB0659B12486554B2EE26C30ABEE6(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m2C8FEDADE48678A925C2740526E148BE820D2FBD_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m671DF1ACC56E2C42950BE67B9B5B157F1774DBCE(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tA2A4692D301B4200E0094E2EAA94987C3B93D101* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m1BF596D273011495D6A88CA3E6F7C1C2318A6CE0_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			uint8_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m214F2D8A646B50C3581B8EF90CE4169B9200B9CD(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m05329210A9950F6EBC3F9F10B5CF9AE2A9DE29B6_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m1382F6AF6E9CD0D56FB07D91EECE213299C80A18(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mBDD1BCCC321B7CE2F8FB7F999841C362592D1825(__this, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m196635F433386156DD45109BB7B1528D9CE540CF_gshared (Dictionary_2_tEECC480B82ABEE5ED46642E8A415E4D41EE530C3* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m89A6C4F29356E649171B0EE13ED04087DB42F5FE((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tC16F7DB8A558371DB9912AD18E02C7E99105FB0E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m399E18572634C588BC543C6E55DCD466622419A8_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB11C093A53B17F9ECD3A6DEF3639005121BAF361_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF8A901D5AD7648EFB7192FA7A5FD170BE3AA8DDC_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF3115F702D52C058D9ACE798F8F901265F55280B_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m5885AF143D280F83A838647D341C15DE8AD9DF60(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5885AF143D280F83A838647D341C15DE8AD9DF60_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* G_B2_0 = NULL;
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mD94F9E42F3EBFBF8B682E5D2DE4B6AE24A964EC9(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* L_11 = ((Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_33;
				L_33 = KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m52EA5BEE7C859FD36115870AE93C036C2D089646_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* Dictionary_2_get_Keys_m793F33DE73DC19BEB2E2B38263F29AA50E9F6154_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_1 = (KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m5326B8F257656E93EFE8B9506DAA7CC84760549A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mF93ECCEB8019700A47C2E976ECAEB329BD1420C4_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_1 = (KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m5326B8F257656E93EFE8B9506DAA7CC84760549A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* Dictionary_2_get_Values_mBCABFE5E4AA08743F7DD71681F547DAFEC889AEE_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* L_1 = (ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mBC76EAF124157C65148C44E9FD34CF25DCC00671(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m13E2BCD8389D3ABE36682ADD67E229BCE38F2F48_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* L_1 = (ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mBC76EAF124157C65148C44E9FD34CF25DCC00671(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tF9D0804E7F3B9CD6B53C73616789C8321F619210* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE Dictionary_2_get_Item_mEBB4B3F4E3B98A7BCE2EB2ABD296EC1CA66887DD_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE));
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE0B8F7218F882326D42B2E1502A88AE838EAED7A_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m77C92839C9E8D3D0FC99DF75E44F0FCFE81C5252_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_1;
		L_1 = KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m78D0EFB2DEB49CCF1A2C4853DCA3902DB426033E_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_3;
		L_3 = EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_7;
		L_7 = KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m6586D72391C0521F77ABD44473CF3BE11A46C8AA_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_3;
		L_3 = EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_7;
		L_7 = KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m5E377414CA8A3172C83DFB56CE71200B3D498AD9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m49A44DBCA821F472164E5B2808CD6880F21749D5_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC190522AF573D2AC2FA14CBF442689A30E92DE1F_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mC450D32FB0836029BAE3CCBE95E5076CD8DE9C28_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_6;
		L_6 = EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m91575320D207B3A88566A2AB9BCAED9502ABB260((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 Dictionary_2_GetEnumerator_m57C9540A369361B14A67CA0D98E58214FADB3FEB_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mCEFFB09253B80D52550344F00D8E56959E116F0B_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m4EA108A53296088D9B875D5407D6C1FD4506DE2A_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_14 = (KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67*)(KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_15 = V_0;
		Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_5 = (EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130*)(EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m14200E0A57932994D029BBC0F1118EE8FAAC0FF7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_96 = V_10;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m401E6D6DB4FBEC1819F3453860A51B0D4CA1AAA7_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m3002224546B54921404A621B1022A01BBB5D75C3(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_27;
		L_27 = KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m336C189F210A75372D06E183D928063FB2252EB9(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m14200E0A57932994D029BBC0F1118EE8FAAC0FF7_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m4EBB6F49DE40A5675E66A6A925692667070F1D90(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4EBB6F49DE40A5675E66A6A925692667070F1D90_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_3 = (EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130*)(EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_5 = __this->____entries;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5E377414CA8A3172C83DFB56CE71200B3D498AD9_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_41 = V_4;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE* L_42 = (Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t946B4157D536EA8ADE03DAC3E85C2317B00AD943* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBBAFE1E74493548AE7806B605B0BFCEDA2A04E76_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE* L_3 = ___1_value;
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m95DFB5670BEB4EDB297E78448B771DA786C0DFDF_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, Guid_t ___0_key, Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC966BF029026B76034E34F9072EB4A816EEA8835(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mCF8EF49ED8A93A25153F1A5CB9A1FCF20FE9354E_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m6CB9381856E15FD06E6D8CC086ABF4BE20068BA6_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m378B9FB787EFF06778EEB513182F6F0118298DF7_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mE02B75F341C070985A447C327AD1055E8A3583E8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4E1FFB4146492739328E254B7CB6DE14D1262E67* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m7FC23945E78369D9027B558C903A34BF96C72CC0(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m91575320D207B3A88566A2AB9BCAED9502ABB260((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3569E4813A3F071234192B73A6B6CFFFEAF05D29_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mF691FB511F3DD8DD69ED2FDCCA527A594B3C3375_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m8D1A034C0A9BF9AEFD2385DE6B23C4320A0A2B1E_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t898C613BCB6D2BBB3385E9E77EA2BA653E3E2273* L_0;
		L_0 = Dictionary_2_get_Keys_m793F33DE73DC19BEB2E2B38263F29AA50E9F6154(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m64E9A3078EB3C1FACD06990E91B3FA118EDAF6C4_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m5803A1B2D92039348DEB8A7807B28273A546E3B8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m0225FE856CD21FACD7C6489213C5558B10D01DF5(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t959D93EAB0425E92EEA17C50908A6AC0FC46C130* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mA450E7D233A6868635C193EAECB8908AE99BF6F2_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE_mD95136B8093BDEBF4FC639E11BB5CE51133EE824(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mE0B8F7218F882326D42B2E1502A88AE838EAED7A(__this, L_3, ((*(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE*)((Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE*)(Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5803A1B2D92039348DEB8A7807B28273A546E3B8_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mEFFC536F70617F5E685C05F33584E2E6A34592B4_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m5803A1B2D92039348DEB8A7807B28273A546E3B8(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC190522AF573D2AC2FA14CBF442689A30E92DE1F(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m08D74BD31AD91B77A3A5457BA6773D855ECC4298_gshared (Dictionary_2_t2964DC8C54116E5144A48AB2CCBB5B6195494C1F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m740E7699B5893A920F1614469EF385AC8D850312((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_tB39EEAF421EC0432364A61B29DE685B31917C3D7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC04B8738BF11848FFE20432DC0BA14B9C7311BE5_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mFC7B4AD1F6BA02ACD83CA84BF1D704EF9730D8FA_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m412A0B5033E229769CCC497913A6B3A1DC7D73A5_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5F735ED08FB840C4193204180B056EBC1D54EA12_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mCC87ED122746DC5856F04587D4E53F410F9DC5CE(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC87ED122746DC5856F04587D4E53F410F9DC5CE_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* G_B2_0 = NULL;
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mD1E72ECE50D4DCC54C0DA4DE00523293BA840BF5(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* L_11 = ((Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_33;
				L_33 = KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE23F563A33A91F1B7CE99EFDC49B07C0DEE00EA7_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* Dictionary_2_get_Keys_mCF85EB1F606556A2418E5FB9561EB73A469086B7_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_1 = (KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m780ABEDA20E256062FF6E55D2BD7706501022117(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m97281709FE9DD435CDC82C06FB8D4EF288EA6F78_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_1 = (KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m780ABEDA20E256062FF6E55D2BD7706501022117(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* Dictionary_2_get_Values_m8E00F34BE84B272BADC9CCDA655CA3C9B6A04A8F_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* L_1 = (ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mE3002447A24D66CA1C0BAFD86FF5201C2C15C56A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mB374BD76E578AF28D53C099842AAA96706F55BF2_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* L_1 = (ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mE3002447A24D66CA1C0BAFD86FF5201C2C15C56A(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tE16A5E55F3F3C894B37EBD1C38D6BF0A4D206AA7* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 Dictionary_2_get_Item_mEA0D9A6E62EF5F35544CF90B4D3E85FE6AEFF200_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4));
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m13CE3A908BBECB10F1AF73BF568E8E18B07F5BB8_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mF478FF3CCE2E80971D477F0026096973D19CDB70_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_1;
		L_1 = KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m517530253A3CF6E9FEF7FF3EE0B6A041283B1D45_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_3;
		L_3 = EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_7;
		L_7 = KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mBA3FEF4B4ED2265C9731820449C8D1A3182C28DD_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_3;
		L_3 = EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_7;
		L_7 = KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3FC5BCD6594BA01CD6C0AD38ACA49FC14FE857CF(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE926108B41C584479C781C7EE13C934A826C01F3_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m92897A7730C611342D5F32EA88A079048DB02204_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m9D721021AEFD35DDE5C6B827FDBB4DB415D83B8A_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_6;
		L_6 = EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m8031D17ED3DA3179E21E1FFC15ABD285C68E451D((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 Dictionary_2_GetEnumerator_m4E5F6BA67A414808CC2B04B0BD10D9CE79E4DC89_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29914BB48FC8682ACB92AC2BC3707FF1438F1D2D_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE80F755592DB1355D6DFA62CEB9616C7E99A5E48_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_14 = (KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66*)(KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_15 = V_0;
		Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_5 = (EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D*)(EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mC885804DAA641A4A0C0237429F000CB064252941(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_96 = V_10;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mFD58599386F8F9268585459B439C18C3125CB95D_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m106C0DB3615A3381492F2AC6C27B56864E720DAB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_27;
		L_27 = KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m73F39096CBEFF0A7AC0A6820DC1737D0EFA1688E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mC885804DAA641A4A0C0237429F000CB064252941_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mFC55BFCAF33C9E8EFF6B6B7154A766AFEC15A432(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mFC55BFCAF33C9E8EFF6B6B7154A766AFEC15A432_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_3 = (EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D*)(EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_5 = __this->____entries;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3FC5BCD6594BA01CD6C0AD38ACA49FC14FE857CF_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_41 = V_4;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4* L_42 = (Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t85C5ABAFD5C8AE70F44C8B5ACF9D092CA8C035D3* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9B2C4A635A980E94A08F30A72BC9D337108B70E0_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4* L_3 = ___1_value;
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m9680CC3B11FEFB33083367310E69A2246CF18982_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, Guid_t ___0_key, Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1228D8CC4EBD27545131D7D099D4A04600A1812(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m896EFDAC1D301B5BA71429BFB8B1590CB9B26FEA_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m61CB75B170294CF840296692E606920CCE05D8EC_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m75965B648FCCFAD76E2BFA67DE289DAB83E81890_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m2F60D823CA031D58EF072AA296B9F56F0C19A42F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5BFC319D37C1BD29D4FF821A920544F44C10FE66* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mE57A75BB59D5F7C6EC2E8AC35E512C45DB8C6A2A(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m8031D17ED3DA3179E21E1FFC15ABD285C68E451D((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m75FC9D96EF549EC6760966531E652CEB97648810_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD454C91BC01B88265F48F8134F29BC28A6A355B8_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mDE902F7420CB1EDE21719DA8F5958D65C8C6F228_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA91E953F9C348BDC858EB1B5DACA73574D09C337* L_0;
		L_0 = Dictionary_2_get_Keys_mCF85EB1F606556A2418E5FB9561EB73A469086B7(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m4C461E738CAD4291BCD8FAFC092E6800365165D3_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA912D756C185531C32025B875E9C2D8F59C7FC0E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD9C044D10DFC9A5858AC9223D448FF67A4756D29(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tB460D3786B3B776B89176D4143DF75800190876D* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m94AED54631D1A5F5C59C8948794FF6B7C2390B12_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4_mE74ED45FE96103DCD07C59414C919C6763DCD308(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m13CE3A908BBECB10F1AF73BF568E8E18B07F5BB8(__this, L_3, ((*(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4*)((Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4*)(Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA912D756C185531C32025B875E9C2D8F59C7FC0E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m000FA2F113C56500CEF24FA6F941B5D1EAFD42B3_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA912D756C185531C32025B875E9C2D8F59C7FC0E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m92897A7730C611342D5F32EA88A079048DB02204(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m000517A083501F4D62761F490C9CFF2BCACF11CD_gshared (Dictionary_2_t398773E51A1A02F6999AD8A568040C90156057BA* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0E2F26FF301A9BB50C8746CE895F939D775D8686((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t9166BA3E481A1ABEEAE1C515B8E80A711ABD0209 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6A3F8C27B5461FACD34F0104FF7D29A96304D619_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB35775B9AC4A1E66A1DCAC366E09840EBC29E664_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4596B3CF286F0FBA17AFA37348F6603A2827279D_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8D287B8AF016C4617A31C6DE084FEFCBD6FC5BD9_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m1737BEDD454FAE627A3CEFAAFA246615235EC2AA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1737BEDD454FAE627A3CEFAAFA246615235EC2AA_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* G_B2_0 = NULL;
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m97130D95E961138EDCBAAF1AC2051635564CAD9F(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* L_11 = ((Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_33;
				L_33 = KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3F99DE39F287A4A68B91B8EA117239AFBBE19B9D_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* Dictionary_2_get_Keys_mF5BA17AEF908AE725E423B76C4572B7D8430DA74_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_1 = (KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m0BB25BEA22A451D467CA18FB8E436CFBC3B12776(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m88039C50F1976AEFA38EC9EC9D961AE3B2BEEAF3_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_1 = (KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m0BB25BEA22A451D467CA18FB8E436CFBC3B12776(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* Dictionary_2_get_Values_m6030375F2AA97CC5A1F0611E7CFADEE12582B0B2_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* L_1 = (ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mC857ADEDD99F536AC07BF56C7F358B9A1E14C236(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m81BA614E49DC891631F9B66C94DE59FB66B7F0EC_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* L_1 = (ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_mC857ADEDD99F536AC07BF56C7F358B9A1E14C236(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t41891F63615AA50A05938351A6732EF9CA4B781F* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D Dictionary_2_get_Item_m40575959EB38E33410087059A2E23579925F8A59_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D));
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m49FCFF872644C1EF9793A056127F10430F137634_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mD8598A50E9A7D3F970899FE155430CE673B8D054_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_1;
		L_1 = KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31384DE6E295EC32FC29870B22DF4F7E0275AAE1_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_3;
		L_3 = EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_7;
		L_7 = KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF3958F0AD591091FDF60A8D1BEAF20F4121B6701_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_3;
		L_3 = EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_7;
		L_7 = KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_m912A8D1CAC7F08216D259E41EDEA56CF9BED6814(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCD88BC751009AC4E18940AD15ACD1EA92B686F42_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m9B82402A2ECA44A465084C8943CE445E79AE0947_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF7FBEB1272FB56A9F752C1EF07F35F94C9D6F5A6_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_6;
		L_6 = EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m23097C59E407A144A35AD450661785EA951FAA2A((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 Dictionary_2_GetEnumerator_m3E3096636C6D98A1D27942399902C892ECDBF341_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mFDEF49E4A534B820445485CCCEC1AAA6AD7FB71E_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m6A3764B9DCFA4897C264D9D49DDFAD06C82BAA3D_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_14 = (KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44*)(KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_15 = V_0;
		Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_5 = (EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F*)(EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mD7C2EC640A5BDE437B1B02EB7EAC3CFC882F1DD1(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_96 = V_10;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m7EFDEB71AE6570B5B824E5CF5A0E15D6F8885994_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mCEDEA785BF15DB2EA423BF4C0A34D542D04139E2(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_27;
		L_27 = KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_m3B117E2C5941668F0FE1603367A6648835E69262(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD7C2EC640A5BDE437B1B02EB7EAC3CFC882F1DD1_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m9C9CF54A5A7F801B751C36F24464B9372A7AC708(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C9CF54A5A7F801B751C36F24464B9372A7AC708_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_3 = (EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F*)(EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_5 = __this->____entries;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m912A8D1CAC7F08216D259E41EDEA56CF9BED6814_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_41 = V_4;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D* L_42 = (Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tDE7C2BD91C53D114EAFFA292417338CFACFE3869* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mBBC85A3FC1CE7EFEAA0BF8E696CB8BC7994E0032_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D* L_3 = ___1_value;
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m4377918930E36E341F95C6D3316C8B2CFEB68CE8_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, Guid_t ___0_key, Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m37686AD1135F9929C462B8C4286A288BD81D1857(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mAC32F8AF748BBEFF6C33AB19322211E3605FF966_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m94C02FA7BA4A9714F95E0496BA2A4C949B850C00_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m92ED24AA495C212DBF883BA6AACFD49B32D42D63_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD0D54AAD89ACDEE834E3E60AF07ECB14A542D652(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tDAA2A8452D2E05BA1301DD421E6B529BF5CC9A44* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m764D4E8B61D69E8A1558C803B96E7647967D2763(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m23097C59E407A144A35AD450661785EA951FAA2A((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4809CDC0FCE9E18F5EF484069FE5D4E649DB6B35_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m5B072ACA2DF668BEF3C9AC6B335D30DFA712C7D4_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m7E6DD19CCCA5CA6EFB5CC6A1043CDB7E4E33B2CB_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_tA53B322E55153A6EC1C76594DFBA2BBC8C7C47DD* L_0;
		L_0 = Dictionary_2_get_Keys_mF5BA17AEF908AE725E423B76C4572B7D8430DA74(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mEC7DA26247951E78CFB9767614437BB827D6F99E_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m5ED77F974BE3DDFCD20B0F59E8081C1561EBF2BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m860DF5DCD0FDF461B32AF598EE558BDDC9765BAE(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tEBB53A505FF89DE9A64C020C46DEE8C6CAA2FE0F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m9C123EC0ED4F7ADA29FEC4A3594459D4F48D8236_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tDD62871DDDB23AE8D2FB86739A3B61911539882D_mA2B065D010A3BCC973F9A63869AC2547CB1A5D7C(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m49FCFF872644C1EF9793A056127F10430F137634(__this, L_3, ((*(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D*)((Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D*)(Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m5ED77F974BE3DDFCD20B0F59E8081C1561EBF2BA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m8A483C1423168C24F807A63096F3377679088357_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m5ED77F974BE3DDFCD20B0F59E8081C1561EBF2BA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m9B82402A2ECA44A465084C8943CE445E79AE0947(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9E0A60BFB8E339BC2A97CED8EA56312A44D4F593_gshared (Dictionary_2_tD991AC04D8DA8229D7358C9718D76F6DCDF555F6* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m122209C89904FCAE1D0E0335621FC0123F7DACA8((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t16DF7ECC6DF42E13999FD29C09DB663D3CA56E27 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F1872B60C5B8D9271C35043731039B666338C1_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3EE9892B31D530218585633B9F2F36AB9697ACBD_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m476C0FA226839B2E67E79C413DDCDA8F944F1A73_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_5;
		L_5 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAC61350FFE636E2BC1673F757AF4CBA1B9A89FA2_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m078BBFD7D7F21FBC2C09F539FBA72025DBFCD318(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m078BBFD7D7F21FBC2C09F539FBA72025DBFCD318_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* G_B2_0 = NULL;
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 9), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m287151E76AD167836D45D360FEE98E57C22C9334(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 11)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_10 = ___0_dictionary;
		Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* L_11 = ((Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A*)CastclassClass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 6)));
		NullCheck(L_11);
		int32_t L_12 = L_11->____count;
		V_0 = L_12;
		NullCheck(L_11);
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_13 = L_11->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___hashCode;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Guid_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___key;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___value;
		Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14(__this, L_19, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 L_31;
				L_31 = InterfaceFuncInvoker0< KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_30);
				V_4 = L_31;
				Guid_t L_32;
				L_32 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_33;
				L_33 = KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_inline((&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
				Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14(__this, L_32, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_34 = V_3;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m30F833CAA9C6A59BA03A54CDEB6096D080A37A56_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* Dictionary_2_get_Keys_m7249D3C87E399D8BE9439BA82806105DC518A881_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_1 = (KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m8FEAB1B4C222F6E9626A0A914CE3C334F7F924D8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_mD9650F0F944CC8C4D3F2A7B50AD9DE18E4906C94_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_1 = (KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		KeyCollection__ctor_m8FEAB1B4C222F6E9626A0A914CE3C334F7F924D8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* Dictionary_2_get_Values_mCEDCEFF48313B039078187A23ADE6A85AF9815B9_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* L_1 = (ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m568999F633929CA6F60B8D8C2FEEB467E2D82308(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mE33648916D43B390051A16A6A02434DE31BC0F0B_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* L_1 = (ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		ValueCollection__ctor_m568999F633929CA6F60B8D8C2FEEB467E2D82308(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDF712F6542ABC2EE1A2ACC2101469A11BBB91612* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE Dictionary_2_get_Item_m66DF0A947698DBA69B936B4869671FD54E961275_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Guid_t L_6 = ___0_key;
		Guid_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE));
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3A2B178114314577D14C451BC140569F8B4BF7B5_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m47306CEC3007E0A3F69AE656A501266E57E10E4A_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_1;
		L_1 = KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m98B98D77C8622A7FA349F4E9E9928F8872D72237_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_3;
		L_3 = EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_7;
		L_7 = KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m6E819A4D63A7EC582A0BB31941FF6A155B28EA82_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_3;
		L_3 = EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_7;
		L_7 = KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Guid_t L_9;
		L_9 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		bool L_10;
		L_10 = Dictionary_2_Remove_mF27E7C9723396E0B044B8FE0CE4C2E484C14BBBD(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 37));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m8CBF1D3D0BDF97E29D912749F50C8AC000E759EC_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m378C2E374A1A48EC48E4582D7ED0FD5C22D60B53_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m41E63C90C9144A69CCB91E48ABA70C010209B1AB_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_0 = NULL;
	int32_t V_1 = 0;
	Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_6;
		L_6 = EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_2 = ___0_array;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Guid_t L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mA1DEEACDF4E89D9E8E673CB9A8520D1DACFEBC1F((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 Dictionary_2_GetEnumerator_m94B69BBB4A164D299D2D302A5D64A1864FCA5502_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mCCA46DFEBFEC31A04649E63EF80D8CDB3F7AB347_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mA7FCD825F0FD09AA3428EFA99B81166226C8BF6B_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_6;
		L_6 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_14 = (KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD*)(KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 44), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_15 = V_0;
		Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Guid_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_14 = V_2;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_15 = V_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_19;
		L_19 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_20 = V_2;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		Guid_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_19);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_25 = V_2;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		Guid_t L_32 = ___0_key;
		NullCheck(L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		NullCheck(L_36);
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_40 = V_2;
		NullCheck(L_40);
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_41 = V_2;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_46 = V_2;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Guid_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		Guid_t L_49 = ___0_key;
		NullCheck(L_45);
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_51 = V_2;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_5 = (EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52*)(EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tE12DDB853028C74C406A19C917837D50A3688455* V_10 = NULL;
	Guid_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Guid_t L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Guid_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_19 = V_0;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_24;
		L_24 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_25 = V_0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = ___0_key;
		NullCheck(L_24);
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_31 = V_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_33 = ___1_value;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Guid_t L_35 = ___0_key;
		Guid_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_45 = V_0;
		NullCheck(L_45);
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_46 = V_0;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_51 = V_0;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		Guid_t L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		Guid_t L_54 = ___0_key;
		NullCheck(L_50);
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_57 = V_0;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_59 = ___1_value;
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___value))->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Guid_t L_61 = ___0_key;
		Guid_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_64 = V_0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_75 = V_0;
		NullCheck(L_75);
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C9A15B9287AEB099F13B1D5C9E09C7E4210D73E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		NullCheck(L_83);
		NullCheck(L_81);
		G_B51_0 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_84 = V_0;
		int32_t L_85 = V_8;
		NullCheck(L_84);
		V_10 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_94 = V_10;
		Guid_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_96 = V_10;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->____delegate), (void*)NULL);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m344838143C54132C756D9E25A7C43DA0B149C269_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 43)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m757F245C5F7E10EE696C6B036168E749E50FD3A0(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 46)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Guid_t L_21;
		L_21 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Guid_t L_24;
		L_24 = KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_27;
		L_27 = KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		Dictionary_2_Add_mFA71D014FD466BB8A499030C7A2B6ED3F397FA14(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C9A15B9287AEB099F13B1D5C9E09C7E4210D73E_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mCB240B923F5001CA9AC25472FAD1C4D46D2725BC(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mCB240B923F5001CA9AC25472FAD1C4D46D2725BC_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_1 = NULL;
	int32_t V_2 = 0;
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_3 = (EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52*)(EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_5 = __this->____entries;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Guid_t));
		Guid_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Guid_t* L_17 = (Guid_t*)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF27E7C9723396E0B044B8FE0CE4C2E484C14BBBD_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tE12DDB853028C74C406A19C917837D50A3688455* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Guid_t L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Guid_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		V_4 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_20;
		L_20 = EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_21 = V_4;
		Guid_t L_22 = L_21->___key;
		Guid_t L_23 = ___0_key;
		NullCheck(L_20);
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_25 = V_4;
		Guid_t L_26 = L_25->___key;
		Guid_t L_27 = ___0_key;
		NullCheck(G_B10_0);
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, Guid_t, Guid_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_41 = V_4;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE* L_42 = (Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_tE12DDB853028C74C406A19C917837D50A3688455* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF10D9737BDAEC41567679B9FCDD2DE70D0686F8F_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Guid_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE* L_3 = ___1_value;
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE*)L_3)->____delegate), (void*)NULL);
		return (bool)1;
	}

IL_0025:
	{
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m9FCEFCAAFCE177936426D6EDE58817EAD403448B_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, Guid_t ___0_key, Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE ___1_value, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = ___0_key;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1F8FF8B16A1B973E3DA11B86EC5161FF3AD2C45(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mC5A22FCBFBEA138F006BAD78B02519876A516E31_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m95A943689BDF14C2778A217924D42EDF1BF09781_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m9C10DFF8D7AF7E5DA92ADC6827968DA685336A23_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m66FD9B6B9D92D9281E2AEC528772601B33FA0FA4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 38)));
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5F69C22019BC52E444009063CBAE6ABF1099F5CD* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mFDCFA60F78CC0EF80E53FFD5E9C90C2093268B86(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Guid_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		Guid_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), &L_28);
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_30 = V_2;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_43 = V_6;
			int32_t L_44 = V_7;
			NullCheck(L_43);
			int32_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_49 = V_6;
			int32_t L_50 = V_7;
			NullCheck(L_49);
			Guid_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_52 = V_6;
			int32_t L_53 = V_7;
			NullCheck(L_52);
			Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mA1DEEACDF4E89D9E8E673CB9A8520D1DACFEBC1F((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
			KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 21), &L_56);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m125980E34869D480ABE007B74BF787F0FAFECCA9_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mD92E231BB42B7E44730D34C81EB57269B89336FD_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mF2F872863E7567DFD23F42BD5EAF76F6BB8BC13E_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t7678CD2AE6BF3C21003D03211ED8ADDCBEDFA111* L_0;
		L_0 = Dictionary_2_get_Keys_m7249D3C87E399D8BE9439BA82806105DC518A881(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m921F87C926E9E576642185D29424D74A04B80F32_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m96E6149BDFB6BD0D82CBEE56F5EF292EDA4B6D45(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m3388349BBF546C9B4CF69FB7792C51B18C2DECA9(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t80155313441064CCA83C6AD7D8FFF2479B6C6D52* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mCB77DF35166786C341A6E5ED86C49CEA4DB09079_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCallback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE_mB25AA8169E831DDD3D2E9E8405251FBF4825EF4C(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 61));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14)))));
		}
		try
		{
			Guid_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m3A2B178114314577D14C451BC140569F8B4BF7B5(__this, L_3, ((*(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE*)((Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE*)(Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 63)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 64)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m96E6149BDFB6BD0D82CBEE56F5EF292EDA4B6D45_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 14)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mF38F564DFB2E2DB0E39AF4F42017003027FF6AA3_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m96E6149BDFB6BD0D82CBEE56F5EF292EDA4B6D45(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m378C2E374A1A48EC48E4582D7ED0FD5C22D60B53(__this, ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 14))))), il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mD76DA2AC2743A351454BC94DB60E5C78D1A5E2E5_gshared (Dictionary_2_t35E626A06CDA3659FC515E720E122F3847B03B4A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m016A09F817C051ADB6B1FCE4B818BD16AFDDF696((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		Enumerator_t183F05B8DF5CF40DF30D5D3FD394CD274FB8B3B7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 41), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* EqualityComparer_1_get_Default_mDA593AFBD5A5EF23D9CC3C7712C0788636AE24CC_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* V_0 = NULL;
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_0 = ((EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m115646114263A1DA09A9F691E981D56844E4B429(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6EE75987105C748480E13CC8F72341ED65D096DD* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m03FFD11AAA3ECC02F09216AE1DC3189555ABFE4C_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 KeyValuePair_2_get_Value_m6E63F3C6AF269F6874B760A9E90C84B34B596458_gshared_inline (KeyValuePair_2_t89E4439B062BFE21A56CFEDB7AA3551B0B35EC5A* __this, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* EqualityComparer_1_get_Default_mD65BD3318F4136026187DF66E2B956D5A36CE089_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* V_0 = NULL;
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_0 = ((EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m0054EEC692876436E2D9DBCA90DAE91D47DFB2D2(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m4DAC8FAF3A79FC52325AC6BE1A485EA949C52F85_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 KeyValuePair_2_get_Value_mFB10B452F06E9A115BD3E1ED8647E58D837512B2_gshared_inline (KeyValuePair_2_tA4B4FBBC92B69419B274746F83E654AEC67EAB10* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* EqualityComparer_1_get_Default_m2BCC97A02DC0A1E671FB895B599BB4AE4A9E8E9F_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* V_0 = NULL;
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_0 = ((EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m76E3B6A64F464409400ECDB059646D693677207B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_m19E0ADD38315CAC0CF2A266E5859C5879DA0F307_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m74789BB63383D63781A71CB355E0F5340D62E543_gshared_inline (KeyValuePair_2_t3AD837362DFABD9D1EEB1557CEE198AE61A3D370* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* EqualityComparer_1_get_Default_m5DCC393F5D59545D96AF9FF747F17C72EABB5D3B_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* V_0 = NULL;
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_0 = ((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD3D60BAB4A1E7DF8FDC8779F5A1A3104CAD5202A(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAAD1A76C30594C4D736E586B3D77281A53A27399* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m68CB3FF0DE5C9B03E54657B7FD27EBEAD1774AC5_gshared_inline (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE KeyValuePair_2_get_Value_m54FC9D8C9F661D2C98CAA44F6B59AC3060E7E5C7_gshared_inline (KeyValuePair_2_tF60F09E314FA56707EB682E0066485127AC5643F* __this, const RuntimeMethod* method) 
{
	{
		Callback_t29CA6F994E6622AD2B53FD78AD3B32F5E5B9BEEE L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* EqualityComparer_1_get_Default_m040D35845B3394478FC0673897BC885762F3C7D7_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* V_0 = NULL;
	{
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_0 = ((EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mC75F07932782EDD3D831CEE26404D10D781A8925(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t848FCFA1AE6C9CEB01745FF009911E06DDB7491D* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m4E68AC43CD9FA2E3EA5F015990819A92FF3053B0_gshared_inline (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 KeyValuePair_2_get_Value_mEE37056D77F5C30E286CF3804C777D1C43337AE8_gshared_inline (KeyValuePair_2_t24E97AF4135A9E66A84E3A908506956D47963775* __this, const RuntimeMethod* method) 
{
	{
		Callback_t01023EFB54D99F131C2259D4842FBFE6B7233AC4 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* EqualityComparer_1_get_Default_m6DCA09F3D49FCECD4367CEE79120B4154412F760_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* V_0 = NULL;
	{
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_0 = ((EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mB8A46655C4B4CE4149E7216D5CA7A31253811A21(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t9496D47257DDD3E29D4ACBA5646BFA7E19A9A331* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_mC4FD7989A011251792ECF013F9798D3863445DEC_gshared_inline (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D KeyValuePair_2_get_Value_mF51CE063FA3FA373D5597EE738F05E1D66A2EA83_gshared_inline (KeyValuePair_2_t608D416BAC2CCC4AFD1F5AB055D8D92101CF2171* __this, const RuntimeMethod* method) 
{
	{
		Callback_tDD62871DDDB23AE8D2FB86739A3B61911539882D L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* EqualityComparer_1_get_Default_m0CE31B2BE323420A4E56A1D1190BF98C367E3E26_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* V_0 = NULL;
	{
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_0 = ((EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mFCE65A24CEF2BECF4859D2CABC947E1429A0EFD1(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t00138F5D8C9F84003C246E20467828F9E2DED9DC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t KeyValuePair_2_get_Key_m9ADE772D5A58FECC11131F958C44B60D10A81CA7_gshared_inline (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, const RuntimeMethod* method) 
{
	{
		Guid_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE KeyValuePair_2_get_Value_mF078E7021BDA0FB650DE1D18FC37CBF2C0D9F5C8_gshared_inline (KeyValuePair_2_tA4B7ADEC957CFB3FDAD41C54A28DD3A507D4FF21* __this, const RuntimeMethod* method) 
{
	{
		Callback_tB0D706A41416809211D1CD1D53F33FCAE23D9CFE L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* EqualityComparer_1_get_Default_mA86BAC55F89FC6D86249AE625745EEE6FF80E903_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* V_0 = NULL;
	{
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_0 = ((EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m4026E3B18EB3856304350A8DF5B11F236A69E2F0(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t6A779BC60A857A9239E80A604D8DD91F3134E240* L_4 = V_0;
		return L_4;
	}
}
