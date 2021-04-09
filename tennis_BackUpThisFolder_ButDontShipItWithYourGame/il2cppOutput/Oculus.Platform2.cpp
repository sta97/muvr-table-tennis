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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Oculus.Platform.Message`1/Callback<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LinkedAccountList>
struct Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>
struct Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172;
// Oculus.Platform.Message`1/Callback<System.Object>
struct Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.OrgScopedID>
struct Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.PlatformInitialize>
struct Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>
struct Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomInviteNotification>
struct Callback_t2738E26970FDD9D111F9D6CCBBB107852DE3F9FC;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomInviteNotificationList>
struct Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomList>
struct Callback_t590E20196493C6D61101EFC7DC1140C49F01B24C;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SdkAccountList>
struct Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B;
// Oculus.Platform.Message`1/Callback<System.String>
struct Callback_tD043303749DFDABD54DB83282588105CC2ADB18D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>
struct Callback_t827F915E827EE8044B5F300339FE951E4557B20A;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.User>
struct Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserAndRoomList>
struct Callback_t3540E20CECB87A70AAF8B7A26B42ABE7C7158556;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserList>
struct Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499;
// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.UserProof>
struct Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Room>
struct DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.RoomInviteNotification>
struct DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>
struct DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Team>
struct DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409;
// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserAndRoom>
struct DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.RoomInviteNotification>
struct IEnumerator_1_t7A703BFFC757C788E97490E3BD1D32155B78CA0A;
// System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>
struct IEnumerator_1_tB4A1526F6D8A4A6BF9EF50D4C9DDA2ADDDF23D5F;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_tAFCE72ADC2EDFFA5D34E7918994DD34A8583449F;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,Oculus.Platform.Models.LeaderboardEntry>
struct KeyCollection_tA67A06DBB2397E1AD748C847DB4A9A5E729EA5E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Room>
struct List_1_t4516EDFD0028F2B62B72159D9E202D2643CFE89F;
// System.Collections.Generic.List`1<Oculus.Platform.Models.RoomInviteNotification>
struct List_1_tBABCE3E4A1D007A44A699A25CDABA032E3A4003B;
// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>
struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E;
// System.Collections.Generic.List`1<Oculus.Platform.Models.Team>
struct List_1_t2D436535887B174C4FD890661D903CEF9665EB33;
// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554;
// System.Collections.Generic.List`1<Oculus.Platform.Models.UserAndRoom>
struct List_1_t170398B9618F382160996609D78622C9AEDAA3EC;
// System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>
struct List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973;
// Oculus.Platform.Message`1<Oculus.Platform.Models.HttpTransferUpdate>
struct Message_1_t0F97298AE8C3B061E1CBD75F517F5EE037028F68;
// Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>
struct Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27;
// Oculus.Platform.Message`1<System.Object>
struct Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C;
// Oculus.Platform.Message`1<Oculus.Platform.Models.Room>
struct Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5;
// Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotification>
struct Message_1_tB805D8548A3881F57FDE32CDE76225FCB7EF02F0;
// Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotificationList>
struct Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38;
// Oculus.Platform.Message`1<System.String>
struct Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84;
// Oculus.Platform.Message`1<Oculus.Platform.Models.SystemVoipState>
struct Message_1_t69247AD29A410C26E5B958B0E5CA87195EE6F862;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92;
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866;
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530;
// Oculus.Platform.Request`1<System.Object>
struct Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46;
// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>
struct Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95;
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>
struct Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4;
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room>
struct Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9;
// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList>
struct Request_1_t905B55299B98360BD28441866328CC345E8F3910;
// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList>
struct Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5;
// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>
struct Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C;
// Oculus.Platform.Request`1<System.String>
struct Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC;
// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>
struct Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF;
// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList>
struct Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct Request_1_t2CA1B16D395258918A268B17227A7212918D2136;
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE;
// System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>
struct SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>>
struct TreeSet_1_tEA469E8101A66607828A396ADD2A529EA008550B;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,Oculus.Platform.Models.LeaderboardEntry>
struct ValueCollection_t46072BDBD989FEEEA1871202E16BCD8B6D2C42F6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>[]
struct EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.HashSet`1/Slot<System.UInt64>[]
struct SlotU5BU5D_t74FE0A9D6137C0F82C6DB23A4C6F8E111103E15D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Oculus.Platform.Models.SdkAccount[]
struct SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Oculus.Platform.Models.Team[]
struct TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11;
// Oculus.Platform.Models.User[]
struct UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D;
// Oculus.Platform.Models.UserAndRoom[]
struct UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588;
// Oculus.Platform.CAPI/ovrKeyValuePair[]
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455;
// Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite[]
struct InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE;
// Oculus.Platform.Matchmaking/CustomQuery/Criterion[]
struct CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Oculus.Platform.Samples.VrHoops.BallEjector
struct BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Oculus.Platform.Models.Error
struct Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Oculus.Platform.IVoipPCMSource
struct IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC;
// Oculus.Platform.Models.MatchmakingEnqueuedUserList
struct MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// Oculus.Platform.Message
struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Oculus.Platform.Models.NetworkingPeer
struct NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Oculus.Platform.Samples.VrHoops.Player
struct Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0;
// Oculus.Platform.Samples.VrHoops.RemotePlayer
struct RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C;
// Oculus.Platform.Request
struct Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2;
// Oculus.Platform.Models.Room
struct Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857;
// Oculus.Platform.Models.RoomInviteNotificationList
struct RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E;
// Oculus.Platform.Models.RoomList
struct RoomList_t207839A231FFF8CED968FBF572DAC4FC7DEB6AD5;
// Oculus.Platform.Samples.VrVoiceChat.RoomManager
struct RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8;
// Oculus.Platform.RoomOptions
struct RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Oculus.Platform.Models.SdkAccount
struct SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A;
// Oculus.Platform.Models.SdkAccountList
struct SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Oculus.Platform.Models.ShareMediaResult
struct ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// Oculus.Platform.StandalonePlatform
struct StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A;
// Oculus.Platform.StandalonePlatformSettings
struct StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// Oculus.Platform.Models.SupplementaryMetric
struct SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185;
// Oculus.Platform.Models.SystemPermission
struct SystemPermission_t481EA9156002B8786F6E38A779D31F5FED8F7A9F;
// Oculus.Platform.Models.SystemVoipState
struct SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D;
// Oculus.Platform.Models.Team
struct Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA;
// Oculus.Platform.Models.TeamList
struct TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// Oculus.Platform.Models.User
struct User_tA163463AE919860D9B337F6104B028990A44B69D;
// Oculus.Platform.Models.UserAndRoom
struct UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3;
// Oculus.Platform.Models.UserAndRoomList
struct UserAndRoomList_t01FB60436C1268659BD43BCF28B15B83026A0F8C;
// Oculus.Platform.Models.UserDataStoreUpdateResponse
struct UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23;
// Oculus.Platform.Models.UserList
struct UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B;
// Oculus.Platform.UserOptions
struct UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706;
// Oculus.Platform.Models.UserProof
struct UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94;
// Oculus.Platform.Models.UserReportID
struct UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB;
// Oculus.Platform.Samples.VrHoops.VREyeRaycaster
struct VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90;
// Oculus.Platform.Samples.VrVoiceChat.VREyeRaycaster
struct VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Oculus.Platform.VoipAudioSourceHiLevel
struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD;
// Oculus.Platform.Samples.VrVoiceChat.VoipManager
struct VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9;
// Oculus.Platform.VoipOptions
struct VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050;
// Oculus.Platform.VoipPCMSourceNative
struct VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13;
// Oculus.Platform.WindowsPlatform
struct WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2;
// Oculus.Platform.Samples.NetChat.chatPacket
struct chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// Oculus.Platform.CAPI/FilterCallback
struct FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303;
// Oculus.Platform.Callback/RequestCallback
struct RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF;
// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated
struct OnHighScoreLeaderboardUpdated_t3D7889CCD1CF5D3138F9BA740B6B257BACB92063;
// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated
struct OnMostWinsLeaderboardUpdated_t4A02F9D52EBD70CF987D7A8ABB53DE5E6D1B7BDA;
// Oculus.Platform.Matchmaking/CustomQuery
struct CustomQuery_tE222BFE49B3B2183F16D8ECBA6BC65B3CF917B3A;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult
struct OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE;
// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded
struct OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0;
// Oculus.Platform.Message/Callback
struct Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8;
// Oculus.Platform.Message/ExtraMessageTypesHandler
struct ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF;
// Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
struct RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA;
// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer
struct StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170;
// Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D;
// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94;
// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t7A703BFFC757C788E97490E3BD1D32155B78CA0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tB4A1526F6D8A4A6BF9EF50D4C9DDA2ADDDF23D5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t170398B9618F382160996609D78622C9AEDAA3EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2D436535887B174C4FD890661D903CEF9665EB33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FB3A8EC9AB95DA81690EA353B6F511FE40FF1;
IL2CPP_EXTERN_C String_t* _stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6;
IL2CPP_EXTERN_C String_t* _stringLiteral141DB8E2222B0556D3C6A55EC404DB7A9D4332CF;
IL2CPP_EXTERN_C String_t* _stringLiteral194C68A6F90159A4805C87DDCCF20C0EE7F77F45;
IL2CPP_EXTERN_C String_t* _stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD;
IL2CPP_EXTERN_C String_t* _stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15;
IL2CPP_EXTERN_C String_t* _stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral6502DBEA7DCA489774648AC2338DB14B68A43496;
IL2CPP_EXTERN_C String_t* _stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204;
IL2CPP_EXTERN_C String_t* _stringLiteralBB92D325438C8B008E393D6B7E6906DE9B33D321;
IL2CPP_EXTERN_C String_t* _stringLiteralC80A2B706C9CFA7D08C1B83FC2D4B8E7E7D9C7A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD97B64A71DBF7187F344B8D2B68F3496E979DDF0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1232E48A80842C33CAEA1FBBFC759FAF1AE31B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF9672C405BFD4F07858BF27A2CC8A340FD89B34B;
IL2CPP_EXTERN_C String_t* _stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mAFCD46BC660098E122B2BB26192E0EF9C7D1476A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisRoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8_m5B108FA9AC43EEFAC1DD557E75C46311C1E8C040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisRoom_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_m52F6062D3520C202A7C088F4A664368B3399FBF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m62DFA300B53C52D4F5021985CEF239AA828434BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_m937B3A7D659D1FBF2BB1F4BA72ED6F5FE940EAA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_GetEnumerator_m8BE0D7817F81271AE59AE0762206FA976C6FB640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_m7F06DF5A7957D69926FC06231C1B6AB352338B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1__ctor_mAB7228FB3D86951154FE8023972652E1311626B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_Count_m85E29052BCD6634DC8E35A05612502DA7C5C6C05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m08E5E8ACFC1586825A5394E7DCDF7A91E1397BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_HasNextPage_mDFDD1705C90CD1F2DDC6BFA2BEE89E3C37ECB6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mA8EC3005EA342AD8A891E0E3BBEC7993C7F4B3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeserializableList_1_get_NextUrl_mF88551A9660F8EBD0EF412C131EE38A00AFA40B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m99462FD95A811068FBA964A97213B4CA59FF8A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0E89F960CC17EAEBA38A57A632911BB4A6D9EAFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m960FD5C861EFDB693785C073698FEBE516CDE81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m0E3CAC37687B000CB800D958EEF3EFCC084D2041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_m60FC4D21BC98CEBEB913D8B780A072430527A0F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_mCCA15296A81FF003C4507FF456845D7932629C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_mE8A51FD815FF954245F17AD1B1028ECDB7A6213F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9B9D89C6D4523685BDBB873E3E76754E89171468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m73C2858A70CE1C9A1AEE4134B4E3B136CA4B719F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5BBC7D14058D9138458B3B7A0200B8A9BC17F9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7187674DB4D34A89D7BEDB715297659D1DB53CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m76760B69537205E74CC1457569EA27D97A168E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD30850BDDEA81ACCB0B61F5D19E8433E8D1A0783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m09EB5665BFEF44DD41A2937561B1A94145BE79DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3F53784E1A92E049156DD71024FE8D4E9ABB88DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mCAA75EEFA7F4C00E8CE9FFC18FE486D15DA6B02D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1_OnComplete_mA484A985B43347007CA93891098ED696039AE892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_CreateAndJoinPrivateRoomCallback_mEFBD494FD7E02659D43455AFE98F591F5ABE1269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_GetRoomInfoCallback_m457E3E5C50D10D5E9FCE5A5965A0E5C85C92519A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_GetRoomInviteNotificationsCallback_m602914AEB61F8B54D9F068D5B8B9C410DC29806D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_JoinRoomCallback_m9A0A4EDD55C3F0F1E40FD00396D9A5319B92AC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_LaunchedFromAcceptingInviteCallback_mB42F1B52C4446B2A273F4B39A0A7F3C1EC2D0225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_OnLaunchInviteWorkflowComplete_m219122A59B46FAF8A235A23FE1EBE1B5776C0C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoomManager_RoomUpdateCallback_mEDF5E95BC5B83274AA3536CC4269801C086F1744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoipManager_VoipConnectRequestCallback_mA4E56E1620C6C0427E633127A274A3357E0FECE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VoipManager_VoipStateChangedCallback_mBB0E0B7578DE9B4CBB481936158528F0CDB8EEA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455;
struct ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C;
struct CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Oculus.Platform.Models.DeserializableList`1<System.Object>
struct  DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____Data_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get__Data_0() const { return ____Data_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Room>
struct  DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t4516EDFD0028F2B62B72159D9E202D2643CFE89F * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA, ____Data_0)); }
	inline List_1_t4516EDFD0028F2B62B72159D9E202D2643CFE89F * get__Data_0() const { return ____Data_0; }
	inline List_1_t4516EDFD0028F2B62B72159D9E202D2643CFE89F ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t4516EDFD0028F2B62B72159D9E202D2643CFE89F * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.RoomInviteNotification>
struct  DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_tBABCE3E4A1D007A44A699A25CDABA032E3A4003B * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D, ____Data_0)); }
	inline List_1_tBABCE3E4A1D007A44A699A25CDABA032E3A4003B * get__Data_0() const { return ____Data_0; }
	inline List_1_tBABCE3E4A1D007A44A699A25CDABA032E3A4003B ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_tBABCE3E4A1D007A44A699A25CDABA032E3A4003B * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>
struct  DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____Data_0)); }
	inline List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * get__Data_0() const { return ____Data_0; }
	inline List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Team>
struct  DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17, ____Data_0)); }
	inline List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * get__Data_0() const { return ____Data_0; }
	inline List_1_t2D436535887B174C4FD890661D903CEF9665EB33 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>
struct  DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____Data_0)); }
	inline List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * get__Data_0() const { return ____Data_0; }
	inline List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserAndRoom>
struct  DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Oculus.Platform.Models.DeserializableList`1::_Data
	List_1_t170398B9618F382160996609D78622C9AEDAA3EC * ____Data_0;
	// System.String Oculus.Platform.Models.DeserializableList`1::_NextUrl
	String_t* ____NextUrl_1;
	// System.String Oculus.Platform.Models.DeserializableList`1::_PreviousUrl
	String_t* ____PreviousUrl_2;

public:
	inline static int32_t get_offset_of__Data_0() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57, ____Data_0)); }
	inline List_1_t170398B9618F382160996609D78622C9AEDAA3EC * get__Data_0() const { return ____Data_0; }
	inline List_1_t170398B9618F382160996609D78622C9AEDAA3EC ** get_address_of__Data_0() { return &____Data_0; }
	inline void set__Data_0(List_1_t170398B9618F382160996609D78622C9AEDAA3EC * value)
	{
		____Data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Data_0), (void*)value);
	}

	inline static int32_t get_offset_of__NextUrl_1() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57, ____NextUrl_1)); }
	inline String_t* get__NextUrl_1() const { return ____NextUrl_1; }
	inline String_t** get_address_of__NextUrl_1() { return &____NextUrl_1; }
	inline void set__NextUrl_1(String_t* value)
	{
		____NextUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____NextUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of__PreviousUrl_2() { return static_cast<int32_t>(offsetof(DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57, ____PreviousUrl_2)); }
	inline String_t* get__PreviousUrl_2() const { return ____PreviousUrl_2; }
	inline String_t** get_address_of__PreviousUrl_2() { return &____PreviousUrl_2; }
	inline void set__PreviousUrl_2(String_t* value)
	{
		____PreviousUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PreviousUrl_2), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>
struct  Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___entries_1)); }
	inline EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t76B74F86DC46D1AA9338B8538B4CA129C930DABC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___keys_7)); }
	inline KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tED29345BB862E15DB746D9DBDAE367EAC12E8567 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ___values_8)); }
	inline ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB1AFB79FCAC6F49BE5EFC76853D604E27816C614 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.UInt64>
struct  HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t74FE0A9D6137C0F82C6DB23A4C6F8E111103E15D* ____slots_8;
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
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____slots_8)); }
	inline SlotU5BU5D_t74FE0A9D6137C0F82C6DB23A4C6F8E111103E15D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t74FE0A9D6137C0F82C6DB23A4C6F8E111103E15D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t74FE0A9D6137C0F82C6DB23A4C6F8E111103E15D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>
struct  List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____items_1)); }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* get__items_1() const { return ____items_1; }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_StaticFields, ____emptyArray_5)); }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SdkAccountU5BU5D_t43434132ACD9803AFEDF07420356C2B15B8B0D5A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.Team>
struct  List_1_t2D436535887B174C4FD890661D903CEF9665EB33  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2D436535887B174C4FD890661D903CEF9665EB33, ____items_1)); }
	inline TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11* get__items_1() const { return ____items_1; }
	inline TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2D436535887B174C4FD890661D903CEF9665EB33, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2D436535887B174C4FD890661D903CEF9665EB33, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2D436535887B174C4FD890661D903CEF9665EB33, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2D436535887B174C4FD890661D903CEF9665EB33_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2D436535887B174C4FD890661D903CEF9665EB33_StaticFields, ____emptyArray_5)); }
	inline TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TeamU5BU5D_t33B9241DB40D0F2C427303144BC302491F56DF11* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.User>
struct  List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____items_1)); }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* get__items_1() const { return ____items_1; }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_StaticFields, ____emptyArray_5)); }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserU5BU5D_t7F9FE2CBF065E1E70651E183BD067F99B167591D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Models.UserAndRoom>
struct  List_1_t170398B9618F382160996609D78622C9AEDAA3EC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t170398B9618F382160996609D78622C9AEDAA3EC, ____items_1)); }
	inline UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588* get__items_1() const { return ____items_1; }
	inline UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t170398B9618F382160996609D78622C9AEDAA3EC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t170398B9618F382160996609D78622C9AEDAA3EC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t170398B9618F382160996609D78622C9AEDAA3EC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t170398B9618F382160996609D78622C9AEDAA3EC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t170398B9618F382160996609D78622C9AEDAA3EC_StaticFields, ____emptyArray_5)); }
	inline UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserAndRoomU5BU5D_t6DDC11E61AC4FA64F98674477C771BC69E5E8588* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>
struct  List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973, ____items_1)); }
	inline InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE* get__items_1() const { return ____items_1; }
	inline InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973_StaticFields, ____emptyArray_5)); }
	inline InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InviteU5BU5D_tA564176C58B97F1A48B94E90A0F0271F8EC87DCE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>
struct  SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tA67A06DBB2397E1AD748C847DB4A9A5E729EA5E0 * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t46072BDBD989FEEEA1871202E16BCD8B6D2C42F6 * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tEA469E8101A66607828A396ADD2A529EA008550B * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B, ____keys_0)); }
	inline KeyCollection_tA67A06DBB2397E1AD748C847DB4A9A5E729EA5E0 * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_tA67A06DBB2397E1AD748C847DB4A9A5E729EA5E0 ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_tA67A06DBB2397E1AD748C847DB4A9A5E729EA5E0 * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B, ____values_1)); }
	inline ValueCollection_t46072BDBD989FEEEA1871202E16BCD8B6D2C42F6 * get__values_1() const { return ____values_1; }
	inline ValueCollection_t46072BDBD989FEEEA1871202E16BCD8B6D2C42F6 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_t46072BDBD989FEEEA1871202E16BCD8B6D2C42F6 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B, ____set_2)); }
	inline TreeSet_1_tEA469E8101A66607828A396ADD2A529EA008550B * get__set_2() const { return ____set_2; }
	inline TreeSet_1_tEA469E8101A66607828A396ADD2A529EA008550B ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_tEA469E8101A66607828A396ADD2A529EA008550B * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.IO.BinaryReader
struct  BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_decoder_2)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBytes_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_singleChar_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_charBuffer_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// Oculus.Platform.Core
struct  Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4  : public RuntimeObject
{
public:

public:
};

struct Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields
{
public:
	// System.Boolean Oculus.Platform.Core::IsPlatformInitialized
	bool ___IsPlatformInitialized_0;
	// System.Boolean Oculus.Platform.Core::LogMessages
	bool ___LogMessages_1;

public:
	inline static int32_t get_offset_of_IsPlatformInitialized_0() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___IsPlatformInitialized_0)); }
	inline bool get_IsPlatformInitialized_0() const { return ___IsPlatformInitialized_0; }
	inline bool* get_address_of_IsPlatformInitialized_0() { return &___IsPlatformInitialized_0; }
	inline void set_IsPlatformInitialized_0(bool value)
	{
		___IsPlatformInitialized_0 = value;
	}

	inline static int32_t get_offset_of_LogMessages_1() { return static_cast<int32_t>(offsetof(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields, ___LogMessages_1)); }
	inline bool get_LogMessages_1() const { return ___LogMessages_1; }
	inline bool* get_address_of_LogMessages_1() { return &___LogMessages_1; }
	inline void set_LogMessages_1(bool value)
	{
		___LogMessages_1 = value;
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Oculus.Platform.Request
struct  Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Request::callback_
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback__0;
	// System.UInt64 Oculus.Platform.Request::<RequestID>k__BackingField
	uint64_t ___U3CRequestIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_callback__0() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___callback__0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_callback__0() const { return ___callback__0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_callback__0() { return &___callback__0; }
	inline void set_callback__0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___callback__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2, ___U3CRequestIDU3Ek__BackingField_1)); }
	inline uint64_t get_U3CRequestIDU3Ek__BackingField_1() const { return ___U3CRequestIDU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CRequestIDU3Ek__BackingField_1() { return &___U3CRequestIDU3Ek__BackingField_1; }
	inline void set_U3CRequestIDU3Ek__BackingField_1(uint64_t value)
	{
		___U3CRequestIDU3Ek__BackingField_1 = value;
	}
};


// Oculus.Platform.Samples.VrVoiceChat.RoomManager
struct  RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Samples.VrVoiceChat.RoomManager::m_roomID
	uint64_t ___m_roomID_0;
	// Oculus.Platform.Models.User Oculus.Platform.Samples.VrVoiceChat.RoomManager::m_remoteUser
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___m_remoteUser_1;
	// System.Single Oculus.Platform.Samples.VrVoiceChat.RoomManager::m_nextPollTime
	float ___m_nextPollTime_3;
	// System.Collections.Generic.HashSet`1<System.UInt64> Oculus.Platform.Samples.VrVoiceChat.RoomManager::m_pendingRoomRequests
	HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * ___m_pendingRoomRequests_4;
	// System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite> Oculus.Platform.Samples.VrVoiceChat.RoomManager::m_invites
	List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * ___m_invites_5;

public:
	inline static int32_t get_offset_of_m_roomID_0() { return static_cast<int32_t>(offsetof(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8, ___m_roomID_0)); }
	inline uint64_t get_m_roomID_0() const { return ___m_roomID_0; }
	inline uint64_t* get_address_of_m_roomID_0() { return &___m_roomID_0; }
	inline void set_m_roomID_0(uint64_t value)
	{
		___m_roomID_0 = value;
	}

	inline static int32_t get_offset_of_m_remoteUser_1() { return static_cast<int32_t>(offsetof(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8, ___m_remoteUser_1)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_m_remoteUser_1() const { return ___m_remoteUser_1; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_m_remoteUser_1() { return &___m_remoteUser_1; }
	inline void set_m_remoteUser_1(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___m_remoteUser_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_remoteUser_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_nextPollTime_3() { return static_cast<int32_t>(offsetof(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8, ___m_nextPollTime_3)); }
	inline float get_m_nextPollTime_3() const { return ___m_nextPollTime_3; }
	inline float* get_address_of_m_nextPollTime_3() { return &___m_nextPollTime_3; }
	inline void set_m_nextPollTime_3(float value)
	{
		___m_nextPollTime_3 = value;
	}

	inline static int32_t get_offset_of_m_pendingRoomRequests_4() { return static_cast<int32_t>(offsetof(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8, ___m_pendingRoomRequests_4)); }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * get_m_pendingRoomRequests_4() const { return ___m_pendingRoomRequests_4; }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E ** get_address_of_m_pendingRoomRequests_4() { return &___m_pendingRoomRequests_4; }
	inline void set_m_pendingRoomRequests_4(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * value)
	{
		___m_pendingRoomRequests_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_pendingRoomRequests_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_invites_5() { return static_cast<int32_t>(offsetof(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8, ___m_invites_5)); }
	inline List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * get_m_invites_5() const { return ___m_invites_5; }
	inline List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 ** get_address_of_m_invites_5() { return &___m_invites_5; }
	inline void set_m_invites_5(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * value)
	{
		___m_invites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_invites_5), (void*)value);
	}
};

struct RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_StaticFields
{
public:
	// System.Single Oculus.Platform.Samples.VrVoiceChat.RoomManager::INVITE_POLL_FREQ_SECONDS
	float ___INVITE_POLL_FREQ_SECONDS_2;

public:
	inline static int32_t get_offset_of_INVITE_POLL_FREQ_SECONDS_2() { return static_cast<int32_t>(offsetof(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_StaticFields, ___INVITE_POLL_FREQ_SECONDS_2)); }
	inline float get_INVITE_POLL_FREQ_SECONDS_2() const { return ___INVITE_POLL_FREQ_SECONDS_2; }
	inline float* get_address_of_INVITE_POLL_FREQ_SECONDS_2() { return &___INVITE_POLL_FREQ_SECONDS_2; }
	inline void set_INVITE_POLL_FREQ_SECONDS_2(float value)
	{
		___INVITE_POLL_FREQ_SECONDS_2 = value;
	}
};


// Oculus.Platform.Rooms
struct  Rooms_t520BB38DC1A41718B70106694A7D8854EB8E887D  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.StandalonePlatform
struct  StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.StandalonePlatformSettings
struct  StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// Oculus.Platform.Models.SupplementaryMetric
struct  SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.SupplementaryMetric::ID
	uint64_t ___ID_0;
	// System.Int64 Oculus.Platform.Models.SupplementaryMetric::Metric
	int64_t ___Metric_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Metric_1() { return static_cast<int32_t>(offsetof(SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185, ___Metric_1)); }
	inline int64_t get_Metric_1() const { return ___Metric_1; }
	inline int64_t* get_address_of_Metric_1() { return &___Metric_1; }
	inline void set_Metric_1(int64_t value)
	{
		___Metric_1 = value;
	}
};


// Oculus.Platform.Models.Team
struct  Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA  : public RuntimeObject
{
public:
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Team::AssignedUsers
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___AssignedUsers_0;
	// System.Int32 Oculus.Platform.Models.Team::MaxUsers
	int32_t ___MaxUsers_1;
	// System.Int32 Oculus.Platform.Models.Team::MinUsers
	int32_t ___MinUsers_2;
	// System.String Oculus.Platform.Models.Team::Name
	String_t* ___Name_3;

public:
	inline static int32_t get_offset_of_AssignedUsers_0() { return static_cast<int32_t>(offsetof(Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA, ___AssignedUsers_0)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_AssignedUsers_0() const { return ___AssignedUsers_0; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_AssignedUsers_0() { return &___AssignedUsers_0; }
	inline void set_AssignedUsers_0(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___AssignedUsers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssignedUsers_0), (void*)value);
	}

	inline static int32_t get_offset_of_MaxUsers_1() { return static_cast<int32_t>(offsetof(Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA, ___MaxUsers_1)); }
	inline int32_t get_MaxUsers_1() const { return ___MaxUsers_1; }
	inline int32_t* get_address_of_MaxUsers_1() { return &___MaxUsers_1; }
	inline void set_MaxUsers_1(int32_t value)
	{
		___MaxUsers_1 = value;
	}

	inline static int32_t get_offset_of_MinUsers_2() { return static_cast<int32_t>(offsetof(Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA, ___MinUsers_2)); }
	inline int32_t get_MinUsers_2() const { return ___MinUsers_2; }
	inline int32_t* get_address_of_MinUsers_2() { return &___MinUsers_2; }
	inline void set_MinUsers_2(int32_t value)
	{
		___MinUsers_2 = value;
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_3), (void*)value);
	}
};


// Oculus.Platform.Models.UserAndRoom
struct  UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3  : public RuntimeObject
{
public:
	// Oculus.Platform.Models.Room Oculus.Platform.Models.UserAndRoom::RoomOptional
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * ___RoomOptional_0;
	// Oculus.Platform.Models.Room Oculus.Platform.Models.UserAndRoom::Room
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * ___Room_1;
	// Oculus.Platform.Models.User Oculus.Platform.Models.UserAndRoom::User
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___User_2;

public:
	inline static int32_t get_offset_of_RoomOptional_0() { return static_cast<int32_t>(offsetof(UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3, ___RoomOptional_0)); }
	inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * get_RoomOptional_0() const { return ___RoomOptional_0; }
	inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 ** get_address_of_RoomOptional_0() { return &___RoomOptional_0; }
	inline void set_RoomOptional_0(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * value)
	{
		___RoomOptional_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomOptional_0), (void*)value);
	}

	inline static int32_t get_offset_of_Room_1() { return static_cast<int32_t>(offsetof(UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3, ___Room_1)); }
	inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * get_Room_1() const { return ___Room_1; }
	inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 ** get_address_of_Room_1() { return &___Room_1; }
	inline void set_Room_1(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * value)
	{
		___Room_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Room_1), (void*)value);
	}

	inline static int32_t get_offset_of_User_2() { return static_cast<int32_t>(offsetof(UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3, ___User_2)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_User_2() const { return ___User_2; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_User_2() { return &___User_2; }
	inline void set_User_2(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___User_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___User_2), (void*)value);
	}
};


// Oculus.Platform.UserDataStore
struct  UserDataStore_t20BD3F424C0584C682518AE7C64D9ED2261C36A1  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Models.UserDataStoreUpdateResponse
struct  UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.UserDataStoreUpdateResponse::Success
	bool ___Success_0;

public:
	inline static int32_t get_offset_of_Success_0() { return static_cast<int32_t>(offsetof(UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23, ___Success_0)); }
	inline bool get_Success_0() const { return ___Success_0; }
	inline bool* get_address_of_Success_0() { return &___Success_0; }
	inline void set_Success_0(bool value)
	{
		___Success_0 = value;
	}
};


// Oculus.Platform.Models.UserProof
struct  UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.UserProof::Value
	String_t* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// Oculus.Platform.Models.UserReportID
struct  UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.UserReportID::DidCancel
	bool ___DidCancel_0;
	// System.UInt64 Oculus.Platform.Models.UserReportID::ID
	uint64_t ___ID_1;

public:
	inline static int32_t get_offset_of_DidCancel_0() { return static_cast<int32_t>(offsetof(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB, ___DidCancel_0)); }
	inline bool get_DidCancel_0() const { return ___DidCancel_0; }
	inline bool* get_address_of_DidCancel_0() { return &___DidCancel_0; }
	inline void set_DidCancel_0(bool value)
	{
		___DidCancel_0 = value;
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}
};


// Oculus.Platform.Users
struct  Users_t2DDB732114AF6EEC173D2B9A1014199F139ED79C  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// Oculus.Platform.Voip
struct  Voip_tD05F4EB764B22820F29134B5915F2A1463A39FE1  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.VoipPCMSourceNative
struct  VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.VoipPCMSourceNative::senderID
	uint64_t ___senderID_0;

public:
	inline static int32_t get_offset_of_senderID_0() { return static_cast<int32_t>(offsetof(VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13, ___senderID_0)); }
	inline uint64_t get_senderID_0() const { return ___senderID_0; }
	inline uint64_t* get_address_of_senderID_0() { return &___senderID_0; }
	inline void set_senderID_0(uint64_t value)
	{
		___senderID_0 = value;
	}
};


// Oculus.Platform.Vrcamera
struct  Vrcamera_t634918F934A66F8331B6A0832DE1C83A88A30BAB  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.WindowsPlatform
struct  WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.Samples.NetChat.chatPacket
struct  chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B  : public RuntimeObject
{
public:
	// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::<packetID>k__BackingField
	int32_t ___U3CpacketIDU3Ek__BackingField_0;
	// System.String Oculus.Platform.Samples.NetChat.chatPacket::<textString>k__BackingField
	String_t* ___U3CtextStringU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CpacketIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B, ___U3CpacketIDU3Ek__BackingField_0)); }
	inline int32_t get_U3CpacketIDU3Ek__BackingField_0() const { return ___U3CpacketIDU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CpacketIDU3Ek__BackingField_0() { return &___U3CpacketIDU3Ek__BackingField_0; }
	inline void set_U3CpacketIDU3Ek__BackingField_0(int32_t value)
	{
		___U3CpacketIDU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtextStringU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B, ___U3CtextStringU3Ek__BackingField_1)); }
	inline String_t* get_U3CtextStringU3Ek__BackingField_1() const { return ___U3CtextStringU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CtextStringU3Ek__BackingField_1() { return &___U3CtextStringU3Ek__BackingField_1; }
	inline void set_U3CtextStringU3Ek__BackingField_1(String_t* value)
	{
		___U3CtextStringU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtextStringU3Ek__BackingField_1), (void*)value);
	}
};


// Oculus.Platform.Callback/RequestCallback
struct  RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/Callback Oculus.Platform.Callback/RequestCallback::messageCallback
	Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___messageCallback_0;

public:
	inline static int32_t get_offset_of_messageCallback_0() { return static_cast<int32_t>(offsetof(RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF, ___messageCallback_0)); }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * get_messageCallback_0() const { return ___messageCallback_0; }
	inline Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 ** get_address_of_messageCallback_0() { return &___messageCallback_0; }
	inline void set_messageCallback_0(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * value)
	{
		___messageCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageCallback_0), (void*)value);
	}
};


// Oculus.Platform.Matchmaking/CustomQuery
struct  CustomQuery_tE222BFE49B3B2183F16D8ECBA6BC65B3CF917B3A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery::data
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data_0;
	// Oculus.Platform.Matchmaking/CustomQuery/Criterion[] Oculus.Platform.Matchmaking/CustomQuery::criteria
	CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* ___criteria_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(CustomQuery_tE222BFE49B3B2183F16D8ECBA6BC65B3CF917B3A, ___data_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_data_0() const { return ___data_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of_criteria_1() { return static_cast<int32_t>(offsetof(CustomQuery_tE222BFE49B3B2183F16D8ECBA6BC65B3CF917B3A, ___criteria_1)); }
	inline CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* get_criteria_1() const { return ___criteria_1; }
	inline CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB** get_address_of_criteria_1() { return &___criteria_1; }
	inline void set_criteria_1(CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* value)
	{
		___criteria_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___criteria_1), (void*)value);
	}
};


// Oculus.Platform.PlatformInternal/HTTP
struct  HTTP_tE160B8E2271028933E732801D6ECC4447A71C3B2  : public RuntimeObject
{
public:

public:
};


// Oculus.Platform.PlatformInternal/Users
struct  Users_tCAE308317CC9141CCA4C84AD29CE90A5D0EB3843  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct  Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103, ___callback__2)); }
	inline Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * get_callback__2() const { return ___callback__2; }
	inline Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tE5EE729EB922B1F53CB817B374D860DC8FE4D04E * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>
struct  Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866, ___callback__2)); }
	inline Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * get_callback__2() const { return ___callback__2; }
	inline Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tFFB8831AA76B3379905E1F8D4BD47D39E5A90E01 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>
struct  Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530, ___callback__2)); }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7317E109667EF5A9F367D28A0A803493E9374AF6 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>
struct  Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95, ___callback__2)); }
	inline Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * get_callback__2() const { return ___callback__2; }
	inline Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t05DA251417851DF07AD9252E6CFF396A9F1B8B9B * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>
struct  Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4, ___callback__2)); }
	inline Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * get_callback__2() const { return ___callback__2; }
	inline Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t2E97D64816F46B92F0BCBA91429284A90AFA6C65 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.Room>
struct  Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9, ___callback__2)); }
	inline Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * get_callback__2() const { return ___callback__2; }
	inline Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList>
struct  Request_1_t905B55299B98360BD28441866328CC345E8F3910  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t905B55299B98360BD28441866328CC345E8F3910, ___callback__2)); }
	inline Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 * get_callback__2() const { return ___callback__2; }
	inline Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList>
struct  Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t590E20196493C6D61101EFC7DC1140C49F01B24C * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5, ___callback__2)); }
	inline Callback_t590E20196493C6D61101EFC7DC1140C49F01B24C * get_callback__2() const { return ___callback__2; }
	inline Callback_t590E20196493C6D61101EFC7DC1140C49F01B24C ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t590E20196493C6D61101EFC7DC1140C49F01B24C * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>
struct  Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C, ___callback__2)); }
	inline Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * get_callback__2() const { return ___callback__2; }
	inline Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tB1A8ED91C666B901BC26AC6D63F28E8E8AABA15B * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<System.String>
struct  Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC, ___callback__2)); }
	inline Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * get_callback__2() const { return ___callback__2; }
	inline Callback_tD043303749DFDABD54DB83282588105CC2ADB18D ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>
struct  Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF, ___callback__2)); }
	inline Callback_t827F915E827EE8044B5F300339FE951E4557B20A * get_callback__2() const { return ___callback__2; }
	inline Callback_t827F915E827EE8044B5F300339FE951E4557B20A ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t827F915E827EE8044B5F300339FE951E4557B20A * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.User>
struct  Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94, ___callback__2)); }
	inline Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * get_callback__2() const { return ___callback__2; }
	inline Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_tA50179578321920FE3DB3333DD6C900E78CFE07D * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList>
struct  Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t3540E20CECB87A70AAF8B7A26B42ABE7C7158556 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017, ___callback__2)); }
	inline Callback_t3540E20CECB87A70AAF8B7A26B42ABE7C7158556 * get_callback__2() const { return ___callback__2; }
	inline Callback_t3540E20CECB87A70AAF8B7A26B42ABE7C7158556 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t3540E20CECB87A70AAF8B7A26B42ABE7C7158556 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>
struct  Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B, ___callback__2)); }
	inline Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * get_callback__2() const { return ___callback__2; }
	inline Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t91415C11C98D49C234F1F0D179CEBE847CA1BBD3 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>
struct  Request_1_t2CA1B16D395258918A268B17227A7212918D2136  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t2CA1B16D395258918A268B17227A7212918D2136, ___callback__2)); }
	inline Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7F9E9DD3F10B5A998645F1CE9718F3A0A3A4D499 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>
struct  Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE  : public Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2
{
public:
	// Oculus.Platform.Message`1/Callback<T> Oculus.Platform.Request`1::callback_
	Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * ___callback__2;

public:
	inline static int32_t get_offset_of_callback__2() { return static_cast<int32_t>(offsetof(Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE, ___callback__2)); }
	inline Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * get_callback__2() const { return ___callback__2; }
	inline Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 ** get_address_of_callback__2() { return &___callback__2; }
	inline void set_callback__2(Callback_t7F5938139BB729A9025FD891DC08E47E3BBE0CF7 * value)
	{
		___callback__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback__2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct  IntPtr_t 
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


// Oculus.Platform.Models.RoomInviteNotificationList
struct  RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E  : public DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D
{
public:

public:
};


// Oculus.Platform.Models.RoomList
struct  RoomList_t207839A231FFF8CED968FBF572DAC4FC7DEB6AD5  : public DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA
{
public:

public:
};


// Oculus.Platform.Models.SdkAccountList
struct  SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67  : public DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Oculus.Platform.Models.TeamList
struct  TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46  : public DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17
{
public:

public:
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// Oculus.Platform.Models.UserAndRoomList
struct  UserAndRoomList_t01FB60436C1268659BD43BCF28B15B83026A0F8C  : public DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57
{
public:

public:
};


// Oculus.Platform.Models.UserList
struct  UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B  : public DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409
{
public:

public:
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// Oculus.Platform.CAPI/OculusInitParams
struct  OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5 
{
public:
	// System.Int32 Oculus.Platform.CAPI/OculusInitParams::sType
	int32_t ___sType_0;
	// System.String Oculus.Platform.CAPI/OculusInitParams::email
	String_t* ___email_1;
	// System.String Oculus.Platform.CAPI/OculusInitParams::password
	String_t* ___password_2;
	// System.UInt64 Oculus.Platform.CAPI/OculusInitParams::appId
	uint64_t ___appId_3;
	// System.String Oculus.Platform.CAPI/OculusInitParams::uriPrefixOverride
	String_t* ___uriPrefixOverride_4;

public:
	inline static int32_t get_offset_of_sType_0() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___sType_0)); }
	inline int32_t get_sType_0() const { return ___sType_0; }
	inline int32_t* get_address_of_sType_0() { return &___sType_0; }
	inline void set_sType_0(int32_t value)
	{
		___sType_0 = value;
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___email_1)); }
	inline String_t* get_email_1() const { return ___email_1; }
	inline String_t** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(String_t* value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___email_1), (void*)value);
	}

	inline static int32_t get_offset_of_password_2() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___password_2)); }
	inline String_t* get_password_2() const { return ___password_2; }
	inline String_t** get_address_of_password_2() { return &___password_2; }
	inline void set_password_2(String_t* value)
	{
		___password_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_2), (void*)value);
	}

	inline static int32_t get_offset_of_appId_3() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___appId_3)); }
	inline uint64_t get_appId_3() const { return ___appId_3; }
	inline uint64_t* get_address_of_appId_3() { return &___appId_3; }
	inline void set_appId_3(uint64_t value)
	{
		___appId_3 = value;
	}

	inline static int32_t get_offset_of_uriPrefixOverride_4() { return static_cast<int32_t>(offsetof(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5, ___uriPrefixOverride_4)); }
	inline String_t* get_uriPrefixOverride_4() const { return ___uriPrefixOverride_4; }
	inline String_t** get_address_of_uriPrefixOverride_4() { return &___uriPrefixOverride_4; }
	inline void set_uriPrefixOverride_4(String_t* value)
	{
		___uriPrefixOverride_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uriPrefixOverride_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke
{
	int32_t ___sType_0;
	char* ___email_1;
	char* ___password_2;
	uint64_t ___appId_3;
	char* ___uriPrefixOverride_4;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/OculusInitParams
struct OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com
{
	int32_t ___sType_0;
	Il2CppChar* ___email_1;
	Il2CppChar* ___password_2;
	uint64_t ___appId_3;
	Il2CppChar* ___uriPrefixOverride_4;
};

// Oculus.Platform.CAPI/ovrNetSyncVec3
struct  ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874 
{
public:
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::x
	float ___x_0;
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::y
	float ___y_1;
	// System.Single Oculus.Platform.CAPI/ovrNetSyncVec3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(ovrNetSyncVec3_tD2333A190C12FE3AB1DF46481DE2CB3D8810A874, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct  UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051 
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;

public:
	inline static int32_t get_offset_of_activeEventSystem_0() { return static_cast<int32_t>(offsetof(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051, ___activeEventSystem_0)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_activeEventSystem_0() const { return ___activeEventSystem_0; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_activeEventSystem_0() { return &___activeEventSystem_0; }
	inline void set_activeEventSystem_0(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___activeEventSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeEventSystem_0), (void*)value);
	}

	inline static int32_t get_offset_of_sendEvents_1() { return static_cast<int32_t>(offsetof(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051, ___sendEvents_1)); }
	inline bool get_sendEvents_1() const { return ___sendEvents_1; }
	inline bool* get_address_of_sendEvents_1() { return &___sendEvents_1; }
	inline void set_sendEvents_1(bool value)
	{
		___sendEvents_1 = value;
	}

	inline static int32_t get_offset_of_createPanelGameObjectsOnStart_2() { return static_cast<int32_t>(offsetof(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051, ___createPanelGameObjectsOnStart_2)); }
	inline bool get_createPanelGameObjectsOnStart_2() const { return ___createPanelGameObjectsOnStart_2; }
	inline bool* get_address_of_createPanelGameObjectsOnStart_2() { return &___createPanelGameObjectsOnStart_2; }
	inline void set_createPanelGameObjectsOnStart_2(bool value)
	{
		___createPanelGameObjectsOnStart_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_pinvoke
{
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051_marshaled_com
{
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
struct  PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D 
{
public:
	// UnityEngine.GameObject Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo::piece
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___piece_0;
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo::pieceOwner
	int32_t ___pieceOwner_1;
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo::powerPieceOwner
	int32_t ___powerPieceOwner_2;

public:
	inline static int32_t get_offset_of_piece_0() { return static_cast<int32_t>(offsetof(PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D, ___piece_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_piece_0() const { return ___piece_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_piece_0() { return &___piece_0; }
	inline void set_piece_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___piece_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___piece_0), (void*)value);
	}

	inline static int32_t get_offset_of_pieceOwner_1() { return static_cast<int32_t>(offsetof(PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D, ___pieceOwner_1)); }
	inline int32_t get_pieceOwner_1() const { return ___pieceOwner_1; }
	inline int32_t* get_address_of_pieceOwner_1() { return &___pieceOwner_1; }
	inline void set_pieceOwner_1(int32_t value)
	{
		___pieceOwner_1 = value;
	}

	inline static int32_t get_offset_of_powerPieceOwner_2() { return static_cast<int32_t>(offsetof(PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D, ___powerPieceOwner_2)); }
	inline int32_t get_powerPieceOwner_2() const { return ___powerPieceOwner_2; }
	inline int32_t* get_address_of_powerPieceOwner_2() { return &___powerPieceOwner_2; }
	inline void set_powerPieceOwner_2(int32_t value)
	{
		___powerPieceOwner_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
struct PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};
// Native definition for COM marshalling of Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
struct PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___piece_0;
	int32_t ___pieceOwner_1;
	int32_t ___powerPieceOwner_2;
};

// Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
struct  Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 
{
public:
	// System.UInt64 Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::RoomID
	uint64_t ___RoomID_0;
	// System.String Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::OwnerID
	String_t* ___OwnerID_1;

public:
	inline static int32_t get_offset_of_RoomID_0() { return static_cast<int32_t>(offsetof(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43, ___RoomID_0)); }
	inline uint64_t get_RoomID_0() const { return ___RoomID_0; }
	inline uint64_t* get_address_of_RoomID_0() { return &___RoomID_0; }
	inline void set_RoomID_0(uint64_t value)
	{
		___RoomID_0 = value;
	}

	inline static int32_t get_offset_of_OwnerID_1() { return static_cast<int32_t>(offsetof(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43, ___OwnerID_1)); }
	inline String_t* get_OwnerID_1() const { return ___OwnerID_1; }
	inline String_t** get_address_of_OwnerID_1() { return &___OwnerID_1; }
	inline void set_OwnerID_1(String_t* value)
	{
		___OwnerID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnerID_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
struct Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke
{
	uint64_t ___RoomID_0;
	char* ___OwnerID_1;
};
// Native definition for COM marshalling of Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
struct Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com
{
	uint64_t ___RoomID_0;
	Il2CppChar* ___OwnerID_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Oculus.Platform.KeyValuePairType
struct  KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402 
{
public:
	// System.Int32 Oculus.Platform.KeyValuePairType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyValuePairType_t448387A174108622850E0E68A72FD768292EB402, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.MatchmakingCriterionImportance
struct  MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF 
{
public:
	// System.Int32 Oculus.Platform.MatchmakingCriterionImportance::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchmakingCriterionImportance_t45A577DC947889204A7B6AE75E3FEF8BB06813BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_14)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Oculus.Platform.PeerConnectionState
struct  PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0 
{
public:
	// System.Int32 Oculus.Platform.PeerConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PermissionGrantStatus
struct  PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD 
{
public:
	// System.Int32 Oculus.Platform.PermissionGrantStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionGrantStatus_t3276A757FF15DB7DB421CDFE1F44E3D060978FBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Oculus.Platform.Models.RoomInviteNotification
struct  RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.RoomInviteNotification::ID
	uint64_t ___ID_0;
	// System.UInt64 Oculus.Platform.Models.RoomInviteNotification::RoomID
	uint64_t ___RoomID_1;
	// System.UInt64 Oculus.Platform.Models.RoomInviteNotification::SenderID
	uint64_t ___SenderID_2;
	// System.DateTime Oculus.Platform.Models.RoomInviteNotification::SentTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___SentTime_3;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8, ___ID_0)); }
	inline uint64_t get_ID_0() const { return ___ID_0; }
	inline uint64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(uint64_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_RoomID_1() { return static_cast<int32_t>(offsetof(RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8, ___RoomID_1)); }
	inline uint64_t get_RoomID_1() const { return ___RoomID_1; }
	inline uint64_t* get_address_of_RoomID_1() { return &___RoomID_1; }
	inline void set_RoomID_1(uint64_t value)
	{
		___RoomID_1 = value;
	}

	inline static int32_t get_offset_of_SenderID_2() { return static_cast<int32_t>(offsetof(RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8, ___SenderID_2)); }
	inline uint64_t get_SenderID_2() const { return ___SenderID_2; }
	inline uint64_t* get_address_of_SenderID_2() { return &___SenderID_2; }
	inline void set_SenderID_2(uint64_t value)
	{
		___SenderID_2 = value;
	}

	inline static int32_t get_offset_of_SentTime_3() { return static_cast<int32_t>(offsetof(RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8, ___SentTime_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_SentTime_3() const { return ___SentTime_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_SentTime_3() { return &___SentTime_3; }
	inline void set_SentTime_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___SentTime_3 = value;
	}
};


// Oculus.Platform.RoomJoinPolicy
struct  RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2 
{
public:
	// System.Int32 Oculus.Platform.RoomJoinPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomJoinPolicy_t0265B68CBD8E6EF6871E8706019F090594AA35B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RoomJoinability
struct  RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB 
{
public:
	// System.Int32 Oculus.Platform.RoomJoinability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomJoinability_tAFD33AE86A5664D0E0CFEEB40D936151E47404FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RoomMembershipLockStatus
struct  RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979 
{
public:
	// System.Int32 Oculus.Platform.RoomMembershipLockStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomMembershipLockStatus_tEA9EFBC88D7845B2ECE7136BFC5C8EE467514979, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.RoomOptions
struct  RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.RoomOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.RoomType
struct  RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6 
{
public:
	// System.Int32 Oculus.Platform.RoomType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomType_t1A82673ABFF294DB37F45CBA4A73A3616D8229A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.SdkAccountType
struct  SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9 
{
public:
	// System.Int32 Oculus.Platform.SdkAccountType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SdkAccountType_tC9DE34E333AD713E4B13786F450FD8367960DDE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.SendPolicy
struct  SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F 
{
public:
	// System.Int32 Oculus.Platform.SendPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendPolicy_t65C7F53321F543A134FEFA84E3F36DF8DF8B6F7F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ServiceProvider
struct  ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B 
{
public:
	// System.Int32 Oculus.Platform.ServiceProvider::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServiceProvider_t7C4CC3124CA1164B0E60FAAE29A4739844A10F2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.ShareMediaStatus
struct  ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2 
{
public:
	// System.Int32 Oculus.Platform.ShareMediaStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareMediaStatus_tAE82D16DF4B154E03504DA0A81065F216AF4BBB2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.SystemVoipStatus
struct  SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC 
{
public:
	// System.Int32 Oculus.Platform.SystemVoipStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemVoipStatus_t6F46F5AA7FCA6FF4DB6E1C4BC39DE93AACAF02CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.TimeWindow
struct  TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2 
{
public:
	// System.Int32 Oculus.Platform.TimeWindow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeWindow_tD5CC191ECA78CB5B26BBEA545F228804357600C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserOptions
struct  UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.UserOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.UserOrdering
struct  UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045 
{
public:
	// System.Int32 Oculus.Platform.UserOrdering::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserOrdering_tAFD667BD74C720E03E9175FF6307AB358BC8B045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.UserPresenceStatus
struct  UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F 
{
public:
	// System.Int32 Oculus.Platform.UserPresenceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserPresenceStatus_tC3D3966C352904696239DB763BA265808C8C536F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipBitrate
struct  VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A 
{
public:
	// System.Int32 Oculus.Platform.VoipBitrate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipBitrate_tEF9ECA90EB49DB618EA2851EDD63606E38FC759A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipDtxState
struct  VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F 
{
public:
	// System.Int32 Oculus.Platform.VoipDtxState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipDtxState_tEE8F4743C2144D1FBC694546A53285B5D5F2568F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipMuteState
struct  VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62 
{
public:
	// System.Int32 Oculus.Platform.VoipMuteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipMuteState_tE746736B402EF04E0A315632CD91BAABFAFEAB62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.VoipOptions
struct  VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050  : public RuntimeObject
{
public:
	// System.IntPtr Oculus.Platform.VoipOptions::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// Oculus.Platform.VoipSampleRate
struct  VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D 
{
public:
	// System.Int32 Oculus.Platform.VoipSampleRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VoipSampleRate_t5BA43A5B30995B72E4F8640AD6FD7104D426677D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.NetChat.states
struct  states_t0BACBDEF66B183D1E9AD10B124EF234E809968A6 
{
public:
	// System.Int32 Oculus.Platform.Samples.NetChat.states::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(states_t0BACBDEF66B183D1E9AD10B124EF234E809968A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData
struct  ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28 
{
public:
	// System.IntPtr Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData::dataArray
	intptr_t ___dataArray_0;
	// System.UInt32 Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData::dataArrayCount
	uint32_t ___dataArrayCount_1;
	// System.IntPtr Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData::criterionArray
	intptr_t ___criterionArray_2;
	// System.UInt32 Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData::criterionArrayCount
	uint32_t ___criterionArrayCount_3;

public:
	inline static int32_t get_offset_of_dataArray_0() { return static_cast<int32_t>(offsetof(ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28, ___dataArray_0)); }
	inline intptr_t get_dataArray_0() const { return ___dataArray_0; }
	inline intptr_t* get_address_of_dataArray_0() { return &___dataArray_0; }
	inline void set_dataArray_0(intptr_t value)
	{
		___dataArray_0 = value;
	}

	inline static int32_t get_offset_of_dataArrayCount_1() { return static_cast<int32_t>(offsetof(ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28, ___dataArrayCount_1)); }
	inline uint32_t get_dataArrayCount_1() const { return ___dataArrayCount_1; }
	inline uint32_t* get_address_of_dataArrayCount_1() { return &___dataArrayCount_1; }
	inline void set_dataArrayCount_1(uint32_t value)
	{
		___dataArrayCount_1 = value;
	}

	inline static int32_t get_offset_of_criterionArray_2() { return static_cast<int32_t>(offsetof(ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28, ___criterionArray_2)); }
	inline intptr_t get_criterionArray_2() const { return ___criterionArray_2; }
	inline intptr_t* get_address_of_criterionArray_2() { return &___criterionArray_2; }
	inline void set_criterionArray_2(intptr_t value)
	{
		___criterionArray_2 = value;
	}

	inline static int32_t get_offset_of_criterionArrayCount_3() { return static_cast<int32_t>(offsetof(ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28, ___criterionArrayCount_3)); }
	inline uint32_t get_criterionArrayCount_3() const { return ___criterionArrayCount_3; }
	inline uint32_t* get_address_of_criterionArrayCount_3() { return &___criterionArrayCount_3; }
	inline void set_criterionArrayCount_3(uint32_t value)
	{
		___criterionArrayCount_3 = value;
	}
};


// Oculus.Platform.Samples.VrHoops.DetectBasket/BasketPhase
struct  BasketPhase_tD5B39F1A46BE1D35453534C9B82BBF4D8DF96CF2 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrHoops.DetectBasket/BasketPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BasketPhase_tD5B39F1A46BE1D35453534C9B82BBF4D8DF96CF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrBoardGame.GameController/GameState
struct  GameState_t9695687CAED7EF25AB248BAF97757CE6D5AD2219 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.GameController/GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t9695687CAED7EF25AB248BAF97757CE6D5AD2219, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece
struct  Piece_t50FD4FC677FDAEAF308B10AF082C0052E8249A10 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.GamePiece/Piece::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Piece_t50FD4FC677FDAEAF308B10AF082C0052E8249A10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrHoops.MatchController/State
struct  State_t9074A3459C8147D6A5FA6CE439C62016B1D13368 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrHoops.MatchController/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t9074A3459C8147D6A5FA6CE439C62016B1D13368, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState
struct  MatchRoomState_tEED8FBFF4B70D29C251E6F320C2E92A6B8DC391A 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrBoardGame.MatchmakingManager/MatchRoomState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MatchRoomState_tEED8FBFF4B70D29C251E6F320C2E92A6B8DC391A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Message/MessageType
struct  MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55 
{
public:
	// System.UInt32 Oculus.Platform.Message/MessageType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.PlatformInternal/MessageTypeInternal
struct  MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551 
{
public:
	// System.UInt32 Oculus.Platform.PlatformInternal/MessageTypeInternal::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypeInternal_tC303F5428A8AE27696F3C8D2DF55C3AB2B83A551, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrHoops.PlatformManager/State
struct  State_t73E3BD96C06CD53645DD90F2E87CD50D8A08BF82 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrHoops.PlatformManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t73E3BD96C06CD53645DD90F2E87CD50D8A08BF82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D  : public RuntimeObject
{
public:
	// Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0::invite
	Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  ___invite_0;

public:
	inline static int32_t get_offset_of_invite_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D, ___invite_0)); }
	inline Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  get_invite_0() const { return ___invite_0; }
	inline Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * get_address_of_invite_0() { return &___invite_0; }
	inline void set_invite_0(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  value)
	{
		___invite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___invite_0))->___OwnerID_1), (void*)NULL);
	}
};


// Oculus.Platform.Samples.VrVoiceChat.PlatformManager/State
struct  State_t232AEB2A77FA706B49B4ABC429362CF1502D9AE4 
{
public:
	// System.Int32 Oculus.Platform.Samples.VrVoiceChat.PlatformManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t232AEB2A77FA706B49B4ABC429362CF1502D9AE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Oculus.Platform.Message
struct  Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9  : public RuntimeObject
{
public:
	// Oculus.Platform.Message/MessageType Oculus.Platform.Message::type
	uint32_t ___type_0;
	// System.UInt64 Oculus.Platform.Message::requestID
	uint64_t ___requestID_1;
	// Oculus.Platform.Models.Error Oculus.Platform.Message::error
	Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * ___error_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___type_0)); }
	inline uint32_t get_type_0() const { return ___type_0; }
	inline uint32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_requestID_1() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___requestID_1)); }
	inline uint64_t get_requestID_1() const { return ___requestID_1; }
	inline uint64_t* get_address_of_requestID_1() { return &___requestID_1; }
	inline void set_requestID_1(uint64_t value)
	{
		___requestID_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9, ___error_2)); }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * get_error_2() const { return ___error_2; }
	inline Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(Error_t4896001004CD4A2DC6124CF998C4C1E807C93B89 * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_2), (void*)value);
	}
};

struct Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields
{
public:
	// Oculus.Platform.Message/ExtraMessageTypesHandler Oculus.Platform.Message::<HandleExtraMessageTypes>k__BackingField
	ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * ___U3CHandleExtraMessageTypesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9_StaticFields, ___U3CHandleExtraMessageTypesU3Ek__BackingField_3)); }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * get_U3CHandleExtraMessageTypesU3Ek__BackingField_3() const { return ___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF ** get_address_of_U3CHandleExtraMessageTypesU3Ek__BackingField_3() { return &___U3CHandleExtraMessageTypesU3Ek__BackingField_3; }
	inline void set_U3CHandleExtraMessageTypesU3Ek__BackingField_3(ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * value)
	{
		___U3CHandleExtraMessageTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandleExtraMessageTypesU3Ek__BackingField_3), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// Oculus.Platform.Models.NetworkingPeer
struct  NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.NetworkingPeer::<ID>k__BackingField
	uint64_t ___U3CIDU3Ek__BackingField_0;
	// Oculus.Platform.PeerConnectionState Oculus.Platform.Models.NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78, ___U3CIDU3Ek__BackingField_0)); }
	inline uint64_t get_U3CIDU3Ek__BackingField_0() const { return ___U3CIDU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CIDU3Ek__BackingField_0() { return &___U3CIDU3Ek__BackingField_0; }
	inline void set_U3CIDU3Ek__BackingField_0(uint64_t value)
	{
		___U3CIDU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78, ___U3CStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CStateU3Ek__BackingField_1() const { return ___U3CStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_1() { return &___U3CStateU3Ek__BackingField_1; }
	inline void set_U3CStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CStateU3Ek__BackingField_1 = value;
	}
};


// Oculus.Platform.Models.Room
struct  Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Models.Room::ApplicationID
	uint64_t ___ApplicationID_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Oculus.Platform.Models.Room::DataStore
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___DataStore_1;
	// System.String Oculus.Platform.Models.Room::Description
	String_t* ___Description_2;
	// System.UInt64 Oculus.Platform.Models.Room::ID
	uint64_t ___ID_3;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::InvitedUsersOptional
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___InvitedUsersOptional_4;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::InvitedUsers
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___InvitedUsers_5;
	// System.Boolean Oculus.Platform.Models.Room::IsMembershipLocked
	bool ___IsMembershipLocked_6;
	// Oculus.Platform.RoomJoinPolicy Oculus.Platform.Models.Room::JoinPolicy
	int32_t ___JoinPolicy_7;
	// Oculus.Platform.RoomJoinability Oculus.Platform.Models.Room::Joinability
	int32_t ___Joinability_8;
	// Oculus.Platform.Models.MatchmakingEnqueuedUserList Oculus.Platform.Models.Room::MatchedUsersOptional
	MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED * ___MatchedUsersOptional_9;
	// Oculus.Platform.Models.MatchmakingEnqueuedUserList Oculus.Platform.Models.Room::MatchedUsers
	MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED * ___MatchedUsers_10;
	// System.UInt32 Oculus.Platform.Models.Room::MaxUsers
	uint32_t ___MaxUsers_11;
	// System.String Oculus.Platform.Models.Room::Name
	String_t* ___Name_12;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Room::OwnerOptional
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___OwnerOptional_13;
	// Oculus.Platform.Models.User Oculus.Platform.Models.Room::Owner
	User_tA163463AE919860D9B337F6104B028990A44B69D * ___Owner_14;
	// Oculus.Platform.Models.TeamList Oculus.Platform.Models.Room::TeamsOptional
	TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * ___TeamsOptional_15;
	// Oculus.Platform.Models.TeamList Oculus.Platform.Models.Room::Teams
	TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * ___Teams_16;
	// Oculus.Platform.RoomType Oculus.Platform.Models.Room::Type
	int32_t ___Type_17;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::UsersOptional
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___UsersOptional_18;
	// Oculus.Platform.Models.UserList Oculus.Platform.Models.Room::Users
	UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___Users_19;
	// System.UInt32 Oculus.Platform.Models.Room::Version
	uint32_t ___Version_20;

public:
	inline static int32_t get_offset_of_ApplicationID_0() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___ApplicationID_0)); }
	inline uint64_t get_ApplicationID_0() const { return ___ApplicationID_0; }
	inline uint64_t* get_address_of_ApplicationID_0() { return &___ApplicationID_0; }
	inline void set_ApplicationID_0(uint64_t value)
	{
		___ApplicationID_0 = value;
	}

	inline static int32_t get_offset_of_DataStore_1() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___DataStore_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_DataStore_1() const { return ___DataStore_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_DataStore_1() { return &___DataStore_1; }
	inline void set_DataStore_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___DataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_Description_2() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Description_2)); }
	inline String_t* get_Description_2() const { return ___Description_2; }
	inline String_t** get_address_of_Description_2() { return &___Description_2; }
	inline void set_Description_2(String_t* value)
	{
		___Description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_2), (void*)value);
	}

	inline static int32_t get_offset_of_ID_3() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___ID_3)); }
	inline uint64_t get_ID_3() const { return ___ID_3; }
	inline uint64_t* get_address_of_ID_3() { return &___ID_3; }
	inline void set_ID_3(uint64_t value)
	{
		___ID_3 = value;
	}

	inline static int32_t get_offset_of_InvitedUsersOptional_4() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___InvitedUsersOptional_4)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_InvitedUsersOptional_4() const { return ___InvitedUsersOptional_4; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_InvitedUsersOptional_4() { return &___InvitedUsersOptional_4; }
	inline void set_InvitedUsersOptional_4(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___InvitedUsersOptional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvitedUsersOptional_4), (void*)value);
	}

	inline static int32_t get_offset_of_InvitedUsers_5() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___InvitedUsers_5)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_InvitedUsers_5() const { return ___InvitedUsers_5; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_InvitedUsers_5() { return &___InvitedUsers_5; }
	inline void set_InvitedUsers_5(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___InvitedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvitedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_IsMembershipLocked_6() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___IsMembershipLocked_6)); }
	inline bool get_IsMembershipLocked_6() const { return ___IsMembershipLocked_6; }
	inline bool* get_address_of_IsMembershipLocked_6() { return &___IsMembershipLocked_6; }
	inline void set_IsMembershipLocked_6(bool value)
	{
		___IsMembershipLocked_6 = value;
	}

	inline static int32_t get_offset_of_JoinPolicy_7() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___JoinPolicy_7)); }
	inline int32_t get_JoinPolicy_7() const { return ___JoinPolicy_7; }
	inline int32_t* get_address_of_JoinPolicy_7() { return &___JoinPolicy_7; }
	inline void set_JoinPolicy_7(int32_t value)
	{
		___JoinPolicy_7 = value;
	}

	inline static int32_t get_offset_of_Joinability_8() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Joinability_8)); }
	inline int32_t get_Joinability_8() const { return ___Joinability_8; }
	inline int32_t* get_address_of_Joinability_8() { return &___Joinability_8; }
	inline void set_Joinability_8(int32_t value)
	{
		___Joinability_8 = value;
	}

	inline static int32_t get_offset_of_MatchedUsersOptional_9() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___MatchedUsersOptional_9)); }
	inline MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED * get_MatchedUsersOptional_9() const { return ___MatchedUsersOptional_9; }
	inline MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED ** get_address_of_MatchedUsersOptional_9() { return &___MatchedUsersOptional_9; }
	inline void set_MatchedUsersOptional_9(MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED * value)
	{
		___MatchedUsersOptional_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchedUsersOptional_9), (void*)value);
	}

	inline static int32_t get_offset_of_MatchedUsers_10() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___MatchedUsers_10)); }
	inline MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED * get_MatchedUsers_10() const { return ___MatchedUsers_10; }
	inline MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED ** get_address_of_MatchedUsers_10() { return &___MatchedUsers_10; }
	inline void set_MatchedUsers_10(MatchmakingEnqueuedUserList_tC780921276D6B09F2903BB5C00DD9936556C62ED * value)
	{
		___MatchedUsers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchedUsers_10), (void*)value);
	}

	inline static int32_t get_offset_of_MaxUsers_11() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___MaxUsers_11)); }
	inline uint32_t get_MaxUsers_11() const { return ___MaxUsers_11; }
	inline uint32_t* get_address_of_MaxUsers_11() { return &___MaxUsers_11; }
	inline void set_MaxUsers_11(uint32_t value)
	{
		___MaxUsers_11 = value;
	}

	inline static int32_t get_offset_of_Name_12() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Name_12)); }
	inline String_t* get_Name_12() const { return ___Name_12; }
	inline String_t** get_address_of_Name_12() { return &___Name_12; }
	inline void set_Name_12(String_t* value)
	{
		___Name_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_12), (void*)value);
	}

	inline static int32_t get_offset_of_OwnerOptional_13() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___OwnerOptional_13)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_OwnerOptional_13() const { return ___OwnerOptional_13; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_OwnerOptional_13() { return &___OwnerOptional_13; }
	inline void set_OwnerOptional_13(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___OwnerOptional_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnerOptional_13), (void*)value);
	}

	inline static int32_t get_offset_of_Owner_14() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Owner_14)); }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D * get_Owner_14() const { return ___Owner_14; }
	inline User_tA163463AE919860D9B337F6104B028990A44B69D ** get_address_of_Owner_14() { return &___Owner_14; }
	inline void set_Owner_14(User_tA163463AE919860D9B337F6104B028990A44B69D * value)
	{
		___Owner_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Owner_14), (void*)value);
	}

	inline static int32_t get_offset_of_TeamsOptional_15() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___TeamsOptional_15)); }
	inline TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * get_TeamsOptional_15() const { return ___TeamsOptional_15; }
	inline TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 ** get_address_of_TeamsOptional_15() { return &___TeamsOptional_15; }
	inline void set_TeamsOptional_15(TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * value)
	{
		___TeamsOptional_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TeamsOptional_15), (void*)value);
	}

	inline static int32_t get_offset_of_Teams_16() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Teams_16)); }
	inline TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * get_Teams_16() const { return ___Teams_16; }
	inline TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 ** get_address_of_Teams_16() { return &___Teams_16; }
	inline void set_Teams_16(TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * value)
	{
		___Teams_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Teams_16), (void*)value);
	}

	inline static int32_t get_offset_of_Type_17() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Type_17)); }
	inline int32_t get_Type_17() const { return ___Type_17; }
	inline int32_t* get_address_of_Type_17() { return &___Type_17; }
	inline void set_Type_17(int32_t value)
	{
		___Type_17 = value;
	}

	inline static int32_t get_offset_of_UsersOptional_18() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___UsersOptional_18)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_UsersOptional_18() const { return ___UsersOptional_18; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_UsersOptional_18() { return &___UsersOptional_18; }
	inline void set_UsersOptional_18(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___UsersOptional_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UsersOptional_18), (void*)value);
	}

	inline static int32_t get_offset_of_Users_19() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Users_19)); }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * get_Users_19() const { return ___Users_19; }
	inline UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B ** get_address_of_Users_19() { return &___Users_19; }
	inline void set_Users_19(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * value)
	{
		___Users_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Users_19), (void*)value);
	}

	inline static int32_t get_offset_of_Version_20() { return static_cast<int32_t>(offsetof(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857, ___Version_20)); }
	inline uint32_t get_Version_20() const { return ___Version_20; }
	inline uint32_t* get_address_of_Version_20() { return &___Version_20; }
	inline void set_Version_20(uint32_t value)
	{
		___Version_20 = value;
	}
};


// Oculus.Platform.Models.SdkAccount
struct  SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A  : public RuntimeObject
{
public:
	// Oculus.Platform.SdkAccountType Oculus.Platform.Models.SdkAccount::AccountType
	int32_t ___AccountType_0;
	// System.UInt64 Oculus.Platform.Models.SdkAccount::UserId
	uint64_t ___UserId_1;

public:
	inline static int32_t get_offset_of_AccountType_0() { return static_cast<int32_t>(offsetof(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A, ___AccountType_0)); }
	inline int32_t get_AccountType_0() const { return ___AccountType_0; }
	inline int32_t* get_address_of_AccountType_0() { return &___AccountType_0; }
	inline void set_AccountType_0(int32_t value)
	{
		___AccountType_0 = value;
	}

	inline static int32_t get_offset_of_UserId_1() { return static_cast<int32_t>(offsetof(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A, ___UserId_1)); }
	inline uint64_t get_UserId_1() const { return ___UserId_1; }
	inline uint64_t* get_address_of_UserId_1() { return &___UserId_1; }
	inline void set_UserId_1(uint64_t value)
	{
		___UserId_1 = value;
	}
};


// Oculus.Platform.Models.ShareMediaResult
struct  ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7  : public RuntimeObject
{
public:
	// Oculus.Platform.ShareMediaStatus Oculus.Platform.Models.ShareMediaResult::Status
	int32_t ___Status_0;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7, ___Status_0)); }
	inline int32_t get_Status_0() const { return ___Status_0; }
	inline int32_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(int32_t value)
	{
		___Status_0 = value;
	}
};


// Oculus.Platform.Models.SystemPermission
struct  SystemPermission_t481EA9156002B8786F6E38A779D31F5FED8F7A9F  : public RuntimeObject
{
public:
	// System.Boolean Oculus.Platform.Models.SystemPermission::HasPermission
	bool ___HasPermission_0;
	// Oculus.Platform.PermissionGrantStatus Oculus.Platform.Models.SystemPermission::PermissionGrantStatus
	int32_t ___PermissionGrantStatus_1;

public:
	inline static int32_t get_offset_of_HasPermission_0() { return static_cast<int32_t>(offsetof(SystemPermission_t481EA9156002B8786F6E38A779D31F5FED8F7A9F, ___HasPermission_0)); }
	inline bool get_HasPermission_0() const { return ___HasPermission_0; }
	inline bool* get_address_of_HasPermission_0() { return &___HasPermission_0; }
	inline void set_HasPermission_0(bool value)
	{
		___HasPermission_0 = value;
	}

	inline static int32_t get_offset_of_PermissionGrantStatus_1() { return static_cast<int32_t>(offsetof(SystemPermission_t481EA9156002B8786F6E38A779D31F5FED8F7A9F, ___PermissionGrantStatus_1)); }
	inline int32_t get_PermissionGrantStatus_1() const { return ___PermissionGrantStatus_1; }
	inline int32_t* get_address_of_PermissionGrantStatus_1() { return &___PermissionGrantStatus_1; }
	inline void set_PermissionGrantStatus_1(int32_t value)
	{
		___PermissionGrantStatus_1 = value;
	}
};


// Oculus.Platform.Models.SystemVoipState
struct  SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D  : public RuntimeObject
{
public:
	// Oculus.Platform.VoipMuteState Oculus.Platform.Models.SystemVoipState::MicrophoneMuted
	int32_t ___MicrophoneMuted_0;
	// Oculus.Platform.SystemVoipStatus Oculus.Platform.Models.SystemVoipState::Status
	int32_t ___Status_1;

public:
	inline static int32_t get_offset_of_MicrophoneMuted_0() { return static_cast<int32_t>(offsetof(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D, ___MicrophoneMuted_0)); }
	inline int32_t get_MicrophoneMuted_0() const { return ___MicrophoneMuted_0; }
	inline int32_t* get_address_of_MicrophoneMuted_0() { return &___MicrophoneMuted_0; }
	inline void set_MicrophoneMuted_0(int32_t value)
	{
		___MicrophoneMuted_0 = value;
	}

	inline static int32_t get_offset_of_Status_1() { return static_cast<int32_t>(offsetof(SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D, ___Status_1)); }
	inline int32_t get_Status_1() const { return ___Status_1; }
	inline int32_t* get_address_of_Status_1() { return &___Status_1; }
	inline void set_Status_1(int32_t value)
	{
		___Status_1 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// Oculus.Platform.Models.User
struct  User_tA163463AE919860D9B337F6104B028990A44B69D  : public RuntimeObject
{
public:
	// System.String Oculus.Platform.Models.User::DisplayName
	String_t* ___DisplayName_0;
	// System.UInt64 Oculus.Platform.Models.User::ID
	uint64_t ___ID_1;
	// System.String Oculus.Platform.Models.User::ImageURL
	String_t* ___ImageURL_2;
	// System.String Oculus.Platform.Models.User::InviteToken
	String_t* ___InviteToken_3;
	// System.String Oculus.Platform.Models.User::OculusID
	String_t* ___OculusID_4;
	// System.String Oculus.Platform.Models.User::Presence
	String_t* ___Presence_5;
	// System.String Oculus.Platform.Models.User::PresenceDeeplinkMessage
	String_t* ___PresenceDeeplinkMessage_6;
	// System.String Oculus.Platform.Models.User::PresenceDestinationApiName
	String_t* ___PresenceDestinationApiName_7;
	// Oculus.Platform.UserPresenceStatus Oculus.Platform.Models.User::PresenceStatus
	int32_t ___PresenceStatus_8;
	// System.String Oculus.Platform.Models.User::SmallImageUrl
	String_t* ___SmallImageUrl_9;

public:
	inline static int32_t get_offset_of_DisplayName_0() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___DisplayName_0)); }
	inline String_t* get_DisplayName_0() const { return ___DisplayName_0; }
	inline String_t** get_address_of_DisplayName_0() { return &___DisplayName_0; }
	inline void set_DisplayName_0(String_t* value)
	{
		___DisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_ID_1() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ID_1)); }
	inline uint64_t get_ID_1() const { return ___ID_1; }
	inline uint64_t* get_address_of_ID_1() { return &___ID_1; }
	inline void set_ID_1(uint64_t value)
	{
		___ID_1 = value;
	}

	inline static int32_t get_offset_of_ImageURL_2() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___ImageURL_2)); }
	inline String_t* get_ImageURL_2() const { return ___ImageURL_2; }
	inline String_t** get_address_of_ImageURL_2() { return &___ImageURL_2; }
	inline void set_ImageURL_2(String_t* value)
	{
		___ImageURL_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageURL_2), (void*)value);
	}

	inline static int32_t get_offset_of_InviteToken_3() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___InviteToken_3)); }
	inline String_t* get_InviteToken_3() const { return ___InviteToken_3; }
	inline String_t** get_address_of_InviteToken_3() { return &___InviteToken_3; }
	inline void set_InviteToken_3(String_t* value)
	{
		___InviteToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InviteToken_3), (void*)value);
	}

	inline static int32_t get_offset_of_OculusID_4() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___OculusID_4)); }
	inline String_t* get_OculusID_4() const { return ___OculusID_4; }
	inline String_t** get_address_of_OculusID_4() { return &___OculusID_4; }
	inline void set_OculusID_4(String_t* value)
	{
		___OculusID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OculusID_4), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_5() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___Presence_5)); }
	inline String_t* get_Presence_5() const { return ___Presence_5; }
	inline String_t** get_address_of_Presence_5() { return &___Presence_5; }
	inline void set_Presence_5(String_t* value)
	{
		___Presence_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Presence_5), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDeeplinkMessage_6() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDeeplinkMessage_6)); }
	inline String_t* get_PresenceDeeplinkMessage_6() const { return ___PresenceDeeplinkMessage_6; }
	inline String_t** get_address_of_PresenceDeeplinkMessage_6() { return &___PresenceDeeplinkMessage_6; }
	inline void set_PresenceDeeplinkMessage_6(String_t* value)
	{
		___PresenceDeeplinkMessage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDeeplinkMessage_6), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceDestinationApiName_7() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceDestinationApiName_7)); }
	inline String_t* get_PresenceDestinationApiName_7() const { return ___PresenceDestinationApiName_7; }
	inline String_t** get_address_of_PresenceDestinationApiName_7() { return &___PresenceDestinationApiName_7; }
	inline void set_PresenceDestinationApiName_7(String_t* value)
	{
		___PresenceDestinationApiName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenceDestinationApiName_7), (void*)value);
	}

	inline static int32_t get_offset_of_PresenceStatus_8() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___PresenceStatus_8)); }
	inline int32_t get_PresenceStatus_8() const { return ___PresenceStatus_8; }
	inline int32_t* get_address_of_PresenceStatus_8() { return &___PresenceStatus_8; }
	inline void set_PresenceStatus_8(int32_t value)
	{
		___PresenceStatus_8 = value;
	}

	inline static int32_t get_offset_of_SmallImageUrl_9() { return static_cast<int32_t>(offsetof(User_tA163463AE919860D9B337F6104B028990A44B69D, ___SmallImageUrl_9)); }
	inline String_t* get_SmallImageUrl_9() const { return ___SmallImageUrl_9; }
	inline String_t** get_address_of_SmallImageUrl_9() { return &___SmallImageUrl_9; }
	inline void set_SmallImageUrl_9(String_t* value)
	{
		___SmallImageUrl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SmallImageUrl_9), (void*)value);
	}
};


// Oculus.Platform.Samples.VrVoiceChat.VoipManager
struct  VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9  : public RuntimeObject
{
public:
	// System.UInt64 Oculus.Platform.Samples.VrVoiceChat.VoipManager::m_remoteID
	uint64_t ___m_remoteID_0;
	// Oculus.Platform.PeerConnectionState Oculus.Platform.Samples.VrVoiceChat.VoipManager::m_state
	int32_t ___m_state_1;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrVoiceChat.VoipManager::m_remoteHead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_remoteHead_2;

public:
	inline static int32_t get_offset_of_m_remoteID_0() { return static_cast<int32_t>(offsetof(VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9, ___m_remoteID_0)); }
	inline uint64_t get_m_remoteID_0() const { return ___m_remoteID_0; }
	inline uint64_t* get_address_of_m_remoteID_0() { return &___m_remoteID_0; }
	inline void set_m_remoteID_0(uint64_t value)
	{
		___m_remoteID_0 = value;
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}

	inline static int32_t get_offset_of_m_remoteHead_2() { return static_cast<int32_t>(offsetof(VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9, ___m_remoteHead_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_remoteHead_2() const { return ___m_remoteHead_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_remoteHead_2() { return &___m_remoteHead_2; }
	inline void set_m_remoteHead_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_remoteHead_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_remoteHead_2), (void*)value);
	}
};


// Oculus.Platform.CAPI/ovrKeyValuePair
struct  ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 
{
public:
	// System.String Oculus.Platform.CAPI/ovrKeyValuePair::key_
	String_t* ___key__0;
	// Oculus.Platform.KeyValuePairType Oculus.Platform.CAPI/ovrKeyValuePair::valueType_
	int32_t ___valueType__1;
	// System.String Oculus.Platform.CAPI/ovrKeyValuePair::stringValue_
	String_t* ___stringValue__2;
	// System.Int32 Oculus.Platform.CAPI/ovrKeyValuePair::intValue_
	int32_t ___intValue__3;
	// System.Double Oculus.Platform.CAPI/ovrKeyValuePair::doubleValue_
	double ___doubleValue__4;

public:
	inline static int32_t get_offset_of_key__0() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___key__0)); }
	inline String_t* get_key__0() const { return ___key__0; }
	inline String_t** get_address_of_key__0() { return &___key__0; }
	inline void set_key__0(String_t* value)
	{
		___key__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key__0), (void*)value);
	}

	inline static int32_t get_offset_of_valueType__1() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___valueType__1)); }
	inline int32_t get_valueType__1() const { return ___valueType__1; }
	inline int32_t* get_address_of_valueType__1() { return &___valueType__1; }
	inline void set_valueType__1(int32_t value)
	{
		___valueType__1 = value;
	}

	inline static int32_t get_offset_of_stringValue__2() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___stringValue__2)); }
	inline String_t* get_stringValue__2() const { return ___stringValue__2; }
	inline String_t** get_address_of_stringValue__2() { return &___stringValue__2; }
	inline void set_stringValue__2(String_t* value)
	{
		___stringValue__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringValue__2), (void*)value);
	}

	inline static int32_t get_offset_of_intValue__3() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___intValue__3)); }
	inline int32_t get_intValue__3() const { return ___intValue__3; }
	inline int32_t* get_address_of_intValue__3() { return &___intValue__3; }
	inline void set_intValue__3(int32_t value)
	{
		___intValue__3 = value;
	}

	inline static int32_t get_offset_of_doubleValue__4() { return static_cast<int32_t>(offsetof(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32, ___doubleValue__4)); }
	inline double get_doubleValue__4() const { return ___doubleValue__4; }
	inline double* get_address_of_doubleValue__4() { return &___doubleValue__4; }
	inline void set_doubleValue__4(double value)
	{
		___doubleValue__4 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke
{
	char* ___key__0;
	int32_t ___valueType__1;
	char* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/ovrKeyValuePair
struct ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com
{
	Il2CppChar* ___key__0;
	int32_t ___valueType__1;
	Il2CppChar* ___stringValue__2;
	int32_t ___intValue__3;
	double ___doubleValue__4;
};

// Oculus.Platform.CAPI/ovrMatchmakingCriterion
struct  ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 
{
public:
	// System.String Oculus.Platform.CAPI/ovrMatchmakingCriterion::key_
	String_t* ___key__0;
	// Oculus.Platform.MatchmakingCriterionImportance Oculus.Platform.CAPI/ovrMatchmakingCriterion::importance_
	int32_t ___importance__1;
	// System.IntPtr Oculus.Platform.CAPI/ovrMatchmakingCriterion::parameterArray
	intptr_t ___parameterArray_2;
	// System.UInt32 Oculus.Platform.CAPI/ovrMatchmakingCriterion::parameterArrayCount
	uint32_t ___parameterArrayCount_3;

public:
	inline static int32_t get_offset_of_key__0() { return static_cast<int32_t>(offsetof(ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4, ___key__0)); }
	inline String_t* get_key__0() const { return ___key__0; }
	inline String_t** get_address_of_key__0() { return &___key__0; }
	inline void set_key__0(String_t* value)
	{
		___key__0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key__0), (void*)value);
	}

	inline static int32_t get_offset_of_importance__1() { return static_cast<int32_t>(offsetof(ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4, ___importance__1)); }
	inline int32_t get_importance__1() const { return ___importance__1; }
	inline int32_t* get_address_of_importance__1() { return &___importance__1; }
	inline void set_importance__1(int32_t value)
	{
		___importance__1 = value;
	}

	inline static int32_t get_offset_of_parameterArray_2() { return static_cast<int32_t>(offsetof(ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4, ___parameterArray_2)); }
	inline intptr_t get_parameterArray_2() const { return ___parameterArray_2; }
	inline intptr_t* get_address_of_parameterArray_2() { return &___parameterArray_2; }
	inline void set_parameterArray_2(intptr_t value)
	{
		___parameterArray_2 = value;
	}

	inline static int32_t get_offset_of_parameterArrayCount_3() { return static_cast<int32_t>(offsetof(ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4, ___parameterArrayCount_3)); }
	inline uint32_t get_parameterArrayCount_3() const { return ___parameterArrayCount_3; }
	inline uint32_t* get_address_of_parameterArrayCount_3() { return &___parameterArrayCount_3; }
	inline void set_parameterArrayCount_3(uint32_t value)
	{
		___parameterArrayCount_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.CAPI/ovrMatchmakingCriterion
struct ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_pinvoke
{
	char* ___key__0;
	int32_t ___importance__1;
	intptr_t ___parameterArray_2;
	uint32_t ___parameterArrayCount_3;
};
// Native definition for COM marshalling of Oculus.Platform.CAPI/ovrMatchmakingCriterion
struct ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_com
{
	Il2CppChar* ___key__0;
	int32_t ___importance__1;
	intptr_t ___parameterArray_2;
	uint32_t ___parameterArrayCount_3;
};

// Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData
struct  RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA  : public RuntimeObject
{
public:
	// Oculus.Platform.PeerConnectionState Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::state
	int32_t ___state_0;
	// Oculus.Platform.Samples.VrHoops.RemotePlayer Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::player
	RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C * ___player_1;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::remoteTimeOffset
	float ___remoteTimeOffset_2;
	// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::lastReceivedBallsTime
	float ___lastReceivedBallsTime_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall> Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::activeBalls
	Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * ___activeBalls_4;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_player_1() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___player_1)); }
	inline RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C * get_player_1() const { return ___player_1; }
	inline RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C ** get_address_of_player_1() { return &___player_1; }
	inline void set_player_1(RemotePlayer_t7DD16B282D9368F9DD23369718109795ADEC567C * value)
	{
		___player_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_1), (void*)value);
	}

	inline static int32_t get_offset_of_remoteTimeOffset_2() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___remoteTimeOffset_2)); }
	inline float get_remoteTimeOffset_2() const { return ___remoteTimeOffset_2; }
	inline float* get_address_of_remoteTimeOffset_2() { return &___remoteTimeOffset_2; }
	inline void set_remoteTimeOffset_2(float value)
	{
		___remoteTimeOffset_2 = value;
	}

	inline static int32_t get_offset_of_lastReceivedBallsTime_3() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___lastReceivedBallsTime_3)); }
	inline float get_lastReceivedBallsTime_3() const { return ___lastReceivedBallsTime_3; }
	inline float* get_address_of_lastReceivedBallsTime_3() { return &___lastReceivedBallsTime_3; }
	inline void set_lastReceivedBallsTime_3(float value)
	{
		___lastReceivedBallsTime_3 = value;
	}

	inline static int32_t get_offset_of_activeBalls_4() { return static_cast<int32_t>(offsetof(RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA, ___activeBalls_4)); }
	inline Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * get_activeBalls_4() const { return ___activeBalls_4; }
	inline Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED ** get_address_of_activeBalls_4() { return &___activeBalls_4; }
	inline void set_activeBalls_4(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * value)
	{
		___activeBalls_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeBalls_4), (void*)value);
	}
};


// Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct  Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 
{
public:
	// System.String Oculus.Platform.Matchmaking/CustomQuery/Criterion::key
	String_t* ___key_0;
	// Oculus.Platform.MatchmakingCriterionImportance Oculus.Platform.Matchmaking/CustomQuery/Criterion::importance
	int32_t ___importance_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Oculus.Platform.Matchmaking/CustomQuery/Criterion::parameters
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_importance_1() { return static_cast<int32_t>(offsetof(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51, ___importance_1)); }
	inline int32_t get_importance_1() const { return ___importance_1; }
	inline int32_t* get_address_of_importance_1() { return &___importance_1; }
	inline void set_importance_1(int32_t value)
	{
		___importance_1 = value;
	}

	inline static int32_t get_offset_of_parameters_2() { return static_cast<int32_t>(offsetof(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51, ___parameters_2)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_parameters_2() const { return ___parameters_2; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_parameters_2() { return &___parameters_2; }
	inline void set_parameters_2(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___parameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke
{
	char* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters_2;
};
// Native definition for COM marshalling of Oculus.Platform.Matchmaking/CustomQuery/Criterion
struct Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com
{
	Il2CppChar* ___key_0;
	int32_t ___importance_1;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___parameters_2;
};

// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>
struct  Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>
struct  Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>
struct  Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomInviteNotification>
struct  Callback_t2738E26970FDD9D111F9D6CCBBB107852DE3F9FC  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomInviteNotificationList>
struct  Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<System.String>
struct  Callback_tD043303749DFDABD54DB83282588105CC2ADB18D  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>
struct  Callback_t827F915E827EE8044B5F300339FE951E4557B20A  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>
struct  Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27, ___data_4)); }
	inline NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * get_data_4() const { return ___data_4; }
	inline NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<System.Object>
struct  Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	RuntimeObject * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C, ___data_4)); }
	inline RuntimeObject * get_data_4() const { return ___data_4; }
	inline RuntimeObject ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(RuntimeObject * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.Room>
struct  Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5, ___data_4)); }
	inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * get_data_4() const { return ___data_4; }
	inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotificationList>
struct  Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38, ___data_4)); }
	inline RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * get_data_4() const { return ___data_4; }
	inline RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// Oculus.Platform.Message`1<System.String>
struct  Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84  : public Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9
{
public:
	// T Oculus.Platform.Message`1::data
	String_t* ___data_4;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84, ___data_4)); }
	inline String_t* get_data_4() const { return ___data_4; }
	inline String_t** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(String_t* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Oculus.Platform.CAPI/FilterCallback
struct  FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated
struct  OnHighScoreLeaderboardUpdated_t3D7889CCD1CF5D3138F9BA740B6B257BACB92063  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated
struct  OnMostWinsLeaderboardUpdated_t4A02F9D52EBD70CF987D7A8ABB53DE5E6D1B7BDA  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult
struct  OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded
struct  OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/Callback
struct  Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Message/ExtraMessageTypesHandler
struct  ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer
struct  StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.StandalonePlatform/UnityLogDelegate
struct  UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563  : public MulticastDelegate_t
{
public:

public:
};


// Oculus.Platform.WindowsPlatform/UnityLogDelegate
struct  UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.Player
struct  Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 Oculus.Platform.Samples.VrHoops.Player::m_score
	uint32_t ___m_score_7;
	// UnityEngine.UI.Text Oculus.Platform.Samples.VrHoops.Player::m_scoreUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_scoreUI_8;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::m_ballPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_ballPrefab_9;
	// Oculus.Platform.Samples.VrHoops.BallEjector Oculus.Platform.Samples.VrHoops.Player::m_ballEjector
	BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D * ___m_ballEjector_10;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> Oculus.Platform.Samples.VrHoops.Player::m_balls
	Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * ___m_balls_11;
	// UnityEngine.GameObject Oculus.Platform.Samples.VrHoops.Player::m_heldBall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_heldBall_12;
	// System.Single Oculus.Platform.Samples.VrHoops.Player::m_nextSpawnTime
	float ___m_nextSpawnTime_13;

public:
	inline static int32_t get_offset_of_m_score_7() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_score_7)); }
	inline uint32_t get_m_score_7() const { return ___m_score_7; }
	inline uint32_t* get_address_of_m_score_7() { return &___m_score_7; }
	inline void set_m_score_7(uint32_t value)
	{
		___m_score_7 = value;
	}

	inline static int32_t get_offset_of_m_scoreUI_8() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_scoreUI_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_scoreUI_8() const { return ___m_scoreUI_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_scoreUI_8() { return &___m_scoreUI_8; }
	inline void set_m_scoreUI_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_scoreUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_scoreUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ballPrefab_9() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_ballPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_ballPrefab_9() const { return ___m_ballPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_ballPrefab_9() { return &___m_ballPrefab_9; }
	inline void set_m_ballPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_ballPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ballPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ballEjector_10() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_ballEjector_10)); }
	inline BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D * get_m_ballEjector_10() const { return ___m_ballEjector_10; }
	inline BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D ** get_address_of_m_ballEjector_10() { return &___m_ballEjector_10; }
	inline void set_m_ballEjector_10(BallEjector_t2942414CF5743A1E621B47AE54239C1B6B04470D * value)
	{
		___m_ballEjector_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ballEjector_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_balls_11() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_balls_11)); }
	inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * get_m_balls_11() const { return ___m_balls_11; }
	inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 ** get_address_of_m_balls_11() { return &___m_balls_11; }
	inline void set_m_balls_11(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * value)
	{
		___m_balls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_balls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_heldBall_12() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_heldBall_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_heldBall_12() const { return ___m_heldBall_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_heldBall_12() { return &___m_heldBall_12; }
	inline void set_m_heldBall_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_heldBall_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_heldBall_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_nextSpawnTime_13() { return static_cast<int32_t>(offsetof(Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0, ___m_nextSpawnTime_13)); }
	inline float get_m_nextSpawnTime_13() const { return ___m_nextSpawnTime_13; }
	inline float* get_address_of_m_nextSpawnTime_13() { return &___m_nextSpawnTime_13; }
	inline void set_m_nextSpawnTime_13(float value)
	{
		___m_nextSpawnTime_13 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Oculus.Platform.Samples.VrHoops.VREyeRaycaster
struct  VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.EventSystems.EventSystem Oculus.Platform.Samples.VrHoops.VREyeRaycaster::m_eventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_eventSystem_4;
	// UnityEngine.UI.Button Oculus.Platform.Samples.VrHoops.VREyeRaycaster::m_currentButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_currentButton_5;

public:
	inline static int32_t get_offset_of_m_eventSystem_4() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90, ___m_eventSystem_4)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_eventSystem_4() const { return ___m_eventSystem_4; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_eventSystem_4() { return &___m_eventSystem_4; }
	inline void set_m_eventSystem_4(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_eventSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentButton_5() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90, ___m_currentButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_currentButton_5() const { return ___m_currentButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_currentButton_5() { return &___m_currentButton_5; }
	inline void set_m_currentButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_currentButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentButton_5), (void*)value);
	}
};


// Oculus.Platform.Samples.VrVoiceChat.VREyeRaycaster
struct  VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.EventSystems.EventSystem Oculus.Platform.Samples.VrVoiceChat.VREyeRaycaster::m_eventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_eventSystem_4;
	// UnityEngine.UI.Button Oculus.Platform.Samples.VrVoiceChat.VREyeRaycaster::m_currentButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___m_currentButton_5;

public:
	inline static int32_t get_offset_of_m_eventSystem_4() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB, ___m_eventSystem_4)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_eventSystem_4() const { return ___m_eventSystem_4; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_eventSystem_4() { return &___m_eventSystem_4; }
	inline void set_m_eventSystem_4(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_eventSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentButton_5() { return static_cast<int32_t>(offsetof(VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB, ___m_currentButton_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_m_currentButton_5() const { return ___m_currentButton_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_m_currentButton_5() { return &___m_currentButton_5; }
	inline void set_m_currentButton_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___m_currentButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentButton_5), (void*)value);
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel
struct  VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::initialPlaybackDelayMS
	int32_t ___initialPlaybackDelayMS_4;
	// UnityEngine.AudioSource Oculus.Platform.VoipAudioSourceHiLevel::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;
	// System.Single Oculus.Platform.VoipAudioSourceHiLevel::peakAmplitude
	float ___peakAmplitude_6;
	// Oculus.Platform.IVoipPCMSource Oculus.Platform.VoipAudioSourceHiLevel::pcmSource
	RuntimeObject* ___pcmSource_7;

public:
	inline static int32_t get_offset_of_initialPlaybackDelayMS_4() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___initialPlaybackDelayMS_4)); }
	inline int32_t get_initialPlaybackDelayMS_4() const { return ___initialPlaybackDelayMS_4; }
	inline int32_t* get_address_of_initialPlaybackDelayMS_4() { return &___initialPlaybackDelayMS_4; }
	inline void set_initialPlaybackDelayMS_4(int32_t value)
	{
		___initialPlaybackDelayMS_4 = value;
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_peakAmplitude_6() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___peakAmplitude_6)); }
	inline float get_peakAmplitude_6() const { return ___peakAmplitude_6; }
	inline float* get_address_of_peakAmplitude_6() { return &___peakAmplitude_6; }
	inline void set_peakAmplitude_6(float value)
	{
		___peakAmplitude_6 = value;
	}

	inline static int32_t get_offset_of_pcmSource_7() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD, ___pcmSource_7)); }
	inline RuntimeObject* get_pcmSource_7() const { return ___pcmSource_7; }
	inline RuntimeObject** get_address_of_pcmSource_7() { return &___pcmSource_7; }
	inline void set_pcmSource_7(RuntimeObject* value)
	{
		___pcmSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pcmSource_7), (void*)value);
	}
};

struct VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields
{
public:
	// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::audioSystemPlaybackFrequency
	int32_t ___audioSystemPlaybackFrequency_8;
	// System.Boolean Oculus.Platform.VoipAudioSourceHiLevel::verboseLogging
	bool ___verboseLogging_9;

public:
	inline static int32_t get_offset_of_audioSystemPlaybackFrequency_8() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___audioSystemPlaybackFrequency_8)); }
	inline int32_t get_audioSystemPlaybackFrequency_8() const { return ___audioSystemPlaybackFrequency_8; }
	inline int32_t* get_address_of_audioSystemPlaybackFrequency_8() { return &___audioSystemPlaybackFrequency_8; }
	inline void set_audioSystemPlaybackFrequency_8(int32_t value)
	{
		___audioSystemPlaybackFrequency_8 = value;
	}

	inline static int32_t get_offset_of_verboseLogging_9() { return static_cast<int32_t>(offsetof(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields, ___verboseLogging_9)); }
	inline bool get_verboseLogging_9() const { return ___verboseLogging_9; }
	inline bool* get_address_of_verboseLogging_9() { return &___verboseLogging_9; }
	inline void set_verboseLogging_9(bool value)
	{
		___verboseLogging_9 = value;
	}
};


// Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate
struct  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Oculus.Platform.VoipAudioSourceHiLevel Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::parent
	VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * ___parent_4;
	// System.Single[] Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::scratchBuffer
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___scratchBuffer_5;

public:
	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___parent_4)); }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * get_parent_4() const { return ___parent_4; }
	inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_4), (void*)value);
	}

	inline static int32_t get_offset_of_scratchBuffer_5() { return static_cast<int32_t>(offsetof(FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94, ___scratchBuffer_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_scratchBuffer_5() const { return ___scratchBuffer_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_scratchBuffer_5() { return &___scratchBuffer_5; }
	inline void set_scratchBuffer_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___scratchBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scratchBuffer_5), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051  ___s_UIToolkitOverride_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_UIToolkitOverride_15() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_UIToolkitOverride_15)); }
	inline UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051  get_s_UIToolkitOverride_15() const { return ___s_UIToolkitOverride_15; }
	inline UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051 * get_address_of_s_UIToolkitOverride_15() { return &___s_UIToolkitOverride_15; }
	inline void set_s_UIToolkitOverride_15(UIToolkitOverrideConfig_tB5087C80F45EF6D94B1BF60B8DAE6AE8D78F1051  value)
	{
		___s_UIToolkitOverride_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_UIToolkitOverride_15))->___activeEventSystem_0), (void*)NULL);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Oculus.Platform.CAPI/ovrKeyValuePair[]
struct ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  m_Items[1];

public:
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___stringValue__2), (void*)NULL);
		#endif
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___stringValue__2), (void*)NULL);
		#endif
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
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
// Oculus.Platform.CAPI/ovrMatchmakingCriterion[]
struct ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4  m_Items[1];

public:
	inline ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
	}
	inline ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key__0), (void*)NULL);
	}
};
// Oculus.Platform.Matchmaking/CustomQuery/Criterion[]
struct CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51  m_Items[1];

public:
	inline Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parameters_2), (void*)NULL);
		#endif
	}
	inline Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parameters_2), (void*)NULL);
		#endif
	}
};
// Oculus.Platform.ServiceProvider[]
struct ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// System.Void Oculus.Platform.Message`1/Callback<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared (Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// T Oculus.Platform.Message`1<System.Object>::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Message_1_get_Data_mE88C457767098AA3B525BBD14703B8B17E0E1B0C_gshared_inline (Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C * __this, const RuntimeMethod* method);
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<System.Object>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * Request_1_OnComplete_m06C388C38A33D05966AB628770E09F0BA26B1F76_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.UInt64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60_gshared (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB_gshared (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeserializableList_1_GetEnumerator_mB81F0D2BA8F1F9885039ADA11F97DD5C720F227A_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.UInt64>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629_gshared (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, uint64_t ___item0, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.Models.DeserializableList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeserializableList_1_get_Count_m560618663F9AAD416E57375536CDD3A6000981E4_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.UInt64>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987_gshared (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, uint64_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6_gshared (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * __this, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.UInt64>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_gshared_inline (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Object>::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared (Request_1_tA0A1E0EFB2359B26480A6F43E75E5CBA8D19CD46 * __this, uint64_t ___requestID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.Object>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared (uint32_t ___type0, Callback_tE0016C473A8D6B0D8E2502D1AC079D2A433992C9 * ___callback1, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Models.DeserializableList`1<System.Object>::get_HasNextPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.String Oculus.Platform.Models.DeserializableList`1<System.Object>::get_NextUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E_gshared (ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356_gshared (ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<System.String>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.Rooms::SetRoomInviteAcceptedNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetRoomInviteAcceptedNotificationCallback_m60B54B9FCAED23E93A1E74A84E8C3CE73A1DAAC2 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943 (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.Rooms::SetUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetUpdateNotificationCallback_mCF3B1EB9E6C0946F380F5EA569DCE9395B139F14 (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * ___callback0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Message::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager::TerminateWithError(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1 (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method);
// T Oculus.Platform.Message`1<System.String>::get_Data()
inline String_t* Message_1_get_Data_mCAA75EEFA7F4C00E8CE9FFC18FE486D15DA6B02D_inline (Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 *, const RuntimeMethod*))Message_1_get_Data_mE88C457767098AA3B525BBD14703B8B17E0E1B0C_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mD99CB47116C09D66DF0FA457E954022C0A00B11B (String_t* ___value0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::JoinExistingRoom(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_JoinExistingRoom_m099A5CE233AAF84EB476D065DF8903B24054C37F (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, uint64_t ___roomID0, const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::CreateAndJoinPrivate(Oculus.Platform.RoomJoinPolicy,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_CreateAndJoinPrivate_mBA06CEE94BE8585DE5BD5CA34558C67E6EB181B1 (int32_t ___joinPolicy0, uint32_t ___maxUsers1, bool ___subscribeToUpdates2, const RuntimeMethod* method);
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.Room>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * __this, Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * (*) (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *, Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *, const RuntimeMethod*))Request_1_OnComplete_m06C388C38A33D05966AB628770E09F0BA26B1F76_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.Room>::get_Data()
inline Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline (Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * __this, const RuntimeMethod* method)
{
	return ((  Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * (*) (Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 *, const RuntimeMethod*))Message_1_get_Data_mE88C457767098AA3B525BBD14703B8B17E0E1B0C_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager::TransitionToState(Oculus.Platform.Samples.VrVoiceChat.PlatformManager/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3 (int32_t ___newState0, const RuntimeMethod* method);
// Oculus.Platform.Request Oculus.Platform.Rooms::LaunchInvitableUserFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Rooms_LaunchInvitableUserFlow_m50AB2192FC8579B73C1971964D4C5216E66B5EAB (uint64_t ___roomID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mAC564D6964EDAEDEB158A4FEB741444645CEFAEB (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Oculus.Platform.Request Oculus.Platform.Request::OnComplete(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Request_OnComplete_mDD83CB14C5B7BC1C0B9CE8DE61D77F43F918588B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.UInt64>::.ctor()
inline void HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60 (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *, const RuntimeMethod*))HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>::.ctor()
inline void List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 *, const RuntimeMethod*))List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB_gshared)(__this, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> Oculus.Platform.Notifications::GetRoomInviteNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t905B55299B98360BD28441866328CC345E8F3910 * Notifications_GetRoomInviteNotifications_mC14B97D1CC1B3E69B21023DBCD24E97FFF649245 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomInviteNotificationList>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m937B3A7D659D1FBF2BB1F4BA72ED6F5FE940EAA6 (Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// Oculus.Platform.Request`1<T> Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList>::OnComplete(Oculus.Platform.Message`1/Callback<T>)
inline Request_1_t905B55299B98360BD28441866328CC345E8F3910 * Request_1_OnComplete_mA484A985B43347007CA93891098ED696039AE892 (Request_1_t905B55299B98360BD28441866328CC345E8F3910 * __this, Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 * ___callback0, const RuntimeMethod* method)
{
	return ((  Request_1_t905B55299B98360BD28441866328CC345E8F3910 * (*) (Request_1_t905B55299B98360BD28441866328CC345E8F3910 *, Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 *, const RuntimeMethod*))Request_1_OnComplete_m06C388C38A33D05966AB628770E09F0BA26B1F76_gshared)(__this, ___callback0, method);
}
// T Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotificationList>::get_Data()
inline RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_inline (Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 * __this, const RuntimeMethod* method)
{
	return ((  RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * (*) (Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 *, const RuntimeMethod*))Message_1_get_Data_mE88C457767098AA3B525BBD14703B8B17E0E1B0C_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.RoomInviteNotification>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m8BE0D7817F81271AE59AE0762206FA976C6FB640 (DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D *, const RuntimeMethod*))DeserializableList_1_GetEnumerator_mB81F0D2BA8F1F9885039ADA11F97DD5C720F227A_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.UInt64>::Add(!0)
inline bool HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629 (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, uint64_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *, uint64_t, const RuntimeMethod*))HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629_gshared)(__this, ___item0, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Get_mF4FEB110B8F1CCDF54CB120C52703B3FCBD5A6D1 (uint64_t ___roomID0, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.RoomInviteNotification>::get_Count()
inline int32_t DeserializableList_1_get_Count_m85E29052BCD6634DC8E35A05612502DA7C5C6C05 (DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DeserializableList_1_t161CBE3970EEFF17E2165269FC4E240A08ED7F2D *, const RuntimeMethod*))DeserializableList_1_get_Count_m560618663F9AAD416E57375536CDD3A6000981E4_gshared)(__this, method);
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager::SetActiveInvites(System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_SetActiveInvites_m023FB452F84294110EA0535DF15B71E432A6FB89 (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * ___invites0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::.ctor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356 (Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * __this, uint64_t ___roomID0, String_t* ___owner1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.UInt64>::Remove(!0)
inline bool HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987 (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, uint64_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *, uint64_t, const RuntimeMethod*))HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987_gshared)(__this, ___item0, method);
}
// System.Int32 Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_Count()
inline int32_t DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_Count_m560618663F9AAD416E57375536CDD3A6000981E4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite>::Add(!0)
inline void List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6 (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * __this, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 *, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 , const RuntimeMethod*))List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<System.UInt64>::get_Count()
inline int32_t HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_inline (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *, const RuntimeMethod*))HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_gshared_inline)(__this, method);
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Join(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Join_m075E44920853F17B385A06FF71F5254102D42B4A (uint64_t ___roomID0, bool ___subscribeToUpdates1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::GetEnumerator()
inline RuntimeObject* DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_GetEnumerator_mB81F0D2BA8F1F9885039ADA11F97DD5C720F227A_gshared)(__this, method);
}
// System.UInt64 Oculus.Platform.Samples.VrVoiceChat.PlatformManager::get_MyID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t PlatformManager_get_MyID_m14A66163DDB88E02919BDFE3B157A53164DF7604 (const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Leave(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Leave_mA581F15F66ABBC2395E1A340E4E6962B9857674D (uint64_t ___roomID0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_RoomOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_RoomOptions_Create_mCCFD4FF41E87AC0DBDB2A8231EEABF0F1E469FCA (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetDataStoreString(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetDataStoreString_m87C3D85E86179CE4FD57C6E2E7B17106499F21BF (intptr_t ___handle0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_ClearDataStore(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_ClearDataStore_m9F97344746ADED54B38B33CCEC8FAAB5CDD4F72A (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetExcludeRecentlyMet(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetExcludeRecentlyMet_m66E251C2EB90AB756808D25431103A08D3F24B6A (intptr_t ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetMaxUserResults(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetMaxUserResults_m51CAF6DB2ECFBBE16D80C6C65B7C10ABA27BC82A (intptr_t ___handle0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetOrdering(System.IntPtr,Oculus.Platform.UserOrdering)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetOrdering_m9FCF57CC11EB9BB044862495090AFE7095391427 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetRecentlyMetTimeWindow(System.IntPtr,Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetRecentlyMetTimeWindow_m04D122CADB791762EE7C1676B8462A023B47A777 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetRoomId(System.IntPtr,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetRoomId_m3DDF90338034809F927B09568A71034502A78C64 (intptr_t ___handle0, uint64_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_SetTurnOffUpdates(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_SetTurnOffUpdates_m9CB78CD92C6BEE1550E62E4E2C2C18CBD4A771B9 (intptr_t ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_RoomOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_RoomOptions_Destroy_m964143A50705623866FE06BC635B2F6330AE5D24 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Core::IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
inline int32_t Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m99462FD95A811068FBA964A97213B4CA59FF8A31 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m0E89F960CC17EAEBA38A57A632911BB4A6D9EAFF_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m9B9D89C6D4523685BDBB873E3E76754E89171468_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m73C2858A70CE1C9A1AEE4134B4E3B136CA4B719F_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline)(__this, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44 (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_UpdateDataStore(System.UInt64,Oculus.Platform.CAPI/ovrKeyValuePair[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_UpdateDataStore_mB1A7954EACA460FA419EA3DB633C107A1382DB4D (uint64_t ___roomID0, ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* ___data1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.Room>::.ctor(System.UInt64)
inline void Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8 (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_CreateAndJoinPrivate(Oculus.Platform.RoomJoinPolicy,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_CreateAndJoinPrivate_m88D2C39543D02AD988A65680F27C3ACEDAEC98A2 (int32_t ___joinPolicy0, uint32_t ___maxUsers1, bool ___subscribeToUpdates2, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.RoomOptions::op_Explicit(Oculus.Platform.RoomOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RoomOptions_op_Explicit_mEDBE716B4F56A60290EFA5A598CA9332743023B9 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_CreateAndJoinPrivate2(Oculus.Platform.RoomJoinPolicy,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_CreateAndJoinPrivate2_m32030813BEB7B23CF9B21FD947E012DCF5D6CEFF (int32_t ___joinPolicy0, uint32_t ___maxUsers1, intptr_t ___roomOptions2, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_Get_m04DE82D6BFB4F4F869031C85A7E28A21FB9A7E8A (uint64_t ___roomID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_GetCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_GetCurrent_m3C024AD9F461ED5BC49D34FEA161C2A0403AE37A (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_GetCurrentForUser(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_GetCurrentForUser_mD73E9294B591B39C6CBCC5D866CCA266A4684731 (uint64_t ___userID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_GetInvitableUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_GetInvitableUsers_m00DB46DD453BCBF040B6B07FB256C386AF72B6DE (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserList>::.ctor(System.UInt64)
inline void Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5 (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_GetInvitableUsers2(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_GetInvitableUsers2_m90D1EFFF779F239A8EDA909A4182DDB60B42D647 (intptr_t ___roomOptions0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_GetModeratedRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_GetModeratedRooms_mF486DA95CC4CA98A170D704A71138B2952F599E8 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList>::.ctor(System.UInt64)
inline void Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469 (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_InviteUser(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_InviteUser_m7879954D088688B8BF5E91FCDB2479E616DC02D7 (uint64_t ___roomID0, String_t* ___inviteToken1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_Join(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_Join_m0E21390CA919E8BBB6A20E61B4FCFF34333A9DE0 (uint64_t ___roomID0, bool ___subscribeToUpdates1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_Join2(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_Join2_m5B9DD78720318F4D4F4B7C30CB37D0B320F31C63 (uint64_t ___roomID0, intptr_t ___roomOptions1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_KickUser(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_KickUser_m7641FD9B12C78BA96D508786703167388AE096DA (uint64_t ___roomID0, uint64_t ___userID1, int32_t ___kickDurationSeconds2, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_LaunchInvitableUserFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_LaunchInvitableUserFlow_mE79E115BCD4942606F56D8C9021766B6C90BC3EE (uint64_t ___roomID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * __this, uint64_t ___requestID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_Leave(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_Leave_mB499F84B5585BA4FE828665A3D3BD5A9DFA4EC53 (uint64_t ___roomID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_SetDescription(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_SetDescription_m2E9E172E899695B95F50B4A2AD04007C8C6EEABA (uint64_t ___roomID0, String_t* ___description1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_UpdateMembershipLockStatus(System.UInt64,Oculus.Platform.RoomMembershipLockStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_UpdateMembershipLockStatus_mAA385B237339BC8B36C3FB346776E4FAB9227EC7 (uint64_t ___roomID0, int32_t ___membershipLockStatus1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_UpdateOwner(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_UpdateOwner_m500465E8364E4409AF3B359ADA7E95C58B87F030 (uint64_t ___roomID0, uint64_t ___userID1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Room_UpdatePrivateRoomJoinPolicy(System.UInt64,Oculus.Platform.RoomJoinPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Room_UpdatePrivateRoomJoinPolicy_mD59881DF3EE3F75B3980E36499AB821F5115BB1A (uint64_t ___roomID0, int32_t ___newJoinPolicy1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Callback::SetNotificationCallback<System.String>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463 (uint32_t ___type0, Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.RoomInviteNotification>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisRoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8_m5B108FA9AC43EEFAC1DD557E75C46311C1E8C040 (uint32_t ___type0, Callback_t2738E26970FDD9D111F9D6CCBBB107852DE3F9FC * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t2738E26970FDD9D111F9D6CCBBB107852DE3F9FC *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.Room>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisRoom_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_m52F6062D3520C202A7C088F4A664368B3399FBF9 (uint32_t ___type0, Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared)(___type0, ___callback1, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Room>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_mDFDD1705C90CD1F2DDC6BFA2BEE89E3C37ECB6A0 (DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Room>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mF88551A9660F8EBD0EF412C131EE38A00AFA40B4_inline (DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_t3C955045ED2EE6580CDF3722FC22A6A36B22BCCA *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_HTTP_GetWithMessageType(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA (String_t* ___url0, int32_t ___messageType1, const RuntimeMethod* method);
// Oculus.Platform.SdkAccountType Oculus.Platform.CAPI::ovr_SdkAccount_GetAccountType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SdkAccount_GetAccountType_mC2E1133EB86528148975004F29B718EA61AD4006 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_SdkAccount_GetUserId(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_SdkAccount_GetUserId_m970A4B0F927C92026D89136ADF147B142E11FFDC (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.SdkAccount>::.ctor()
inline void DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C (DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_SdkAccountArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_SdkAccountArray_GetSize_m7FA8BD0A681B314F2B13F8303B3DBC0E66B4901E (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF (uintptr_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>::.ctor(System.Int32)
inline void List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572 (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455 (uint64_t ___value0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_SdkAccountArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_SdkAccountArray_GetElement_m94BF2B7FDAC075B64F649A2E6C1902A1F0A5405A (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.SdkAccount::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7 (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.SdkAccount>::Add(!0)
inline void List_1_Add_mD30850BDDEA81ACCB0B61F5D19E8433E8D1A0783 (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * __this, SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *, SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// Oculus.Platform.ShareMediaStatus Oculus.Platform.CAPI::ovr_ShareMediaResult_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_ShareMediaResult_GetStatus_mC27964DADCE63B543E03672BFC77A1716364D81A (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.PlatformSettings::get_AppID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformSettings_get_AppID_m59B2B0452882E0B7C30A6275F8E10F1EB97ECE3A (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline (const RuntimeMethod* method);
// System.UInt64 System.UInt64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD (String_t* ___s0, const RuntimeMethod* method);
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitialize(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UnityResetTestPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UnityResetTestPlatform_mAA9C56C069F30DDA00E8E15F9AC793FF2EB41315 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UnityInitGlobals(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UnityInitGlobals_mD93010271FEB9AE86D398DEB83A7D974D718A256 (intptr_t ___loggingCB0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_PlatformInitializeWithAccessToken(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_PlatformInitializeWithAccessToken_m7AE6DEF63FB0385E174C219E92AA092E0B633119 (uint64_t ___appId0, String_t* ___accessToken1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize>::.ctor(System.UInt64)
inline void Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688 (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_SupplementaryMetric_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_SupplementaryMetric_GetID_m606A0E3DBB03921BC3848204032D16FA213AB3FC (intptr_t ___obj0, const RuntimeMethod* method);
// System.Int64 Oculus.Platform.CAPI::ovr_SupplementaryMetric_GetMetric(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CAPI_ovr_SupplementaryMetric_GetMetric_m75E8565C96444EB9E164D7B526BB06D133996744 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_SystemPermission_GetHasPermission(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_SystemPermission_GetHasPermission_m44B0DA1696EEB52126EF51BEA06B3E93BE7ED967 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.PermissionGrantStatus Oculus.Platform.CAPI::ovr_SystemPermission_GetPermissionGrantStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemPermission_GetPermissionGrantStatus_mC60425168D9E3B3398E226C50B4D00B11E545544 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.VoipMuteState Oculus.Platform.CAPI::ovr_SystemVoipState_GetMicrophoneMuted(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemVoipState_GetMicrophoneMuted_mACFAC0E6A669BAA76D192487A674CC5853E8A136 (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.SystemVoipStatus Oculus.Platform.CAPI::ovr_SystemVoipState_GetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_SystemVoipState_GetStatus_m90B4964E758086D098299E9ABD65AF85EA1B8469 (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_Team_GetAssignedUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_Team_GetAssignedUsers_mAD52608F7B9F744FB914E91C99CF89D1B399B330 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * __this, intptr_t ___a0, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.CAPI::ovr_Team_GetMaxUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Team_GetMaxUsers_m3AB047408BB22B8E91A2AC3866FA482ABEC4B47B (intptr_t ___obj0, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.CAPI::ovr_Team_GetMinUsers(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Team_GetMinUsers_m9B055C3EEA6371856902DEB38D5887B376AA914F (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_Team_GetName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_Team_GetName_m9996CAC336C45A5CA598CC5E7FD737117D0A7B47 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.Team>::.ctor()
inline void DeserializableList_1__ctor_mAB7228FB3D86951154FE8023972652E1311626B6 (DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_TeamArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_TeamArray_GetSize_mBC7C6FEC0E8E62ACF22C0A21566CA6DE5AD3D321 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Team>::.ctor(System.Int32)
inline void List_1__ctor_m09EB5665BFEF44DD41A2937561B1A94145BE79DA (List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2D436535887B174C4FD890661D903CEF9665EB33 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_TeamArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_TeamArray_GetElement_m59A36F353964885E2B9FB8E5CFB8D4D99E4A5C26 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Team::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Team__ctor_m78FFC056B34E1E35602983B01DE497165489E361 (Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.Team>::Add(!0)
inline void List_1_Add_m5BBC7D14058D9138458B3B7A0200B8A9BC17F9B6 (List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * __this, Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2D436535887B174C4FD890661D903CEF9665EB33 *, Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_User_GetDisplayName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetDisplayName_m79D2FCAC61E4413B3F72F54305D498294AE338ED (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetID_mA83BA4D33092F21AAAB03ABA1F0D5E1B2BF9CEEA (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetImageUrl_m1647E45A5A766481651AF981DA8BD26EE99A68D0 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetInviteToken(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetInviteToken_mC5098CFE3E4641B574D95376031D5CB51D0B2ADC (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetOculusID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetOculusID_m554BADFCCA6BA7FA4A2FD9AD7134E7EA88DAEDDD (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresence(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresence_mF5012075F715E47929569AB9711A007D8E329837 (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceDeeplinkMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceDeeplinkMessage_mA9DF540B83D3462E25A1919F564627BA9C2F951A (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetPresenceDestinationApiName(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetPresenceDestinationApiName_m6B293BFCDA113BFF62DDF162814C99C514A27B9F (intptr_t ___obj0, const RuntimeMethod* method);
// Oculus.Platform.UserPresenceStatus Oculus.Platform.CAPI::ovr_User_GetPresenceStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_User_GetPresenceStatus_mF1A68B4B6BFEDB3427E5669C2538CBD4FF440A2C (intptr_t ___obj0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_User_GetSmallImageUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_User_GetSmallImageUrl_mEF25A58B6C95EB63D428AC117FCED150BFA7181A (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_UserAndRoom_GetRoom(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserAndRoom_GetRoom_mA71B6FA4AB9F2F890973859DBB028E08B63975F8 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.Room::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m3D051E457AB4DF0627AF460FDAF157DF188489B8 (Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_UserAndRoom_GetUser(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserAndRoom_GetUser_m8669E210339FA7F81E41D698A4CF6457AF9DC788 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961 (User_tA163463AE919860D9B337F6104B028990A44B69D * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserAndRoom>::.ctor()
inline void DeserializableList_1__ctor_m7F06DF5A7957D69926FC06231C1B6AB352338B35 (DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_UserAndRoomArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_UserAndRoomArray_GetSize_m2CDFABDC864DD66C0923DC128BA2A24768BBB262 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.UserAndRoom>::.ctor(System.Int32)
inline void List_1__ctor_m3F53784E1A92E049156DD71024FE8D4E9ABB88DA (List_1_t170398B9618F382160996609D78622C9AEDAA3EC * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t170398B9618F382160996609D78622C9AEDAA3EC *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_UserAndRoomArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserAndRoomArray_GetElement_m7341597F01C21A6358C1D0964D75A6EF04DB69C5 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.UserAndRoom::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAndRoom__ctor_mEB192F734DCA736AA705FCF94AB440174A8EFE0C (UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3 * __this, intptr_t ___o0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.UserAndRoom>::Add(!0)
inline void List_1_Add_m7187674DB4D34A89D7BEDB715297659D1DB53CE2 (List_1_t170398B9618F382160996609D78622C9AEDAA3EC * __this, UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t170398B9618F382160996609D78622C9AEDAA3EC *, UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_UserAndRoomArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserAndRoomArray_GetNextUrl_m7537E5094BE2251FBEAD39D96E836340DC6FFB26 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateDeleteEntryByKey_m0E52FF96067754655F2BA0A56C64FE20F84A41D1 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse>::.ctor(System.UInt64)
inline void Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408 (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateGetEntries_m35C39C5C06EB8011B4B67871124D28F6133BD03B (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.UInt64)
inline void Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4 (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateGetEntryByKey_m6D3FFD07EA7409F7BF0C8BC610EA91CE855AA1E1 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PrivateWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PrivateWriteEntry_m64C30A59D7253A6FAA9F2A28A4ACECACD42D281B (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicDeleteEntryByKey_m499E4B51F4E611D9205300AA0C52DDB68A47FD05 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicGetEntries_m55AD4C16D002B3705A31EBEA01C738DBF40C044B (uint64_t ___userID0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicGetEntryByKey_mEC7AB95AC43D76408C2E600E0A8E23B14CD73F24 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserDataStore_PublicWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserDataStore_PublicWriteEntry_mE2C576EAD8732949BD258CEDBD25B1BB29CEB7F3 (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserDataStoreUpdateResponse_GetSuccess(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m0C36C63931711623D5BA4192EBB5F1F2951F991A (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::.ctor()
inline void DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	((  void (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1__ctor_m6EE5A900936AB1177643C14AD5E2E36536A1E77C_gshared)(__this, method);
}
// System.UIntPtr Oculus.Platform.CAPI::ovr_UserArray_GetSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_UserArray_GetSize_m38BD39A3E6D4B8573D525ED1D1B112FCAF956BD2 (intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.User>::.ctor(System.Int32)
inline void List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.IntPtr Oculus.Platform.CAPI::ovr_UserArray_GetElement(System.IntPtr,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserArray_GetElement_m0619479C1F1520ADDEF134E3D5435467EF933296 (intptr_t ___obj0, uintptr_t ___index1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Oculus.Platform.Models.User>::Add(!0)
inline void List_1_Add_m76760B69537205E74CC1457569EA27D97A168E64 (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * __this, User_tA163463AE919860D9B337F6104B028990A44B69D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.String Oculus.Platform.CAPI::ovr_UserArray_GetNextUrl(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserArray_GetNextUrl_mA95C138EB69C1CE98D550D235914C0EE382EF63D (intptr_t ___obj0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_UserOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_UserOptions_Create_m60251C8DAB5A03F2552EAF3E89E48FFAE3172570 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_SetMaxUsers(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_SetMaxUsers_mDD81D5F354B885E7E9343A2E2DA0A35136187D00 (intptr_t ___handle0, uint32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_AddServiceProvider(System.IntPtr,Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_AddServiceProvider_mBD932E1353292F7251B36D8F6830DA955347840B (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_ClearServiceProviders(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_ClearServiceProviders_m7922D5B53B2DF826ED57DF3278AD1BB6E4C90619 (intptr_t ___handle0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_SetTimeWindow(System.IntPtr,Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_SetTimeWindow_m596ECBD8F41B3A6B119D92F990A5518019D47F18 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_UserOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_UserOptions_Destroy_m9E50FD0A41BF5B26BD6EE525D7E57CC94D238080 (intptr_t ___handle0, const RuntimeMethod* method);
// System.String Oculus.Platform.CAPI::ovr_UserProof_GetNonce(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CAPI_ovr_UserProof_GetNonce_mF6A1AE97D83D3DD6423455D5A3D6F9471248252B (intptr_t ___obj0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UserReportID_GetDidCancel(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UserReportID_GetDidCancel_mB0B91FFA73FA546D655819A69AF3960E59FD39A9 (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UserReportID_GetID(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UserReportID_GetID_m8220610EB1BCBE2E0399AD8FC23BCB81732B046B (intptr_t ___obj0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_Get_mAE29EECCF7FCB204D33C0A31C30E40616299C1EC (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.User>::.ctor(System.UInt64)
inline void Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetAccessToken_m899991AE1663D505CF1DDAC66C6F20F497C510F7 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<System.String>::.ctor(System.UInt64)
inline void Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUser_m8B09DC2F47134337CF635E646AEDFBDBBBE4B150 (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUserFriends_m27F0E883F04D1961044BAE83A942AE4C2AB61B2E (const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUserFriendsAndRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUserFriendsAndRooms_m3C9689D0DD067C14AD180BD40D7A99A9399A43C5 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList>::.ctor(System.UInt64)
inline void Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660 (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms_mA685C0825DFFBB1159918BF7583436EB4FC114AF (intptr_t ___userOptions0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetOrgScopedID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetOrgScopedID_mDD36A00BA3DEEBC290E9766FE20A23028082100D (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID>::.ctor(System.UInt64)
inline void Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004 (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetSdkAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetSdkAccounts_m08EE62B28E7308F42388587BAE022FF3AEE8773A (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88 (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetUserProof_mACFFCCAC2CDD3F5D7469D2CCAC8B24C007B926D0 (const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof>::.ctor(System.UInt64)
inline void Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchFriendRequestFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchFriendRequestFlow_m8FD9F09D6DA42EFF9BE262A8EB00E8AD6569EB89 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult>::.ctor(System.UInt64)
inline void Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268 (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.UInt64 Oculus.Platform.CAPI::ovr_User_LaunchProfile(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_LaunchProfile_m29B295907B7AA752C7D27DD2152260A17B4BFD56 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserAndRoom>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m08E5E8ACFC1586825A5394E7DCDF7A91E1397BD1 (DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.UserAndRoom>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mA8EC3005EA342AD8A891E0E3BBEC7993C7F4B3E8_inline (DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// System.Boolean Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_HasNextPage()
inline bool DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80 (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_HasNextPage_m5BE28A4D2BBC7511D72915F889C7D63B85D88D15_gshared)(__this, method);
}
// System.String Oculus.Platform.Models.DeserializableList`1<Oculus.Platform.Models.User>::get_NextUrl()
inline String_t* DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_inline (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *, const RuntimeMethod*))DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55 (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selected0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Start_m0C4835CAE5708EB73AF4421B43F0BC6447D0A21F (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Accept_m9800FE8E4D343E0C0CE2FDC0487FEA5BB26E28A8 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_Stop_m0DC234A970B860B06D713DD66F162277CBA5C7E5 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(Oculus.Platform.CAPI/FilterCallback,System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer_m1D5F5B3B07B29D553B92A5CA21A02FF11CD8FAF0 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * ___cb0, uintptr_t ___bufferSizeElements1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetMicrophoneMuted(Oculus.Platform.VoipMuteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetMicrophoneMuted_m2EA767996A68B9920B04B54C471D54628C92664C (int32_t ___state0, const RuntimeMethod* method);
// Oculus.Platform.VoipMuteState Oculus.Platform.CAPI::ovr_Voip_GetSystemVoipMicrophoneMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetSystemVoipMicrophoneMuted_mF4624D95D21D432C9A5F72F59A2304875C255394 (const RuntimeMethod* method);
// Oculus.Platform.SystemVoipStatus Oculus.Platform.CAPI::ovr_Voip_GetSystemVoipStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetSystemVoipStatus_mA4CF3DB3823A656E832BC18617FB4105A1F1A30E (const RuntimeMethod* method);
// Oculus.Platform.VoipDtxState Oculus.Platform.CAPI::ovr_Voip_GetIsConnectionUsingDtx(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetIsConnectionUsingDtx_m12173DD61FF2478758A671585481EA2AEA569C20 (uint64_t ___peerID0, const RuntimeMethod* method);
// Oculus.Platform.VoipBitrate Oculus.Platform.CAPI::ovr_Voip_GetLocalBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetLocalBitrate_mF1AD054056CC9EA54CB22E970EA936F0C0BF0B37 (uint64_t ___peerID0, const RuntimeMethod* method);
// Oculus.Platform.VoipBitrate Oculus.Platform.CAPI::ovr_Voip_GetRemoteBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CAPI_ovr_Voip_GetRemoteBitrate_mD225E49EC7ABDD91FCE45929F96E57F455D8CBC1 (uint64_t ___peerID0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.VoipOptions::op_Explicit(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VoipOptions_op_Explicit_mECDFD67AF4F1C6685115F82D28645BE57BC9FBD2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___options0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetNewConnectionOptions(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetNewConnectionOptions_m5A52B5110B93D84F8204842ED34DA84C431DAC8A (intptr_t ___voipOptions0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_Voip_SetSystemVoipSuppressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_Voip_SetSystemVoipSuppressed_m6EB89BEC82B94CD4849BF1EBC5CA0C4A7127CACB (bool ___suppressed0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState>::.ctor(System.UInt64)
inline void Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052 (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.NetworkingPeer>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F (uint32_t ___type0, Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.SystemVoipState>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m62DFA300B53C52D4F5021985CEF239AA828434BB (uint32_t ___type0, Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t827F915E827EE8044B5F300339FE951E4557B20A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared)(___type0, ___callback1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m960FD5C861EFDB693785C073698FEBE516CDE81E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate>()
inline FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m0E3CAC37687B000CB800D958EEF3EFCC084D2041 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate>()
inline FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_mCCA15296A81FF003C4507FF456845D7932629C3E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method);
// Oculus.Platform.VoipSampleRate Oculus.Platform.VoipAudioSourceHiLevel::SampleRateToEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, int32_t ___rate0, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_Voip_SetOutputSampleRate(Oculus.Platform.VoipSampleRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_Voip_SetOutputSampleRate_m6372425AE289A6E61861320B0BCF4A9F5F1FABA6 (int32_t ___rate0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.VoipPCMSourceNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::MSToElements(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_MSToElements_m8A392BF3FF2D7D485E672412DC107E03602AD24E (int32_t ___ms0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>::.ctor(System.Object,System.IntPtr)
inline void Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Callback__ctor_mDF92779129D7A3CE85F6C68B40332B99592093B2_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Oculus.Platform.Voip::SetVoipConnectRequestCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetVoipConnectRequestCallback_m11F0F782D6175942A16D6CEEF4D2739B7381962E (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * ___callback0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::SetVoipStateChangeCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetVoipStateChangeCallback_m2F7DFAE5C05187F949F16192BAFA2241BA8D618A (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * ___callback0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Oculus.Platform.VoipAudioSourceHiLevel>()
inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * GameObject_AddComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_m60FC4D21BC98CEBEB913D8B780A072430527A0F8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::set_senderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_set_senderID_m288B4C24C5D9628FC7FC0A35B1AC80A3DFE10193 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Start_mD4A981F8F83C17D7613E54E8AD0B5E967E2E11B3 (uint64_t ___userID0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Stop_mA24A0BDF812EB1364972B0B9C95DFBEF3F59C9C7 (uint64_t ___userID0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Oculus.Platform.VoipAudioSourceHiLevel>()
inline VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * GameObject_GetComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_mE8A51FD815FF954245F17AD1B1028ECDB7A6213F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// T Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>::get_Data()
inline NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline (Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * __this, const RuntimeMethod* method)
{
	return ((  NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * (*) (Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 *, const RuntimeMethod*))Message_1_get_Data_mE88C457767098AA3B525BBD14703B8B17E0E1B0C_gshared_inline)(__this, method);
}
// System.UInt64 Oculus.Platform.Models.NetworkingPeer::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline (NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Voip::Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Accept_m1DFFD97D573CD70906B96AF35D610EAFA5963E03 (uint64_t ___userID0, const RuntimeMethod* method);
// Oculus.Platform.PeerConnectionState Oculus.Platform.Models.NetworkingPeer::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkingPeer_get_State_mC2B21B34F2ED64AC8FE6632995FF67EC96F728A7_inline (NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager::SetBackgroundColorForState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_SetBackgroundColorForState_mD9B4F96CDE716D9E7A47AF253C9FA555C3FA3C2B (const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ovr_VoipOptions_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ovr_VoipOptions_Create_mD4DD27514BC524AD0912019B1B6367C8CB613C03 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_SetBitrateForNewConnections(System.IntPtr,Oculus.Platform.VoipBitrate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_SetBitrateForNewConnections_mEC0DA6AE80F1A013CB655B6B2DB1890BD9FD9356 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_SetCreateNewConnectionUseDtx(System.IntPtr,Oculus.Platform.VoipDtxState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_SetCreateNewConnectionUseDtx_m2C46012D290A068BCAF4E266FF07D656821AE172 (intptr_t ___handle0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI::ovr_VoipOptions_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CAPI_ovr_VoipOptions_Destroy_m55C2B30A237478D8A98A0EBA7AEFD491CC8A6680 (intptr_t ___handle0, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetPCMFloat(System.UInt64,System.Single[],System.UIntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetPCMFloat_mD948F9DACC19FABB9B3BBA070222007A227143FF (uint64_t ___senderID0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___outputBuffer1, uintptr_t ___outputBufferNumElements2, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetPCMSize(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetPCMSize_m1F887B73447D542AEB761EE9F88B424FDE05021C (uint64_t ___senderID0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.WindowsPlatform::getCallbackPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method);
// System.Boolean Oculus.Platform.CAPI::ovr_UnityInitWrapperWindows(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_ovr_UnityInitWrapperWindows_mCF06BCEA646A8E0F124D5DE709556496961B47DD (String_t* ___appId0, intptr_t ___loggingCB1, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_UnityInitWrapperWindowsAsynchronous(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_UnityInitWrapperWindowsAsynchronous_m7B8176215967FCED48A42464C9EDE701EE904186 (String_t* ___appId0, intptr_t ___loggingCB1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output0, const RuntimeMethod* method);
// System.String Oculus.Platform.Samples.NetChat.chatPacket::get_textString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_textString(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::get_packetID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m75E0598ADD4BB45224DB84CD04AF515A2FB52177_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket__ctor_m6A37A3891EAE60ED34FF208CD6A4DF8D612AF96A (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60 (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_packetID(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m6647D7848A8B0E0FCBB45C1FF46A57509BC6BC97_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_Default_mD23CF53E5DA0AEFBB43AA971685B67EABE5FC7A2 (const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method);
// System.Void Oculus.Platform.CAPI/ovrMatchmakingCriterion::.ctor(System.String,Oculus.Platform.MatchmakingCriterionImportance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrMatchmakingCriterion__ctor_m09A0F305763EA10F497DCE62E015CC3DFA5958FE (ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 * __this, String_t* ___key0, int32_t ___importance1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// Oculus.Platform.CAPI/ovrKeyValuePair[] Oculus.Platform.CAPI::DictionaryToOVRKeyValuePairs(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* CAPI_DictionaryToOVRKeyValuePairs_mCD9582605B888E9BF9E71D30F24BD5E727BB143B (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dict0, const RuntimeMethod* method);
// System.IntPtr Oculus.Platform.CAPI::ArrayOfStructsToIntPtr(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CAPI_ArrayOfStructsToIntPtr_mED4354D998FF93434B9ECEABB82393C65D625570 (RuntimeArray * ___ar0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData>(!!0)
inline int32_t Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E (ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28 , const RuntimeMethod*))Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356 (ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28 , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Platform.Samples.VrHoops.P2PNetworkBall>::.ctor()
inline void Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0 (Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Oculus.Platform.Callback::SetNotificationCallback<Oculus.Platform.Models.HttpTransferUpdate>(Oculus.Platform.Message/MessageType,Oculus.Platform.Message`1/Callback<T>)
inline void Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mAFCD46BC660098E122B2BB26192E0EF9C7D1476A (uint32_t ___type0, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback1, const RuntimeMethod* method)
{
	((  void (*) (uint32_t, Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A *, const RuntimeMethod*))Callback_SetNotificationCallback_TisRuntimeObject_m697AB01AE3AFDF9C5B035B784B1EA8591FC45951_gshared)(___type0, ___callback1, method);
}
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method);
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 Oculus.Platform.CAPI::ovr_User_GetLinkedAccounts(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CAPI_ovr_User_GetLinkedAccounts_m228EB54845ED4F04DB92565773630731EEAFCC9E (intptr_t ___userOptions0, const RuntimeMethod* method);
// System.Void Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList>::.ctor(System.UInt64)
inline void Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6 (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * __this, uint64_t ___requestID0, const RuntimeMethod* method)
{
	((  void (*) (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *, uint64_t, const RuntimeMethod*))Request_1__ctor_m2165B37AC33E5E0B98A4F7CFC7FF0AC481FF98A6_gshared)(__this, ___requestID0, method);
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager::AnswerCallOnClick(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformManager_AnswerCallOnClick_mA7BE446F4D5EC3B444BFCE5E1B23060B4C7AC371 (uint64_t ___roomID0, const RuntimeMethod* method);
// System.UIntPtr Oculus.Platform.CAPI::ovr_Voip_GetOutputBufferMaxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t CAPI_ovr_Voip_GetOutputBufferMaxSize_m9799A26F0862BEE54F29A4667ABF9D3C9ED8EF77 (const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Oculus.Platform.Matchmaking/CustomQuery/Criterion::.ctor(System.String,Oculus.Platform.MatchmakingCriterionImportance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8 (Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * __this, String_t* ___key_0, int32_t ___importance_1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager__ctor_m4980A06DFAAB1C738561D8241F989A3A9642A919 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_LaunchedFromAcceptingInviteCallback_mB42F1B52C4446B2A273F4B39A0A7F3C1EC2D0225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_RoomUpdateCallback_mEDF5E95BC5B83274AA3536CC4269801C086F1744_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RoomManager()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Rooms.SetRoomInviteAcceptedNotificationCallback(LaunchedFromAcceptingInviteCallback);
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D *)il2cpp_codegen_object_new(Callback_tD043303749DFDABD54DB83282588105CC2ADB18D_il2cpp_TypeInfo_var);
		Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47(L_0, __this, (intptr_t)((intptr_t)RoomManager_LaunchedFromAcceptingInviteCallback_mB42F1B52C4446B2A273F4B39A0A7F3C1EC2D0225_RuntimeMethod_var), /*hidden argument*/Callback__ctor_m5B4C7945B07726DC70E5876C1335E4033C90BB47_RuntimeMethod_var);
		Rooms_SetRoomInviteAcceptedNotificationCallback_m60B54B9FCAED23E93A1E74A84E8C3CE73A1DAAC2(L_0, /*hidden argument*/NULL);
		// Rooms.SetUpdateNotificationCallback(RoomUpdateCallback);
		Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * L_1 = (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *)il2cpp_codegen_object_new(Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943(L_1, __this, (intptr_t)((intptr_t)RoomManager_RoomUpdateCallback_mEDF5E95BC5B83274AA3536CC4269801C086F1744_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		Rooms_SetUpdateNotificationCallback_mCF3B1EB9E6C0946F380F5EA569DCE9395B139F14(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.UInt64 Oculus.Platform.Samples.VrVoiceChat.RoomManager::get_RemoteUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RoomManager_get_RemoteUserID_mA83A3827AD9524148864E85590BBFC00A3FDFC97 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	{
		// return m_remoteUser != null ? m_remoteUser.ID : 0;
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_0 = __this->get_m_remoteUser_1();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return ((int64_t)((int64_t)0));
	}

IL_000b:
	{
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_1 = __this->get_m_remoteUser_1();
		NullCheck(L_1);
		uint64_t L_2 = L_1->get_ID_1();
		return L_2;
	}
}
// System.String Oculus.Platform.Samples.VrVoiceChat.RoomManager::get_RemoteOculusID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomManager_get_RemoteOculusID_m51DF9BDAE8626A4145EACE45DFC87258B9857955 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_remoteUser != null ? m_remoteUser.OculusID : String.Empty;
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_0 = __this->get_m_remoteUser_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_2 = __this->get_m_remoteUser_1();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_OculusID_4();
		return L_3;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::LaunchedFromAcceptingInviteCallback(Oculus.Platform.Message`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_LaunchedFromAcceptingInviteCallback_mB42F1B52C4446B2A273F4B39A0A7F3C1EC2D0225 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mCAA75EEFA7F4C00E8CE9FFC18FE486D15DA6B02D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9672C405BFD4F07858BF27A2CC8A340FD89B34B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.IsError)
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// PlatformManager.TerminateWithError(msg);
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_2 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// Debug.Log("Launched Invite to join Room: " + msg.Data);
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_3 = ___msg0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Message_1_get_Data_mCAA75EEFA7F4C00E8CE9FFC18FE486D15DA6B02D_inline(L_3, /*hidden argument*/Message_1_get_Data_mCAA75EEFA7F4C00E8CE9FFC18FE486D15DA6B02D_RuntimeMethod_var);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF9672C405BFD4F07858BF27A2CC8A340FD89B34B, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// m_roomID = Convert.ToUInt64(msg.GetString());
		Message_1_t319C15DF3D07D9B038844D76D405CAB1E0F12F84 * L_6 = ___msg0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(69 /* System.String Oculus.Platform.Message::GetString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_8;
		L_8 = Convert_ToUInt64_mD99CB47116C09D66DF0FA457E954022C0A00B11B(L_7, /*hidden argument*/NULL);
		__this->set_m_roomID_0(L_8);
		// }
		return;
	}
}
// System.Boolean Oculus.Platform.Samples.VrVoiceChat.RoomManager::CheckForLaunchInvite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomManager_CheckForLaunchInvite_m4FD7F6C62B5DC0DE614850F36A53EEF0AAFE2C8A (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	{
		// if (m_roomID != 0)
		uint64_t L_0 = __this->get_m_roomID_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// JoinExistingRoom(m_roomID);
		uint64_t L_1 = __this->get_m_roomID_0();
		RoomManager_JoinExistingRoom_m099A5CE233AAF84EB476D065DF8903B24054C37F(__this, L_1, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::CreateRoomAndLaunchInviteMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_CreateRoomAndLaunchInviteMenu_m80E5589E5EF2A2B10F73FE18B8A526D8E0541B10 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_CreateAndJoinPrivateRoomCallback_mEFBD494FD7E02659D43455AFE98F591F5ABE1269_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rooms.CreateAndJoinPrivate(RoomJoinPolicy.InvitedUsers, 2, true)
		//      .OnComplete(CreateAndJoinPrivateRoomCallback);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_0;
		L_0 = Rooms_CreateAndJoinPrivate_mBA06CEE94BE8585DE5BD5CA34558C67E6EB181B1(4, 2, (bool)1, /*hidden argument*/NULL);
		Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * L_1 = (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *)il2cpp_codegen_object_new(Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943(L_1, __this, (intptr_t)((intptr_t)RoomManager_CreateAndJoinPrivateRoomCallback_mEFBD494FD7E02659D43455AFE98F591F5ABE1269_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		NullCheck(L_0);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_2;
		L_2 = Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC(L_0, L_1, /*hidden argument*/Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::CreateAndJoinPrivateRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_CreateAndJoinPrivateRoomCallback_mEFBD494FD7E02659D43455AFE98F591F5ABE1269 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_OnLaunchInviteWorkflowComplete_m219122A59B46FAF8A235A23FE1EBE1B5776C0C2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.IsError)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// PlatformManager.TerminateWithError(msg);
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_2 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// m_roomID = msg.Data.ID;
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_3 = ___msg0;
		NullCheck(L_3);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_4;
		L_4 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_3, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_4);
		uint64_t L_5 = L_4->get_ID_3();
		__this->set_m_roomID_0(L_5);
		// m_remoteUser = null;
		__this->set_m_remoteUser_1((User_tA163463AE919860D9B337F6104B028990A44B69D *)NULL);
		// PlatformManager.TransitionToState(PlatformManager.State.WAITING_FOR_ANSWER);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3(2, /*hidden argument*/NULL);
		// Rooms.LaunchInvitableUserFlow(m_roomID).OnComplete(OnLaunchInviteWorkflowComplete);
		uint64_t L_6 = __this->get_m_roomID_0();
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_7;
		L_7 = Rooms_LaunchInvitableUserFlow_m50AB2192FC8579B73C1971964D4C5216E66B5EAB(L_6, /*hidden argument*/NULL);
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_8 = (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 *)il2cpp_codegen_object_new(Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8_il2cpp_TypeInfo_var);
		Callback__ctor_mAC564D6964EDAEDEB158A4FEB741444645CEFAEB(L_8, __this, (intptr_t)((intptr_t)RoomManager_OnLaunchInviteWorkflowComplete_m219122A59B46FAF8A235A23FE1EBE1B5776C0C2E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_9;
		L_9 = Request_OnComplete_mDD83CB14C5B7BC1C0B9CE8DE61D77F43F918588B(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::OnLaunchInviteWorkflowComplete(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_OnLaunchInviteWorkflowComplete_m219122A59B46FAF8A235A23FE1EBE1B5776C0C2E (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (msg.IsError)
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// PlatformManager.TerminateWithError(msg);
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_2 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Platform.Samples.VrVoiceChat.RoomManager::get_ShouldPollInviteList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomManager_get_ShouldPollInviteList_m9C243407BDB7FE03FBEE82371450A76BA15B011B (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	{
		// return m_pendingRoomRequests == null && Time.time >= m_nextPollTime;
		HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * L_0 = __this->get_m_pendingRoomRequests_4();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_m_nextPollTime_3();
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)L_2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::UpdateActiveInvitesList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_UpdateActiveInvitesList_mE211A4512E8133F2C33014458AF0D80869828D15 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_m937B3A7D659D1FBF2BB1F4BA72ED6F5FE940EAA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_mA484A985B43347007CA93891098ED696039AE892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_GetRoomInviteNotificationsCallback_m602914AEB61F8B54D9F068D5B8B9C410DC29806D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_nextPollTime = Time.time + INVITE_POLL_FREQ_SECONDS;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_il2cpp_TypeInfo_var);
		float L_1 = ((RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_StaticFields*)il2cpp_codegen_static_fields_for(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_il2cpp_TypeInfo_var))->get_INVITE_POLL_FREQ_SECONDS_2();
		__this->set_m_nextPollTime_3(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// m_pendingRoomRequests = new HashSet<ulong>();
		HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * L_2 = (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *)il2cpp_codegen_object_new(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60(L_2, /*hidden argument*/HashSet_1__ctor_mA566CA6FC8650DE0CC5F0F26E59313BF8C1FBE60_RuntimeMethod_var);
		__this->set_m_pendingRoomRequests_4(L_2);
		// m_invites = new List<Invite>();
		List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * L_3 = (List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 *)il2cpp_codegen_object_new(List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973_il2cpp_TypeInfo_var);
		List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB(L_3, /*hidden argument*/List_1__ctor_m3473E61BA57CC6D3859DB0120A9BF1BC1A0363AB_RuntimeMethod_var);
		__this->set_m_invites_5(L_3);
		// Notifications.GetRoomInviteNotifications().OnComplete(GetRoomInviteNotificationsCallback);
		Request_1_t905B55299B98360BD28441866328CC345E8F3910 * L_4;
		L_4 = Notifications_GetRoomInviteNotifications_mC14B97D1CC1B3E69B21023DBCD24E97FFF649245(/*hidden argument*/NULL);
		Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 * L_5 = (Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3 *)il2cpp_codegen_object_new(Callback_t8827F24AF6667F8B0B55EA579CA3904ED8C2F7B3_il2cpp_TypeInfo_var);
		Callback__ctor_m937B3A7D659D1FBF2BB1F4BA72ED6F5FE940EAA6(L_5, __this, (intptr_t)((intptr_t)RoomManager_GetRoomInviteNotificationsCallback_m602914AEB61F8B54D9F068D5B8B9C410DC29806D_RuntimeMethod_var), /*hidden argument*/Callback__ctor_m937B3A7D659D1FBF2BB1F4BA72ED6F5FE940EAA6_RuntimeMethod_var);
		NullCheck(L_4);
		Request_1_t905B55299B98360BD28441866328CC345E8F3910 * L_6;
		L_6 = Request_1_OnComplete_mA484A985B43347007CA93891098ED696039AE892(L_4, L_5, /*hidden argument*/Request_1_OnComplete_mA484A985B43347007CA93891098ED696039AE892_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::GetRoomInviteNotificationsCallback(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_GetRoomInviteNotificationsCallback_m602914AEB61F8B54D9F068D5B8B9C410DC29806D (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg_untyped0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m8BE0D7817F81271AE59AE0762206FA976C6FB640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m85E29052BCD6634DC8E35A05612502DA7C5C6C05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t7A703BFFC757C788E97490E3BD1D32155B78CA0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_GetRoomInfoCallback_m457E3E5C50D10D5E9FCE5A5965A0E5C85C92519A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Message<RoomInviteNotificationList> msg = (Message<RoomInviteNotificationList>)msg_untyped;
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_0 = ___msg_untyped0;
		V_0 = ((Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 *)CastclassClass((RuntimeObject*)L_0, Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38_il2cpp_TypeInfo_var));
		// if (msg.IsError)
		Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 * L_1 = V_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// PlatformManager.TerminateWithError(msg);
		Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1(L_3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0016:
	{
		// foreach (RoomInviteNotification invite in msg.Data)
		Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 * L_4 = V_0;
		NullCheck(L_4);
		RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * L_5;
		L_5 = Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_inline(L_4, /*hidden argument*/Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_RuntimeMethod_var);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DeserializableList_1_GetEnumerator_m8BE0D7817F81271AE59AE0762206FA976C6FB640(L_5, /*hidden argument*/DeserializableList_1_GetEnumerator_m8BE0D7817F81271AE59AE0762206FA976C6FB640_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0022:
	try
	{// begin try (depth: 1)
		{
			goto IL_005a;
		}

IL_0024:
		{
			// foreach (RoomInviteNotification invite in msg.Data)
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8 * L_8;
			L_8 = InterfaceFuncInvoker0< RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.RoomInviteNotification>::get_Current() */, IEnumerator_1_t7A703BFFC757C788E97490E3BD1D32155B78CA0A_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			// m_pendingRoomRequests.Add(invite.RoomID);
			HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * L_9 = __this->get_m_pendingRoomRequests_4();
			RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8 * L_10 = V_2;
			NullCheck(L_10);
			uint64_t L_11 = L_10->get_RoomID_1();
			NullCheck(L_9);
			bool L_12;
			L_12 = HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629(L_9, L_11, /*hidden argument*/HashSet_1_Add_mD4A449DE2A4346A69356194C640839BD720CA629_RuntimeMethod_var);
			// Rooms.Get(invite.RoomID).OnComplete(GetRoomInfoCallback);
			RoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8 * L_13 = V_2;
			NullCheck(L_13);
			uint64_t L_14 = L_13->get_RoomID_1();
			Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_15;
			L_15 = Rooms_Get_mF4FEB110B8F1CCDF54CB120C52703B3FCBD5A6D1(L_14, /*hidden argument*/NULL);
			Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * L_16 = (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *)il2cpp_codegen_object_new(Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
			Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943(L_16, __this, (intptr_t)((intptr_t)RoomManager_GetRoomInfoCallback_m457E3E5C50D10D5E9FCE5A5965A0E5C85C92519A_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
			NullCheck(L_15);
			Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_17;
			L_17 = Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC(L_15, L_16, /*hidden argument*/Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var);
		}

IL_005a:
		{
			// foreach (RoomInviteNotification invite in msg.Data)
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0024;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0064);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_1;
			if (!L_20)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject* L_21 = V_1;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_21);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(100)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// if (msg.Data.Count == 0)
		Message_1_t6FAD0C45EEAA5E78E46AA2D55785BD71F5E60E38 * L_22 = V_0;
		NullCheck(L_22);
		RoomInviteNotificationList_t368AAAB683E7F76B2FEE55EB2EFCE3A1FD65197E * L_23;
		L_23 = Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_inline(L_22, /*hidden argument*/Message_1_get_Data_m32FB37F0E4948D4DE995729E0FB9C5520D9DC32C_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = DeserializableList_1_get_Count_m85E29052BCD6634DC8E35A05612502DA7C5C6C05(L_23, /*hidden argument*/DeserializableList_1_get_Count_m85E29052BCD6634DC8E35A05612502DA7C5C6C05_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_008d;
		}
	}
	{
		// m_pendingRoomRequests = null;
		__this->set_m_pendingRoomRequests_4((HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *)NULL);
		// PlatformManager.SetActiveInvites(m_invites);
		List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * L_25 = __this->get_m_invites_5();
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_SetActiveInvites_m023FB452F84294110EA0535DF15B71E432A6FB89(L_25, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::GetRoomInfoCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_GetRoomInfoCallback_m457E3E5C50D10D5E9FCE5A5965A0E5C85C92519A (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (msg.IsError)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// PlatformManager.TerminateWithError(msg);
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_2 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (msg.Data.OwnerOptional != null)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_3 = ___msg0;
		NullCheck(L_3);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_4;
		L_4 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_3, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_4);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_5 = L_4->get_OwnerOptional_13();
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		// Invite invite = new Invite(msg.Data.ID, msg.Data.OwnerOptional.OculusID);
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_6 = ___msg0;
		NullCheck(L_6);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_7;
		L_7 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_6, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_7);
		uint64_t L_8 = L_7->get_ID_3();
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_9 = ___msg0;
		NullCheck(L_9);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_10;
		L_10 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_9, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_10);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_11 = L_10->get_OwnerOptional_13();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_OculusID_4();
		Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356((Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 *)(&V_0), L_8, L_12, /*hidden argument*/NULL);
		// m_pendingRoomRequests.Remove(invite.RoomID);
		HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * L_13 = __this->get_m_pendingRoomRequests_4();
		Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  L_14 = V_0;
		uint64_t L_15 = L_14.get_RoomID_0();
		NullCheck(L_13);
		bool L_16;
		L_16 = HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987(L_13, L_15, /*hidden argument*/HashSet_1_Remove_mE87547013F88C169F1ACF10EF0F58D749A3E6987_RuntimeMethod_var);
		// if (msg.Data.UsersOptional != null && msg.Data.UsersOptional.Count == 1)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_17 = ___msg0;
		NullCheck(L_17);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_18;
		L_18 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_17, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_18);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_19 = L_18->get_UsersOptional_18();
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_20 = ___msg0;
		NullCheck(L_20);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_21;
		L_21 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_20, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_21);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_22 = L_21->get_UsersOptional_18();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423(L_22, /*hidden argument*/DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		// m_invites.Add(invite);
		List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * L_24 = __this->get_m_invites_5();
		Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43  L_25 = V_0;
		NullCheck(L_24);
		List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6(L_24, L_25, /*hidden argument*/List_1_Add_mF26D1FA01BEAAB4E0E14829F5D4847CAF20A6BF6_RuntimeMethod_var);
	}

IL_007c:
	{
		// if (m_pendingRoomRequests.Count == 0)
		HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * L_26 = __this->get_m_pendingRoomRequests_4();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_inline(L_26, /*hidden argument*/HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		// m_pendingRoomRequests = null;
		__this->set_m_pendingRoomRequests_4((HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E *)NULL);
		// PlatformManager.SetActiveInvites(m_invites);
		List_1_t7D6B8AE99B19C85C284E7F9A799E3083E6D3B973 * L_28 = __this->get_m_invites_5();
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_SetActiveInvites_m023FB452F84294110EA0535DF15B71E432A6FB89(L_28, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::JoinExistingRoom(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_JoinExistingRoom_m099A5CE233AAF84EB476D065DF8903B24054C37F (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, uint64_t ___roomID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_JoinRoomCallback_m9A0A4EDD55C3F0F1E40FD00396D9A5319B92AC3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rooms.Join(roomID, true).OnComplete(JoinRoomCallback);
		uint64_t L_0 = ___roomID0;
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_1;
		L_1 = Rooms_Join_m075E44920853F17B385A06FF71F5254102D42B4A(L_0, (bool)1, /*hidden argument*/NULL);
		Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * L_2 = (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 *)il2cpp_codegen_object_new(Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87_il2cpp_TypeInfo_var);
		Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943(L_2, __this, (intptr_t)((intptr_t)RoomManager_JoinRoomCallback_m9A0A4EDD55C3F0F1E40FD00396D9A5319B92AC3F_RuntimeMethod_var), /*hidden argument*/Callback__ctor_mD9125BCBBD04C1CD12622CDD101B12DBEEC93943_RuntimeMethod_var);
		NullCheck(L_1);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_3;
		L_3 = Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC(L_1, L_2, /*hidden argument*/Request_1_OnComplete_m9AE408B489451DA7D37125610367D4B5D4827CFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::JoinRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_JoinRoomCallback_m9A0A4EDD55C3F0F1E40FD00396D9A5319B92AC3F (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB4A1526F6D8A4A6BF9EF50D4C9DDA2ADDDF23D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97B64A71DBF7187F344B8D2B68F3496E979DDF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	User_tA163463AE919860D9B337F6104B028990A44B69D * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B5_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		// if (msg.IsError)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// string oculusOwnerID = msg.Data.OwnerOptional != null ? msg.Data.OwnerOptional.OculusID : "";
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_2 = ___msg0;
		NullCheck(L_2);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_3;
		L_3 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_2, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_3);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_4 = L_3->get_OwnerOptional_13();
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_002d;
	}

IL_001d:
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_5 = ___msg0;
		NullCheck(L_5);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_6;
		L_6 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_5, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_6);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_7 = L_6->get_OwnerOptional_13();
		NullCheck(L_7);
		String_t* L_8 = L_7->get_OculusID_4();
		G_B5_0 = L_8;
	}

IL_002d:
	{
		V_0 = G_B5_0;
		// int numUsers = msg.Data.UsersOptional != null ? msg.Data.UsersOptional.Count : 0;
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_9 = ___msg0;
		NullCheck(L_9);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_10;
		L_10 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_9, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_10);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_11 = L_10->get_UsersOptional_18();
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_004e;
	}

IL_003e:
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_12 = ___msg0;
		NullCheck(L_12);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_13;
		L_13 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_12, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_13);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_14 = L_13->get_UsersOptional_18();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423(L_14, /*hidden argument*/DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		G_B8_0 = L_15;
	}

IL_004e:
	{
		V_1 = G_B8_0;
		// Debug.LogFormat("Joined room: {0} owner: {1} count: ",
		//     msg.Data.ID, oculusOwnerID, numUsers);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_16;
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_18 = ___msg0;
		NullCheck(L_18);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_19;
		L_19 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_18, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_19);
		uint64_t L_20 = L_19->get_ID_3();
		uint64_t L_21 = L_20;
		RuntimeObject * L_22 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_22);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_17;
		String_t* L_24 = V_0;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_23;
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_28);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteralD97B64A71DBF7187F344B8D2B68F3496E979DDF0, L_25, /*hidden argument*/NULL);
		// m_roomID = msg.Data.ID;
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_29 = ___msg0;
		NullCheck(L_29);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_30;
		L_30 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_29, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_30);
		uint64_t L_31 = L_30->get_ID_3();
		__this->set_m_roomID_0(L_31);
		// if (msg.Data.UsersOptional == null || msg.Data.UsersOptional.Count != 2)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_32 = ___msg0;
		NullCheck(L_32);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_33;
		L_33 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_32, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_33);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_34 = L_33->get_UsersOptional_18();
		if (!L_34)
		{
			goto IL_00b0;
		}
	}
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_35 = ___msg0;
		NullCheck(L_35);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_36;
		L_36 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_35, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_36);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_37 = L_36->get_UsersOptional_18();
		NullCheck(L_37);
		int32_t L_38;
		L_38 = DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423(L_37, /*hidden argument*/DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		if ((((int32_t)L_38) == ((int32_t)2)))
		{
			goto IL_00b8;
		}
	}

IL_00b0:
	{
		// PlatformManager.TransitionToState(PlatformManager.State.HANGUP);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3(4, /*hidden argument*/NULL);
		// }
		goto IL_0100;
	}

IL_00b8:
	{
		// foreach (User user in msg.Data.UsersOptional)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_39 = ___msg0;
		NullCheck(L_39);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_40;
		L_40 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_39, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_40);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_41 = L_40->get_UsersOptional_18();
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7(L_41, /*hidden argument*/DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7_RuntimeMethod_var);
		V_2 = L_42;
	}

IL_00c9:
	try
	{// begin try (depth: 1)
		{
			goto IL_00e6;
		}

IL_00cb:
		{
			// foreach (User user in msg.Data.UsersOptional)
			RuntimeObject* L_43 = V_2;
			NullCheck(L_43);
			User_tA163463AE919860D9B337F6104B028990A44B69D * L_44;
			L_44 = InterfaceFuncInvoker0< User_tA163463AE919860D9B337F6104B028990A44B69D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tB4A1526F6D8A4A6BF9EF50D4C9DDA2ADDDF23D5F_il2cpp_TypeInfo_var, L_43);
			V_3 = L_44;
			// if (user.ID != PlatformManager.MyID)
			User_tA163463AE919860D9B337F6104B028990A44B69D * L_45 = V_3;
			NullCheck(L_45);
			uint64_t L_46 = L_45->get_ID_1();
			IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
			uint64_t L_47;
			L_47 = PlatformManager_get_MyID_m14A66163DDB88E02919BDFE3B157A53164DF7604(/*hidden argument*/NULL);
			if ((((int64_t)L_46) == ((int64_t)L_47)))
			{
				goto IL_00e6;
			}
		}

IL_00df:
		{
			// m_remoteUser = user;
			User_tA163463AE919860D9B337F6104B028990A44B69D * L_48 = V_3;
			__this->set_m_remoteUser_1(L_48);
		}

IL_00e6:
		{
			// foreach (User user in msg.Data.UsersOptional)
			RuntimeObject* L_49 = V_2;
			NullCheck(L_49);
			bool L_50;
			L_50 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_49);
			if (L_50)
			{
				goto IL_00cb;
			}
		}

IL_00ee:
		{
			IL2CPP_LEAVE(0xFA, FINALLY_00f0);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f0;
	}

FINALLY_00f0:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_51 = V_2;
			if (!L_51)
			{
				goto IL_00f9;
			}
		}

IL_00f3:
		{
			RuntimeObject* L_52 = V_2;
			NullCheck(L_52);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_52);
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(240)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(240)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFA, IL_00fa)
	}

IL_00fa:
	{
		// PlatformManager.TransitionToState(PlatformManager.State.CONNECTED_IN_A_ROOM);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3(3, /*hidden argument*/NULL);
	}

IL_0100:
	{
		// m_nextPollTime = Time.time;
		float L_53;
		L_53 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_m_nextPollTime_3(L_53);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::RoomUpdateCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_RoomUpdateCallback_mEDF5E95BC5B83274AA3536CC4269801C086F1744 (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tB4A1526F6D8A4A6BF9EF50D4C9DDA2ADDDF23D5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral194C68A6F90159A4805C87DDCCF20C0EE7F77F45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	User_tA163463AE919860D9B337F6104B028990A44B69D * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B5_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		// if (msg.IsError)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_0 = ___msg0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Message_get_IsError_mC9B6767516F7A6EE5AD1390EB3304E09558677ED(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// PlatformManager.TerminateWithError(msg);
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_2 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TerminateWithError_m9CD036DA0130B4D3690BEFD4EF252E06C1F1E9A1(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// string oculusOwnerID = msg.Data.OwnerOptional != null ? msg.Data.OwnerOptional.OculusID : "";
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_3 = ___msg0;
		NullCheck(L_3);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_4;
		L_4 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_3, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_4);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_5 = L_4->get_OwnerOptional_13();
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0033;
	}

IL_0023:
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_6 = ___msg0;
		NullCheck(L_6);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_7;
		L_7 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_6, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_7);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_8 = L_7->get_OwnerOptional_13();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_OculusID_4();
		G_B5_0 = L_9;
	}

IL_0033:
	{
		V_0 = G_B5_0;
		// int numUsers = msg.Data.UsersOptional != null ? msg.Data.UsersOptional.Count : 0;
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_10 = ___msg0;
		NullCheck(L_10);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_11;
		L_11 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_10, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_11);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_12 = L_11->get_UsersOptional_18();
		if (L_12)
		{
			goto IL_0044;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0054;
	}

IL_0044:
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_13 = ___msg0;
		NullCheck(L_13);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_14;
		L_14 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_13, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_14);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_15 = L_14->get_UsersOptional_18();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423(L_15, /*hidden argument*/DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		G_B8_0 = L_16;
	}

IL_0054:
	{
		V_1 = G_B8_0;
		// Debug.LogFormat("Room {0} Update: {1} owner: {2} count: ",
		//     msg.Data.ID, oculusOwnerID, numUsers);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_17;
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_19 = ___msg0;
		NullCheck(L_19);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_20;
		L_20 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_19, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_20);
		uint64_t L_21 = L_20->get_ID_3();
		uint64_t L_22 = L_21;
		RuntimeObject * L_23 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_23);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_18;
		String_t* L_25 = V_0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_24;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral194C68A6F90159A4805C87DDCCF20C0EE7F77F45, L_26, /*hidden argument*/NULL);
		// if (msg.Data.UsersOptional == null || msg.Data.UsersOptional.Count != 2)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_30 = ___msg0;
		NullCheck(L_30);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_31;
		L_31 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_30, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_31);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_32 = L_31->get_UsersOptional_18();
		if (!L_32)
		{
			goto IL_00a5;
		}
	}
	{
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_33 = ___msg0;
		NullCheck(L_33);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_34;
		L_34 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_33, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_34);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_35 = L_34->get_UsersOptional_18();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423(L_35, /*hidden argument*/DeserializableList_1_get_Count_m4DA3E47E2CF9EA7CFD60B40C11D762F27D748423_RuntimeMethod_var);
		if ((((int32_t)L_36) == ((int32_t)2)))
		{
			goto IL_00ac;
		}
	}

IL_00a5:
	{
		// PlatformManager.TransitionToState(PlatformManager.State.HANGUP);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3(4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ac:
	{
		// foreach (User user in msg.Data.UsersOptional)
		Message_1_t36B35E0D4A300618B052881622B2982CFB974FD5 * L_37 = ___msg0;
		NullCheck(L_37);
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_38;
		L_38 = Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_inline(L_37, /*hidden argument*/Message_1_get_Data_mF24DA36233C280495186E93EF0207F8B3DC88EE4_RuntimeMethod_var);
		NullCheck(L_38);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_39 = L_38->get_UsersOptional_18();
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7(L_39, /*hidden argument*/DeserializableList_1_GetEnumerator_m4BE59BDB2E77E3218EC50D96B1FB4D2D177F0DA7_RuntimeMethod_var);
		V_2 = L_40;
	}

IL_00bd:
	try
	{// begin try (depth: 1)
		{
			goto IL_00da;
		}

IL_00bf:
		{
			// foreach (User user in msg.Data.UsersOptional)
			RuntimeObject* L_41 = V_2;
			NullCheck(L_41);
			User_tA163463AE919860D9B337F6104B028990A44B69D * L_42;
			L_42 = InterfaceFuncInvoker0< User_tA163463AE919860D9B337F6104B028990A44B69D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Oculus.Platform.Models.User>::get_Current() */, IEnumerator_1_tB4A1526F6D8A4A6BF9EF50D4C9DDA2ADDDF23D5F_il2cpp_TypeInfo_var, L_41);
			V_3 = L_42;
			// if (user.ID != PlatformManager.MyID)
			User_tA163463AE919860D9B337F6104B028990A44B69D * L_43 = V_3;
			NullCheck(L_43);
			uint64_t L_44 = L_43->get_ID_1();
			IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
			uint64_t L_45;
			L_45 = PlatformManager_get_MyID_m14A66163DDB88E02919BDFE3B157A53164DF7604(/*hidden argument*/NULL);
			if ((((int64_t)L_44) == ((int64_t)L_45)))
			{
				goto IL_00da;
			}
		}

IL_00d3:
		{
			// m_remoteUser = user;
			User_tA163463AE919860D9B337F6104B028990A44B69D * L_46 = V_3;
			__this->set_m_remoteUser_1(L_46);
		}

IL_00da:
		{
			// foreach (User user in msg.Data.UsersOptional)
			RuntimeObject* L_47 = V_2;
			NullCheck(L_47);
			bool L_48;
			L_48 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_00bf;
			}
		}

IL_00e2:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e4);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e4;
	}

FINALLY_00e4:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_49 = V_2;
			if (!L_49)
			{
				goto IL_00ed;
			}
		}

IL_00e7:
		{
			RuntimeObject* L_50 = V_2;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_50);
		}

IL_00ed:
		{
			IL2CPP_END_FINALLY(228)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(228)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
	}

IL_00ee:
	{
		// PlatformManager.TransitionToState(PlatformManager.State.CONNECTED_IN_A_ROOM);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3(3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::LeaveCurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_LeaveCurrentRoom_m0F04E9DD8EFEB390013DF8D40ECD498519C492FD (RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_roomID != 0)
		uint64_t L_0 = __this->get_m_roomID_0();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// Rooms.Leave(m_roomID);
		uint64_t L_1 = __this->get_m_roomID_0();
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_2;
		L_2 = Rooms_Leave_mA581F15F66ABBC2395E1A340E4E6962B9857674D(L_1, /*hidden argument*/NULL);
		// m_roomID = 0;
		__this->set_m_roomID_0(((int64_t)((int64_t)0)));
		// m_remoteUser = null;
		__this->set_m_remoteUser_1((User_tA163463AE919860D9B337F6104B028990A44B69D *)NULL);
	}

IL_0023:
	{
		// PlatformManager.TransitionToState(PlatformManager.State.WAITING_TO_CALL_OR_ANSWER);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_TransitionToState_mF3DAC37D679FD833F2F8A09D2E593A4389136CD3(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager__cctor_m53ACB0B5B2803022469189BDDD89D851A42FD725 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly float INVITE_POLL_FREQ_SECONDS = 5.0f;
		((RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_StaticFields*)il2cpp_codegen_static_fields_for(RoomManager_t757A1C6A06DA5C61CF1E6E5DFAF5BA03004A89A8_il2cpp_TypeInfo_var))->set_INVITE_POLL_FREQ_SECONDS_2((5.0f));
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
// System.Void Oculus.Platform.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m0033EC756843AF0ABDBF14B53B58ECC118C41E5E (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RoomOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_RoomOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_RoomOptions_Create_mCCFD4FF41E87AC0DBDB2A8231EEABF0F1E469FCA(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetDataStore(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetDataStore_m680F4F5649EBC6F4C37A4543AB7D1A871E622A1C (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetDataStoreString(Handle, key, value);
		intptr_t L_0 = __this->get_Handle_0();
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetDataStoreString_m87C3D85E86179CE4FD57C6E2E7B17106499F21BF((intptr_t)L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::ClearDataStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_ClearDataStore_m8FF573B3D24C27CD9BC513B965E406AC9D9C5215 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_ClearDataStore(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_ClearDataStore_m9F97344746ADED54B38B33CCEC8FAAB5CDD4F72A((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetExcludeRecentlyMet(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetExcludeRecentlyMet_mAB0BFA645C44856C5892B9E8EEC6EDA831F99087 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetExcludeRecentlyMet(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		bool L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetExcludeRecentlyMet_m66E251C2EB90AB756808D25431103A08D3F24B6A((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetMaxUserResults(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetMaxUserResults_m4B7667F006EE4F2A7E1131167C439F32E63DCE3E (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetMaxUserResults(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		uint32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetMaxUserResults_m51CAF6DB2ECFBBE16D80C6C65B7C10ABA27BC82A((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetOrdering(Oculus.Platform.UserOrdering)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetOrdering_mBD9F4A4F6B75426033C18602A0E01421C83380F6 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetOrdering(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetOrdering_m9FCF57CC11EB9BB044862495090AFE7095391427((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetRecentlyMetTimeWindow(Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetRecentlyMetTimeWindow_m970B5F567C117D407FF70DAFB61B4718CC3B2665 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetRecentlyMetTimeWindow(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetRecentlyMetTimeWindow_m04D122CADB791762EE7C1676B8462A023B47A777((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetRoomId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetRoomId_m09BF064745C04EBB101AB6DC5C70CFC43A172134 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetRoomId(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		uint64_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetRoomId_m3DDF90338034809F927B09568A71034502A78C64((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.RoomOptions::SetTurnOffUpdates(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_SetTurnOffUpdates_mA8C988BB66669EE8C5C1D41D2F3BF12DB4093A14 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_RoomOptions_SetTurnOffUpdates(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		bool L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_SetTurnOffUpdates_m9CB78CD92C6BEE1550E62E4E2C2C18CBD4A771B9((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.RoomOptions::op_Explicit(Oculus.Platform.RoomOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RoomOptions_op_Explicit_mEDBE716B4F56A60290EFA5A598CA9332743023B9 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.RoomOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_Finalize_mAAF36B637C7853ED02340A99CD494197C3CBB3AB (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		// CAPI.ovr_RoomOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_RoomOptions_Destroy_m964143A50705623866FE06BC635B2F6330AE5D24((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{// begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::UpdateDataStore(System.UInt64,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_UpdateDataStore_m66C9C0F562C4366363B1831222EF8621CADC85C5 (uint64_t ___roomID0, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m99462FD95A811068FBA964A97213B4CA59FF8A31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E89F960CC17EAEBA38A57A632911BB4A6D9EAFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9B9D89C6D4523685BDBB873E3E76754E89171468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m73C2858A70CE1C9A1AEE4134B4E3B136CA4B719F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		// CAPI.ovrKeyValuePair[] kvps = new CAPI.ovrKeyValuePair[data.Count];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = ___data1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA(L_1, /*hidden argument*/Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var);
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_3 = (ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455*)(ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455*)SZArrayNew(ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		// int i=0;
		V_1 = 0;
		// foreach(var item in data)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = ___data1;
		NullCheck(L_4);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_5;
		L_5 = Dictionary_2_GetEnumerator_m99462FD95A811068FBA964A97213B4CA59FF8A31(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m99462FD95A811068FBA964A97213B4CA59FF8A31_RuntimeMethod_var);
		V_2 = L_5;
	}

IL_001c:
	try
	{// begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_001e:
		{
			// foreach(var item in data)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_6;
			L_6 = Enumerator_get_Current_m0E89F960CC17EAEBA38A57A632911BB4A6D9EAFF_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_get_Current_m0E89F960CC17EAEBA38A57A632911BB4A6D9EAFF_RuntimeMethod_var);
			V_3 = L_6;
			// kvps[i++] = new CAPI.ovrKeyValuePair(item.Key, item.Value);
			ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_7 = V_0;
			int32_t L_8 = V_1;
			int32_t L_9 = L_8;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
			String_t* L_10;
			L_10 = KeyValuePair_2_get_Key_m9B9D89C6D4523685BDBB873E3E76754E89171468_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m9B9D89C6D4523685BDBB873E3E76754E89171468_RuntimeMethod_var);
			String_t* L_11;
			L_11 = KeyValuePair_2_get_Value_m73C2858A70CE1C9A1AEE4134B4E3B136CA4B719F_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m73C2858A70CE1C9A1AEE4134B4E3B136CA4B719F_RuntimeMethod_var);
			ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32  L_12;
			memset((&L_12), 0, sizeof(L_12));
			ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44((&L_12), L_10, L_11, /*hidden argument*/NULL);
			NullCheck(L_7);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 )L_12);
		}

IL_0044:
		{
			// foreach(var item in data)
			bool L_13;
			L_13 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_001e;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_2), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_UpdateDataStore(roomID, kvps));
		uint64_t L_14 = ___roomID0;
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_16;
		L_16 = CAPI_ovr_Room_UpdateDataStore_mB1A7954EACA460FA419EA3DB633C107A1382DB4D(L_14, L_15, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_17 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_17, L_16, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_17;
	}

IL_006a:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// System.Void Oculus.Platform.Rooms::SetRoomInviteNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetRoomInviteNotificationCallback_m7E8804125565D1CEC412E4C80FE2E1133E94B06C (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	{
		// SetRoomInviteAcceptedNotificationCallback(callback);
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		Rooms_SetRoomInviteAcceptedNotificationCallback_m60B54B9FCAED23E93A1E74A84E8C3CE73A1DAAC2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::CreateAndJoinPrivate(Oculus.Platform.RoomJoinPolicy,System.UInt32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_CreateAndJoinPrivate_mBA06CEE94BE8585DE5BD5CA34558C67E6EB181B1 (int32_t ___joinPolicy0, uint32_t ___maxUsers1, bool ___subscribeToUpdates2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_CreateAndJoinPrivate(joinPolicy, maxUsers, subscribeToUpdates));
		int32_t L_1 = ___joinPolicy0;
		uint32_t L_2 = ___maxUsers1;
		bool L_3 = ___subscribeToUpdates2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_Room_CreateAndJoinPrivate_m88D2C39543D02AD988A65680F27C3ACEDAEC98A2(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_5 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_5, L_4, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::CreateAndJoinPrivate2(Oculus.Platform.RoomJoinPolicy,System.UInt32,Oculus.Platform.RoomOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_CreateAndJoinPrivate2_m3984310A4E046F891C625D25375B66AF344DE741 (int32_t ___joinPolicy0, uint32_t ___maxUsers1, RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * ___roomOptions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_CreateAndJoinPrivate2(joinPolicy, maxUsers, (IntPtr)roomOptions));
		int32_t L_1 = ___joinPolicy0;
		uint32_t L_2 = ___maxUsers1;
		RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * L_3 = ___roomOptions2;
		intptr_t L_4;
		L_4 = RoomOptions_op_Explicit_mEDBE716B4F56A60290EFA5A598CA9332743023B9(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_Room_CreateAndJoinPrivate2_m32030813BEB7B23CF9B21FD947E012DCF5D6CEFF(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_6 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_6, L_5, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_6;
	}

IL_001a:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Get_mF4FEB110B8F1CCDF54CB120C52703B3FCBD5A6D1 (uint64_t ___roomID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_Get(roomID));
		uint64_t L_1 = ___roomID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Room_Get_m04DE82D6BFB4F4F869031C85A7E28A21FB9A7E8A(L_1, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_3 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_3, L_2, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::GetCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_GetCurrent_mC8D05899E0078F64F2A3AA03C79C546C24C8D7C4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_GetCurrent());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Room_GetCurrent_m3C024AD9F461ED5BC49D34FEA161C2A0403AE37A(/*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_2 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_2, L_1, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::GetCurrentForUser(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_GetCurrentForUser_m9E9E09F922B6A72D95EFF3A86920A1DFE42A7021 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_GetCurrentForUser(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Room_GetCurrentForUser_mD73E9294B591B39C6CBCC5D866CCA266A4684731(L_1, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_3 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_3, L_2, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Rooms::GetInvitableUsers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Rooms_GetInvitableUsers_mD216B70BC43D988A761D76873BA3EBA12B4DD999 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserList>(CAPI.ovr_Room_GetInvitableUsers());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Room_GetInvitableUsers_m00DB46DD453BCBF040B6B07FB256C386AF72B6DE(/*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_2 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_2, L_1, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Rooms::GetInvitableUsers2(Oculus.Platform.RoomOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Rooms_GetInvitableUsers2_mAEC9347DF81AF9DF992D3D14FEEAF6BDA7222D95 (RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * ___roomOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// return new Request<Models.UserList>(CAPI.ovr_Room_GetInvitableUsers2((IntPtr)roomOptions));
		RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * L_1 = ___roomOptions0;
		intptr_t L_2;
		L_2 = RoomOptions_op_Explicit_mEDBE716B4F56A60290EFA5A598CA9332743023B9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_GetInvitableUsers2_m90D1EFFF779F239A8EDA909A4182DDB60B42D647((intptr_t)L_2, /*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_4 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_4, L_3, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_4;
	}

IL_0018:
	{
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList> Oculus.Platform.Rooms::GetModeratedRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 * Rooms_GetModeratedRooms_m8E8A66FE28158916AB2F296C15CE84456AAAAFF3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.RoomList>(CAPI.ovr_Room_GetModeratedRooms());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_Room_GetModeratedRooms_mF486DA95CC4CA98A170D704A71138B2952F599E8(/*hidden argument*/NULL);
		Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 * L_2 = (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 *)il2cpp_codegen_object_new(Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5_il2cpp_TypeInfo_var);
		Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469(L_2, L_1, /*hidden argument*/Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::InviteUser(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_InviteUser_m16D1EC0005063A233E8F539D3F06B60FE6269BE9 (uint64_t ___roomID0, String_t* ___inviteToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_InviteUser(roomID, inviteToken));
		uint64_t L_1 = ___roomID0;
		String_t* L_2 = ___inviteToken1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_InviteUser_m7879954D088688B8BF5E91FCDB2479E616DC02D7(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_4 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_4, L_3, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Join(System.UInt64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Join_m075E44920853F17B385A06FF71F5254102D42B4A (uint64_t ___roomID0, bool ___subscribeToUpdates1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_Join(roomID, subscribeToUpdates));
		uint64_t L_1 = ___roomID0;
		bool L_2 = ___subscribeToUpdates1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_Join_m0E21390CA919E8BBB6A20E61B4FCFF34333A9DE0(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_4 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_4, L_3, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Join2(System.UInt64,Oculus.Platform.RoomOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Join2_m4CF4FBAF54D52C274E574B33F63A20AE50BDEF80 (uint64_t ___roomID0, RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * ___roomOptions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_Join2(roomID, (IntPtr)roomOptions));
		uint64_t L_1 = ___roomID0;
		RoomOptions_tCE1FBE438C5C1560E503042DAA53EA36059E7B7E * L_2 = ___roomOptions1;
		intptr_t L_3;
		L_3 = RoomOptions_op_Explicit_mEDBE716B4F56A60290EFA5A598CA9332743023B9(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_Room_Join2_m5B9DD78720318F4D4F4B7C30CB37D0B320F31C63(L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_5 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_5, L_4, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::KickUser(System.UInt64,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_KickUser_mAD026AF94BE157AC8C981A239273B867CB0C3913 (uint64_t ___roomID0, uint64_t ___userID1, int32_t ___kickDurationSeconds2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_KickUser(roomID, userID, kickDurationSeconds));
		uint64_t L_1 = ___roomID0;
		uint64_t L_2 = ___userID1;
		int32_t L_3 = ___kickDurationSeconds2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_Room_KickUser_m7641FD9B12C78BA96D508786703167388AE096DA(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_5 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_5, L_4, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request Oculus.Platform.Rooms::LaunchInvitableUserFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Rooms_LaunchInvitableUserFlow_m50AB2192FC8579B73C1971964D4C5216E66B5EAB (uint64_t ___roomID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request(CAPI.ovr_Room_LaunchInvitableUserFlow(roomID));
		uint64_t L_1 = ___roomID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Room_LaunchInvitableUserFlow_mE79E115BCD4942606F56D8C9021766B6C90BC3EE(L_1, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_3 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::Leave(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_Leave_mA581F15F66ABBC2395E1A340E4E6962B9857674D (uint64_t ___roomID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_Leave(roomID));
		uint64_t L_1 = ___roomID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Room_Leave_mB499F84B5585BA4FE828665A3D3BD5A9DFA4EC53(L_1, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_3 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_3, L_2, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::SetDescription(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_SetDescription_m8D0C0D056918C643B7694B103756450AAD4FB617 (uint64_t ___roomID0, String_t* ___description1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_SetDescription(roomID, description));
		uint64_t L_1 = ___roomID0;
		String_t* L_2 = ___description1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_SetDescription_m2E9E172E899695B95F50B4A2AD04007C8C6EEABA(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_4 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_4, L_3, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::UpdateMembershipLockStatus(System.UInt64,Oculus.Platform.RoomMembershipLockStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_UpdateMembershipLockStatus_m178DC43D815361A14CB89E956B256F76BC33F44D (uint64_t ___roomID0, int32_t ___membershipLockStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_UpdateMembershipLockStatus(roomID, membershipLockStatus));
		uint64_t L_1 = ___roomID0;
		int32_t L_2 = ___membershipLockStatus1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_UpdateMembershipLockStatus_mAA385B237339BC8B36C3FB346776E4FAB9227EC7(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_4 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_4, L_3, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// Oculus.Platform.Request Oculus.Platform.Rooms::UpdateOwner(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Rooms_UpdateOwner_m66F01C679463DCAD0DEA6DE98F4159C426AEDF24 (uint64_t ___roomID0, uint64_t ___userID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request(CAPI.ovr_Room_UpdateOwner(roomID, userID));
		uint64_t L_1 = ___roomID0;
		uint64_t L_2 = ___userID1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_UpdateOwner_m500465E8364E4409AF3B359ADA7E95C58B87F030(L_1, L_2, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_4 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.Room> Oculus.Platform.Rooms::UpdatePrivateRoomJoinPolicy(System.UInt64,Oculus.Platform.RoomJoinPolicy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * Rooms_UpdatePrivateRoomJoinPolicy_m231C61349822172DBF7D7F6AB0E16E82DA91D100 (uint64_t ___roomID0, int32_t ___newJoinPolicy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.Room>(CAPI.ovr_Room_UpdatePrivateRoomJoinPolicy(roomID, newJoinPolicy));
		uint64_t L_1 = ___roomID0;
		int32_t L_2 = ___newJoinPolicy1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_Room_UpdatePrivateRoomJoinPolicy_mD59881DF3EE3F75B3980E36499AB821F5115BB1A(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 * L_4 = (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)il2cpp_codegen_object_new(Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9_il2cpp_TypeInfo_var);
		Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8(L_4, L_3, /*hidden argument*/Request_1__ctor_mED3CF256FFE4F7181710E23235A2DB58FD9BE2F8_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t7ECEAA33EF506480AEBACE1161892777F8C68EA9 *)NULL;
	}
}
// System.Void Oculus.Platform.Rooms::SetRoomInviteAcceptedNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetRoomInviteAcceptedNotificationCallback_m60B54B9FCAED23E93A1E74A84E8C3CE73A1DAAC2 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Room_InviteAccepted,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463(((int32_t)1829794225), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Rooms::SetRoomInviteReceivedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.RoomInviteNotification>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetRoomInviteReceivedNotificationCallback_m05482BEC04C268D0EE1F23D6FBBB631D6A5C4570 (Callback_t2738E26970FDD9D111F9D6CCBBB107852DE3F9FC * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisRoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8_m5B108FA9AC43EEFAC1DD557E75C46311C1E8C040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Room_InviteReceived,
		//   callback
		// );
		Callback_t2738E26970FDD9D111F9D6CCBBB107852DE3F9FC * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisRoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8_m5B108FA9AC43EEFAC1DD557E75C46311C1E8C040(((int32_t)1783209300), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisRoomInviteNotification_t3B0F10113CBB7EE5B4F3F86CD7FEE298EC2EC5B8_m5B108FA9AC43EEFAC1DD557E75C46311C1E8C040_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Rooms::SetUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rooms_SetUpdateNotificationCallback_mCF3B1EB9E6C0946F380F5EA569DCE9395B139F14 (Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisRoom_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_m52F6062D3520C202A7C088F4A664368B3399FBF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Room_RoomUpdate,
		//   callback
		// );
		Callback_tF84567CF4B70B3F9F0DF3F8412FB50BAF521AF87 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisRoom_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_m52F6062D3520C202A7C088F4A664368B3399FBF9(((int32_t)1626094639), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisRoom_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_m52F6062D3520C202A7C088F4A664368B3399FBF9_RuntimeMethod_var);
		// }
		return;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.RoomList> Oculus.Platform.Rooms::GetNextRoomListPage(Oculus.Platform.Models.RoomList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 * Rooms_GetNextRoomListPage_mEDB06F48C4AA7E14B57249ACBB1B84FCE18077CE (RoomList_t207839A231FFF8CED968FBF572DAC4FC7DEB6AD5 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_mDFDD1705C90CD1F2DDC6BFA2BEE89E3C37ECB6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mF88551A9660F8EBD0EF412C131EE38A00AFA40B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB92D325438C8B008E393D6B7E6906DE9B33D321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		RoomList_t207839A231FFF8CED968FBF572DAC4FC7DEB6AD5 * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_mDFDD1705C90CD1F2DDC6BFA2BEE89E3C37ECB6A0(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_mDFDD1705C90CD1F2DDC6BFA2BEE89E3C37ECB6A0_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextRoomListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBB92D325438C8B008E393D6B7E6906DE9B33D321, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.RoomList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.Room_GetNextRoomArrayPage
		//   )
		// );
		RoomList_t207839A231FFF8CED968FBF572DAC4FC7DEB6AD5 * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mF88551A9660F8EBD0EF412C131EE38A00AFA40B4_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mF88551A9660F8EBD0EF412C131EE38A00AFA40B4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)1317239238), /*hidden argument*/NULL);
		Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 * L_6 = (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 *)il2cpp_codegen_object_new(Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5_il2cpp_TypeInfo_var);
		Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469(L_6, L_5, /*hidden argument*/Request_1__ctor_mC8DE29C7715A9BFA89CB963B7139291B8CC6E469_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// return null;
		return (Request_1_t8F33869811CECF1B7E369F3CB535CF67F2B030E5 *)NULL;
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
// System.Void Oculus.Platform.Models.SdkAccount::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7 (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SdkAccount(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AccountType = CAPI.ovr_SdkAccount_GetAccountType(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_SdkAccount_GetAccountType_mC2E1133EB86528148975004F29B718EA61AD4006((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_AccountType_0(L_1);
		// UserId = CAPI.ovr_SdkAccount_GetUserId(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_SdkAccount_GetUserId_m970A4B0F927C92026D89136ADF147B142E11FFDC((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_UserId_1(L_3);
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
// System.Void Oculus.Platform.Models.SdkAccountList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SdkAccountList__ctor_m2569AC12C02DCE79DD2F4550750E2BD7CC3725A3 (SdkAccountList_t17DE1D8697BC517AEE8E6A0D2D938D98030D1D67 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD30850BDDEA81ACCB0B61F5D19E8433E8D1A0783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public SdkAccountList(IntPtr a) {
		DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C(__this, /*hidden argument*/DeserializableList_1__ctor_m46B04179074ECA7AEE37D5B7D51E9ACFB4CBB93C_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_SdkAccountArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_SdkAccountArray_GetSize_m7FA8BD0A681B314F2B13F8303B3DBC0E66B4901E((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<SdkAccount>(count);
		int32_t L_3 = V_0;
		List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * L_4 = (List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E *)il2cpp_codegen_object_new(List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E_il2cpp_TypeInfo_var);
		List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572(L_4, L_3, /*hidden argument*/List_1__ctor_m4FB1C73F653828982F22ADC6C00CE8B6135B0572_RuntimeMethod_var);
		((DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new SdkAccount(CAPI.ovr_SdkAccountArray_GetElement(a, (UIntPtr)i)));
		List_1_t3A794C8B7EF48D2D6ABAC74571E9C8680DE3218E * L_5 = ((DeserializableList_1_t60ACFB90F4DCC5D87997015C54FC393EC700F26F *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_SdkAccountArray_GetElement_m94BF2B7FDAC075B64F649A2E6C1902A1F0A5405A((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A * L_10 = (SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A *)il2cpp_codegen_object_new(SdkAccount_t8F143083736D51938F4B7B5C6DD3A42A45BE5D1A_il2cpp_TypeInfo_var);
		SdkAccount__ctor_mBC9B55B678D20231E3EF37054403D4FCBFD8A5E7(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_mD30850BDDEA81ACCB0B61F5D19E8433E8D1A0783(L_5, L_10, /*hidden argument*/List_1_Add_mD30850BDDEA81ACCB0B61F5D19E8433E8D1A0783_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
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
// System.Void Oculus.Platform.Models.ShareMediaResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareMediaResult__ctor_m0AC8F70EACE4FF4E09F5BB82A1DB5D4AFFBD634E (ShareMediaResult_t6D6DCFD01772A8EB53B232207352F5EF863806F7 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShareMediaResult(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Status = CAPI.ovr_ShareMediaResult_GetStatus(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_ShareMediaResult_GetStatus_mC27964DADCE63B543E03672BFC77A1716364D81A((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Status_0(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::InitializeInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (String.IsNullOrEmpty(PlatformSettings.AppID))
		String_t* L_0;
		L_0 = PlatformSettings_get_AppID_m59B2B0452882E0B7C30A6275F8E10F1EB97ECE3A(/*hidden argument*/NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// throw new UnityException("Update your App ID by selecting 'Oculus Platform' -> 'Edit Settings'");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6502DBEA7DCA489774648AC2338DB14B68A43496)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var)));
	}

IL_0017:
	{
		// var appID = PlatformSettings.AppID;
		String_t* L_3;
		L_3 = PlatformSettings_get_AppID_m59B2B0452882E0B7C30A6275F8E10F1EB97ECE3A(/*hidden argument*/NULL);
		V_0 = L_3;
		// if (String.IsNullOrEmpty(StandalonePlatformSettings.OculusPlatformTestUserAccessToken))
		String_t* L_4;
		L_4 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline(/*hidden argument*/NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// throw new UnityException("Update your standalone credentials by selecting 'Oculus Platform' -> 'Edit Settings'");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral141DB8E2222B0556D3C6A55EC404DB7A9D4332CF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandalonePlatform_InitializeInEditor_mCACEC03D148CC9037B7AF66FC6CDC863F6644EF7_RuntimeMethod_var)));
	}

IL_0034:
	{
		// var accessToken = StandalonePlatformSettings.OculusPlatformTestUserAccessToken;
		String_t* L_7;
		L_7 = StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline(/*hidden argument*/NULL);
		V_1 = L_7;
		// return AsyncInitialize(UInt64.Parse(appID), accessToken);
		String_t* L_8 = V_0;
		uint64_t L_9;
		L_9 = UInt64_Parse_mF4BDC98BB5988FA03D4750E7F44A38766C48ADAD(L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_11;
		L_11 = StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.StandalonePlatform::AsyncInitialize(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * StandalonePlatform_AsyncInitialize_mAA5299BE3E7F8064B5FAEA525264C4A8DCE8B38E (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, uint64_t ___appID0, String_t* ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UnityResetTestPlatform();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UnityResetTestPlatform_mAA9C56C069F30DDA00E8E15F9AC793FF2EB41315(/*hidden argument*/NULL);
		// CAPI.ovr_UnityInitGlobals(IntPtr.Zero);
		CAPI_ovr_UnityInitGlobals_mD93010271FEB9AE86D398DEB83A7D974D718A256((intptr_t)(0), /*hidden argument*/NULL);
		// return new Request<Models.PlatformInitialize>(CAPI.ovr_PlatformInitializeWithAccessToken(appID, accessToken));
		uint64_t L_0 = ___appID0;
		String_t* L_1 = ___accessToken1;
		uint64_t L_2;
		L_2 = CAPI_ovr_PlatformInitializeWithAccessToken_m7AE6DEF63FB0385E174C219E92AA092E0B633119(L_0, L_1, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_3 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_3, L_2, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Oculus.Platform.StandalonePlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatform__ctor_m3AE4474A8116A9398BB6F0430B68526EB20A56B2 (StandalonePlatform_t3F9342999178C7C40E2E5373286D050D109DB76A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserEmail_m4D30CBC3C7A1777CB3373D81BB53D3D068BA2EDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserEmail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserEmail_mEF0E2648284A385C3BE98E419E0541BBF36D6A2A (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserPassword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserPassword_m9F5330BEDC6B32517A45C3426ABA3C38C3060617 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserPassword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserPassword_m8E9C40F2116A3B4D3F083E76B520D683709D550B (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.String Oculus.Platform.StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings_set_OculusPlatformTestUserAccessToken_mD84A3EDCBB83D0DA6B0146ED35A9D2310622141A (String_t* ___value0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.StandalonePlatformSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandalonePlatformSettings__ctor_mE40843F44FD1FB58636DE57723CD5ED1570FD762 (StandalonePlatformSettings_t81164F0EE1FD705DDCFF63D90358B03D1A633036 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.Models.SupplementaryMetric::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupplementaryMetric__ctor_mABF7CC54C159B31D2F27F7F2BDCDE160FF222279 (SupplementaryMetric_tAD2A1FE2910E75FD32E7101A7577B373FDE4D185 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SupplementaryMetric(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ID = CAPI.ovr_SupplementaryMetric_GetID(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_SupplementaryMetric_GetID_m606A0E3DBB03921BC3848204032D16FA213AB3FC((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_ID_0(L_1);
		// Metric = CAPI.ovr_SupplementaryMetric_GetMetric(o);
		intptr_t L_2 = ___o0;
		int64_t L_3;
		L_3 = CAPI_ovr_SupplementaryMetric_GetMetric_m75E8565C96444EB9E164D7B526BB06D133996744((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Metric_1(L_3);
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
// System.Void Oculus.Platform.Models.SystemPermission::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemPermission__ctor_m7EAC07ACE173CE5D1EE50E9D7A014A5516328F6A (SystemPermission_t481EA9156002B8786F6E38A779D31F5FED8F7A9F * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SystemPermission(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// HasPermission = CAPI.ovr_SystemPermission_GetHasPermission(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_SystemPermission_GetHasPermission_m44B0DA1696EEB52126EF51BEA06B3E93BE7ED967((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_HasPermission_0(L_1);
		// PermissionGrantStatus = CAPI.ovr_SystemPermission_GetPermissionGrantStatus(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CAPI_ovr_SystemPermission_GetPermissionGrantStatus_mC60425168D9E3B3398E226C50B4D00B11E545544((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_PermissionGrantStatus_1(L_3);
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
// System.Void Oculus.Platform.Models.SystemVoipState::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemVoipState__ctor_m9CC93A6027110E1938F59AEA8CA304EAD75DE1A5 (SystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SystemVoipState(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MicrophoneMuted = CAPI.ovr_SystemVoipState_GetMicrophoneMuted(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_SystemVoipState_GetMicrophoneMuted_mACFAC0E6A669BAA76D192487A674CC5853E8A136((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_MicrophoneMuted_0(L_1);
		// Status = CAPI.ovr_SystemVoipState_GetStatus(o);
		intptr_t L_2 = ___o0;
		int32_t L_3;
		L_3 = CAPI_ovr_SystemVoipState_GetStatus_m90B4964E758086D098299E9ABD65AF85EA1B8469((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Status_1(L_3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.Team::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Team__ctor_m78FFC056B34E1E35602983B01DE497165489E361 (Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Team(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AssignedUsers = new UserList(CAPI.ovr_Team_GetAssignedUsers(o));
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_Team_GetAssignedUsers_mAD52608F7B9F744FB914E91C99CF89D1B399B330((intptr_t)L_0, /*hidden argument*/NULL);
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_2 = (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B *)il2cpp_codegen_object_new(UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B_il2cpp_TypeInfo_var);
		UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB(L_2, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_AssignedUsers_0(L_2);
		// MaxUsers = CAPI.ovr_Team_GetMaxUsers(o);
		intptr_t L_3 = ___o0;
		int32_t L_4;
		L_4 = CAPI_ovr_Team_GetMaxUsers_m3AB047408BB22B8E91A2AC3866FA482ABEC4B47B((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_MaxUsers_1(L_4);
		// MinUsers = CAPI.ovr_Team_GetMinUsers(o);
		intptr_t L_5 = ___o0;
		int32_t L_6;
		L_6 = CAPI_ovr_Team_GetMinUsers_m9B055C3EEA6371856902DEB38D5887B376AA914F((intptr_t)L_5, /*hidden argument*/NULL);
		__this->set_MinUsers_2(L_6);
		// Name = CAPI.ovr_Team_GetName(o);
		intptr_t L_7 = ___o0;
		String_t* L_8;
		L_8 = CAPI_ovr_Team_GetName_m9996CAC336C45A5CA598CC5E7FD737117D0A7B47((intptr_t)L_7, /*hidden argument*/NULL);
		__this->set_Name_3(L_8);
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
// System.Void Oculus.Platform.Models.TeamList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeamList__ctor_m2831EE8248C762F932D9124401C16CCFBCF0A704 (TeamList_t4124515EA898C2E303F8DFF5EB5AF955D7219B46 * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_mAB7228FB3D86951154FE8023972652E1311626B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5BBC7D14058D9138458B3B7A0200B8A9BC17F9B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m09EB5665BFEF44DD41A2937561B1A94145BE79DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2D436535887B174C4FD890661D903CEF9665EB33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public TeamList(IntPtr a) {
		DeserializableList_1__ctor_mAB7228FB3D86951154FE8023972652E1311626B6(__this, /*hidden argument*/DeserializableList_1__ctor_mAB7228FB3D86951154FE8023972652E1311626B6_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_TeamArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_TeamArray_GetSize_mBC7C6FEC0E8E62ACF22C0A21566CA6DE5AD3D321((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<Team>(count);
		int32_t L_3 = V_0;
		List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * L_4 = (List_1_t2D436535887B174C4FD890661D903CEF9665EB33 *)il2cpp_codegen_object_new(List_1_t2D436535887B174C4FD890661D903CEF9665EB33_il2cpp_TypeInfo_var);
		List_1__ctor_m09EB5665BFEF44DD41A2937561B1A94145BE79DA(L_4, L_3, /*hidden argument*/List_1__ctor_m09EB5665BFEF44DD41A2937561B1A94145BE79DA_RuntimeMethod_var);
		((DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new Team(CAPI.ovr_TeamArray_GetElement(a, (UIntPtr)i)));
		List_1_t2D436535887B174C4FD890661D903CEF9665EB33 * L_5 = ((DeserializableList_1_t9C1C51D0B1079A93679618196C94CFB31A93CE17 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_TeamArray_GetElement_m59A36F353964885E2B9FB8E5CFB8D4D99E4A5C26((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA * L_10 = (Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA *)il2cpp_codegen_object_new(Team_tD3E3C6189C50B654FF38041548BD419E6C3D4AFA_il2cpp_TypeInfo_var);
		Team__ctor_m78FFC056B34E1E35602983B01DE497165489E361(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m5BBC7D14058D9138458B3B7A0200B8A9BC17F9B6(L_5, L_10, /*hidden argument*/List_1_Add_m5BBC7D14058D9138458B3B7A0200B8A9BC17F9B6_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Models.User::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961 (User_tA163463AE919860D9B337F6104B028990A44B69D * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public User(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DisplayName = CAPI.ovr_User_GetDisplayName(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_User_GetDisplayName_m79D2FCAC61E4413B3F72F54305D498294AE338ED((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DisplayName_0(L_1);
		// ID = CAPI.ovr_User_GetID(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_User_GetID_mA83BA4D33092F21AAAB03ABA1F0D5E1B2BF9CEEA((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ID_1(L_3);
		// ImageURL = CAPI.ovr_User_GetImageUrl(o);
		intptr_t L_4 = ___o0;
		String_t* L_5;
		L_5 = CAPI_ovr_User_GetImageUrl_m1647E45A5A766481651AF981DA8BD26EE99A68D0((intptr_t)L_4, /*hidden argument*/NULL);
		__this->set_ImageURL_2(L_5);
		// InviteToken = CAPI.ovr_User_GetInviteToken(o);
		intptr_t L_6 = ___o0;
		String_t* L_7;
		L_7 = CAPI_ovr_User_GetInviteToken_mC5098CFE3E4641B574D95376031D5CB51D0B2ADC((intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_InviteToken_3(L_7);
		// OculusID = CAPI.ovr_User_GetOculusID(o);
		intptr_t L_8 = ___o0;
		String_t* L_9;
		L_9 = CAPI_ovr_User_GetOculusID_m554BADFCCA6BA7FA4A2FD9AD7134E7EA88DAEDDD((intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_OculusID_4(L_9);
		// Presence = CAPI.ovr_User_GetPresence(o);
		intptr_t L_10 = ___o0;
		String_t* L_11;
		L_11 = CAPI_ovr_User_GetPresence_mF5012075F715E47929569AB9711A007D8E329837((intptr_t)L_10, /*hidden argument*/NULL);
		__this->set_Presence_5(L_11);
		// PresenceDeeplinkMessage = CAPI.ovr_User_GetPresenceDeeplinkMessage(o);
		intptr_t L_12 = ___o0;
		String_t* L_13;
		L_13 = CAPI_ovr_User_GetPresenceDeeplinkMessage_mA9DF540B83D3462E25A1919F564627BA9C2F951A((intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_PresenceDeeplinkMessage_6(L_13);
		// PresenceDestinationApiName = CAPI.ovr_User_GetPresenceDestinationApiName(o);
		intptr_t L_14 = ___o0;
		String_t* L_15;
		L_15 = CAPI_ovr_User_GetPresenceDestinationApiName_m6B293BFCDA113BFF62DDF162814C99C514A27B9F((intptr_t)L_14, /*hidden argument*/NULL);
		__this->set_PresenceDestinationApiName_7(L_15);
		// PresenceStatus = CAPI.ovr_User_GetPresenceStatus(o);
		intptr_t L_16 = ___o0;
		int32_t L_17;
		L_17 = CAPI_ovr_User_GetPresenceStatus_mF1A68B4B6BFEDB3427E5669C2538CBD4FF440A2C((intptr_t)L_16, /*hidden argument*/NULL);
		__this->set_PresenceStatus_8(L_17);
		// SmallImageUrl = CAPI.ovr_User_GetSmallImageUrl(o);
		intptr_t L_18 = ___o0;
		String_t* L_19;
		L_19 = CAPI_ovr_User_GetSmallImageUrl_mEF25A58B6C95EB63D428AC117FCED150BFA7181A((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set_SmallImageUrl_9(L_19);
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
// System.Void Oculus.Platform.Models.UserAndRoom::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAndRoom__ctor_mEB192F734DCA736AA705FCF94AB440174A8EFE0C (UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public UserAndRoom(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// var pointer = CAPI.ovr_UserAndRoom_GetRoom(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = CAPI_ovr_UserAndRoom_GetRoom_mA71B6FA4AB9F2F890973859DBB028E08B63975F8((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		// Room = new Room(pointer);
		intptr_t L_2 = V_0;
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_3 = (Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 *)il2cpp_codegen_object_new(Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857_il2cpp_TypeInfo_var);
		Room__ctor_m3D051E457AB4DF0627AF460FDAF157DF188489B8(L_3, (intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_Room_1(L_3);
		// if (pointer == IntPtr.Zero) {
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// RoomOptional = null;
		__this->set_RoomOptional_0((Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 *)NULL);
		// } else {
		goto IL_003b;
	}

IL_002f:
	{
		// RoomOptional = Room;
		Room_t47228ADEF9681BA79B214C4B2D1CB04BF3F2F857 * L_6 = __this->get_Room_1();
		__this->set_RoomOptional_0(L_6);
	}

IL_003b:
	{
		// User = new User(CAPI.ovr_UserAndRoom_GetUser(o));
		intptr_t L_7 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = CAPI_ovr_UserAndRoom_GetUser_m8669E210339FA7F81E41D698A4CF6457AF9DC788((intptr_t)L_7, /*hidden argument*/NULL);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_9 = (User_tA163463AE919860D9B337F6104B028990A44B69D *)il2cpp_codegen_object_new(User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		__this->set_User_2(L_9);
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
// System.Void Oculus.Platform.Models.UserAndRoomList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserAndRoomList__ctor_m9BF9479233F34263A6285B5FD00E299E2A1ACED8 (UserAndRoomList_t01FB60436C1268659BD43BCF28B15B83026A0F8C * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m7F06DF5A7957D69926FC06231C1B6AB352338B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7187674DB4D34A89D7BEDB715297659D1DB53CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3F53784E1A92E049156DD71024FE8D4E9ABB88DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t170398B9618F382160996609D78622C9AEDAA3EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserAndRoomList(IntPtr a) {
		DeserializableList_1__ctor_m7F06DF5A7957D69926FC06231C1B6AB352338B35(__this, /*hidden argument*/DeserializableList_1__ctor_m7F06DF5A7957D69926FC06231C1B6AB352338B35_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_UserAndRoomArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_UserAndRoomArray_GetSize_m2CDFABDC864DD66C0923DC128BA2A24768BBB262((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<UserAndRoom>(count);
		int32_t L_3 = V_0;
		List_1_t170398B9618F382160996609D78622C9AEDAA3EC * L_4 = (List_1_t170398B9618F382160996609D78622C9AEDAA3EC *)il2cpp_codegen_object_new(List_1_t170398B9618F382160996609D78622C9AEDAA3EC_il2cpp_TypeInfo_var);
		List_1__ctor_m3F53784E1A92E049156DD71024FE8D4E9ABB88DA(L_4, L_3, /*hidden argument*/List_1__ctor_m3F53784E1A92E049156DD71024FE8D4E9ABB88DA_RuntimeMethod_var);
		((DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new UserAndRoom(CAPI.ovr_UserAndRoomArray_GetElement(a, (UIntPtr)i)));
		List_1_t170398B9618F382160996609D78622C9AEDAA3EC * L_5 = ((DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_UserAndRoomArray_GetElement_m7341597F01C21A6358C1D0964D75A6EF04DB69C5((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3 * L_10 = (UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3 *)il2cpp_codegen_object_new(UserAndRoom_tB529F311DE2ECD7BAA5D889F877D693441662CC3_il2cpp_TypeInfo_var);
		UserAndRoom__ctor_mEB192F734DCA736AA705FCF94AB440174A8EFE0C(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m7187674DB4D34A89D7BEDB715297659D1DB53CE2(L_5, L_10, /*hidden argument*/List_1_Add_m7187674DB4D34A89D7BEDB715297659D1DB53CE2_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_UserAndRoomArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_UserAndRoomArray_GetNextUrl_m7537E5094BE2251FBEAD39D96E836340DC6FFB26((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tE0774C9DD255C383984D6F9A4E411934EA2CAD57 *)__this)->set__NextUrl_1(L_15);
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PrivateDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PrivateDeleteEntryByKey_m4DDF9A0CCF9C935429B622B45F8C7E68CCC4BA4F (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PrivateDeleteEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PrivateDeleteEntryByKey_m0E52FF96067754655F2BA0A56C64FE20F84A41D1(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_4 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_4, L_3, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PrivateGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PrivateGetEntries_m70D45F7FC7B3DDE92A63B4611CDBCAD6C1FD83DD (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PrivateGetEntries(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserDataStore_PrivateGetEntries_m35C39C5C06EB8011B4B67871124D28F6133BD03B(L_1, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_3 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_3, L_2, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PrivateGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PrivateGetEntryByKey_mB480A1AF869E5420D7A4F4D1ED0DEBEC79C32E03 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PrivateGetEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PrivateGetEntryByKey_m6D3FFD07EA7409F7BF0C8BC610EA91CE855AA1E1(L_1, L_2, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_4 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_4, L_3, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PrivateWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PrivateWriteEntry_mE0805F5AF737101EB0AB8C5491E693D9B74A7888 (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PrivateWriteEntry(userID, key, value));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_UserDataStore_PrivateWriteEntry_m64C30A59D7253A6FAA9F2A28A4ACECACD42D281B(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_5 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_5, L_4, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PublicDeleteEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PublicDeleteEntryByKey_mFEE0E1DD4639C8FD75EC8CF1EBD1892AFF488C21 (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PublicDeleteEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PublicDeleteEntryByKey_m499E4B51F4E611D9205300AA0C52DDB68A47FD05(L_1, L_2, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_4 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_4, L_3, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PublicGetEntries(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PublicGetEntries_mE786FF78983319A247C55309CD40145039F62A76 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PublicGetEntries(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_UserDataStore_PublicGetEntries_m55AD4C16D002B3705A31EBEA01C738DBF40C044B(L_1, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_3 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_3, L_2, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Oculus.Platform.UserDataStore::PublicGetEntryByKey(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * UserDataStore_PublicGetEntryByKey_mA275EAA4A72AF91A539E44029DA68E170CDB2FEE (uint64_t ___userID0, String_t* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Request<Dictionary<string, string>>(CAPI.ovr_UserDataStore_PublicGetEntryByKey(userID, key));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_UserDataStore_PublicGetEntryByKey_mEC7AB95AC43D76408C2E600E0A8E23B14CD73F24(L_1, L_2, /*hidden argument*/NULL);
		Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 * L_4 = (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)il2cpp_codegen_object_new(Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103_il2cpp_TypeInfo_var);
		Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4(L_4, L_3, /*hidden argument*/Request_1__ctor_m0814C5902E7CCC488E984DCD88E3852832436CD4_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (Request_1_tBA83C0A0EE226E8CB3EAAF0EB0BBB96FA67E3103 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> Oculus.Platform.UserDataStore::PublicWriteEntry(System.UInt64,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * UserDataStore_PublicWriteEntry_m80FDFCBE06E95494FE84136A88FB28EA1062088B (uint64_t ___userID0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return new Request<Models.UserDataStoreUpdateResponse>(CAPI.ovr_UserDataStore_PublicWriteEntry(userID, key, value));
		uint64_t L_1 = ___userID0;
		String_t* L_2 = ___key1;
		String_t* L_3 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = CAPI_ovr_UserDataStore_PublicWriteEntry_mE2C576EAD8732949BD258CEDBD25B1BB29CEB7F3(L_1, L_2, L_3, /*hidden argument*/NULL);
		Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B * L_5 = (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)il2cpp_codegen_object_new(Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B_il2cpp_TypeInfo_var);
		Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408(L_5, L_4, /*hidden argument*/Request_1__ctor_m25CB29AFF1B321CF84F1AA098346E0517EB48408_RuntimeMethod_var);
		return L_5;
	}

IL_0015:
	{
		// return null;
		return (Request_1_t008F490B8ED17B29F1F42D29CD5E27886E9E344B *)NULL;
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
// System.Void Oculus.Platform.Models.UserDataStoreUpdateResponse::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserDataStoreUpdateResponse__ctor_m3E731729E3C2C7895BFA9B683F4927F77FB144D0 (UserDataStoreUpdateResponse_t9C1E2F5A7F472842E6D512D31AC4CF959D4E7C23 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserDataStoreUpdateResponse(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Success = CAPI.ovr_UserDataStoreUpdateResponse_GetSuccess(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_UserDataStoreUpdateResponse_GetSuccess_m0C36C63931711623D5BA4192EBB5F1F2951F991A((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Success_0(L_1);
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
// System.Void Oculus.Platform.Models.UserList::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserList__ctor_m96C3F13B2411948E074F6635F8CD20C58CE918FB (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * __this, intptr_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m76760B69537205E74CC1457569EA27D97A168E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// public UserList(IntPtr a) {
		DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090(__this, /*hidden argument*/DeserializableList_1__ctor_m21FB8FC294CCB3358F9A19CDB9DA2B95A1EE7090_RuntimeMethod_var);
		// var count = (int)CAPI.ovr_UserArray_GetSize(a);
		intptr_t L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_UserArray_GetSize_m38BD39A3E6D4B8573D525ED1D1B112FCAF956BD2((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// _Data = new List<User>(count);
		int32_t L_3 = V_0;
		List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * L_4 = (List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 *)il2cpp_codegen_object_new(List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554_il2cpp_TypeInfo_var);
		List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF(L_4, L_3, /*hidden argument*/List_1__ctor_m0FBE3F78720C7E00E35FEBDA7CCBDC23114682BF_RuntimeMethod_var);
		((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->set__Data_0(L_4);
		// for (int i = 0; i < count; i++) {
		V_1 = 0;
		goto IL_0043;
	}

IL_0022:
	{
		// _Data.Add(new User(CAPI.ovr_UserArray_GetElement(a, (UIntPtr)i)));
		List_1_t8A8ABF9D970D8FB0B7430B7DE35C4A04DE711554 * L_5 = ((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->get__Data_0();
		intptr_t L_6 = ___a0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_8;
		L_8 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_9;
		L_9 = CAPI_ovr_UserArray_GetElement_m0619479C1F1520ADDEF134E3D5435467EF933296((intptr_t)L_6, L_8, /*hidden argument*/NULL);
		User_tA163463AE919860D9B337F6104B028990A44B69D * L_10 = (User_tA163463AE919860D9B337F6104B028990A44B69D *)il2cpp_codegen_object_new(User_tA163463AE919860D9B337F6104B028990A44B69D_il2cpp_TypeInfo_var);
		User__ctor_m4AF62433B0AEE86B747583E8FF7B851472D7F961(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m76760B69537205E74CC1457569EA27D97A168E64(L_5, L_10, /*hidden argument*/List_1_Add_m76760B69537205E74CC1457569EA27D97A168E64_RuntimeMethod_var);
		// for (int i = 0; i < count; i++) {
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++) {
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0022;
		}
	}
	{
		// _NextUrl = CAPI.ovr_UserArray_GetNextUrl(a);
		intptr_t L_14 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = CAPI_ovr_UserArray_GetNextUrl_mA95C138EB69C1CE98D550D235914C0EE382EF63D((intptr_t)L_14, /*hidden argument*/NULL);
		((DeserializableList_1_tD6305C0E140F38B97DBB36E8178FD5AC4F61C409 *)__this)->set__NextUrl_1(L_15);
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
// System.Void Oculus.Platform.UserOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_UserOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_UserOptions_Create_m60251C8DAB5A03F2552EAF3E89E48FFAE3172570(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::SetMaxUsers(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_SetMaxUsers_mEFF3198E7239A108005098C5165E40774D59728C (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_SetMaxUsers(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		uint32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_SetMaxUsers_mDD81D5F354B885E7E9343A2E2DA0A35136187D00((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::AddServiceProvider(Oculus.Platform.ServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_AddServiceProvider(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_AddServiceProvider_mBD932E1353292F7251B36D8F6830DA955347840B((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::ClearServiceProviders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_ClearServiceProviders_m887F0C1CC06AD92A20D2178F99957AEE12C6991E (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_ClearServiceProviders(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_ClearServiceProviders_m7922D5B53B2DF826ED57DF3278AD1BB6E4C90619((intptr_t)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.UserOptions::SetTimeWindow(Oculus.Platform.TimeWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_SetTimeWindow_m658F7DA0EFFE210A40028214926BE49A21D2325D (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_UserOptions_SetTimeWindow(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_SetTimeWindow_m596ECBD8F41B3A6B119D92F990A5518019D47F18((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.UserOptions::op_Explicit(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.UserOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserOptions_Finalize_mD8821B4A02C933008F2BDF9F3219E884E0651279 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		// CAPI.ovr_UserOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_UserOptions_Destroy_m9E50FD0A41BF5B26BD6EE525D7E57CC94D238080((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{// begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Void Oculus.Platform.Models.UserProof::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProof__ctor_m471A1FE83FF7096DF8FB1478D23CF69B322AE015 (UserProof_t6116EE9EB4E7EA486AAE540349232916654E7A94 * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserProof(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Value = CAPI.ovr_UserProof_GetNonce(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = CAPI_ovr_UserProof_GetNonce_mF6A1AE97D83D3DD6423455D5A3D6F9471248252B((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_Value_0(L_1);
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
// System.Void Oculus.Platform.Models.UserReportID::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserReportID__ctor_m803040AD62252F061FD2ABF0E74770B1AD920928 (UserReportID_t7E832E15A88F208CD3FB88818210A4C675AED8AB * __this, intptr_t ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UserReportID(IntPtr o)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// DidCancel = CAPI.ovr_UserReportID_GetDidCancel(o);
		intptr_t L_0 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CAPI_ovr_UserReportID_GetDidCancel_mB0B91FFA73FA546D655819A69AF3960E59FD39A9((intptr_t)L_0, /*hidden argument*/NULL);
		__this->set_DidCancel_0(L_1);
		// ID = CAPI.ovr_UserReportID_GetID(o);
		intptr_t L_2 = ___o0;
		uint64_t L_3;
		L_3 = CAPI_ovr_UserReportID_GetID_m8220610EB1BCBE2E0399AD8FC23BCB81732B046B((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_ID_1(L_3);
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
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::Get(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * Users_Get_m4038D667AD9AEBB5ABE036F670BCF495B1E12F1A (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.User>(CAPI.ovr_User_Get(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_Get_mAE29EECCF7FCB204D33C0A31C30E40616299C1EC(L_1, /*hidden argument*/NULL);
		Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * L_3 = (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)il2cpp_codegen_object_new(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA(L_3, L_2, /*hidden argument*/Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)NULL;
	}
}
// Oculus.Platform.Request`1<System.String> Oculus.Platform.Users::GetAccessToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * Users_GetAccessToken_m9E8476310123B065A4E5E4DB5FDBF2A37CE324A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<string>(CAPI.ovr_User_GetAccessToken());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetAccessToken_m899991AE1663D505CF1DDAC66C6F20F497C510F7(/*hidden argument*/NULL);
		Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC * L_2 = (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *)il2cpp_codegen_object_new(Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC_il2cpp_TypeInfo_var);
		Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA(L_2, L_1, /*hidden argument*/Request_1__ctor_m06A334DC0855C8C0491845233A0B5415D582E5EA_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t27F6F6ECC76859C52928CF488BBE36D802552FAC *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.User> Oculus.Platform.Users::GetLoggedInUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * Users_GetLoggedInUser_mBCFD598B92BDA831CAE1CD631D01BB8B87F86749 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.User>(CAPI.ovr_User_GetLoggedInUser());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUser_m8B09DC2F47134337CF635E646AEDFBDBBBE4B150(/*hidden argument*/NULL);
		Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 * L_2 = (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)il2cpp_codegen_object_new(Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94_il2cpp_TypeInfo_var);
		Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA(L_2, L_1, /*hidden argument*/Request_1__ctor_m65BC69F91FB48BDFF0FB47DE2D383813073D8BCA_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_tEFEFF86D2D15AEC3AF9F5B079A10D71B7FC96F94 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetLoggedInUserFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Users_GetLoggedInUserFriends_mD9922F3FB5237792541E63A9AE705F28C61134B4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserList>(CAPI.ovr_User_GetLoggedInUserFriends());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUserFriends_m27F0E883F04D1961044BAE83A942AE4C2AB61B2E(/*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_2 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_2, L_1, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> Oculus.Platform.Users::GetLoggedInUserFriendsAndRooms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * Users_GetLoggedInUserFriendsAndRooms_m883183FD2884D3AE347CEB7388649CDEB3155104 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserAndRoomList>(CAPI.ovr_User_GetLoggedInUserFriendsAndRooms());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetLoggedInUserFriendsAndRooms_m3C9689D0DD067C14AD180BD40D7A99A9399A43C5(/*hidden argument*/NULL);
		Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * L_2 = (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)il2cpp_codegen_object_new(Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var);
		Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660(L_2, L_1, /*hidden argument*/Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> Oculus.Platform.Users::GetLoggedInUserRecentlyMetUsersAndRooms(Oculus.Platform.UserOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * Users_GetLoggedInUserRecentlyMetUsersAndRooms_mC87027245314A7D80C41F6B8921CD36AA72FC8C5 (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * ___userOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// return new Request<Models.UserAndRoomList>(CAPI.ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms((IntPtr)userOptions));
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = ___userOptions0;
		intptr_t L_2;
		L_2 = UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = CAPI_ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms_mA685C0825DFFBB1159918BF7583436EB4FC114AF((intptr_t)L_2, /*hidden argument*/NULL);
		Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * L_4 = (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)il2cpp_codegen_object_new(Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var);
		Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660(L_4, L_3, /*hidden argument*/Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var);
		return L_4;
	}

IL_0018:
	{
		// return null;
		return (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> Oculus.Platform.Users::GetOrgScopedID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * Users_GetOrgScopedID_m7B0E03576D75F3BB93EAA0E29FC06E01A9740B38 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.OrgScopedID>(CAPI.ovr_User_GetOrgScopedID(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_GetOrgScopedID_mDD36A00BA3DEEBC290E9766FE20A23028082100D(L_1, /*hidden argument*/NULL);
		Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 * L_3 = (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *)il2cpp_codegen_object_new(Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95_il2cpp_TypeInfo_var);
		Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004(L_3, L_2, /*hidden argument*/Request_1__ctor_mE677CA86F00883C0D3EDC71EB881F7C1BF441004_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_t86000E7398F95E56A85CF84B8A7A9191FB0B8E95 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> Oculus.Platform.Users::GetSdkAccounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * Users_GetSdkAccounts_m907E6C9D3E90BC5446A8D424F692B07BB178D663 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.SdkAccountList>(CAPI.ovr_User_GetSdkAccounts());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetSdkAccounts_m08EE62B28E7308F42388587BAE022FF3AEE8773A(/*hidden argument*/NULL);
		Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C * L_2 = (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *)il2cpp_codegen_object_new(Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C_il2cpp_TypeInfo_var);
		Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88(L_2, L_1, /*hidden argument*/Request_1__ctor_mF21661A633C200E85009F6A40AD861E3EB210C88_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t9E0590A2984CD77D07843F4087C179E7522B624C *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> Oculus.Platform.Users::GetUserProof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * Users_GetUserProof_mED9C873070F615053A1F434B85D650035285606C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return new Request<Models.UserProof>(CAPI.ovr_User_GetUserProof());
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = CAPI_ovr_User_GetUserProof_mACFFCCAC2CDD3F5D7469D2CCAC8B24C007B926D0(/*hidden argument*/NULL);
		Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE * L_2 = (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *)il2cpp_codegen_object_new(Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE_il2cpp_TypeInfo_var);
		Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB(L_2, L_1, /*hidden argument*/Request_1__ctor_m177D37AF67C8E1E2A2600271E4AB190D93ED4BAB_RuntimeMethod_var);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (Request_1_t591437DBF2FFE7EC4A8BFBDF147B42CA16620BFE *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> Oculus.Platform.Users::LaunchFriendRequestFlow(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * Users_LaunchFriendRequestFlow_m6C6D656F9FF552832F25BBD706C888690484F839 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LaunchFriendRequestFlowResult>(CAPI.ovr_User_LaunchFriendRequestFlow(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchFriendRequestFlow_m8FD9F09D6DA42EFF9BE262A8EB00E8AD6569EB89(L_1, /*hidden argument*/NULL);
		Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 * L_3 = (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *)il2cpp_codegen_object_new(Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866_il2cpp_TypeInfo_var);
		Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268(L_3, L_2, /*hidden argument*/Request_1__ctor_mDFF72F5AE3326232171A6B6C1F2FE18F5E1DA268_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_t4401F51B5F3711A18E69531AF313FAB25AC60866 *)NULL;
	}
}
// Oculus.Platform.Request Oculus.Platform.Users::LaunchProfile(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * Users_LaunchProfile_m3424EFC3551F36E8E292C9BECF9E0EA8FC7C7AA4 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request(CAPI.ovr_User_LaunchProfile(userID));
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_User_LaunchProfile_m29B295907B7AA752C7D27DD2152260A17B4BFD56(L_1, /*hidden argument*/NULL);
		Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 * L_3 = (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)il2cpp_codegen_object_new(Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2_il2cpp_TypeInfo_var);
		Request__ctor_mB551C6FD263CD2C452703D9B91B62B010C78958B(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_t4230B702BE85249528B3E4E3C4E8FBA9E72FD8B2 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> Oculus.Platform.Users::GetNextUserAndRoomListPage(Oculus.Platform.Models.UserAndRoomList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * Users_GetNextUserAndRoomListPage_m9F78934EFB697F22A0CAE6854BFD506B8D30E495 (UserAndRoomList_t01FB60436C1268659BD43BCF28B15B83026A0F8C * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m08E5E8ACFC1586825A5394E7DCDF7A91E1397BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mA8EC3005EA342AD8A891E0E3BBEC7993C7F4B3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC80A2B706C9CFA7D08C1B83FC2D4B8E7E7D9C7A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		UserAndRoomList_t01FB60436C1268659BD43BCF28B15B83026A0F8C * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m08E5E8ACFC1586825A5394E7DCDF7A91E1397BD1(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m08E5E8ACFC1586825A5394E7DCDF7A91E1397BD1_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextUserAndRoomListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralC80A2B706C9CFA7D08C1B83FC2D4B8E7E7D9C7A2, /*hidden argument*/NULL);
		// return null;
		return (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.UserAndRoomList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextUserAndRoomArrayPage
		//   )
		// );
		UserAndRoomList_t01FB60436C1268659BD43BCF28B15B83026A0F8C * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mA8EC3005EA342AD8A891E0E3BBEC7993C7F4B3E8_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mA8EC3005EA342AD8A891E0E3BBEC7993C7F4B3E8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)2143146719), /*hidden argument*/NULL);
		Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 * L_6 = (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)il2cpp_codegen_object_new(Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017_il2cpp_TypeInfo_var);
		Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660(L_6, L_5, /*hidden argument*/Request_1__ctor_m8AF94606CBA46610AA954EBEF32B35DCC3548660_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// return null;
		return (Request_1_tAD3D1BD8C7BB9633872D524C1D249A0D97AA8017 *)NULL;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> Oculus.Platform.Users::GetNextUserListPage(Oculus.Platform.Models.UserList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * Users_GetNextUserListPage_mB4655181C353F01489CF276D1DFA7961CAF85E81 (UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!list.HasNextPage)
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_0 = ___list0;
		NullCheck(L_0);
		bool L_1;
		L_1 = DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80(L_0, /*hidden argument*/DeserializableList_1_get_HasNextPage_m4829695B11A652B02BE1B9FB145147E150E35B80_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogWarning("Oculus.Platform.GetNextUserListPage: List has no next page");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2A54C0E6260A2AA6788D410FDC09DAE358F35E15, /*hidden argument*/NULL);
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
	}

IL_0014:
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// return new Request<Models.UserList>(
		//   CAPI.ovr_HTTP_GetWithMessageType(
		//     list.NextUrl,
		//     (int)Message.MessageType.User_GetNextUserArrayPage
		//   )
		// );
		UserList_t901DB57C5CC0E9296DDB18AE10664F9B8C03911B * L_3 = ___list0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_inline(L_3, /*hidden argument*/DeserializableList_1_get_NextUrl_mA41CAEB43A9AE12DDA5ED868D50176212EA4E7F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_HTTP_GetWithMessageType_m320F0F1EA7F5CF57100D39C98FB3D838F958EFBA(L_4, ((int32_t)645723971), /*hidden argument*/NULL);
		Request_1_t2CA1B16D395258918A268B17227A7212918D2136 * L_6 = (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)il2cpp_codegen_object_new(Request_1_t2CA1B16D395258918A268B17227A7212918D2136_il2cpp_TypeInfo_var);
		Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5(L_6, L_5, /*hidden argument*/Request_1__ctor_mA2D42EF66231FEC3D7DFA007815DAE32212544B5_RuntimeMethod_var);
		return L_6;
	}

IL_0031:
	{
		// return null;
		return (Request_1_t2CA1B16D395258918A268B17227A7212918D2136 *)NULL;
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
// System.Void Oculus.Platform.Samples.VrHoops.VREyeRaycaster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREyeRaycaster_Update_mC95CD90E2FDAB71C70D072169827FB9C9F6BD566 (VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_1 = NULL;
	{
		// Button button = null;
		V_1 = (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)NULL;
		// if (Physics.Raycast(transform.position, transform.forward, out hit, 50f))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_1, L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (50.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// button = hit.collider.GetComponent<Button>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5;
		L_5 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6;
		L_6 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC(L_5, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0033:
	{
		// if (button != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// if (m_currentButton != button)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_m_currentButton_5();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		// m_currentButton = button;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = V_1;
		__this->set_m_currentButton_5(L_12);
		// m_currentButton.Select();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_m_currentButton_5();
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_13);
		// }
		return;
	}

IL_005d:
	{
		// else if (m_currentButton != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14 = __this->get_m_currentButton_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		// m_currentButton = null;
		__this->set_m_currentButton_5((Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)NULL);
		// if (m_eventSystem != null)
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_16 = __this->get_m_eventSystem_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		// m_eventSystem.SetSelectedGameObject(null);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_18 = __this->get_m_eventSystem_4();
		NullCheck(L_18);
		EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55(L_18, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrHoops.VREyeRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREyeRaycaster__ctor_m01F552211032B97826E739FB7104474558A3B185 (VREyeRaycaster_t8103C2D3B5CCE1CC254F8C4E8B9C2E0D8DBB8E90 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.Samples.VrVoiceChat.VREyeRaycaster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREyeRaycaster_Update_m3FCA83444A04C4C8ED65374BB3941340A06643DD (VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_1 = NULL;
	{
		// Button button = null;
		V_1 = (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)NULL;
		// if (Physics.Raycast(transform.position, transform.forward, out hit, 50f))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_1, L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (50.0f), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// button = hit.collider.GetComponent<Button>();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5;
		L_5 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_5);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6;
		L_6 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC(L_5, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0033:
	{
		// if (button != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		// if (m_currentButton != button)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_m_currentButton_5();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_008c;
		}
	}
	{
		// m_currentButton = button;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = V_1;
		__this->set_m_currentButton_5(L_12);
		// m_currentButton.Select();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_m_currentButton_5();
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(38 /* System.Void UnityEngine.UI.Selectable::Select() */, L_13);
		// }
		return;
	}

IL_005d:
	{
		// else if (m_currentButton != null)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14 = __this->get_m_currentButton_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		// m_currentButton = null;
		__this->set_m_currentButton_5((Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)NULL);
		// if (m_eventSystem != null)
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_16 = __this->get_m_eventSystem_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008c;
		}
	}
	{
		// m_eventSystem.SetSelectedGameObject(null);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_18 = __this->get_m_eventSystem_4();
		NullCheck(L_18);
		EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55(L_18, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.VREyeRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VREyeRaycaster__ctor_m8AE735506A8911625AA0D60A1F92D45B26D4FB02 (VREyeRaycaster_t959E4DAA737ED35C526049116E697AEA29BAB9BB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.Voip::Start(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Start_mD4A981F8F83C17D7613E54E8AD0B5E967E2E11B3 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Start(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Start_m0C4835CAE5708EB73AF4421B43F0BC6447D0A21F(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::Accept(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Accept_m1DFFD97D573CD70906B96AF35D610EAFA5963E03 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Accept(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Accept_m9800FE8E4D343E0C0CE2FDC0487FEA5BB26E28A8(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::Stop(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_Stop_mA24A0BDF812EB1364972B0B9C95DFBEF3F59C9C7 (uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_Stop(userID);
		uint64_t L_1 = ___userID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_Stop_m0DC234A970B860B06D713DD66F162277CBA5C7E5(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneFilterCallback(Oculus.Platform.CAPI/FilterCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneFilterCallback_mF2E82F4AEA6C5860B22A3897D32558E93FEA3905 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// CAPI.ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(callback, (UIntPtr)CAPI.VoipFilterBufferSize);
		FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * L_1 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_2;
		L_2 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)((int32_t)480))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer_m1D5F5B3B07B29D553B92A5CA21A02FF11CD8FAF0(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetMicrophoneMuted(Oculus.Platform.VoipMuteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetMicrophoneMuted_mECC3892E9AFD0937444A1DB2D2874C053C63A440 (int32_t ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// CAPI.ovr_Voip_SetMicrophoneMuted(state);
		int32_t L_1 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetMicrophoneMuted_m2EA767996A68B9920B04B54C471D54628C92664C(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// Oculus.Platform.VoipMuteState Oculus.Platform.Voip::GetSystemVoipMicrophoneMuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetSystemVoipMicrophoneMuted_m462E94A54D92A68B123B1F1180E3C4AA33F0A110 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_Voip_GetSystemVoipMicrophoneMuted();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_Voip_GetSystemVoipMicrophoneMuted_mF4624D95D21D432C9A5F72F59A2304875C255394(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return VoipMuteState.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.SystemVoipStatus Oculus.Platform.Voip::GetSystemVoipStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetSystemVoipStatus_mA063EEBF5BCFF7F7CD15AA1C2091A46E32038776 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return CAPI.ovr_Voip_GetSystemVoipStatus();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = CAPI_ovr_Voip_GetSystemVoipStatus_mA4CF3DB3823A656E832BC18617FB4105A1F1A30E(/*hidden argument*/NULL);
		return L_1;
	}

IL_000d:
	{
		// return SystemVoipStatus.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipDtxState Oculus.Platform.Voip::GetIsConnectionUsingDtx(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetIsConnectionUsingDtx_m7C8408AFFCCCAA469FDB50167D10A216B5F14606 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetIsConnectionUsingDtx(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetIsConnectionUsingDtx_m12173DD61FF2478758A671585481EA2AEA569C20(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipDtxState.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipBitrate Oculus.Platform.Voip::GetLocalBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetLocalBitrate_m3EF5DADB2FFE678F988D3C92B2BC02E0112B8728 (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetLocalBitrate(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetLocalBitrate_mF1AD054056CC9EA54CB22E970EA936F0C0BF0B37(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipBitrate.Unknown;
		return (int32_t)(0);
	}
}
// Oculus.Platform.VoipBitrate Oculus.Platform.Voip::GetRemoteBitrate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voip_GetRemoteBitrate_m10C4BB911D6BFC985E9F0B3BE046FC3E8C41B1EF (uint64_t ___peerID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CAPI.ovr_Voip_GetRemoteBitrate(peerID);
		uint64_t L_1 = ___peerID0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CAPI_ovr_Voip_GetRemoteBitrate_mD225E49EC7ABDD91FCE45929F96E57F455D8CBC1(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// return Oculus.Platform.VoipBitrate.Unknown;
		return (int32_t)(0);
	}
}
// System.Void Oculus.Platform.Voip::SetNewConnectionOptions(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetNewConnectionOptions_m30BB5938E60842C3E570374BB67B0CEF8A864480 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___voipOptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// CAPI.ovr_Voip_SetNewConnectionOptions((IntPtr)voipOptions);
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_1 = ___voipOptions0;
		intptr_t L_2;
		L_2 = VoipOptions_op_Explicit_mECDFD67AF4F1C6685115F82D28645BE57BC9FBD2(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetNewConnectionOptions_m5A52B5110B93D84F8204842ED34DA84C431DAC8A((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState> Oculus.Platform.Voip::SetSystemVoipSuppressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * Voip_SetSystemVoipSuppressed_m3D3535249EE7735754460897C32908AAE5A60E93 (bool ___suppressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.SystemVoipState>(CAPI.ovr_Voip_SetSystemVoipSuppressed(suppressed));
		bool L_1 = ___suppressed0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = CAPI_ovr_Voip_SetSystemVoipSuppressed_m6EB89BEC82B94CD4849BF1EBC5CA0C4A7127CACB(L_1, /*hidden argument*/NULL);
		Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF * L_3 = (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *)il2cpp_codegen_object_new(Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF_il2cpp_TypeInfo_var);
		Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052(L_3, L_2, /*hidden argument*/Request_1__ctor_m31969578BED94D22E1305EAADA621556EC72E052_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Request_1_t22C3689021513F0E78C43B6D931DFF9C0BAE4CAF *)NULL;
	}
}
// System.Void Oculus.Platform.Voip::SetVoipConnectRequestCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetVoipConnectRequestCallback_m11F0F782D6175942A16D6CEEF4D2739B7381962E (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_ConnectRequest,
		//   callback
		// );
		Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F(((int32_t)908343318), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetVoipStateChangeCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetVoipStateChangeCallback_m2F7DFAE5C05187F949F16192BAFA2241BA8D618A (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_StateChange,
		//   callback
		// );
		Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F(((int32_t)888120928), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisNetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78_mF3DAF3185CB3217CCAE300FA7F36B89D4C23775F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Voip::SetSystemVoipStateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voip_SetSystemVoipStateNotificationCallback_mB75B1F3DE9B75DEC587E4F85AE2E847231EC974E (Callback_t827F915E827EE8044B5F300339FE951E4557B20A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m62DFA300B53C52D4F5021985CEF239AA828434BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Voip_SystemVoipState,
		//   callback
		// );
		Callback_t827F915E827EE8044B5F300339FE951E4557B20A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m62DFA300B53C52D4F5021985CEF239AA828434BB(((int32_t)1490179237), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisSystemVoipState_t91F38F0B71194F3341BD92A0176BA3BE437AB49D_m62DFA300B53C52D4F5021985CEF239AA828434BB_RuntimeMethod_var);
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
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::set_senderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_set_senderID_m288B4C24C5D9628FC7FC0A35B1AC80A3DFE10193 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource.SetSenderID(value);
		RuntimeObject* L_0 = __this->get_pcmSource_7();
		uint64_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Oculus.Platform.IVoipPCMSource::SetSenderID(System.UInt64) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Stop_mFC59095BE1119B99A7B4A44DC25CC5E9FA1B2DB5 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		// protected void Stop() {}
		return;
	}
}
// Oculus.Platform.VoipSampleRate Oculus.Platform.VoipAudioSourceHiLevel::SampleRateToEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, int32_t ___rate0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___rate0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)24000))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___rate0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)44100))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___rate0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)48000)))))
		{
			goto IL_001e;
		}
	}
	{
		// return VoipSampleRate.HZ48000;
		return (int32_t)(3);
	}

IL_001a:
	{
		// return VoipSampleRate.HZ44100;
		return (int32_t)(2);
	}

IL_001c:
	{
		// return VoipSampleRate.HZ24000;
		return (int32_t)(1);
	}

IL_001e:
	{
		// return VoipSampleRate.Unknown;
		return (int32_t)(0);
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Awake_mE7525A754D5B14E3EA9931C0ACC5F071DCE02D23 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m960FD5C861EFDB693785C073698FEBE516CDE81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m0E3CAC37687B000CB800D958EEF3EFCC084D2041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_mCCA15296A81FF003C4507FF456845D7932629C3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreatePCMSource();
		VirtualActionInvoker0::Invoke(4 /* System.Void Oculus.Platform.VoipAudioSourceHiLevel::CreatePCMSource() */, __this);
		// if(audioSource == null) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// audioSource = gameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m960FD5C861EFDB693785C073698FEBE516CDE81E(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m960FD5C861EFDB693785C073698FEBE516CDE81E_RuntimeMethod_var);
		__this->set_audioSource_5(L_3);
	}

IL_0025:
	{
		// audioSource.gameObject.AddComponent<FilterReadDelegate>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_5();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * L_6;
		L_6 = GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m0E3CAC37687B000CB800D958EEF3EFCC084D2041(L_5, /*hidden argument*/GameObject_AddComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_m0E3CAC37687B000CB800D958EEF3EFCC084D2041_RuntimeMethod_var);
		// var filterDelegate = audioSource.gameObject.GetComponent<FilterReadDelegate>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_5();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * L_9;
		L_9 = GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_mCCA15296A81FF003C4507FF456845D7932629C3E(L_8, /*hidden argument*/GameObject_GetComponent_TisFilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94_mCCA15296A81FF003C4507FF456845D7932629C3E_RuntimeMethod_var);
		// filterDelegate.parent = this;
		NullCheck(L_9);
		L_9->set_parent_4(__this);
		// initialPlaybackDelayMS = 40;
		__this->set_initialPlaybackDelayMS_4(((int32_t)40));
		// audioSystemPlaybackFrequency = AudioSettings.outputSampleRate;
		int32_t L_10;
		L_10 = AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->set_audioSystemPlaybackFrequency_8(L_10);
		// CAPI.ovr_Voip_SetOutputSampleRate(SampleRateToEnum(audioSystemPlaybackFrequency));
		int32_t L_11 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		int32_t L_12;
		L_12 = VoipAudioSourceHiLevel_SampleRateToEnum_m1244CD059C06CA41AF6FB2CF53EB824B2B6175B1(__this, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_Voip_SetOutputSampleRate_m6372425AE289A6E61861320B0BCF4A9F5F1FABA6(L_12, /*hidden argument*/NULL);
		// if(verboseLogging) {
		bool L_13 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		// Debug.LogFormat("freq {0}", audioSystemPlaybackFrequency);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_16 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral0B956CB6C1D11E0B5BBA5109FED8B76513A2B6E6, L_15, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Start_m5FD556DFBAE15AA023F598D238A7AB753ADF2674 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::CreatePCMSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_CreatePCMSource_m81783FF495599298C6EFC14A6C36821811333B73 (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource = new VoipPCMSourceNative();
		VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * L_0 = (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 *)il2cpp_codegen_object_new(VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13_il2cpp_TypeInfo_var);
		VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92(L_0, /*hidden argument*/NULL);
		__this->set_pcmSource_7(L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Platform.VoipAudioSourceHiLevel::MSToElements(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipAudioSourceHiLevel_MSToElements_m8A392BF3FF2D7D485E672412DC107E03602AD24E (int32_t ___ms0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ms * audioSystemPlaybackFrequency / 1000;
		int32_t L_0 = ___ms0;
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_1 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_audioSystemPlaybackFrequency_8();
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1))/(int32_t)((int32_t)1000)));
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel_Update_m7D9272AB8D68F55948FAEC2CE7D04AA2B31CD72E (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pcmSource.Update();
		RuntimeObject* L_0 = __this->get_pcmSource_7();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Oculus.Platform.IVoipPCMSource::Update() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_0);
		// if (!audioSource.isPlaying && pcmSource.PeekSizeElements() >= MSToElements(initialPlaybackDelayMS)) {
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_audioSource_5();
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_pcmSource_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = __this->get_initialPlaybackDelayMS_4();
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = VoipAudioSourceHiLevel_MSToElements_m8A392BF3FF2D7D485E672412DC107E03602AD24E(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0065;
		}
	}
	{
		// if(verboseLogging) {
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_7 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogFormat("buffered {0} elements, starting playback", pcmSource.PeekSizeElements());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		RuntimeObject* L_10 = __this->get_pcmSource_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral29BDF3A9A1F27D8313BA4FCD066A82883082ECBD, L_9, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = __this->get_audioSource_5();
		NullCheck(L_14);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_14, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel__ctor_mA5EA82C6470B9890562ED05C00B9FDF23ED1EE2D (VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipAudioSourceHiLevel__cctor_mFB76DC04CB0313B1A4D24DC3E168949468DC0203 (const RuntimeMethod* method)
{
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
// System.Void Oculus.Platform.Samples.VrVoiceChat.VoipManager::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager__ctor_m314530EE649C61809B3EC50DF1FB52DBA4543C8D (VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___remoteHead0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipManager_VoipConnectRequestCallback_mA4E56E1620C6C0427E633127A274A3357E0FECE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipManager_VoipStateChangedCallback_mBB0E0B7578DE9B4CBB481936158528F0CDB8EEA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoipManager(GameObject remoteHead)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_remoteHead = remoteHead;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___remoteHead0;
		__this->set_m_remoteHead_2(L_0);
		// Voip.SetVoipConnectRequestCallback(VoipConnectRequestCallback);
		Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * L_1 = (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 *)il2cpp_codegen_object_new(Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172_il2cpp_TypeInfo_var);
		Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F(L_1, __this, (intptr_t)((intptr_t)VoipManager_VoipConnectRequestCallback_mA4E56E1620C6C0427E633127A274A3357E0FECE0_RuntimeMethod_var), /*hidden argument*/Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F_RuntimeMethod_var);
		Voip_SetVoipConnectRequestCallback_m11F0F782D6175942A16D6CEEF4D2739B7381962E(L_1, /*hidden argument*/NULL);
		// Voip.SetVoipStateChangeCallback(VoipStateChangedCallback);
		Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 * L_2 = (Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172 *)il2cpp_codegen_object_new(Callback_t0EECE0B8727CB858E096E0F4975E5FC8F48D3172_il2cpp_TypeInfo_var);
		Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F(L_2, __this, (intptr_t)((intptr_t)VoipManager_VoipStateChangedCallback_mBB0E0B7578DE9B4CBB481936158528F0CDB8EEA1_RuntimeMethod_var), /*hidden argument*/Callback__ctor_m147CDE96E2E6A70F76A7EF31B2C065C5118C1C1F_RuntimeMethod_var);
		Voip_SetVoipStateChangeCallback_m2F7DFAE5C05187F949F16192BAFA2241BA8D618A(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.VoipManager::ConnectTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_ConnectTo_m63BF76CA28FA46C305631AA46617F40C74BADB3B (VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9 * __this, uint64_t ___userID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_m60FC4D21BC98CEBEB913D8B780A072430527A0F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_remoteID = userID;
		uint64_t L_0 = ___userID0;
		__this->set_m_remoteID_0(L_0);
		// var audioSource = m_remoteHead.AddComponent<VoipAudioSourceHiLevel>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_remoteHead_2();
		NullCheck(L_1);
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_2;
		L_2 = GameObject_AddComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_m60FC4D21BC98CEBEB913D8B780A072430527A0F8(L_1, /*hidden argument*/GameObject_AddComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_m60FC4D21BC98CEBEB913D8B780A072430527A0F8_RuntimeMethod_var);
		// audioSource.senderID = userID;
		uint64_t L_3 = ___userID0;
		NullCheck(L_2);
		VoipAudioSourceHiLevel_set_senderID_m288B4C24C5D9628FC7FC0A35B1AC80A3DFE10193(L_2, L_3, /*hidden argument*/NULL);
		// if (PlatformManager.MyID < m_remoteID)
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		uint64_t L_4;
		L_4 = PlatformManager_get_MyID_m14A66163DDB88E02919BDFE3B157A53164DF7604(/*hidden argument*/NULL);
		uint64_t L_5 = __this->get_m_remoteID_0();
		if ((!(((uint64_t)L_4) < ((uint64_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// Voip.Start(userID);
		uint64_t L_6 = ___userID0;
		Voip_Start_mD4A981F8F83C17D7613E54E8AD0B5E967E2E11B3(L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.VoipManager::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_Disconnect_m3DF98D7E82F8B27B3091BFA20885E1737B5473C8 (VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_mE8A51FD815FF954245F17AD1B1028ECDB7A6213F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_remoteID != 0)
		uint64_t L_0 = __this->get_m_remoteID_0();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// Voip.Stop(m_remoteID);
		uint64_t L_1 = __this->get_m_remoteID_0();
		Voip_Stop_mA24A0BDF812EB1364972B0B9C95DFBEF3F59C9C7(L_1, /*hidden argument*/NULL);
		// Object.Destroy(m_remoteHead.GetComponent<VoipAudioSourceHiLevel>(), 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_m_remoteHead_2();
		NullCheck(L_2);
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_3;
		L_3 = GameObject_GetComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_mE8A51FD815FF954245F17AD1B1028ECDB7A6213F(L_2, /*hidden argument*/GameObject_GetComponent_TisVoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_mE8A51FD815FF954245F17AD1B1028ECDB7A6213F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_3, (0.0f), /*hidden argument*/NULL);
		// m_remoteID = 0;
		__this->set_m_remoteID_0(((int64_t)((int64_t)0)));
		// m_state = PeerConnectionState.Unknown;
		__this->set_m_state_1(0);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Boolean Oculus.Platform.Samples.VrVoiceChat.VoipManager::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoipManager_get_Connected_mA3E597B0D415AB91C9F9E88FA8ED859293A001C9 (VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9 * __this, const RuntimeMethod* method)
{
	{
		// return m_state == PeerConnectionState.Connected;
		int32_t L_0 = __this->get_m_state_1();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.VoipManager::VoipConnectRequestCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_VoipConnectRequestCallback_mA4E56E1620C6C0427E633127A274A3357E0FECE0 (VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9 * __this, Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1232E48A80842C33CAEA1FBBFC759FAF1AE31B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Voip request from {0}, authorized is {1}", msg.Data.ID, m_remoteID);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_2 = ___msg0;
		NullCheck(L_2);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_3;
		L_3 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_2, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_3);
		uint64_t L_4;
		L_4 = NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline(L_3, /*hidden argument*/NULL);
		uint64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_1;
		uint64_t L_8 = __this->get_m_remoteID_0();
		uint64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteralE1232E48A80842C33CAEA1FBBFC759FAF1AE31B8, L_7, /*hidden argument*/NULL);
		// if (msg.Data.ID == m_remoteID)
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_11 = ___msg0;
		NullCheck(L_11);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_12;
		L_12 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_11, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_12);
		uint64_t L_13;
		L_13 = NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline(L_12, /*hidden argument*/NULL);
		uint64_t L_14 = __this->get_m_remoteID_0();
		if ((!(((uint64_t)L_13) == ((uint64_t)L_14))))
		{
			goto IL_0054;
		}
	}
	{
		// Voip.Accept(msg.Data.ID);
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_15 = ___msg0;
		NullCheck(L_15);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_16;
		L_16 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_15, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_16);
		uint64_t L_17;
		L_17 = NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline(L_16, /*hidden argument*/NULL);
		Voip_Accept_m1DFFD97D573CD70906B96AF35D610EAFA5963E03(L_17, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.VoipManager::VoipStateChangedCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.NetworkingPeer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipManager_VoipStateChangedCallback_mBB0E0B7578DE9B4CBB481936158528F0CDB8EEA1 (VoipManager_tC863E59F3715FBE095A8524E4D36DE232BDD81C9 * __this, Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FB3A8EC9AB95DA81690EA353B6F511FE40FF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Voip state to {0} changed to {1}", msg.Data.ID, msg.Data.State);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_2 = ___msg0;
		NullCheck(L_2);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_3;
		L_3 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_2, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_3);
		uint64_t L_4;
		L_4 = NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline(L_3, /*hidden argument*/NULL);
		uint64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_1;
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_8 = ___msg0;
		NullCheck(L_8);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_9;
		L_9 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_8, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = NetworkingPeer_get_State_mC2B21B34F2ED64AC8FE6632995FF67EC96F728A7_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(PeerConnectionState_t5D085CAF9729C2423A256994EED2AA0777E7AEC0_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral0B0FB3A8EC9AB95DA81690EA353B6F511FE40FF1, L_7, /*hidden argument*/NULL);
		// if (msg.Data.ID == m_remoteID)
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_13 = ___msg0;
		NullCheck(L_13);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_14;
		L_14 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_13, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_14);
		uint64_t L_15;
		L_15 = NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline(L_14, /*hidden argument*/NULL);
		uint64_t L_16 = __this->get_m_remoteID_0();
		if ((!(((uint64_t)L_15) == ((uint64_t)L_16))))
		{
			goto IL_007b;
		}
	}
	{
		// m_state = msg.Data.State;
		Message_1_t1045F5ECFBB9FB6382E8906A973479CFFD5C1E27 * L_17 = ___msg0;
		NullCheck(L_17);
		NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * L_18;
		L_18 = Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_inline(L_17, /*hidden argument*/Message_1_get_Data_m8F0440AEFB9DAD13CA519C3954A6AAC89BF9DAC4_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = NetworkingPeer_get_State_mC2B21B34F2ED64AC8FE6632995FF67EC96F728A7_inline(L_18, /*hidden argument*/NULL);
		__this->set_m_state_1(L_19);
		// if (m_state == PeerConnectionState.Timeout &&
		//     // ID comparison is used to decide who initiates and who gets the Callback
		//     PlatformManager.MyID < m_remoteID)
		int32_t L_20 = __this->get_m_state_1();
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_007b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		uint64_t L_21;
		L_21 = PlatformManager_get_MyID_m14A66163DDB88E02919BDFE3B157A53164DF7604(/*hidden argument*/NULL);
		uint64_t L_22 = __this->get_m_remoteID_0();
		if ((!(((uint64_t)L_21) < ((uint64_t)L_22))))
		{
			goto IL_007b;
		}
	}
	{
		// Voip.Start(m_remoteID);
		uint64_t L_23 = __this->get_m_remoteID_0();
		Voip_Start_mD4A981F8F83C17D7613E54E8AD0B5E967E2E11B3(L_23, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// PlatformManager.SetBackgroundColorForState();
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_SetBackgroundColorForState_mD9B4F96CDE716D9E7A47AF253C9FA555C3FA3C2B(/*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.VoipOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions__ctor_m349A78ED85161639C44A484886D4BB94AB28259B (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VoipOptions() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Handle = CAPI.ovr_VoipOptions_Create();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CAPI_ovr_VoipOptions_Create_mD4DD27514BC524AD0912019B1B6367C8CB613C03(/*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipOptions::SetBitrateForNewConnections(Oculus.Platform.VoipBitrate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_SetBitrateForNewConnections_m5DD59D56FBC6DC31DC85458D333CCEF48FE0FC74 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_VoipOptions_SetBitrateForNewConnections(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_SetBitrateForNewConnections_mEC0DA6AE80F1A013CB655B6B2DB1890BD9FD9356((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipOptions::SetCreateNewConnectionUseDtx(Oculus.Platform.VoipDtxState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_SetCreateNewConnectionUseDtx_m5724ECB20B91C3AAD9BF41BDB22D5947C983F8D2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CAPI.ovr_VoipOptions_SetCreateNewConnectionUseDtx(Handle, value);
		intptr_t L_0 = __this->get_Handle_0();
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_SetCreateNewConnectionUseDtx_m2C46012D290A068BCAF4E266FF07D656821AE172((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.VoipOptions::op_Explicit(Oculus.Platform.VoipOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VoipOptions_op_Explicit_mECDFD67AF4F1C6685115F82D28645BE57BC9FBD2 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return options != null ? options.Handle : IntPtr.Zero;
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_0 = ___options0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (intptr_t)(0);
	}

IL_0009:
	{
		VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * L_1 = ___options0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		return (intptr_t)L_2;
	}
}
// System.Void Oculus.Platform.VoipOptions::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipOptions_Finalize_mA8150FC50480BDF0BC9E3392C68BC20EAF8D9336 (VoipOptions_t2F733E7081DCDA1B21574E08F5462A4A57D9B050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		// CAPI.ovr_VoipOptions_Destroy(Handle);
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		CAPI_ovr_VoipOptions_Destroy_m55C2B30A237478D8A98A0EBA7AEFD491CC8A6680((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{// begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
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
// System.Int32 Oculus.Platform.VoipPCMSourceNative::GetPCM(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipPCMSourceNative_GetPCM_m330D8B296E58AF7E92216E6E52E2410EACB722D9 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dest0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)CAPI.ovr_Voip_GetPCMFloat(senderID, dest, (UIntPtr)length);
		uint64_t L_0 = __this->get_senderID_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = ___dest0;
		int32_t L_2 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uintptr_t L_3;
		L_3 = UIntPtr_op_Explicit_m69C88CE8E50F8352EEEDBA0E5C60A36FF4DEB455(((int64_t)((int64_t)L_2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_4;
		L_4 = CAPI_ovr_Voip_GetPCMFloat_mD948F9DACC19FABB9B3BBA070222007A227143FF(L_0, L_1, L_3, /*hidden argument*/NULL);
		uint32_t L_5;
		L_5 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::SetSenderID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative_SetSenderID_mB83CE6ECD69B5C9D557A3FCA29C9AFE2D42C5949 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, uint64_t ___senderID0, const RuntimeMethod* method)
{
	{
		// this.senderID = senderID;
		uint64_t L_0 = ___senderID0;
		__this->set_senderID_0(L_0);
		// }
		return;
	}
}
// System.Int32 Oculus.Platform.VoipPCMSourceNative::PeekSizeElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoipPCMSourceNative_PeekSizeElements_m29BBD16775799A2003520BAB51263D5F2B672A0B (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)CAPI.ovr_Voip_GetPCMSize(senderID);
		uint64_t L_0 = __this->get_senderID_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_1;
		L_1 = CAPI_ovr_Voip_GetPCMSize_m1F887B73447D542AEB761EE9F88B424FDE05021C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative_Update_m11989EE78BA0D517D7B34C344F02CFF908165D27 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	{
		// public void Update() { }
		return;
	}
}
// System.Void Oculus.Platform.VoipPCMSourceNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoipPCMSourceNative__ctor_m2DCCD4D45EC57A9D05992683B1BF256E0E2CFA92 (VoipPCMSourceNative_t3C58381BD9279DE19661937F209234D51377AE13 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Oculus.Platform.Vrcamera::SetGetSurfaceUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vrcamera_SetGetSurfaceUpdateNotificationCallback_m3D10942E5EE7732B978AF7B3FCBE7CE123ABBB51 (Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_Vrcamera_GetSurfaceUpdate,
		//   callback
		// );
		Callback_tD043303749DFDABD54DB83282588105CC2ADB18D * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463(((int32_t)938610820), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisString_t_m86313ED921067124B4409BAE03F869EC36B03463_RuntimeMethod_var);
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
// System.Void Oculus.Platform.WindowsPlatform::CPPLogCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPlatform_CPPLogCallback_m15852470B6EB7DE65D27DBE1C2F71E60CE6AE95B (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, intptr_t ___tag0, intptr_t ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(string.Format("{0}: {1}", Marshal.PtrToStringAnsi(tag), Marshal.PtrToStringAnsi(message)));
		intptr_t L_0 = ___tag0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_2 = ___message1;
		String_t* L_3;
		L_3 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_1, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr Oculus.Platform.WindowsPlatform::getCallbackPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Boolean Oculus.Platform.WindowsPlatform::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(String.IsNullOrEmpty(appId))
		String_t* L_0 = ___appId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new UnityException("AppID must not be null or empty");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsPlatform_Initialize_m6179BF582501808FC82D9D8F491FC4E152C8F347_RuntimeMethod_var)));
	}

IL_0013:
	{
		// CAPI.ovr_UnityInitWrapperWindows(appId, getCallbackPointer());
		String_t* L_3 = ___appId0;
		intptr_t L_4;
		L_4 = WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = CAPI_ovr_UnityInitWrapperWindows_mCF06BCEA646A8E0F124D5DE709556496961B47DD(L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> Oculus.Platform.WindowsPlatform::AsyncInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519 (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, String_t* ___appId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(String.IsNullOrEmpty(appId))
		String_t* L_0 = ___appId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new UnityException("AppID must not be null or empty");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9FC41F4D38A1AA3D583D4E33D76461C3A151204)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsPlatform_AsyncInitialize_m6AD358B04D00A52AEFDCA166299EB1F9CC487519_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return new Request<Models.PlatformInitialize>(CAPI.ovr_UnityInitWrapperWindowsAsynchronous(appId, getCallbackPointer()));
		String_t* L_3 = ___appId0;
		intptr_t L_4;
		L_4 = WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_5;
		L_5 = CAPI_ovr_UnityInitWrapperWindowsAsynchronous_m7B8176215967FCED48A42464C9EDE701EE904186(L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 * L_6 = (Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4 *)il2cpp_codegen_object_new(Request_1_t3E6B2E84C3917B68B1450ABC7B280A8E920BD2A4_il2cpp_TypeInfo_var);
		Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688(L_6, L_5, /*hidden argument*/Request_1__ctor_mFC271BC4F496EA2BA46A55350DC8D6A3FC7B6688_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void Oculus.Platform.WindowsPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsPlatform__ctor_m9912552D07BB1447E692D1D40FE8CCB1BBB3C6BF (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Oculus.Platform.Samples.NetChat.chatPacket::get_packetID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m75E0598ADD4BB45224DB84CD04AF515A2FB52177 (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method)
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = __this->get_U3CpacketIDU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_packetID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m6647D7848A8B0E0FCBB45C1FF46A57509BC6BC97 (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpacketIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Oculus.Platform.Samples.NetChat.chatPacket::get_textString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47 (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method)
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = __this->get_U3CtextStringU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::set_textString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233 (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = ___value0;
		__this->set_U3CtextStringU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Byte[] Oculus.Platform.Samples.NetChat.chatPacket::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* chatPacket_Serialize_m3EE77167C26C12BFD6623D0D77ED446802664F50 (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (MemoryStream m = new MemoryStream())
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{// begin try (depth: 1)
		{
			// using (BinaryWriter writer = new BinaryWriter(m))
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
			BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_2 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)il2cpp_codegen_object_new(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
			BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A(L_2, L_1, /*hidden argument*/NULL);
			V_1 = L_2;
		}

IL_000d:
		try
		{// begin try (depth: 2)
			{
				// if (textString.Length > Constants.BUFFER_SIZE)
				String_t* L_3;
				L_3 = chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_3);
				int32_t L_4;
				L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
				if ((((int32_t)L_4) <= ((int32_t)((int32_t)512))))
				{
					goto IL_0036;
				}
			}

IL_001f:
			{
				// textString = textString.Substring(0, Constants.BUFFER_SIZE-1);
				String_t* L_5;
				L_5 = chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_5);
				String_t* L_6;
				L_6 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 0, ((int32_t)511), /*hidden argument*/NULL);
				chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233_inline(__this, L_6, /*hidden argument*/NULL);
			}

IL_0036:
			{
				// writer.Write(packetID);
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_7 = V_1;
				int32_t L_8;
				L_8 = chatPacket_get_packetID_m75E0598ADD4BB45224DB84CD04AF515A2FB52177_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_7);
				VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_7, L_8);
				// writer.Write(textString.ToCharArray());
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_9 = V_1;
				String_t* L_10;
				L_10 = chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_10);
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11;
				L_11 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_10, /*hidden argument*/NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* >::Invoke(12 /* System.Void System.IO.BinaryWriter::Write(System.Char[]) */, L_9, L_11);
				// writer.Write('\0');
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_12 = V_1;
				NullCheck(L_12);
				VirtualActionInvoker1< Il2CppChar >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Char) */, L_12, 0);
				// }
				IL2CPP_LEAVE(0x66, FINALLY_005c);
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_005c;
		}

FINALLY_005c:
		{// begin finally (depth: 2)
			{
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_13 = V_1;
				if (!L_13)
				{
					goto IL_0065;
				}
			}

IL_005f:
			{
				BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * L_14 = V_1;
				NullCheck(L_14);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
			}

IL_0065:
			{
				IL2CPP_END_FINALLY(92)
			}
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(92)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x66, IL_0066)
		}

IL_0066:
		{
			// return m.ToArray();
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = V_0;
			NullCheck(L_15);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
			L_16 = VirtualFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_15);
			V_2 = L_16;
			IL2CPP_LEAVE(0x79, FINALLY_006f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{// begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_17 = V_0;
			if (!L_17)
			{
				goto IL_0078;
			}
		}

IL_0072:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(111)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_2;
		return L_19;
	}
}
// Oculus.Platform.Samples.NetChat.chatPacket Oculus.Platform.Samples.NetChat.chatPacket::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * chatPacket_Deserialize_m6EF6B91BC7BA7719FEBCBDA8BEAF534F15E16608 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * V_0 = NULL;
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_1 = NULL;
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// chatPacket result = new chatPacket();
		chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * L_0 = (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B *)il2cpp_codegen_object_new(chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B_il2cpp_TypeInfo_var);
		chatPacket__ctor_m6A37A3891EAE60ED34FF208CD6A4DF8D612AF96A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// using (MemoryStream m = new MemoryStream(data))
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000d:
	try
	{// begin try (depth: 1)
		{
			// using (BinaryReader reader = new BinaryReader(m))
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_3 = V_1;
			BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_4 = (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *)il2cpp_codegen_object_new(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
			BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60(L_4, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
		}

IL_0014:
		try
		{// begin try (depth: 2)
			// result.packetID = reader.ReadInt32();
			chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * L_5 = V_0;
			BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_6 = V_2;
			NullCheck(L_6);
			int32_t L_7;
			L_7 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
			NullCheck(L_5);
			chatPacket_set_packetID_m6647D7848A8B0E0FCBB45C1FF46A57509BC6BC97_inline(L_5, L_7, /*hidden argument*/NULL);
			// result.textString = System.Text.Encoding.Default.GetString(reader.ReadBytes(Constants.BUFFER_SIZE));
			chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * L_8 = V_0;
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9;
			L_9 = Encoding_get_Default_mD23CF53E5DA0AEFBB43AA971685B67EABE5FC7A2(/*hidden argument*/NULL);
			BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_10 = V_2;
			NullCheck(L_10);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
			L_11 = VirtualFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_10, ((int32_t)512));
			NullCheck(L_9);
			String_t* L_12;
			L_12 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_9, L_11);
			NullCheck(L_8);
			chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233_inline(L_8, L_12, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x51, FINALLY_003d);
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_003d;
		}

FINALLY_003d:
		{// begin finally (depth: 2)
			{
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_13 = V_2;
				if (!L_13)
				{
					goto IL_0046;
				}
			}

IL_0040:
			{
				BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * L_14 = V_2;
				NullCheck(L_14);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
			}

IL_0046:
			{
				IL2CPP_END_FINALLY(61)
			}
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(61)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x51, FINALLY_0047);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{// begin finally (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = V_1;
			if (!L_15)
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_16 = V_1;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(71)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
	}

IL_0051:
	{
		// return result;
		chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * L_17 = V_0;
		return L_17;
	}
}
// System.Void Oculus.Platform.Samples.NetChat.chatPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chatPacket__ctor_m6A37A3891EAE60ED34FF208CD6A4DF8D612AF96A (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(int16_t*, uintptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___pcmData0' to native representation
	int16_t* ____pcmData0_marshaled = NULL;
	if (___pcmData0 != NULL)
	{
		____pcmData0_marshaled = reinterpret_cast<int16_t*>((___pcmData0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____pcmData0_marshaled, ___pcmDataLength1, ___frequency2, ___numChannels3);

}
// System.Void Oculus.Platform.CAPI/FilterCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback__ctor_mAFC9FE121057123728CE41E392E4C07FDF2C1FB6 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.CAPI/FilterCallback::Invoke(System.Int16[],System.UIntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback_Invoke_mE02FDBF7FFA47F639A2B77241ADEC097956300E1 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*, uintptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pcmData0, ___pcmDataLength1, ___frequency2, ___numChannels3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.CAPI/FilterCallback::BeginInvoke(System.Int16[],System.UIntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FilterCallback_BeginInvoke_mBAD9199C195E160A7F2E6488EB6A15C2C77550EA (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___pcmData0, uintptr_t ___pcmDataLength1, int32_t ___frequency2, int32_t ___numChannels3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___pcmData0;
	__d_args[1] = Box(UIntPtr_t_il2cpp_TypeInfo_var, &___pcmDataLength1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frequency2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___numChannels3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Oculus.Platform.CAPI/FilterCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterCallback_EndInvoke_mE5D9DD6BAB4992838DC9D38F15DC0CD8B93CF411 (FilterCallback_t14ED75CC0DB61F161FE03B54F2D4C307FD211303 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled)
{
	marshaled.___sType_0 = unmarshaled.get_sType_0();
	marshaled.___email_1 = il2cpp_codegen_marshal_string(unmarshaled.get_email_1());
	marshaled.___password_2 = il2cpp_codegen_marshal_string(unmarshaled.get_password_2());
	marshaled.___appId_3 = unmarshaled.get_appId_3();
	marshaled.___uriPrefixOverride_4 = il2cpp_codegen_marshal_string(unmarshaled.get_uriPrefixOverride_4());
}
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke_back(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled)
{
	int32_t unmarshaled_sType_temp_0 = 0;
	unmarshaled_sType_temp_0 = marshaled.___sType_0;
	unmarshaled.set_sType_0(unmarshaled_sType_temp_0);
	unmarshaled.set_email_1(il2cpp_codegen_marshal_string_result(marshaled.___email_1));
	unmarshaled.set_password_2(il2cpp_codegen_marshal_string_result(marshaled.___password_2));
	uint64_t unmarshaled_appId_temp_3 = 0;
	unmarshaled_appId_temp_3 = marshaled.___appId_3;
	unmarshaled.set_appId_3(unmarshaled_appId_temp_3);
	unmarshaled.set_uriPrefixOverride_4(il2cpp_codegen_marshal_string_result(marshaled.___uriPrefixOverride_4));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_pinvoke_cleanup(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___email_1);
	marshaled.___email_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___password_2);
	marshaled.___password_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___uriPrefixOverride_4);
	marshaled.___uriPrefixOverride_4 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled)
{
	marshaled.___sType_0 = unmarshaled.get_sType_0();
	marshaled.___email_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_email_1());
	marshaled.___password_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_password_2());
	marshaled.___appId_3 = unmarshaled.get_appId_3();
	marshaled.___uriPrefixOverride_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_uriPrefixOverride_4());
}
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com_back(const OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled, OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5& unmarshaled)
{
	int32_t unmarshaled_sType_temp_0 = 0;
	unmarshaled_sType_temp_0 = marshaled.___sType_0;
	unmarshaled.set_sType_0(unmarshaled_sType_temp_0);
	unmarshaled.set_email_1(il2cpp_codegen_marshal_bstring_result(marshaled.___email_1));
	unmarshaled.set_password_2(il2cpp_codegen_marshal_bstring_result(marshaled.___password_2));
	uint64_t unmarshaled_appId_temp_3 = 0;
	unmarshaled_appId_temp_3 = marshaled.___appId_3;
	unmarshaled.set_appId_3(unmarshaled_appId_temp_3);
	unmarshaled.set_uriPrefixOverride_4(il2cpp_codegen_marshal_bstring_result(marshaled.___uriPrefixOverride_4));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/OculusInitParams
IL2CPP_EXTERN_C void OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshal_com_cleanup(OculusInitParams_t778F2E0F1199F2A286D402C32A7203A53FDC80E5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___email_1);
	marshaled.___email_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___password_2);
	marshaled.___password_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___uriPrefixOverride_4);
	marshaled.___uriPrefixOverride_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_string(unmarshaled.get_key__0());
	marshaled.___valueType__1 = unmarshaled.get_valueType__1();
	marshaled.___stringValue__2 = il2cpp_codegen_marshal_string(unmarshaled.get_stringValue__2());
	marshaled.___intValue__3 = unmarshaled.get_intValue__3();
	marshaled.___doubleValue__4 = unmarshaled.get_doubleValue__4();
}
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke_back(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_string_result(marshaled.___key__0));
	int32_t unmarshaled_valueType__temp_1 = 0;
	unmarshaled_valueType__temp_1 = marshaled.___valueType__1;
	unmarshaled.set_valueType__1(unmarshaled_valueType__temp_1);
	unmarshaled.set_stringValue__2(il2cpp_codegen_marshal_string_result(marshaled.___stringValue__2));
	int32_t unmarshaled_intValue__temp_3 = 0;
	unmarshaled_intValue__temp_3 = marshaled.___intValue__3;
	unmarshaled.set_intValue__3(unmarshaled_intValue__temp_3);
	double unmarshaled_doubleValue__temp_4 = 0.0;
	unmarshaled_doubleValue__temp_4 = marshaled.___doubleValue__4;
	unmarshaled.set_doubleValue__4(unmarshaled_doubleValue__temp_4);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_pinvoke_cleanup(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___key__0);
	marshaled.___key__0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___stringValue__2);
	marshaled.___stringValue__2 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_key__0());
	marshaled.___valueType__1 = unmarshaled.get_valueType__1();
	marshaled.___stringValue__2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_stringValue__2());
	marshaled.___intValue__3 = unmarshaled.get_intValue__3();
	marshaled.___doubleValue__4 = unmarshaled.get_doubleValue__4();
}
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com_back(const ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled, ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_bstring_result(marshaled.___key__0));
	int32_t unmarshaled_valueType__temp_1 = 0;
	unmarshaled_valueType__temp_1 = marshaled.___valueType__1;
	unmarshaled.set_valueType__1(unmarshaled_valueType__temp_1);
	unmarshaled.set_stringValue__2(il2cpp_codegen_marshal_bstring_result(marshaled.___stringValue__2));
	int32_t unmarshaled_intValue__temp_3 = 0;
	unmarshaled_intValue__temp_3 = marshaled.___intValue__3;
	unmarshaled.set_intValue__3(unmarshaled_intValue__temp_3);
	double unmarshaled_doubleValue__temp_4 = 0.0;
	unmarshaled_doubleValue__temp_4 = marshaled.___doubleValue__4;
	unmarshaled.set_doubleValue__4(unmarshaled_doubleValue__temp_4);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrKeyValuePair
IL2CPP_EXTERN_C void ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshal_com_cleanup(ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___key__0);
	marshaled.___key__0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___stringValue__2);
	marshaled.___stringValue__2 = NULL;
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44 (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.String;
		__this->set_valueType__1(0);
		// stringValue_ = value;
		String_t* L_1 = ___value1;
		__this->set_stringValue__2(L_1);
		// intValue_ = 0;
		__this->set_intValue__3(0);
		// doubleValue_ = 0.0;
		__this->set_doubleValue__4((0.0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_m5089885D4B2E1B074A2D19CB31CDA1C95B5A9E44(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.Int;
		__this->set_valueType__1(1);
		// intValue_ = value;
		int32_t L_1 = ___value1;
		__this->set_intValue__3(L_1);
		// stringValue_ = null;
		__this->set_stringValue__2((String_t*)NULL);
		// doubleValue_ = 0.0;
		__this->set_doubleValue__4((0.0));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_mDD91C89A37A35960315830ED9BD48D7852A312FA(_thisAdjusted, ___key0, ___value1, method);
}
// System.Void Oculus.Platform.CAPI/ovrKeyValuePair::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E (ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// valueType_ = KeyValuePairType.Double;
		__this->set_valueType__1(2);
		// doubleValue_ = value;
		double L_1 = ___value1;
		__this->set_doubleValue__4(L_1);
		// stringValue_ = null;
		__this->set_stringValue__2((String_t*)NULL);
		// intValue_ = 0;
		__this->set_intValue__3(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, double ___value1, const RuntimeMethod* method)
{
	ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ovrKeyValuePair_t3C944248A9D422332F7F67D4F8D90630886F7C32 *>(__this + _offset);
	ovrKeyValuePair__ctor_m3DF658E3E7008378859D88FE4B1A5C8D6EC4459E(_thisAdjusted, ___key0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrMatchmakingCriterion
IL2CPP_EXTERN_C void ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshal_pinvoke(const ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4& unmarshaled, ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_pinvoke& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_string(unmarshaled.get_key__0());
	marshaled.___importance__1 = unmarshaled.get_importance__1();
	marshaled.___parameterArray_2 = unmarshaled.get_parameterArray_2();
	marshaled.___parameterArrayCount_3 = unmarshaled.get_parameterArrayCount_3();
}
IL2CPP_EXTERN_C void ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshal_pinvoke_back(const ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_pinvoke& marshaled, ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_string_result(marshaled.___key__0));
	int32_t unmarshaled_importance__temp_1 = 0;
	unmarshaled_importance__temp_1 = marshaled.___importance__1;
	unmarshaled.set_importance__1(unmarshaled_importance__temp_1);
	intptr_t unmarshaled_parameterArray_temp_2;
	memset((&unmarshaled_parameterArray_temp_2), 0, sizeof(unmarshaled_parameterArray_temp_2));
	unmarshaled_parameterArray_temp_2 = marshaled.___parameterArray_2;
	unmarshaled.set_parameterArray_2(unmarshaled_parameterArray_temp_2);
	uint32_t unmarshaled_parameterArrayCount_temp_3 = 0;
	unmarshaled_parameterArrayCount_temp_3 = marshaled.___parameterArrayCount_3;
	unmarshaled.set_parameterArrayCount_3(unmarshaled_parameterArrayCount_temp_3);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrMatchmakingCriterion
IL2CPP_EXTERN_C void ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshal_pinvoke_cleanup(ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___key__0);
	marshaled.___key__0 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.CAPI/ovrMatchmakingCriterion
IL2CPP_EXTERN_C void ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshal_com(const ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4& unmarshaled, ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_com& marshaled)
{
	marshaled.___key__0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_key__0());
	marshaled.___importance__1 = unmarshaled.get_importance__1();
	marshaled.___parameterArray_2 = unmarshaled.get_parameterArray_2();
	marshaled.___parameterArrayCount_3 = unmarshaled.get_parameterArrayCount_3();
}
IL2CPP_EXTERN_C void ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshal_com_back(const ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_com& marshaled, ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4& unmarshaled)
{
	unmarshaled.set_key__0(il2cpp_codegen_marshal_bstring_result(marshaled.___key__0));
	int32_t unmarshaled_importance__temp_1 = 0;
	unmarshaled_importance__temp_1 = marshaled.___importance__1;
	unmarshaled.set_importance__1(unmarshaled_importance__temp_1);
	intptr_t unmarshaled_parameterArray_temp_2;
	memset((&unmarshaled_parameterArray_temp_2), 0, sizeof(unmarshaled_parameterArray_temp_2));
	unmarshaled_parameterArray_temp_2 = marshaled.___parameterArray_2;
	unmarshaled.set_parameterArray_2(unmarshaled_parameterArray_temp_2);
	uint32_t unmarshaled_parameterArrayCount_temp_3 = 0;
	unmarshaled_parameterArrayCount_temp_3 = marshaled.___parameterArrayCount_3;
	unmarshaled.set_parameterArrayCount_3(unmarshaled_parameterArrayCount_temp_3);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.CAPI/ovrMatchmakingCriterion
IL2CPP_EXTERN_C void ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshal_com_cleanup(ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___key__0);
	marshaled.___key__0 = NULL;
}
// System.Void Oculus.Platform.CAPI/ovrMatchmakingCriterion::.ctor(System.String,Oculus.Platform.MatchmakingCriterionImportance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ovrMatchmakingCriterion__ctor_m09A0F305763EA10F497DCE62E015CC3DFA5958FE (ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 * __this, String_t* ___key0, int32_t ___importance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// key_ = key;
		String_t* L_0 = ___key0;
		__this->set_key__0(L_0);
		// importance_ = importance;
		int32_t L_1 = ___importance1;
		__this->set_importance__1(L_1);
		// parameterArray = IntPtr.Zero;
		__this->set_parameterArray_2((intptr_t)(0));
		// parameterArrayCount = 0;
		__this->set_parameterArrayCount_3(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ovrMatchmakingCriterion__ctor_m09A0F305763EA10F497DCE62E015CC3DFA5958FE_AdjustorThunk (RuntimeObject * __this, String_t* ___key0, int32_t ___importance1, const RuntimeMethod* method)
{
	ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ovrMatchmakingCriterion_t1FB116F2E9DB415F6E2BDFD8A9BD87A0538F94E4 *>(__this + _offset);
	ovrMatchmakingCriterion__ctor_m09A0F305763EA10F497DCE62E015CC3DFA5958FE(_thisAdjusted, ___key0, ___importance1, method);
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
// System.Void Oculus.Platform.Callback/RequestCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback__ctor_m3B77D4730A2A359D3EA979B86606A15D203283C1 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, const RuntimeMethod* method)
{
	{
		// public RequestCallback() { }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public RequestCallback() { }
		return;
	}
}
// System.Void Oculus.Platform.Callback/RequestCallback::.ctor(Oculus.Platform.Message/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback__ctor_mB95BB8E3F42EBDB5546542F47CB412DD97FCAE03 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * ___callback0, const RuntimeMethod* method)
{
	{
		// public RequestCallback(Message.Callback callback)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.messageCallback = callback;
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = ___callback0;
		__this->set_messageCallback_0(L_0);
		// }
		return;
	}
}
// System.Void Oculus.Platform.Callback/RequestCallback::HandleMessage(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestCallback_HandleMessage_mE69959A7787F575EE024BDBF803CB42538E2D3C3 (RequestCallback_tD5DFE93D3739B23D0CDCED7C99E5FEB2585BA7DF * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___msg0, const RuntimeMethod* method)
{
	{
		// if (messageCallback != null)
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_0 = __this->get_messageCallback_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// messageCallback(msg);
		Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * L_1 = __this->get_messageCallback_0();
		Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * L_2 = ___msg0;
		NullCheck(L_1);
		Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0014:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshal_pinvoke(const PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D& unmarshaled, PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
IL2CPP_EXTERN_C void PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshal_pinvoke_back(const PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_pinvoke& marshaled, PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D& unmarshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshal_pinvoke_cleanup(PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshal_com(const PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D& unmarshaled, PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_com& marshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
IL2CPP_EXTERN_C void PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshal_com_back(const PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_com& marshaled, PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D& unmarshaled)
{
	Exception_t* ___piece_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'piece' of type 'PositionInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___piece_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrBoardGame.GameBoard/PositionInfo
IL2CPP_EXTERN_C void PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshal_com_cleanup(PositionInfo_t034D1DE9796C6C07E80EB2C7B3A4BF4B0174531D_marshaled_com& marshaled)
{
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
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHighScoreLeaderboardUpdated__ctor_mFFB6F78E5A0C72C65A883B89190A54497B3666E7 (OnHighScoreLeaderboardUpdated_t3D7889CCD1CF5D3138F9BA740B6B257BACB92063 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated::Invoke(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHighScoreLeaderboardUpdated_Invoke_m1D9BA9DDD6FF69D67E5D8F1E49E48F10CED5D745 (OnHighScoreLeaderboardUpdated_t3D7889CCD1CF5D3138F9BA740B6B257BACB92063 * __this, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B * ___entries0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entries0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___entries0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___entries0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___entries0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___entries0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___entries0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entries0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entries0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___entries0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated::BeginInvoke(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnHighScoreLeaderboardUpdated_BeginInvoke_m938001171E35AAFC9236CB7FBB30CCDE9B71CA31 (OnHighScoreLeaderboardUpdated_t3D7889CCD1CF5D3138F9BA740B6B257BACB92063 * __this, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B * ___entries0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___entries0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnHighScoreLeaderboardUpdated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHighScoreLeaderboardUpdated_EndInvoke_m5C3ECB1F7BCA305ABAAABB3CEEDDC9A15CAEC5BD (OnHighScoreLeaderboardUpdated_t3D7889CCD1CF5D3138F9BA740B6B257BACB92063 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMostWinsLeaderboardUpdated__ctor_m720D99241E2C71FDF291F6A72FF52B4E258FD6BD (OnMostWinsLeaderboardUpdated_t4A02F9D52EBD70CF987D7A8ABB53DE5E6D1B7BDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated::Invoke(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMostWinsLeaderboardUpdated_Invoke_m26DC4E416F4150619DA67704AF1A01624993E88F (OnMostWinsLeaderboardUpdated_t4A02F9D52EBD70CF987D7A8ABB53DE5E6D1B7BDA * __this, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B * ___entries0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entries0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___entries0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___entries0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___entries0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___entries0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___entries0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entries0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___entries0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___entries0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated::BeginInvoke(System.Collections.Generic.SortedDictionary`2<System.Int32,Oculus.Platform.Models.LeaderboardEntry>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMostWinsLeaderboardUpdated_BeginInvoke_mF08AB132783B7406E93BF6364631D930AD1D68FE (OnMostWinsLeaderboardUpdated_t4A02F9D52EBD70CF987D7A8ABB53DE5E6D1B7BDA * __this, SortedDictionary_2_tAEB384EE86E5B106F155EEE33854D36C7CFD4B6B * ___entries0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___entries0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Samples.VrHoops.LeaderboardManager/OnMostWinsLeaderboardUpdated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMostWinsLeaderboardUpdated_EndInvoke_m3A3A999A44006F533A069BF8CA1A26C4438E1E23 (OnMostWinsLeaderboardUpdated_t4A02F9D52EBD70CF987D7A8ABB53DE5E6D1B7BDA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Oculus.Platform.Matchmaking/CustomQuery::ToUnmanaged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomQuery_ToUnmanaged_mB5DA3C1BA561DD0BAB7D4888CEB40996F99E0B43 (CustomQuery_tE222BFE49B3B2183F16D8ECBA6BC65B3CF917B3A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// var customQueryUnmanaged = new CAPI.ovrMatchmakingCustomQueryData();
		il2cpp_codegen_initobj((&V_0), sizeof(ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28 ));
		// if(criteria != null && criteria.Length > 0)
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_0 = __this->get_criteria_1();
		if (!L_0)
		{
			goto IL_0133;
		}
	}
	{
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_1 = __this->get_criteria_1();
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0133;
		}
	}
	{
		// customQueryUnmanaged.criterionArrayCount = (uint)criteria.Length;
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_2 = __this->get_criteria_1();
		NullCheck(L_2);
		(&V_0)->set_criterionArrayCount_3(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		// var temp = new CAPI.ovrMatchmakingCriterion[criteria.Length];
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_3 = __this->get_criteria_1();
		NullCheck(L_3);
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_4 = (ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C*)(ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C*)SZArrayNew(ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = L_4;
		// for(int i=0; i<criteria.Length; i++)
		V_3 = 0;
		goto IL_0116;
	}

IL_0043:
	{
		// temp[i].importance_ = criteria[i].importance;
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_7 = __this->get_criteria_1();
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_importance_1();
		((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->set_importance__1(L_9);
		// temp[i].key_ = criteria[i].key;
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_10 = V_2;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_12 = __this->get_criteria_1();
		int32_t L_13 = V_3;
		NullCheck(L_12);
		String_t* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_key_0();
		((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->set_key__0(L_14);
		// if(criteria[i].parameters != null && criteria[i].parameters.Count > 0)
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_15 = __this->get_criteria_1();
		int32_t L_16 = V_3;
		NullCheck(L_15);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->get_parameters_2();
		if (!L_17)
		{
			goto IL_00f4;
		}
	}
	{
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_18 = __this->get_criteria_1();
		int32_t L_19 = V_3;
		NullCheck(L_18);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_parameters_2();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_20, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		// temp[i].parameterArrayCount = (uint)criteria[i].parameters.Count;
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_22 = V_2;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_24 = __this->get_criteria_1();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->get_parameters_2();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_26, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->set_parameterArrayCount_3(L_27);
		// temp[i].parameterArray = CAPI.ArrayOfStructsToIntPtr(CAPI.DictionaryToOVRKeyValuePairs(criteria[i].parameters));
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_30 = __this->get_criteria_1();
		int32_t L_31 = V_3;
		NullCheck(L_30);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->get_parameters_2();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_33;
		L_33 = CAPI_DictionaryToOVRKeyValuePairs_mCD9582605B888E9BF9E71D30F24BD5E727BB143B(L_32, /*hidden argument*/NULL);
		intptr_t L_34;
		L_34 = CAPI_ArrayOfStructsToIntPtr_mED4354D998FF93434B9ECEABB82393C65D625570((RuntimeArray *)(RuntimeArray *)L_33, /*hidden argument*/NULL);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->set_parameterArray_2((intptr_t)L_34);
		// }
		goto IL_0112;
	}

IL_00f4:
	{
		// temp[i].parameterArrayCount = 0;
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_35 = V_2;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->set_parameterArrayCount_3(0);
		// temp[i].parameterArray = IntPtr.Zero;
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_37 = V_2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)))->set_parameterArray_2((intptr_t)(0));
	}

IL_0112:
	{
		// for(int i=0; i<criteria.Length; i++)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_0116:
	{
		// for(int i=0; i<criteria.Length; i++)
		int32_t L_40 = V_3;
		CriterionU5BU5D_t9EC64C7744F462D25CB314CC74DBC8FA49127AEB* L_41 = __this->get_criteria_1();
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		// customQueryUnmanaged.criterionArray = CAPI.ArrayOfStructsToIntPtr(temp);
		ovrMatchmakingCriterionU5BU5D_t24E7A26F8EB874C2677E4D85B8993CDB8DE03F6C* L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		intptr_t L_43;
		L_43 = CAPI_ArrayOfStructsToIntPtr_mED4354D998FF93434B9ECEABB82393C65D625570((RuntimeArray *)(RuntimeArray *)L_42, /*hidden argument*/NULL);
		(&V_0)->set_criterionArray_2((intptr_t)L_43);
		// }
		goto IL_0147;
	}

IL_0133:
	{
		// customQueryUnmanaged.criterionArrayCount = 0;
		(&V_0)->set_criterionArrayCount_3(0);
		// customQueryUnmanaged.criterionArray = IntPtr.Zero;
		(&V_0)->set_criterionArray_2((intptr_t)(0));
	}

IL_0147:
	{
		// if(data != null && data.Count > 0)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_44 = __this->get_data_0();
		if (!L_44)
		{
			goto IL_0188;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_45 = __this->get_data_0();
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_45, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0188;
		}
	}
	{
		// customQueryUnmanaged.dataArrayCount = (uint)data.Count;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_47 = __this->get_data_0();
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546(L_47, /*hidden argument*/Dictionary_2_get_Count_m41D28F48221F99DB3016C0F5CF4B210291338546_RuntimeMethod_var);
		(&V_0)->set_dataArrayCount_1(L_48);
		// customQueryUnmanaged.dataArray = CAPI.ArrayOfStructsToIntPtr(CAPI.DictionaryToOVRKeyValuePairs(data));
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_49 = __this->get_data_0();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		ovrKeyValuePairU5BU5D_t33331B086F2DB995E6E8C0EF1E5D37F0BCABF455* L_50;
		L_50 = CAPI_DictionaryToOVRKeyValuePairs_mCD9582605B888E9BF9E71D30F24BD5E727BB143B(L_49, /*hidden argument*/NULL);
		intptr_t L_51;
		L_51 = CAPI_ArrayOfStructsToIntPtr_mED4354D998FF93434B9ECEABB82393C65D625570((RuntimeArray *)(RuntimeArray *)L_50, /*hidden argument*/NULL);
		(&V_0)->set_dataArray_0((intptr_t)L_51);
		// }
		goto IL_019c;
	}

IL_0188:
	{
		// customQueryUnmanaged.dataArrayCount = 0;
		(&V_0)->set_dataArrayCount_1(0);
		// customQueryUnmanaged.dataArray = IntPtr.Zero;
		(&V_0)->set_dataArray_0((intptr_t)(0));
	}

IL_019c:
	{
		// IntPtr res = Marshal.AllocHGlobal(Marshal.SizeOf(customQueryUnmanaged));
		ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  L_52 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		int32_t L_53;
		L_53 = Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E(L_52, /*hidden argument*/Marshal_SizeOf_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_m1C3B7AA44567D9BB1D0B7FF1F549CBAD640A829E_RuntimeMethod_var);
		intptr_t L_54;
		L_54 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_53, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_54;
		// Marshal.StructureToPtr(customQueryUnmanaged, res, true);
		ovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28  L_55 = V_0;
		intptr_t L_56 = V_1;
		Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356(L_55, (intptr_t)L_56, (bool)1, /*hidden argument*/Marshal_StructureToPtr_TisovrMatchmakingCustomQueryData_t279B7FD77E3DEC841F556E9A7067BE7992C9CE28_mC023BFD7C2043AAAA16E98BD2802EE4007561356_RuntimeMethod_var);
		// return res;
		intptr_t L_57 = V_1;
		return (intptr_t)L_57;
	}
}
// System.Void Oculus.Platform.Matchmaking/CustomQuery::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomQuery__ctor_m8ED06E5F66025FE104B301E334D28B3CCC9392E9 (CustomQuery_tE222BFE49B3B2183F16D8ECBA6BC65B3CF917B3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, bool ___successful0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___successful0));

}
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnqueueResult__ctor_m613E2E56B6B2F7D57D8202833C843C533B8C0A29 (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnqueueResult_Invoke_mC248E0621273813C92F06AEB1A9957808AF7A3FC (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, bool ___successful0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___successful0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___successful0, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___successful0, targetMethod);
		}
	}
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnEnqueueResult_BeginInvoke_mD23777EDE77E3D68732D1004F33E0A6CF99C7266 (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, bool ___successful0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___successful0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnEnqueueResult::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnqueueResult_EndInvoke_m542495F9176717DB53ED2B03C2755CF4CA916E80 (OnEnqueueResult_tAE0EEC047F8B1FF9C23B17C2E06B8A21C66D19BE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMatchPlayerAdded__ctor_m6B607CA10680EF3C718C3DD974C9BD6396EF865D (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Oculus.Platform.Samples.VrHoops.Player Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::Invoke(System.Int32,Oculus.Platform.Models.User)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * OnMatchPlayerAdded_Invoke_m0606703037BDE0093C98438FB8C3EF7524820901 (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, int32_t ___slot0, User_tA163463AE919860D9B337F6104B028990A44B69D * ___user1, const RuntimeMethod* method)
{
	Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * result = NULL;
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
			if (___parameterCount == 2)
			{
				// open
				typedef Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * (*FunctionPointerType) (int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___slot0, ___user1, targetMethod);
			}
			else
			{
				// closed
				typedef Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * (*FunctionPointerType) (void*, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___slot0, ___user1, targetMethod);
			}
		}
		else
		{
			// closed
			typedef Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * (*FunctionPointerType) (void*, int32_t, User_tA163463AE919860D9B337F6104B028990A44B69D *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___slot0, ___user1, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::BeginInvoke(System.Int32,Oculus.Platform.Models.User,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMatchPlayerAdded_BeginInvoke_mB9C1ACD5BC59D5665E0EE9CA76E6432E6A537B26 (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, int32_t ___slot0, User_tA163463AE919860D9B337F6104B028990A44B69D * ___user1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___slot0);
	__d_args[1] = ___user1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Oculus.Platform.Samples.VrHoops.Player Oculus.Platform.Samples.VrHoops.MatchmakingManager/OnMatchPlayerAdded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 * OnMatchPlayerAdded_EndInvoke_m61B133FC2F89B83C8E8BBFDEB34653DF9F94F105 (OnMatchPlayerAdded_t08BB3354D85A439DA0267873495B2754FA74D1E0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Player_t8207E7470835FE64F6C6F279735E65BB9F13BFF0 *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.Message/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_mAC564D6964EDAEDEB158A4FEB741444645CEFAEB (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.Message/Callback::Invoke(Oculus.Platform.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_mDC50EE4F978809B23970C33936C48F628E386C37 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (currentDelegate->get_method_is_virtual_10())
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtualActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis == NULL)
			{
				typedef void (*FunctionPointerType) (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Oculus.Platform.Message/Callback::BeginInvoke(Oculus.Platform.Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m5B4DC917F8773EDCD11662E01027295E04086E30 (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Oculus.Platform.Message/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_m629498715CDFA7B26764CEDBEA3DB2A2F29FE27F (Callback_t1F4C63FF125A62827947CAE7BB975E4E54A2DFF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.Message/ExtraMessageTypesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtraMessageTypesHandler__ctor_m8CCAD880D1B65AC804C1C29FEEAC2309AB794672 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::Invoke(System.IntPtr,Oculus.Platform.Message/MessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_Invoke_mF3C0E6177A016D6B3AAB79420833149C6A171873 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, const RuntimeMethod* method)
{
	Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * result = NULL;
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
			if (___parameterCount == 2)
			{
				// open
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___messageHandle0, ___message_type1, targetMethod);
			}
			else
			{
				// closed
				typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
			}
		}
		else
		{
			// closed
			typedef Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * (*FunctionPointerType) (void*, intptr_t, uint32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___messageHandle0, ___message_type1, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Message/ExtraMessageTypesHandler::BeginInvoke(System.IntPtr,Oculus.Platform.Message/MessageType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtraMessageTypesHandler_BeginInvoke_m2EEB388D56B9E86FB9AF9055E09E94CA1080B7B9 (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, intptr_t ___messageHandle0, uint32_t ___message_type1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___messageHandle0);
	__d_args[1] = Box(MessageType_t7B1DFA54C161B3023552B603E7825FAE33FF1C55_il2cpp_TypeInfo_var, &___message_type1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Oculus.Platform.Message Oculus.Platform.Message/ExtraMessageTypesHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 * ExtraMessageTypesHandler_EndInvoke_mC66AAD40993CE67A2E25F6FE2A45284E5DA71A6D (ExtraMessageTypesHandler_tFEB8C64088CF3DC369A496F09718B732BA2B59BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Message_t3B64979D0762A89E8343E6EA5BB825A5E6CF23F9 *)__result;;
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
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager/RemotePlayerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemotePlayerData__ctor_mF7280EBB08F218CEF343311BEAABA9AAB3E225DF (RemotePlayerData_t4AEB364F66A738769AD7E4EF022C851AD40EC8DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Dictionary<int, P2PNetworkBall> activeBalls = new Dictionary<int, P2PNetworkBall>();
		Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED * L_0 = (Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED *)il2cpp_codegen_object_new(Dictionary_2_t059BAFDBB7C69684BFD88C516135EAA2BE69B2ED_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0(L_0, /*hidden argument*/Dictionary_2__ctor_m7F5455159CD9BC8833D1DB3BDD6E6BE098EB1CC0_RuntimeMethod_var);
		__this->set_activeBalls_4(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, float ___remoteTime0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___remoteTime0);

	return returnValue;
}
// System.Void Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTimeOffer__ctor_m04A8B0FEEB8CE958DD034A8D55EF883FF015CD21 (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StartTimeOffer_Invoke_m129F9C3F463B5EE7EC24AEE95B3AD6B3C9EFEFBB (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, float ___remoteTime0, const RuntimeMethod* method)
{
	float result = 0.0f;
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
			if (___parameterCount == 1)
			{
				// open
				typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___remoteTime0, targetMethod);
			}
			else
			{
				// closed
				typedef float (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___remoteTime0, targetMethod);
			}
		}
		else
		{
			// closed
			typedef float (*FunctionPointerType) (void*, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___remoteTime0, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartTimeOffer_BeginInvoke_mA38697083442B8672FCFC3BD0E8B8DDAF2256CE2 (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, float ___remoteTime0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___remoteTime0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Single Oculus.Platform.Samples.VrHoops.P2PManager/StartTimeOffer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StartTimeOffer_EndInvoke_m2E344C6CFFE9192AF86FCDB0264EE2FCA8D070DE (StartTimeOffer_t6406FF7D45A4261D9BB6B192E729A617BB516170 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Oculus.Platform.PlatformInternal/HTTP::SetHttpTransferUpdateCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.HttpTransferUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HTTP_SetHttpTransferUpdateCallback_m903F66BAA503323EE1C4E0CD4F3D11A9C450265A (Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mAFCD46BC660098E122B2BB26192E0EF9C7D1476A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Callback.SetNotificationCallback(
		//   Message.MessageType.Notification_HTTP_Transfer,
		//   callback
		// );
		Callback_t7CB2ECDA7955C4AB66F4F1FD8E81399AEED7B32A * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(Callback_t113BF87B6D2C1230E19BC61FD25F85F8D7AB5925_il2cpp_TypeInfo_var);
		Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mAFCD46BC660098E122B2BB26192E0EF9C7D1476A(((int32_t)2111073839), L_0, /*hidden argument*/Callback_SetNotificationCallback_TisHttpTransferUpdate_tD2D9BB94C4E6C3D338F883B55CC928639AF911AC_mAFCD46BC660098E122B2BB26192E0EF9C7D1476A_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> Oculus.Platform.PlatformInternal/Users::GetLinkedAccounts(Oculus.Platform.ServiceProvider[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * Users_GetLinkedAccounts_mEEFB6FC17804B8C75BA287AFA1438E0CDC48754A (ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* ___providers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * V_0 = NULL;
	ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (Core.IsInitialized())
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// UserOptions userOpts = new UserOptions();
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_1 = (UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 *)il2cpp_codegen_object_new(UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706_il2cpp_TypeInfo_var);
		UserOptions__ctor_mB36DC71745D4B23B74F00DA241F44A2CE804C5A3(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_2 = ___providers0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0022;
	}

IL_0013:
	{
		// foreach (ServiceProvider provider in providers)
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// userOpts.AddServiceProvider(provider);
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		UserOptions_AddServiceProvider_m108F6F6407382322C6E5BF53711F02F5149CF1D6(L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0022:
	{
		// foreach (ServiceProvider provider in providers)
		int32_t L_10 = V_2;
		ServiceProviderU5BU5D_t0CC8BB70CEB9E9A9FFD509DC9DBA3B9B214EC345* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		// return new Request<Models.LinkedAccountList>(CAPI.ovr_User_GetLinkedAccounts((IntPtr)userOpts));
		UserOptions_tBB6D281F44CADE48D24C911088E83D40E8090706 * L_12 = V_0;
		intptr_t L_13;
		L_13 = UserOptions_op_Explicit_mD0DA9B575CCF52D07D9306D2DCC681C0EAEFD0F5(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uint64_t L_14;
		L_14 = CAPI_ovr_User_GetLinkedAccounts_m228EB54845ED4F04DB92565773630731EEAFCC9E((intptr_t)L_13, /*hidden argument*/NULL);
		Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 * L_15 = (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)il2cpp_codegen_object_new(Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530_il2cpp_TypeInfo_var);
		Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6(L_15, L_14, /*hidden argument*/Request_1__ctor_m89B6A9C76FF63AD6A099BB1C572EE02D1D35D8E6_RuntimeMethod_var);
		return L_15;
	}

IL_0039:
	{
		// return null;
		return (Request_1_t76D280BDCE2CCF506741C7CCEE15A4ADA7237530 *)NULL;
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
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m7A414CAB4DCE690FCC12891AB9CF6D817B564E4A (U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.PlatformManager/<>c__DisplayClass31_0::<SetActiveInvites>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CSetActiveInvitesU3Eb__0_m6951358EDD02BA91CA5110AFCFDC7C713577FBAD (U3CU3Ec__DisplayClass31_0_t6F9A2E2E226703452EC82D5BBBE99814A4EF9D1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => PlatformManager.AnswerCallOnClick(invite.RoomID));
		Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * L_0 = __this->get_address_of_invite_0();
		uint64_t L_1 = L_0->get_RoomID_0();
		IL2CPP_RUNTIME_CLASS_INIT(PlatformManager_t732E046A16DF5C93F5A26C91A9CD46A39AD3D193_il2cpp_TypeInfo_var);
		PlatformManager_AnswerCallOnClick_mA7BE446F4D5EC3B444BFCE5E1B23060B4C7AC371(L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_pinvoke(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke& marshaled)
{
	marshaled.___RoomID_0 = unmarshaled.get_RoomID_0();
	marshaled.___OwnerID_1 = il2cpp_codegen_marshal_string(unmarshaled.get_OwnerID_1());
}
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_pinvoke_back(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke& marshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled)
{
	uint64_t unmarshaled_RoomID_temp_0 = 0;
	unmarshaled_RoomID_temp_0 = marshaled.___RoomID_0;
	unmarshaled.set_RoomID_0(unmarshaled_RoomID_temp_0);
	unmarshaled.set_OwnerID_1(il2cpp_codegen_marshal_string_result(marshaled.___OwnerID_1));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_pinvoke_cleanup(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___OwnerID_1);
	marshaled.___OwnerID_1 = NULL;
}
// Conversion methods for marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_com(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com& marshaled)
{
	marshaled.___RoomID_0 = unmarshaled.get_RoomID_0();
	marshaled.___OwnerID_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_OwnerID_1());
}
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_com_back(const Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com& marshaled, Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43& unmarshaled)
{
	uint64_t unmarshaled_RoomID_temp_0 = 0;
	unmarshaled_RoomID_temp_0 = marshaled.___RoomID_0;
	unmarshaled.set_RoomID_0(unmarshaled_RoomID_temp_0);
	unmarshaled.set_OwnerID_1(il2cpp_codegen_marshal_bstring_result(marshaled.___OwnerID_1));
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite
IL2CPP_EXTERN_C void Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshal_com_cleanup(Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___OwnerID_1);
	marshaled.___OwnerID_1 = NULL;
}
// System.Void Oculus.Platform.Samples.VrVoiceChat.RoomManager/Invite::.ctor(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356 (Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * __this, uint64_t ___roomID0, String_t* ___owner1, const RuntimeMethod* method)
{
	{
		// this.RoomID = roomID;
		uint64_t L_0 = ___roomID0;
		__this->set_RoomID_0(L_0);
		// this.OwnerID = owner;
		String_t* L_1 = ___owner1;
		__this->set_OwnerID_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356_AdjustorThunk (RuntimeObject * __this, uint64_t ___roomID0, String_t* ___owner1, const RuntimeMethod* method)
{
	Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Invite_tC61621EF56E7E7D1424603462B21CC4024D73A43 *>(__this + _offset);
	Invite__ctor_m320FC26E143321B9DC9CFEEC3E1B8B296585F356(_thisAdjusted, ___roomID0, ___owner1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_mE62CADC1A93D3878C4AF2CAB4600B7A43E8D656E (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_m4CBFE3D9C43F42E512587B34F68FA069B9EF9989 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
		}
	}
}
// System.IAsyncResult Oculus.Platform.StandalonePlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m951569774A2ED1032DEB433269D86118D66270F9 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.StandalonePlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mD26CA4B73B70214F81E2A8D930EF8EE00EC37A92 (UnityLogDelegate_tB2CB8059E1CFBF5641177B63EFDFF4EE1E9CB563 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_Awake_m9538F15D80113236A3A698AD436CB902883F5080 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int bufferSizeElements = (int)CAPI.ovr_Voip_GetOutputBufferMaxSize();
		IL2CPP_RUNTIME_CLASS_INIT(CAPI_tD054DBBB123F0E34B5F10039EDF2ECC088766F1D_il2cpp_TypeInfo_var);
		uintptr_t L_0;
		L_0 = CAPI_ovr_Voip_GetOutputBufferMaxSize_m9799A26F0862BEE54F29A4667ABF9D3C9ED8EF77(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIntPtr_t_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = UIntPtr_op_Explicit_m8EF5FC1C0CAF58F8F2310C0D989F20F0694CD7CF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// scratchBuffer = new float[bufferSizeElements];
		int32_t L_2 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_scratchBuffer_5(L_3);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___channels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	{
		// int sizeToFetch = data.Length / channels;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = ___channels1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))/(int32_t)L_1));
		// int sourceBufferSize = sizeToFetch;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// if (sourceBufferSize > scratchBuffer.Length)
		int32_t L_3 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_scratchBuffer_5();
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		// Array.Clear(data, 0, data.Length);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___data0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___data0;
		NullCheck(L_6);
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_5, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		// throw new Exception(string.Format("Audio system tried to pull {0} bytes, max voip internal ring buffer size {1}", sizeToFetch, scratchBuffer.Length));
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = __this->get_scratchBuffer_5();
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68CFB983F069CCE71F266AEFF0FA7DB668B14B66)), L_9, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilterReadDelegate_OnAudioFilterRead_m8ED6BA99D4F148AED5807307B09253A44FBAB59C_RuntimeMethod_var)));
	}

IL_0040:
	{
		// int available = parent.pcmSource.PeekSizeElements();
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_15 = __this->get_parent_4();
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->get_pcmSource_7();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Oculus.Platform.IVoipPCMSource::PeekSizeElements() */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_16);
		V_2 = L_17;
		// if (available < sourceBufferSize)
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_007f;
		}
	}
	{
		// if (verboseLogging)
		IL2CPP_RUNTIME_CLASS_INIT(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var);
		bool L_20 = ((VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_StaticFields*)il2cpp_codegen_static_fields_for(VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD_il2cpp_TypeInfo_var))->get_verboseLogging_9();
		if (!L_20)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogFormat(
		//   "Voip starved! Want {0}, but only have {1} available",
		//   sourceBufferSize,
		//   available);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_21;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral5D3879374A4CBD07A4D2F2F9B6DA78099700E5D0, L_26, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// return;
		return;
	}

IL_007f:
	{
		// int copied = parent.pcmSource.GetPCM(scratchBuffer, sourceBufferSize);
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_30 = __this->get_parent_4();
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->get_pcmSource_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = __this->get_scratchBuffer_5();
		int32_t L_33 = V_1;
		NullCheck(L_31);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker2< int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int32_t >::Invoke(0 /* System.Int32 Oculus.Platform.IVoipPCMSource::GetPCM(System.Single[],System.Int32) */, IVoipPCMSource_tDB0FA546DAB2B96ECE25F53E7109D7BC4E960AEC_il2cpp_TypeInfo_var, L_31, L_32, L_33);
		V_3 = L_34;
		// if (copied < sourceBufferSize)
		int32_t L_35 = V_3;
		int32_t L_36 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_00be;
		}
	}
	{
		// Debug.LogWarningFormat(
		//   "GetPCM() returned {0} samples, expected {1}",
		//   copied,
		//   sourceBufferSize);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = L_37;
		int32_t L_39 = V_3;
		int32_t L_40 = L_39;
		RuntimeObject * L_41 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = L_38;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_45);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m405E9C0A631F815816F349D7591DD545932FF774(_stringLiteralF983B6DFB9BECB29801141D4286B4B7A30B80C2D, L_42, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00be:
	{
		// int dest = 0;
		V_4 = 0;
		// float tmpPeakAmp = -1;
		V_5 = (-1.0f);
		// for (int i = 0; i < sizeToFetch; i++)
		V_6 = 0;
		goto IL_0103;
	}

IL_00cd:
	{
		// float val = scratchBuffer[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = __this->get_scratchBuffer_5();
		int32_t L_47 = V_6;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		float L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_7 = L_49;
		// for (int j = 0; j < channels; j++)
		V_8 = 0;
		goto IL_00f8;
	}

IL_00dd:
	{
		// data[dest++] = val;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_50 = ___data0;
		int32_t L_51 = V_4;
		int32_t L_52 = L_51;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		float L_53 = V_7;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (float)L_53);
		// if (val > tmpPeakAmp)
		float L_54 = V_7;
		float L_55 = V_5;
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_00f2;
		}
	}
	{
		// tmpPeakAmp = val;
		float L_56 = V_7;
		V_5 = L_56;
	}

IL_00f2:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_57 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_00f8:
	{
		// for (int j = 0; j < channels; j++)
		int32_t L_58 = V_8;
		int32_t L_59 = ___channels1;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0103:
	{
		// for (int i = 0; i < sizeToFetch; i++)
		int32_t L_61 = V_6;
		int32_t L_62 = V_0;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00cd;
		}
	}
	{
		// parent.peakAmplitude = tmpPeakAmp;
		VoipAudioSourceHiLevel_t544BA7489912AB7CA427A5052959904EA92A4CBD * L_63 = __this->get_parent_4();
		float L_64 = V_5;
		NullCheck(L_63);
		L_63->set_peakAmplitude_6(L_64);
		// }
		return;
	}
}
// System.Void Oculus.Platform.VoipAudioSourceHiLevel/FilterReadDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilterReadDelegate__ctor_m30ADF76B8C36FA9BEC6180830B5B661E457DDD78 (FilterReadDelegate_tB95647D79045D87639D7BBA0F7F7DC6291192C94 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___tag0, ___msg1);

}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate__ctor_m75D3B3850C8B2DE6435D1495E90BDF37BDEA5124 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_Invoke_mED9E5A5F33A4FC185CA7A813EF24AB13080A2F30 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___tag0, ___msg1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___msg1, targetMethod);
		}
	}
}
// System.IAsyncResult Oculus.Platform.WindowsPlatform/UnityLogDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityLogDelegate_BeginInvoke_m0384626C20F86718E03B4DA02A456C3067B49029 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, intptr_t ___tag0, intptr_t ___msg1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___tag0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msg1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Oculus.Platform.WindowsPlatform/UnityLogDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogDelegate_EndInvoke_mBC6914A5F0EE519B48B8E21FF21FE3DE3E93B658 (UnityLogDelegate_t0D58729656F4D2530361D46246B6BE3B25EA95BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_pinvoke(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke& marshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_pinvoke_back(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke& marshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_pinvoke_cleanup(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_com(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com& marshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_com_back(const Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com& marshaled, Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51& unmarshaled)
{
	Exception_t* ___parameters_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parameters' of type 'Criterion'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parameters_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Oculus.Platform.Matchmaking/CustomQuery/Criterion
IL2CPP_EXTERN_C void Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshal_com_cleanup(Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51_marshaled_com& marshaled)
{
}
// System.Void Oculus.Platform.Matchmaking/CustomQuery/Criterion::.ctor(System.String,Oculus.Platform.MatchmakingCriterionImportance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8 (Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * __this, String_t* ___key_0, int32_t ___importance_1, const RuntimeMethod* method)
{
	{
		// key = key_;
		String_t* L_0 = ___key_0;
		__this->set_key_0(L_0);
		// importance = importance_;
		int32_t L_1 = ___importance_1;
		__this->set_importance_1(L_1);
		// parameters = null;
		__this->set_parameters_2((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8_AdjustorThunk (RuntimeObject * __this, String_t* ___key_0, int32_t ___importance_1, const RuntimeMethod* method)
{
	Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Criterion_t7C30F2D0DD5347F79227E2061C4398FB715BEF51 *>(__this + _offset);
	Criterion__ctor_m4513BE47CA052ABF9DFF08A75757350E0123EAC8(_thisAdjusted, ___key_0, ___importance_1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Core_IsInitialized_mAE8818B5E375BF175FA66AF2A22D96FD12CDDF31_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IsPlatformInitialized;
		IL2CPP_RUNTIME_CLASS_INIT(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var);
		bool L_0 = ((Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_StaticFields*)il2cpp_codegen_static_fields_for(Core_tA1AC09A89698AE3A4EBD9BFF7F1F305F235452F4_il2cpp_TypeInfo_var))->get_IsPlatformInitialized_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandalonePlatformSettings_get_OculusPlatformTestUserAccessToken_m04CA96D1E817707D55384B5D46F763D6504753C2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t NetworkingPeer_get_ID_m069985E3E54933C8DC6D737B79A7710E519A3D3E_inline (NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * __this, const RuntimeMethod* method)
{
	{
		// public UInt64 ID { get; private set; }
		uint64_t L_0 = __this->get_U3CIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkingPeer_get_State_mC2B21B34F2ED64AC8FE6632995FF67EC96F728A7_inline (NetworkingPeer_tBC5CC9ADD62E76151CB6F40C13279C12B5212F78 * __this, const RuntimeMethod* method)
{
	{
		// public PeerConnectionState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t WindowsPlatform_getCallbackPointer_m4860BE4D0128494085BD8735119E83848740E232_inline (WindowsPlatform_t4B1984074C6B2E4AAEB4E1E5B9CA1E09CEB80BD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IntPtr.Zero;
		return (intptr_t)(0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* chatPacket_get_textString_m96F63682016AD8F7F53456922F162BA17E319B47_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method)
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = __this->get_U3CtextStringU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_textString_m4C89E322F41EC1EAFDB25D614A9E35BC90E4E233_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string textString { get; set;  }
		String_t* L_0 = ___value0;
		__this->set_U3CtextStringU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t chatPacket_get_packetID_m75E0598ADD4BB45224DB84CD04AF515A2FB52177_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, const RuntimeMethod* method)
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = __this->get_U3CpacketIDU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void chatPacket_set_packetID_m6647D7848A8B0E0FCBB45C1FF46A57509BC6BC97_inline (chatPacket_tE882CEA984391A5382CC46A9D98EF07B6E1E8F1B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int packetID { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpacketIDU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Message_1_get_Data_mE88C457767098AA3B525BBD14703B8B17E0E1B0C_gshared_inline (Message_1_t4B027D6C6D76865BBC8D625255864C7AE1F4AD0C * __this, const RuntimeMethod* method)
{
	{
		// public T Data { get { return data; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_data_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mE1EE9A620823A4F0E954D6AD37004F0F90FCA278_gshared_inline (HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DeserializableList_1_get_NextUrl_m00A176EF859B931C348073F62FDCC7A56EC48D7E_gshared_inline (DeserializableList_1_tAFB1B110EDE95B59224368E51978899A3175BC3F * __this, const RuntimeMethod* method)
{
	{
		// public string NextUrl         { get { return _NextUrl;                                  } }
		String_t* L_0 = (String_t*)__this->get__NextUrl_1();
		return (String_t*)L_0;
	}
}
