﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Boolean>
struct EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// Windows.Foundation.EventHandler`1<System.Boolean>
struct EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893;
// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`3<System.IO.Stream,System.IAsyncResult,System.Int32>
struct Func_3_tA866098214C49DCA600CBC7CF103DE7B4D652245;
// System.Func`3<System.IO.Stream,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_3_t65EFC2E389ACE4C9D5A2A12CDAED6D156A6FB20D;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t95750B1CF3F7626EC7AB30893A86E08F445DD75D;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Experimental.UI.DockPosition>
struct IEqualityComparer_1_tE69038978844705E26FCA79E697DF04C909428B5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t0433C5574AE0B8AB9FB6B71065909FA236452BBA;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.IClippable>
struct IEqualityComparer_1_t8F24B96A9AEBA31A84C739A93E0877C47C5ED373;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tB19FACB63FF81B5065B3FD6C8F98C93624BC8BD3;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct IEqualityComparer_1_t3602EB87E54E9A6A0550C4DF80EC5DC1FDE1194D;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityNearPointer>
struct IEqualityComparer_1_tB04DB89B607E263DF0E7C8BB5C1ECFB4EB3AFE3C;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct IEqualityComparer_1_tFBE848210DA630D8445966467B4CF4191A38E8DC;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer>
struct IEqualityComparer_1_tD22CD149A0D50EA77E111C1AFAFA8961E23DB90E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEqualityComparer_1_t74ECC3518B63E9EEEC54A24F2C8C9A18BBB18F0E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.KeyCode>
struct IEqualityComparer_1_tE260C0D651ADFE7583BBF07051184900BF142F77;
// System.Collections.Generic.List`1<System.IO.Directory/SearchData>
struct List_1_tD4204D52A57CADE11F26F8D3FAC6AF2EA0CB8913;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.IO.SearchResultHandler`1<System.String>
struct SearchResultHandler_1_tD1762938C5B5C9DD6F37A443145D75976531CF82;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Collections.Generic.HashSet`1/Slot<System.Byte>[]
struct SlotU5BU5D_tEA07A7128CB934E9D07BC9C962AF931B4DA2B837;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Experimental.UI.DockPosition>[]
struct SlotU5BU5D_t0B2DA00DC437327E4A33884DAA5D85B6FEC90A26;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.GameObject>[]
struct SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.UI.IClippable>[]
struct SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tE35A9C3696F3770AD96590B9EC5F585A8323E177;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>[]
struct SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityNearPointer>[]
struct SlotU5BU5D_t0CF2B9AF7417B4CF992D9FDB98378234C990E76A;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>[]
struct SlotU5BU5D_t186CEE80FDCEC6A3A65213E9DA64A026916B9183;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer>[]
struct SlotU5BU5D_tEE49F3F399A19C6FEE1512038312B480B6F84E91;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.InputSystem.Utilities.InternedString>[]
struct SlotU5BU5D_t83561CBAE7A0AF280BABADA6DBD8826A67E39A3B;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.KeyCode>[]
struct SlotU5BU5D_tB32D382139CC833FCF72494B2974852A4E5E3487;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t06A7B91260B6B573434BB302955EDFB1DC1AEC3B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// UnityEngine.InputSystem.Joystick[]
struct JoystickU5BU5D_t556820C3C00769EE1B828C460D5054A8B63BCFAB;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15;
// UnityEngine.InputSystem.PlayerInput[]
struct PlayerInputU5BU5D_t8D96276E53B3C3A8E5207423235DDB57780CE9D4;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.InputSystem.EnhancedTouch.Touch[]
struct TouchU5BU5D_t1DD17AD6235DC776F0CB288864122E8D2EC9CF80;
// UnityEngine.InputSystem.Controls.TouchControl[]
struct TouchControlU5BU5D_tFDC0F3F0217A9877C3197584FEB860B28527778B;
// UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage[]
struct HIDPageUsageU5BU5D_tC386439001F5D933E67FE48C30AFBA63B105FA61;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045;
// UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo[]
struct DeviceInfoU5BU5D_t2C1887253EA44617BE47A8883AD4A052FBA286EF;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t99FC68647EDA5B6B767C47B0139E584D2DA82702;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.Win32.SafeHandles.SafeFindHandle
struct SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Directory/SearchData
struct SearchData_t96E91410F24E0F7642D8E79E2941BC08C5928FA5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Byte>
struct NOVTABLE IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.InputControl>
struct Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67, ___m_Array_0)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputControlScheme,UnityEngine.InputSystem.InputControlScheme>
struct Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033, ___m_Array_0)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDevice>
struct Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5, ___m_Array_0)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUser>
struct Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	InputUserU5BU5D_t06A7B91260B6B573434BB302955EDFB1DC1AEC3B* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859, ___m_Array_0)); }
	inline InputUserU5BU5D_t06A7B91260B6B573434BB302955EDFB1DC1AEC3B* get_m_Array_0() const { return ___m_Array_0; }
	inline InputUserU5BU5D_t06A7B91260B6B573434BB302955EDFB1DC1AEC3B** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputUserU5BU5D_t06A7B91260B6B573434BB302955EDFB1DC1AEC3B* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B, ___m_Array_0)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_Array_0() const { return ___m_Array_0; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Joystick,UnityEngine.InputSystem.Joystick>
struct Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	JoystickU5BU5D_t556820C3C00769EE1B828C460D5054A8B63BCFAB* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44, ___m_Array_0)); }
	inline JoystickU5BU5D_t556820C3C00769EE1B828C460D5054A8B63BCFAB* get_m_Array_0() const { return ___m_Array_0; }
	inline JoystickU5BU5D_t556820C3C00769EE1B828C460D5054A8B63BCFAB** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(JoystickU5BU5D_t556820C3C00769EE1B828C460D5054A8B63BCFAB* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Controls.KeyControl,UnityEngine.InputSystem.Controls.KeyControl>
struct Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D, ___m_Array_0)); }
	inline KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF* get_m_Array_0() const { return ___m_Array_0; }
	inline KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.NameAndParameters>
struct Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0, ___m_Array_0)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get_m_Array_0() const { return ___m_Array_0; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.NamedValue>
struct Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F, ___m_Array_0)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get_m_Array_0() const { return ___m_Array_0; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.PlayerInput,UnityEngine.InputSystem.PlayerInput>
struct Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	PlayerInputU5BU5D_t8D96276E53B3C3A8E5207423235DDB57780CE9D4* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451, ___m_Array_0)); }
	inline PlayerInputU5BU5D_t8D96276E53B3C3A8E5207423235DDB57780CE9D4* get_m_Array_0() const { return ___m_Array_0; }
	inline PlayerInputU5BU5D_t8D96276E53B3C3A8E5207423235DDB57780CE9D4** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(PlayerInputU5BU5D_t8D96276E53B3C3A8E5207423235DDB57780CE9D4* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<System.Single,System.Single>
struct Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7, ___m_Array_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Array_0() const { return ___m_Array_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<System.String,System.String>
struct Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58, ___m_Array_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_Array_0() const { return ___m_Array_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	TouchU5BU5D_t1DD17AD6235DC776F0CB288864122E8D2EC9CF80* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D, ___m_Array_0)); }
	inline TouchU5BU5D_t1DD17AD6235DC776F0CB288864122E8D2EC9CF80* get_m_Array_0() const { return ___m_Array_0; }
	inline TouchU5BU5D_t1DD17AD6235DC776F0CB288864122E8D2EC9CF80** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(TouchU5BU5D_t1DD17AD6235DC776F0CB288864122E8D2EC9CF80* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Controls.TouchControl,UnityEngine.InputSystem.Controls.TouchControl>
struct Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	TouchControlU5BU5D_tFDC0F3F0217A9877C3197584FEB860B28527778B* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205, ___m_Array_0)); }
	inline TouchControlU5BU5D_tFDC0F3F0217A9877C3197584FEB860B28527778B* get_m_Array_0() const { return ___m_Array_0; }
	inline TouchControlU5BU5D_tFDC0F3F0217A9877C3197584FEB860B28527778B** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(TouchControlU5BU5D_tFDC0F3F0217A9877C3197584FEB860B28527778B* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage,UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage>
struct Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	HIDPageUsageU5BU5D_tC386439001F5D933E67FE48C30AFBA63B105FA61* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0, ___m_Array_0)); }
	inline HIDPageUsageU5BU5D_tC386439001F5D933E67FE48C30AFBA63B105FA61* get_m_Array_0() const { return ___m_Array_0; }
	inline HIDPageUsageU5BU5D_tC386439001F5D933E67FE48C30AFBA63B105FA61** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(HIDPageUsageU5BU5D_tC386439001F5D933E67FE48C30AFBA63B105FA61* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem,UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7, ___m_Array_0)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_m_Array_0() const { return ___m_Array_0; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputControlScheme/DeviceRequirement,UnityEngine.InputSystem.InputControlScheme/DeviceRequirement>
struct Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8, ___m_Array_0)); }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* get_m_Array_0() const { return ___m_Array_0; }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo,UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo>
struct Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	DeviceInfoU5BU5D_t2C1887253EA44617BE47A8883AD4A052FBA286EF* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC, ___m_Array_0)); }
	inline DeviceInfoU5BU5D_t2C1887253EA44617BE47A8883AD4A052FBA286EF* get_m_Array_0() const { return ___m_Array_0; }
	inline DeviceInfoU5BU5D_t2C1887253EA44617BE47A8883AD4A052FBA286EF** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(DeviceInfoU5BU5D_t2C1887253EA44617BE47A8883AD4A052FBA286EF* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.PlayerInput/ActionEvent,UnityEngine.InputSystem.PlayerInput/ActionEvent>
struct Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F  : public RuntimeObject
{
public:
	// T[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Array
	ActionEventU5BU5D_t99FC68647EDA5B6B767C47B0139E584D2DA82702* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F, ___m_Array_0)); }
	inline ActionEventU5BU5D_t99FC68647EDA5B6B767C47B0139E584D2DA82702* get_m_Array_0() const { return ___m_Array_0; }
	inline ActionEventU5BU5D_t99FC68647EDA5B6B767C47B0139E584D2DA82702** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ActionEventU5BU5D_t99FC68647EDA5B6B767C47B0139E584D2DA82702* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tEA07A7128CB934E9D07BC9C962AF931B4DA2B837* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____slots_8)); }
	inline SlotU5BU5D_tEA07A7128CB934E9D07BC9C962AF931B4DA2B837* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tEA07A7128CB934E9D07BC9C962AF931B4DA2B837** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tEA07A7128CB934E9D07BC9C962AF931B4DA2B837* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Experimental.UI.DockPosition>
struct HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0B2DA00DC437327E4A33884DAA5D85B6FEC90A26* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____slots_8)); }
	inline SlotU5BU5D_t0B2DA00DC437327E4A33884DAA5D85B6FEC90A26* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0B2DA00DC437327E4A33884DAA5D85B6FEC90A26** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0B2DA00DC437327E4A33884DAA5D85B6FEC90A26* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____slots_8)); }
	inline SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t4D48CE6F05DD1508F93D1238C2AD82830DDF9227* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____slots_8)); }
	inline SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t259BFAC5F7CE6E9965D6E32AE7B45465920FD1E1* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tE35A9C3696F3770AD96590B9EC5F585A8323E177* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____slots_8)); }
	inline SlotU5BU5D_tE35A9C3696F3770AD96590B9EC5F585A8323E177* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tE35A9C3696F3770AD96590B9EC5F585A8323E177** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tE35A9C3696F3770AD96590B9EC5F585A8323E177* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____slots_8)); }
	inline SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t90FB981A92704ECB53C1F7AEF092199CF3646D2D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityNearPointer>
struct HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0CF2B9AF7417B4CF992D9FDB98378234C990E76A* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____slots_8)); }
	inline SlotU5BU5D_t0CF2B9AF7417B4CF992D9FDB98378234C990E76A* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0CF2B9AF7417B4CF992D9FDB98378234C990E76A** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0CF2B9AF7417B4CF992D9FDB98378234C990E76A* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t186CEE80FDCEC6A3A65213E9DA64A026916B9183* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____slots_8)); }
	inline SlotU5BU5D_t186CEE80FDCEC6A3A65213E9DA64A026916B9183* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t186CEE80FDCEC6A3A65213E9DA64A026916B9183** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t186CEE80FDCEC6A3A65213E9DA64A026916B9183* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer>
struct HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tEE49F3F399A19C6FEE1512038312B480B6F84E91* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____slots_8)); }
	inline SlotU5BU5D_tEE49F3F399A19C6FEE1512038312B480B6F84E91* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tEE49F3F399A19C6FEE1512038312B480B6F84E91** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tEE49F3F399A19C6FEE1512038312B480B6F84E91* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____slots_8)); }
	inline SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t83561CBAE7A0AF280BABADA6DBD8826A67E39A3B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____slots_8)); }
	inline SlotU5BU5D_t83561CBAE7A0AF280BABADA6DBD8826A67E39A3B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t83561CBAE7A0AF280BABADA6DBD8826A67E39A3B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t83561CBAE7A0AF280BABADA6DBD8826A67E39A3B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<UnityEngine.KeyCode>
struct HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB32D382139CC833FCF72494B2974852A4E5E3487* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____slots_8)); }
	inline SlotU5BU5D_tB32D382139CC833FCF72494B2974852A4E5E3487* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tB32D382139CC833FCF72494B2974852A4E5E3487** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tB32D382139CC833FCF72494B2974852A4E5E3487* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.IO.Iterator`1<System.String>
struct Iterator_1_t369B60F5E3268347AD96C008B3A6C7B653B1B316  : public RuntimeObject
{
public:
	// System.Int32 System.IO.Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.IO.Iterator`1::state
	int32_t ___state_1;
	// TSource System.IO.Iterator`1::current
	String_t* ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t369B60F5E3268347AD96C008B3A6C7B653B1B316, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t369B60F5E3268347AD96C008B3A6C7B653B1B316, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t369B60F5E3268347AD96C008B3A6C7B653B1B316, ___current_2)); }
	inline String_t* get_current_2() const { return ___current_2; }
	inline String_t** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(String_t* value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


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


// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
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

// System.IO.SearchOption
struct SearchOption_tD088231E1E225D39BB408AEF566091138555C261 
{
public:
	// System.Int32 System.IO.SearchOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SearchOption_tD088231E1E225D39BB408AEF566091138555C261, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.IO.FileSystemEnumerableIterator`1<System.String>
struct FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF  : public Iterator_1_t369B60F5E3268347AD96C008B3A6C7B653B1B316
{
public:
	// System.IO.SearchResultHandler`1<TSource> System.IO.FileSystemEnumerableIterator`1::_resultHandler
	SearchResultHandler_1_tD1762938C5B5C9DD6F37A443145D75976531CF82 * ____resultHandler_3;
	// System.Collections.Generic.List`1<System.IO.Directory/SearchData> System.IO.FileSystemEnumerableIterator`1::searchStack
	List_1_tD4204D52A57CADE11F26F8D3FAC6AF2EA0CB8913 * ___searchStack_4;
	// System.IO.Directory/SearchData System.IO.FileSystemEnumerableIterator`1::searchData
	SearchData_t96E91410F24E0F7642D8E79E2941BC08C5928FA5 * ___searchData_5;
	// System.String System.IO.FileSystemEnumerableIterator`1::searchCriteria
	String_t* ___searchCriteria_6;
	// Microsoft.Win32.SafeHandles.SafeFindHandle System.IO.FileSystemEnumerableIterator`1::_hnd
	SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD * ____hnd_7;
	// System.Boolean System.IO.FileSystemEnumerableIterator`1::needsParentPathDiscoveryDemand
	bool ___needsParentPathDiscoveryDemand_8;
	// System.Boolean System.IO.FileSystemEnumerableIterator`1::empty
	bool ___empty_9;
	// System.String System.IO.FileSystemEnumerableIterator`1::userPath
	String_t* ___userPath_10;
	// System.IO.SearchOption System.IO.FileSystemEnumerableIterator`1::searchOption
	int32_t ___searchOption_11;
	// System.String System.IO.FileSystemEnumerableIterator`1::fullPath
	String_t* ___fullPath_12;
	// System.String System.IO.FileSystemEnumerableIterator`1::normalizedSearchPath
	String_t* ___normalizedSearchPath_13;
	// System.Boolean System.IO.FileSystemEnumerableIterator`1::_checkHost
	bool ____checkHost_14;

public:
	inline static int32_t get_offset_of__resultHandler_3() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ____resultHandler_3)); }
	inline SearchResultHandler_1_tD1762938C5B5C9DD6F37A443145D75976531CF82 * get__resultHandler_3() const { return ____resultHandler_3; }
	inline SearchResultHandler_1_tD1762938C5B5C9DD6F37A443145D75976531CF82 ** get_address_of__resultHandler_3() { return &____resultHandler_3; }
	inline void set__resultHandler_3(SearchResultHandler_1_tD1762938C5B5C9DD6F37A443145D75976531CF82 * value)
	{
		____resultHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resultHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_searchStack_4() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___searchStack_4)); }
	inline List_1_tD4204D52A57CADE11F26F8D3FAC6AF2EA0CB8913 * get_searchStack_4() const { return ___searchStack_4; }
	inline List_1_tD4204D52A57CADE11F26F8D3FAC6AF2EA0CB8913 ** get_address_of_searchStack_4() { return &___searchStack_4; }
	inline void set_searchStack_4(List_1_tD4204D52A57CADE11F26F8D3FAC6AF2EA0CB8913 * value)
	{
		___searchStack_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchStack_4), (void*)value);
	}

	inline static int32_t get_offset_of_searchData_5() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___searchData_5)); }
	inline SearchData_t96E91410F24E0F7642D8E79E2941BC08C5928FA5 * get_searchData_5() const { return ___searchData_5; }
	inline SearchData_t96E91410F24E0F7642D8E79E2941BC08C5928FA5 ** get_address_of_searchData_5() { return &___searchData_5; }
	inline void set_searchData_5(SearchData_t96E91410F24E0F7642D8E79E2941BC08C5928FA5 * value)
	{
		___searchData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchData_5), (void*)value);
	}

	inline static int32_t get_offset_of_searchCriteria_6() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___searchCriteria_6)); }
	inline String_t* get_searchCriteria_6() const { return ___searchCriteria_6; }
	inline String_t** get_address_of_searchCriteria_6() { return &___searchCriteria_6; }
	inline void set_searchCriteria_6(String_t* value)
	{
		___searchCriteria_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___searchCriteria_6), (void*)value);
	}

	inline static int32_t get_offset_of__hnd_7() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ____hnd_7)); }
	inline SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD * get__hnd_7() const { return ____hnd_7; }
	inline SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD ** get_address_of__hnd_7() { return &____hnd_7; }
	inline void set__hnd_7(SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD * value)
	{
		____hnd_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hnd_7), (void*)value);
	}

	inline static int32_t get_offset_of_needsParentPathDiscoveryDemand_8() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___needsParentPathDiscoveryDemand_8)); }
	inline bool get_needsParentPathDiscoveryDemand_8() const { return ___needsParentPathDiscoveryDemand_8; }
	inline bool* get_address_of_needsParentPathDiscoveryDemand_8() { return &___needsParentPathDiscoveryDemand_8; }
	inline void set_needsParentPathDiscoveryDemand_8(bool value)
	{
		___needsParentPathDiscoveryDemand_8 = value;
	}

	inline static int32_t get_offset_of_empty_9() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___empty_9)); }
	inline bool get_empty_9() const { return ___empty_9; }
	inline bool* get_address_of_empty_9() { return &___empty_9; }
	inline void set_empty_9(bool value)
	{
		___empty_9 = value;
	}

	inline static int32_t get_offset_of_userPath_10() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___userPath_10)); }
	inline String_t* get_userPath_10() const { return ___userPath_10; }
	inline String_t** get_address_of_userPath_10() { return &___userPath_10; }
	inline void set_userPath_10(String_t* value)
	{
		___userPath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userPath_10), (void*)value);
	}

	inline static int32_t get_offset_of_searchOption_11() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___searchOption_11)); }
	inline int32_t get_searchOption_11() const { return ___searchOption_11; }
	inline int32_t* get_address_of_searchOption_11() { return &___searchOption_11; }
	inline void set_searchOption_11(int32_t value)
	{
		___searchOption_11 = value;
	}

	inline static int32_t get_offset_of_fullPath_12() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___fullPath_12)); }
	inline String_t* get_fullPath_12() const { return ___fullPath_12; }
	inline String_t** get_address_of_fullPath_12() { return &___fullPath_12; }
	inline void set_fullPath_12(String_t* value)
	{
		___fullPath_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullPath_12), (void*)value);
	}

	inline static int32_t get_offset_of_normalizedSearchPath_13() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ___normalizedSearchPath_13)); }
	inline String_t* get_normalizedSearchPath_13() const { return ___normalizedSearchPath_13; }
	inline String_t** get_address_of_normalizedSearchPath_13() { return &___normalizedSearchPath_13; }
	inline void set_normalizedSearchPath_13(String_t* value)
	{
		___normalizedSearchPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalizedSearchPath_13), (void*)value);
	}

	inline static int32_t get_offset_of__checkHost_14() { return static_cast<int32_t>(offsetof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF, ____checkHost_14)); }
	inline bool get__checkHost_14() const { return ____checkHost_14; }
	inline bool* get_address_of__checkHost_14() { return &____checkHost_14; }
	inline void set__checkHost_14(bool value)
	{
		____checkHost_14 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_40)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_40() const { return ___m_result_40; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
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

// System.EventHandler`1<System.Boolean>
struct EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.Boolean>
struct IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___e1) = 0;
};


// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.Object>
struct IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___e1) = 0;
};


// Windows.Foundation.EventHandler`1<System.Boolean>
struct EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Boolean>
struct IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Object>
struct IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1<System.Int32,System.IO.Stream>
struct FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4  : public Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1::m_thisRef
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_thisRef_44;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1::m_endMethod
	Func_3_tA866098214C49DCA600CBC7CF103DE7B4D652245 * ___m_endMethod_45;

public:
	inline static int32_t get_offset_of_m_thisRef_44() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4, ___m_thisRef_44)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_thisRef_44() const { return ___m_thisRef_44; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_thisRef_44() { return &___m_thisRef_44; }
	inline void set_m_thisRef_44(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_thisRef_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_45() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4, ___m_endMethod_45)); }
	inline Func_3_tA866098214C49DCA600CBC7CF103DE7B4D652245 * get_m_endMethod_45() const { return ___m_endMethod_45; }
	inline Func_3_tA866098214C49DCA600CBC7CF103DE7B4D652245 ** get_address_of_m_endMethod_45() { return &___m_endMethod_45; }
	inline void set_m_endMethod_45(Func_3_tA866098214C49DCA600CBC7CF103DE7B4D652245 * value)
	{
		___m_endMethod_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_45), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_43;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_43() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_StaticFields, ___s_completeFromAsyncResult_43)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_43() const { return ___s_completeFromAsyncResult_43; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_43() { return &___s_completeFromAsyncResult_43; }
	inline void set_s_completeFromAsyncResult_43(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_43), (void*)value);
	}
};


// System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1<System.Threading.Tasks.VoidTaskResult,System.IO.Stream>
struct FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// TInstance System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1::m_thisRef
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_thisRef_44;
	// System.Func`3<TInstance,System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1::m_endMethod
	Func_3_t65EFC2E389ACE4C9D5A2A12CDAED6D156A6FB20D * ___m_endMethod_45;

public:
	inline static int32_t get_offset_of_m_thisRef_44() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8, ___m_thisRef_44)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_thisRef_44() const { return ___m_thisRef_44; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_thisRef_44() { return &___m_thisRef_44; }
	inline void set_m_thisRef_44(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_thisRef_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_thisRef_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_endMethod_45() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8, ___m_endMethod_45)); }
	inline Func_3_t65EFC2E389ACE4C9D5A2A12CDAED6D156A6FB20D * get_m_endMethod_45() const { return ___m_endMethod_45; }
	inline Func_3_t65EFC2E389ACE4C9D5A2A12CDAED6D156A6FB20D ** get_address_of_m_endMethod_45() { return &___m_endMethod_45; }
	inline void set_m_endMethod_45(Func_3_t65EFC2E389ACE4C9D5A2A12CDAED6D156A6FB20D * value)
	{
		___m_endMethod_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_endMethod_45), (void*)value);
	}
};

struct FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_StaticFields
{
public:
	// System.AsyncCallback System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1::s_completeFromAsyncResult
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___s_completeFromAsyncResult_43;

public:
	inline static int32_t get_offset_of_s_completeFromAsyncResult_43() { return static_cast<int32_t>(offsetof(FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_StaticFields, ___s_completeFromAsyncResult_43)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_s_completeFromAsyncResult_43() const { return ___s_completeFromAsyncResult_43; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_s_completeFromAsyncResult_43() { return &___s_completeFromAsyncResult_43; }
	inline void set_s_completeFromAsyncResult_43(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___s_completeFromAsyncResult_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completeFromAsyncResult_43), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue);

// System.Void System.EventHandler`1<System.Boolean>::Invoke(System.Object,TEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_gshared (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __this, RuntimeObject * ___sender0, bool ___e1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void Windows.Foundation.EventHandler`1<System.Boolean>::Invoke(System.Object,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098_gshared (EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893 * __this, RuntimeObject * ___sender0, bool ___args1, const RuntimeMethod* method);
// System.Void Windows.Foundation.EventHandler`1<System.Object>::Invoke(System.Object,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516_gshared (EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5 * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method);

// System.Void System.EventHandler`1<System.Boolean>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4 (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __this, RuntimeObject * ___sender0, bool ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *, RuntimeObject *, bool, const RuntimeMethod*))EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0 (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Windows.Foundation.EventHandler`1<System.Boolean>::Invoke(System.Object,T)
inline void EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098 (EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893 * __this, RuntimeObject * ___sender0, bool ___args1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893 *, RuntimeObject *, bool, const RuntimeMethod*))EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.EventHandler`1<System.Object>::Invoke(System.Object,T)
inline void EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516 (EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5 * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516_gshared)(__this, ___sender0, ___args1, method);
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.InputControl>
struct Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t64229E29C85E9248BED0D9EE76AE2568DCE54C67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputControlScheme,UnityEngine.InputSystem.InputControlScheme>
struct Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tB1B2F43A1898BE1163D2C4011D58916256BCB033_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDevice>
struct Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tF7C3A96292CCC9821756E567F2A6ED85376F54A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUser>
struct Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tF91794E8F7E581C77B87E5A6B5CE9D8609979859_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t5A7250EDF58CC163826D06C4B5E103F03027871B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Joystick,UnityEngine.InputSystem.Joystick>
struct Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t50E2E5CADD7973F164E55C939DBECF25E9F39F44_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Controls.KeyControl,UnityEngine.InputSystem.Controls.KeyControl>
struct Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t76FE2477D3CB043F23B7381F36D6521F27B9268D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.NameAndParameters>
struct Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tC3BB4E3338C42E680E35157E5D20131AA41984C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.NamedValue>
struct Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tEED8CB767089F8DA151B72BE6DB6BC561AA4AB4F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.PlayerInput,UnityEngine.InputSystem.PlayerInput>
struct Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t38D14CE68CE3BA4B5CC4FE2DCE4635A30F838451_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<System.Single,System.Single>
struct Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tD08E6B5CAA4729CB7652B0DD4C00BDB199BFBAF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<System.String,System.String>
struct Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tA0B43C3181C8339F53443E76263371C8C5DA5A58_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.EnhancedTouch.Touch,UnityEngine.InputSystem.EnhancedTouch.Touch>
struct Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tF30CB6F5ABB35E90FA39D66736790622291F180D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Controls.TouchControl,UnityEngine.InputSystem.Controls.TouchControl>
struct Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tA5DA0339A6F2E73903E329DA0E10BAC832A30205_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage,UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage>
struct Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t268421428562A4C7199671CA811AE609AB75F2A0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem,UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>
struct Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t5D7B4F8F78F764D0FEC868B2C25634B42FD687F7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.InputControlScheme/DeviceRequirement,UnityEngine.InputSystem.InputControlScheme/DeviceRequirement>
struct Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t55B9E5EDD8C8E9D25DF3CF1C3D34F7CD05DF2DA8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo,UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo>
struct Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_tC27BA93D504AE31F5C79E84CFAB28D1546E246FC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator`1<UnityEngine.InputSystem.PlayerInput/ActionEvent,UnityEngine.InputSystem.PlayerInput/ActionEvent>
struct Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_1_t0D5366519F239FB21870AC1EA68A252168E2760F_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for System.EventHandler`1<System.Boolean>
struct EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper>, IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper
{
	inline EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for System.EventHandler`1<System.Boolean>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___e1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 * __thisValue = (EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 *)GetManagedObjectInline();
			EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4(__thisValue, ____sender0_unmarshaled, ___e1, EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper>, IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper
{
	inline EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for System.EventHandler`1<System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___e1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___e1' to managed representation
		RuntimeObject * ____e1_unmarshaled = NULL;
		if (___e1 != NULL)
		{
			____e1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___e1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____e1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____e1_unmarshaled), Il2CppIInspectable::IID, ___e1);
			}
		}
		else
		{
			____e1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __thisValue = (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB *)GetManagedObjectInline();
			EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0(__thisValue, ____sender0_unmarshaled, ____e1_unmarshaled, EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.EventHandler`1<System.Boolean>
struct EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper>, IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper
{
	inline EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.EventHandler`1<System.Boolean>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893 * __thisValue = (EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893 *)GetManagedObjectInline();
			EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098(__thisValue, ____sender0_unmarshaled, ___args1, EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper>, IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper
{
	inline EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.EventHandler`1<System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		RuntimeObject * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___args1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), Il2CppIInspectable::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5 * __thisValue = (EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5 *)GetManagedObjectInline();
			EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.FileSystemEnumerableIterator`1<System.String>
struct FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileSystemEnumerableIterator_1_t93F2725F2BF49A71F6687D9F14096009FCE352BF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1<System.Int32,System.IO.Stream>
struct FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FromAsyncTrimPromise_1_t1299B8C357E9FF8AB93CB0252D6C8B68187B8EF4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1<System.Threading.Tasks.VoidTaskResult,System.IO.Stream>
struct FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FromAsyncTrimPromise_1_t9F553FF84DB3408F3E4C60D57E1FDF67CD6583D8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<System.Byte>
struct HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C_ComCallableWrapper>, IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tD0597EBCA288E19261E4CD889A045D4DED68F0D5::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66(IIterator_1_t6A965FDCA7EF0FD28DFA23C03C7491D6F48B19FC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB95F2845D73300049FCB9B21FE7ACC3473E5E66_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t7B3C8143E96388804770326DB4A95F7230B97B8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Experimental.UI.DockPosition>
struct HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t97A29F9B867729EB795E91C2F782BC9BF539426C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityNearPointer>
struct HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t963B28DB44E70AFBE31238DFE7145E8F4DE0C6A3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t2FA1E1D55BEABC44A1D48B3609F04EDF8AD396A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer>
struct HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t73FCC799EB6FB571E797A56B53C52B6786112AD7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.HashSet`1<UnityEngine.KeyCode>
struct HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) HashSet_1_t66D9A5314C08E185DAC08D3D4CF1AEA82032AFA4_ComCallableWrapper(obj));
}
