#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD;

IL2CPP_EXTERN_C RuntimeClass* AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6E08267B4D40BEF3D6FD241002FD8395E431BF8A;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.RectInt
struct RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 
{
public:
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_XMin_0)); }
	inline int32_t get_m_XMin_0() const { return ___m_XMin_0; }
	inline int32_t* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(int32_t value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_YMin_1)); }
	inline int32_t get_m_YMin_1() const { return ___m_YMin_1; }
	inline int32_t* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(int32_t value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus
struct AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation
struct Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transformation_t5812B66180F359977F76AB67CC9E923CF0B55938, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo
struct Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_DataPtr
	intptr_t ___m_DataPtr_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_DataLength
	int32_t ___m_DataLength_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_RowStride
	int32_t ___m_RowStride_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::m_PixelStride
	int32_t ___m_PixelStride_3;

public:
	inline static int32_t get_offset_of_m_DataPtr_0() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_DataPtr_0)); }
	inline intptr_t get_m_DataPtr_0() const { return ___m_DataPtr_0; }
	inline intptr_t* get_address_of_m_DataPtr_0() { return &___m_DataPtr_0; }
	inline void set_m_DataPtr_0(intptr_t value)
	{
		___m_DataPtr_0 = value;
	}

	inline static int32_t get_offset_of_m_DataLength_1() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_DataLength_1)); }
	inline int32_t get_m_DataLength_1() const { return ___m_DataLength_1; }
	inline int32_t* get_address_of_m_DataLength_1() { return &___m_DataLength_1; }
	inline void set_m_DataLength_1(int32_t value)
	{
		___m_DataLength_1 = value;
	}

	inline static int32_t get_offset_of_m_RowStride_2() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_RowStride_2)); }
	inline int32_t get_m_RowStride_2() const { return ___m_RowStride_2; }
	inline int32_t* get_address_of_m_RowStride_2() { return &___m_RowStride_2; }
	inline void set_m_RowStride_2(int32_t value)
	{
		___m_RowStride_2 = value;
	}

	inline static int32_t get_offset_of_m_PixelStride_3() { return static_cast<int32_t>(offsetof(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC, ___m_PixelStride_3)); }
	inline int32_t get_m_PixelStride_3() const { return ___m_PixelStride_3; }
	inline int32_t* get_address_of_m_PixelStride_3() { return &___m_PixelStride_3; }
	inline void set_m_PixelStride_3(int32_t value)
	{
		___m_PixelStride_3 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A 
{
public:
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;

public:
	inline static int32_t get_offset_of_m_InputRect_0() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_InputRect_0)); }
	inline RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  get_m_InputRect_0() const { return ___m_InputRect_0; }
	inline RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49 * get_address_of_m_InputRect_0() { return &___m_InputRect_0; }
	inline void set_m_InputRect_0(RectInt_tE7B8105A280C1AC73A4157ED41F9B86C9BD91E49  value)
	{
		___m_InputRect_0 = value;
	}

	inline static int32_t get_offset_of_m_OutputDimensions_1() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_OutputDimensions_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_OutputDimensions_1() const { return ___m_OutputDimensions_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_OutputDimensions_1() { return &___m_OutputDimensions_1; }
	inline void set_m_OutputDimensions_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_OutputDimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_Format_2() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_Format_2)); }
	inline int32_t get_m_Format_2() const { return ___m_Format_2; }
	inline int32_t* get_address_of_m_Format_2() { return &___m_Format_2; }
	inline void set_m_Format_2(int32_t value)
	{
		___m_Format_2 = value;
	}

	inline static int32_t get_offset_of_m_Transformation_3() { return static_cast<int32_t>(offsetof(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A, ___m_Transformation_3)); }
	inline int32_t get_m_Transformation_3() const { return ___m_Transformation_3; }
	inline int32_t* get_address_of_m_Transformation_3() { return &___m_Transformation_3; }
	inline void set_m_Transformation_3(int32_t value)
	{
		___m_Transformation_3 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate
struct OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.IntPtr UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataLength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_rowStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_pixelStride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0 (intptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m1ACFE171CCC69EFD01F6531190EC23D2BC380FF0 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A (intptr_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, int32_t ___status0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);

}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate__ctor_mB4E3DC02E880D5890B499CFD8BC47B4C47CCD2BC (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::Invoke(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate_Invoke_mA88CBFF9DDB699B0AB6804612450DA27A2070081 (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, int32_t ___status0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
					else
						GenericVirtActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
					else
						VirtActionInvoker5< int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A , intptr_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___conversionParams1, ___dataPtr2, ___dataLength3, ___context4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::BeginInvoke(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus,UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams,System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnImageRequestCompleteDelegate_BeginInvoke_m00104A8D14640F10CF8025827E01F94850E7BA58 (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, int32_t ___status0, ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A  ___conversionParams1, intptr_t ___dataPtr2, int32_t ___dataLength3, intptr_t ___context4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(AsyncConversionStatus_t94171EDB7E6E25979DFCEF01F7B6EA6B8A5DAD42_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(ConversionParams_t3DDB9752BA823641A302D0783C14048D9B09B74A_il2cpp_TypeInfo_var, &___conversionParams1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dataPtr2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___dataLength3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void UnityEngine.XR.ARSubsystems.XRCpuImage/Api/OnImageRequestCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnImageRequestCompleteDelegate_EndInvoke_mF362C97CF354BF261E99BB4E5C012DE01FB9D2FC (OnImageRequestCompleteDelegate_t118FB01E93241BFD5BCA5BEF2A6FD082ACAAB4DD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.IntPtr UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_dataLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_rowStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::get_pixelStride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return (dataPtr.Equals(other.dataPtr) && dataLength.Equals(other.dataLength)
		//     && rowStride.Equals(other.rowStride) && pixelStride.Equals(other.pixelStride));
		intptr_t L_0;
		L_0 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1;
		L_1 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		intptr_t L_2 = L_1;
		RuntimeObject * L_3 = Box(IntPtr_t_il2cpp_TypeInfo_var, &L_2);
		bool L_4;
		L_4 = IntPtr_Equals_m8ABF0A82F61F3B236B11DD4A1E19CEC5CC5A50F0((intptr_t*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5;
		L_5 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8;
		L_8 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9;
		L_9 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		bool L_10;
		L_10 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12;
		L_12 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)(&___other0), /*hidden argument*/NULL);
		bool L_13;
		L_13 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_1), L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365_AdjustorThunk (RuntimeObject * __this, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62 (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(System.Object obj) => obj is Cinfo other && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)UnBox(L_1, Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC_il2cpp_TypeInfo_var))));
		Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC  L_2 = V_0;
		bool L_3;
		L_3 = Cinfo_Equals_m5B7C627F1C89E10A0CE713A46B283219E35F6365((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m3D18D26EAA0FED30423B3C8B38961816A1472F62(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     dataPtr.GetHashCode(),
		//     dataLength.GetHashCode(),
		//     rowStride.GetHashCode(),
		//     pixelStride.GetHashCode());
		intptr_t L_0;
		L_0 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = HashCodeUtil_Combine_m1ACFE171CCC69EFD01F6531190EC23D2BC380FF0(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mC3F4D4AA0494F15A8E0B0F765FA005C1A574CCCF(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRCpuImage/Plane/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E08267B4D40BEF3D6FD241002FD8395E431BF8A);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => $"dataPtr: 0x{dataPtr.ToInt64():x} length:{dataLength} rowStride:{rowStride} pixelStride:{pixelStride}";
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		intptr_t L_2;
		L_2 = Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		int64_t L_3;
		L_3 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int64_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_1;
		int32_t L_7;
		L_7 = Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_6;
		int32_t L_11;
		L_11 = Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_10;
		int32_t L_15;
		L_15 = Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline((Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *)__this, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		String_t* L_18;
		L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral6E08267B4D40BEF3D6FD241002FD8395E431BF8A, L_14, /*hidden argument*/NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * _thisAdjusted = reinterpret_cast<Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m4D93FD001F1E9EC984CBFB7997FE480E212F83DF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Cinfo_get_dataPtr_m72B8A6BDAA98FA3CF92A9E03807130E4B6341B35_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr dataPtr => m_DataPtr;
		intptr_t L_0 = __this->get_m_DataPtr_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_dataLength_mBF9DA90E69A88EF50923C839B5CE8A03264EAB9A_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int dataLength => m_DataLength;
		int32_t L_0 = __this->get_m_DataLength_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_rowStride_m67E7894AA413F614310BF6A667BDEA1950165492_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int rowStride => m_RowStride;
		int32_t L_0 = __this->get_m_RowStride_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_pixelStride_m2595FA36CA7479B00D3EFD507C3C9439CC5DBDE0_inline (Cinfo_t11C577CFE4A1D91F887A6423F6D1350DA45CA5FC * __this, const RuntimeMethod* method)
{
	{
		// public int pixelStride => m_PixelStride;
		int32_t L_0 = __this->get_m_PixelStride_3();
		return L_0;
	}
}
