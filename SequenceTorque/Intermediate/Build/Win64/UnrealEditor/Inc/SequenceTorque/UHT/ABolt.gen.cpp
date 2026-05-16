// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/ABolt.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeABolt() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_AABolt();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_AABolt_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
SEQUENCETORQUE_API UEnum* Z_Construct_UEnum_SequenceTorque_EBoltState();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBoltClicked ********************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics
{
	struct _Script_SequenceTorque_eventOnBoltClicked_Parms
	{
		AABolt* ClickedBolt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnBoltClicked constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedBolt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnBoltClicked constinit property declarations **************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnBoltClicked Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::NewProp_ClickedBolt = { "ClickedBolt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnBoltClicked_Parms, ClickedBolt), Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::NewProp_ClickedBolt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnBoltClicked Property Definitions *************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnBoltClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::_Script_SequenceTorque_eventOnBoltClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::_Script_SequenceTorque_eventOnBoltClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBoltClicked_DelegateWrapper(const FMulticastScriptDelegate& OnBoltClicked, AABolt* ClickedBolt)
{
	struct _Script_SequenceTorque_eventOnBoltClicked_Parms
	{
		AABolt* ClickedBolt;
	};
	_Script_SequenceTorque_eventOnBoltClicked_Parms Parms;
	Parms.ClickedBolt=ClickedBolt;
	OnBoltClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBoltClicked **********************************************************

// ********** Begin Delegate FOnBoltTightened ******************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnBoltTightened constinit property declarations **********************
// ********** End Delegate FOnBoltTightened constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnBoltTightened__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBoltTightened_DelegateWrapper(const FMulticastScriptDelegate& OnBoltTightened)
{
	OnBoltTightened.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBoltTightened ********************************************************

// ********** Begin Enum EBoltState ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoltState;
static UEnum* EBoltState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBoltState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBoltState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SequenceTorque_EBoltState, (UObject*)Z_Construct_UPackage__Script_SequenceTorque(), TEXT("EBoltState"));
	}
	return Z_Registration_Info_UEnum_EBoltState.OuterSingleton;
}
template<> SEQUENCETORQUE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoltState>()
{
	return EBoltState_StaticEnum();
}
struct Z_Construct_UEnum_SequenceTorque_EBoltState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EBoltState::Active" },
		{ "BlueprintType", "true" },
		{ "Error.Name", "EBoltState::Error" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
		{ "Pending.Name", "EBoltState::Pending" },
		{ "Tightened.Name", "EBoltState::Tightened" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBoltState::Pending", (int64)EBoltState::Pending },
		{ "EBoltState::Active", (int64)EBoltState::Active },
		{ "EBoltState::Tightened", (int64)EBoltState::Tightened },
		{ "EBoltState::Error", (int64)EBoltState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SequenceTorque_EBoltState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SequenceTorque_EBoltState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque,
	nullptr,
	"EBoltState",
	"EBoltState",
	Z_Construct_UEnum_SequenceTorque_EBoltState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SequenceTorque_EBoltState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SequenceTorque_EBoltState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SequenceTorque_EBoltState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SequenceTorque_EBoltState()
{
	if (!Z_Registration_Info_UEnum_EBoltState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoltState.InnerSingleton, Z_Construct_UEnum_SequenceTorque_EBoltState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBoltState.InnerSingleton;
}
// ********** End Enum EBoltState ******************************************************************

// ********** Begin Class AABolt Function ResetBolt ************************************************
struct Z_Construct_UFunction_AABolt_ResetBolt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bolt" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetBolt constinit property declarations *****************************
// ********** End Function ResetBolt constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABolt_ResetBolt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AABolt, nullptr, "ResetBolt", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABolt_ResetBolt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABolt_ResetBolt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AABolt_ResetBolt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABolt_ResetBolt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABolt::execResetBolt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetBolt();
	P_NATIVE_END;
}
// ********** End Class AABolt Function ResetBolt **************************************************

// ********** Begin Class AABolt Function SetHighlighted *******************************************
struct Z_Construct_UFunction_AABolt_SetHighlighted_Statics
{
	struct ABolt_eventSetHighlighted_Parms
	{
		bool bHighlighted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bolt" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHighlighted constinit property declarations ************************
	static void NewProp_bHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHighlighted constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHighlighted Property Definitions ***********************************
void Z_Construct_UFunction_AABolt_SetHighlighted_Statics::NewProp_bHighlighted_SetBit(void* Obj)
{
	((ABolt_eventSetHighlighted_Parms*)Obj)->bHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABolt_SetHighlighted_Statics::NewProp_bHighlighted = { "bHighlighted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABolt_eventSetHighlighted_Parms), &Z_Construct_UFunction_AABolt_SetHighlighted_Statics::NewProp_bHighlighted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABolt_SetHighlighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABolt_SetHighlighted_Statics::NewProp_bHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABolt_SetHighlighted_Statics::PropPointers) < 2048);
// ********** End Function SetHighlighted Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABolt_SetHighlighted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AABolt, nullptr, "SetHighlighted", 	Z_Construct_UFunction_AABolt_SetHighlighted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AABolt_SetHighlighted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AABolt_SetHighlighted_Statics::ABolt_eventSetHighlighted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABolt_SetHighlighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABolt_SetHighlighted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AABolt_SetHighlighted_Statics::ABolt_eventSetHighlighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AABolt_SetHighlighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABolt_SetHighlighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABolt::execSetHighlighted)
{
	P_GET_UBOOL(Z_Param_bHighlighted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighlighted(Z_Param_bHighlighted);
	P_NATIVE_END;
}
// ********** End Class AABolt Function SetHighlighted *********************************************

// ********** Begin Class AABolt Function ShowError ************************************************
struct Z_Construct_UFunction_AABolt_ShowError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bolt" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowError constinit property declarations *****************************
// ********** End Function ShowError constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABolt_ShowError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AABolt, nullptr, "ShowError", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABolt_ShowError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABolt_ShowError_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AABolt_ShowError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABolt_ShowError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABolt::execShowError)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowError();
	P_NATIVE_END;
}
// ********** End Class AABolt Function ShowError **************************************************

// ********** Begin Class AABolt Function Tighten **************************************************
struct Z_Construct_UFunction_AABolt_Tighten_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bolt" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Tighten constinit property declarations *******************************
// ********** End Function Tighten constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABolt_Tighten_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AABolt, nullptr, "Tighten", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABolt_Tighten_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABolt_Tighten_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AABolt_Tighten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABolt_Tighten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AABolt::execTighten)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Tighten();
	P_NATIVE_END;
}
// ********** End Class AABolt Function Tighten ****************************************************

// ********** Begin Class AABolt *******************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AABolt;
UClass* AABolt::GetPrivateStaticClass()
{
	using TClass = AABolt;
	if (!Z_Registration_Info_UClass_AABolt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ABolt"),
			Z_Registration_Info_UClass_AABolt.InnerSingleton,
			StaticRegisterNativesAABolt,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AABolt.InnerSingleton;
}
UClass* Z_Construct_UClass_AABolt_NoRegister()
{
	return AABolt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AABolt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/ABolt.h" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TighteningOrder_MetaData[] = {
		{ "Category", "Bolt|Config" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Bolt|State" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBoltClicked_MetaData[] = {
		{ "Category", "Bolt|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Delegates =====\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Delegates =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBoltTightened_MetaData[] = {
		{ "Category", "Bolt|Events" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoltMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NutMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberWidget_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/ABolt.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AABolt constinit property declarations ***********************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TighteningOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBoltClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBoltTightened;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoltMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NutMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NumberWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AABolt constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ResetBolt"), .Pointer = &AABolt::execResetBolt },
		{ .NameUTF8 = UTF8TEXT("SetHighlighted"), .Pointer = &AABolt::execSetHighlighted },
		{ .NameUTF8 = UTF8TEXT("ShowError"), .Pointer = &AABolt::execShowError },
		{ .NameUTF8 = UTF8TEXT("Tighten"), .Pointer = &AABolt::execTighten },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AABolt_ResetBolt, "ResetBolt" }, // 752739580
		{ &Z_Construct_UFunction_AABolt_SetHighlighted, "SetHighlighted" }, // 1829354614
		{ &Z_Construct_UFunction_AABolt_ShowError, "ShowError" }, // 136329046
		{ &Z_Construct_UFunction_AABolt_Tighten, "Tighten" }, // 289462871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABolt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AABolt_Statics

// ********** Begin Class AABolt Property Definitions **********************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_TighteningOrder = { "TighteningOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, TighteningOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TighteningOrder_MetaData), NewProp_TighteningOrder_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, CurrentState), Z_Construct_UEnum_SequenceTorque_EBoltState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2537380881
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_OnBoltClicked = { "OnBoltClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, OnBoltClicked), Z_Construct_UDelegateFunction_SequenceTorque_OnBoltClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBoltClicked_MetaData), NewProp_OnBoltClicked_MetaData) }; // 674698215
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_OnBoltTightened = { "OnBoltTightened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, OnBoltTightened), Z_Construct_UDelegateFunction_SequenceTorque_OnBoltTightened__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBoltTightened_MetaData), NewProp_OnBoltTightened_MetaData) }; // 3655926747
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_BoltMesh = { "BoltMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, BoltMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoltMesh_MetaData), NewProp_BoltMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_NutMesh = { "NutMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, NutMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NutMesh_MetaData), NewProp_NutMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_InteractionSphere = { "InteractionSphere", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, InteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionSphere_MetaData), NewProp_InteractionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABolt_Statics::NewProp_NumberWidget = { "NumberWidget", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABolt, NumberWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberWidget_MetaData), NewProp_NumberWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABolt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_TighteningOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_OnBoltClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_OnBoltTightened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_BoltMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_NutMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_InteractionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABolt_Statics::NewProp_NumberWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABolt_Statics::PropPointers) < 2048);
// ********** End Class AABolt Property Definitions ************************************************
UObject* (*const Z_Construct_UClass_AABolt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SequenceTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABolt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABolt_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AABolt, IInteractableInterface), false },  // 2687339701
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AABolt_Statics::ClassParams = {
	&AABolt::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AABolt_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AABolt_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABolt_Statics::Class_MetaDataParams), Z_Construct_UClass_AABolt_Statics::Class_MetaDataParams)
};
void AABolt::StaticRegisterNativesAABolt()
{
	UClass* Class = AABolt::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AABolt_Statics::Funcs));
}
UClass* Z_Construct_UClass_AABolt()
{
	if (!Z_Registration_Info_UClass_AABolt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABolt.OuterSingleton, Z_Construct_UClass_AABolt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AABolt.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AABolt);
AABolt::~AABolt() {}
// ********** End Class AABolt *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBoltState_StaticEnum, TEXT("EBoltState"), &Z_Registration_Info_UEnum_EBoltState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2537380881U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AABolt, AABolt::StaticClass, TEXT("AABolt"), &Z_Registration_Info_UClass_AABolt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABolt), 3006708372U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_2604491096{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_ABolt_h__Script_SequenceTorque_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
