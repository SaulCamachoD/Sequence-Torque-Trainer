// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/BOP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBOP() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_AABolt_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOP();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_ABOP_NoRegister();
SEQUENCETORQUE_API UClass* Z_Construct_UClass_UBoltSequenceData_NoRegister();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature();
SEQUENCETORQUE_API UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SequenceTorque();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSequenceCompleted **************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSequenceCompleted constinit property declarations ******************
// ********** End Delegate FOnSequenceCompleted constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnSequenceCompleted__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSequenceCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSequenceCompleted)
{
	OnSequenceCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSequenceCompleted ****************************************************

// ********** Begin Delegate FOnWrongBoltClicked ***************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics
{
	struct _Script_SequenceTorque_eventOnWrongBoltClicked_Parms
	{
		AABolt* WrongBolt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnWrongBoltClicked constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WrongBolt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnWrongBoltClicked constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnWrongBoltClicked Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::NewProp_WrongBolt = { "WrongBolt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnWrongBoltClicked_Parms, WrongBolt), Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::NewProp_WrongBolt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnWrongBoltClicked Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnWrongBoltClicked__DelegateSignature", 	Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::_Script_SequenceTorque_eventOnWrongBoltClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::_Script_SequenceTorque_eventOnWrongBoltClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWrongBoltClicked_DelegateWrapper(const FMulticastScriptDelegate& OnWrongBoltClicked, AABolt* WrongBolt)
{
	struct _Script_SequenceTorque_eventOnWrongBoltClicked_Parms
	{
		AABolt* WrongBolt;
	};
	_Script_SequenceTorque_eventOnWrongBoltClicked_Parms Parms;
	Parms.WrongBolt=WrongBolt;
	OnWrongBoltClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnWrongBoltClicked *****************************************************

// ********** Begin Delegate FOnStepAdvanced *******************************************************
struct Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics
{
	struct _Script_SequenceTorque_eventOnStepAdvanced_Parms
	{
		int32 NewStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStepAdvanced constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStepAdvanced constinit property declarations *************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStepAdvanced Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::NewProp_NewStep = { "NewStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SequenceTorque_eventOnStepAdvanced_Parms, NewStep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::NewProp_NewStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStepAdvanced Property Definitions ************************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SequenceTorque, nullptr, "OnStepAdvanced__DelegateSignature", 	Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::_Script_SequenceTorque_eventOnStepAdvanced_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::_Script_SequenceTorque_eventOnStepAdvanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStepAdvanced_DelegateWrapper(const FMulticastScriptDelegate& OnStepAdvanced, int32 NewStep)
{
	struct _Script_SequenceTorque_eventOnStepAdvanced_Parms
	{
		int32 NewStep;
	};
	_Script_SequenceTorque_eventOnStepAdvanced_Parms Parms;
	Parms.NewStep=NewStep;
	OnStepAdvanced.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStepAdvanced *********************************************************

// ********** Begin Class ABOP Function GetCurrentExpectedBolt *************************************
struct Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics
{
	struct BOP_eventGetCurrentExpectedBolt_Parms
	{
		AABolt* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentExpectedBolt constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentExpectedBolt constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentExpectedBolt Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOP_eventGetCurrentExpectedBolt_Parms, ReturnValue), Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentExpectedBolt Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOP, nullptr, "GetCurrentExpectedBolt", 	Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::BOP_eventGetCurrentExpectedBolt_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::BOP_eventGetCurrentExpectedBolt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOP::execGetCurrentExpectedBolt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AABolt**)Z_Param__Result=P_THIS->GetCurrentExpectedBolt();
	P_NATIVE_END;
}
// ********** End Class ABOP Function GetCurrentExpectedBolt ***************************************

// ********** Begin Class ABOP Function GetCurrentStep *********************************************
struct Z_Construct_UFunction_ABOP_GetCurrentStep_Statics
{
	struct BOP_eventGetCurrentStep_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStep constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStep constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStep Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOP_eventGetCurrentStep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStep Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOP, nullptr, "GetCurrentStep", 	Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::BOP_eventGetCurrentStep_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::BOP_eventGetCurrentStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOP_GetCurrentStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOP_GetCurrentStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOP::execGetCurrentStep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStep();
	P_NATIVE_END;
}
// ********** End Class ABOP Function GetCurrentStep ***********************************************

// ********** Begin Class ABOP Function HandleBoltClicked ******************************************
struct Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics
{
	struct BOP_eventHandleBoltClicked_Parms
	{
		AABolt* ClickedBolt;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleBoltClicked constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedBolt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleBoltClicked constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleBoltClicked Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::NewProp_ClickedBolt = { "ClickedBolt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BOP_eventHandleBoltClicked_Parms, ClickedBolt), Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::NewProp_ClickedBolt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::PropPointers) < 2048);
// ********** End Function HandleBoltClicked Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOP, nullptr, "HandleBoltClicked", 	Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::BOP_eventHandleBoltClicked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::BOP_eventHandleBoltClicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOP_HandleBoltClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOP_HandleBoltClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOP::execHandleBoltClicked)
{
	P_GET_OBJECT(AABolt,Z_Param_ClickedBolt);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBoltClicked(Z_Param_ClickedBolt);
	P_NATIVE_END;
}
// ********** End Class ABOP Function HandleBoltClicked ********************************************

// ********** Begin Class ABOP Function IsSequenceCompleted ****************************************
struct Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics
{
	struct BOP_eventIsSequenceCompleted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSequenceCompleted constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSequenceCompleted constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSequenceCompleted Property Definitions ******************************
void Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BOP_eventIsSequenceCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BOP_eventIsSequenceCompleted_Parms), &Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::PropPointers) < 2048);
// ********** End Function IsSequenceCompleted Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOP, nullptr, "IsSequenceCompleted", 	Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::BOP_eventIsSequenceCompleted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::BOP_eventIsSequenceCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABOP_IsSequenceCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOP_IsSequenceCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOP::execIsSequenceCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSequenceCompleted();
	P_NATIVE_END;
}
// ********** End Class ABOP Function IsSequenceCompleted ******************************************

// ********** Begin Class ABOP Function ResetSequence **********************************************
struct Z_Construct_UFunction_ABOP_ResetSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BOP" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetSequence constinit property declarations *************************
// ********** End Function ResetSequence constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABOP_ResetSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABOP, nullptr, "ResetSequence", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABOP_ResetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABOP_ResetSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABOP_ResetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABOP_ResetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABOP::execResetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSequence();
	P_NATIVE_END;
}
// ********** End Class ABOP Function ResetSequence ************************************************

// ********** Begin Class ABOP *********************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABOP;
UClass* ABOP::GetPrivateStaticClass()
{
	using TClass = ABOP;
	if (!Z_Registration_Info_UClass_ABOP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BOP"),
			Z_Registration_Info_UClass_ABOP.InnerSingleton,
			StaticRegisterNativesABOP,
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
	return Z_Registration_Info_UClass_ABOP.InnerSingleton;
}
UClass* Z_Construct_UClass_ABOP_NoRegister()
{
	return ABOP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABOP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/BOP.h" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceData_MetaData[] = {
		{ "Category", "BOP|Config" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoltClass_MetaData[] = {
		{ "Category", "BOP|Config" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSequenceCompleted_MetaData[] = {
		{ "Category", "BOP|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Delegates =====\n" },
#endif
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Delegates =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWrongBoltClicked_MetaData[] = {
		{ "Category", "BOP|Events" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStepAdvanced_MetaData[] = {
		{ "Category", "BOP|Events" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BOPMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedBolts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/BOP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABOP constinit property declarations *************************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BoltClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSequenceCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWrongBoltClicked;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStepAdvanced;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BOPMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedBolts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedBolts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABOP constinit property declarations ***************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentExpectedBolt"), .Pointer = &ABOP::execGetCurrentExpectedBolt },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStep"), .Pointer = &ABOP::execGetCurrentStep },
		{ .NameUTF8 = UTF8TEXT("HandleBoltClicked"), .Pointer = &ABOP::execHandleBoltClicked },
		{ .NameUTF8 = UTF8TEXT("IsSequenceCompleted"), .Pointer = &ABOP::execIsSequenceCompleted },
		{ .NameUTF8 = UTF8TEXT("ResetSequence"), .Pointer = &ABOP::execResetSequence },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABOP_GetCurrentExpectedBolt, "GetCurrentExpectedBolt" }, // 35400284
		{ &Z_Construct_UFunction_ABOP_GetCurrentStep, "GetCurrentStep" }, // 3578920195
		{ &Z_Construct_UFunction_ABOP_HandleBoltClicked, "HandleBoltClicked" }, // 139932379
		{ &Z_Construct_UFunction_ABOP_IsSequenceCompleted, "IsSequenceCompleted" }, // 409316659
		{ &Z_Construct_UFunction_ABOP_ResetSequence, "ResetSequence" }, // 2683035646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABOP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABOP_Statics

// ********** Begin Class ABOP Property Definitions ************************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_SequenceData = { "SequenceData", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, SequenceData), Z_Construct_UClass_UBoltSequenceData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceData_MetaData), NewProp_SequenceData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_BoltClass = { "BoltClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, BoltClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoltClass_MetaData), NewProp_BoltClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_OnSequenceCompleted = { "OnSequenceCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, OnSequenceCompleted), Z_Construct_UDelegateFunction_SequenceTorque_OnSequenceCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSequenceCompleted_MetaData), NewProp_OnSequenceCompleted_MetaData) }; // 3763103343
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_OnWrongBoltClicked = { "OnWrongBoltClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, OnWrongBoltClicked), Z_Construct_UDelegateFunction_SequenceTorque_OnWrongBoltClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWrongBoltClicked_MetaData), NewProp_OnWrongBoltClicked_MetaData) }; // 2046176686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_OnStepAdvanced = { "OnStepAdvanced", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, OnStepAdvanced), Z_Construct_UDelegateFunction_SequenceTorque_OnStepAdvanced__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStepAdvanced_MetaData), NewProp_OnStepAdvanced_MetaData) }; // 2154756116
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootScene_MetaData), NewProp_RootScene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_BOPMesh = { "BOPMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, BOPMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BOPMesh_MetaData), NewProp_BOPMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_SpawnedBolts_Inner = { "SpawnedBolts", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AABolt_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABOP_Statics::NewProp_SpawnedBolts = { "SpawnedBolts", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABOP, SpawnedBolts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedBolts_MetaData), NewProp_SpawnedBolts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABOP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_SequenceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_BoltClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_OnSequenceCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_OnWrongBoltClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_OnStepAdvanced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_RootScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_BOPMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_SpawnedBolts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABOP_Statics::NewProp_SpawnedBolts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOP_Statics::PropPointers) < 2048);
// ********** End Class ABOP Property Definitions **************************************************
UObject* (*const Z_Construct_UClass_ABOP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SequenceTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABOP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABOP_Statics::ClassParams = {
	&ABOP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABOP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABOP_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABOP_Statics::Class_MetaDataParams), Z_Construct_UClass_ABOP_Statics::Class_MetaDataParams)
};
void ABOP::StaticRegisterNativesABOP()
{
	UClass* Class = ABOP::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ABOP_Statics::Funcs));
}
UClass* Z_Construct_UClass_ABOP()
{
	if (!Z_Registration_Info_UClass_ABOP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABOP.OuterSingleton, Z_Construct_UClass_ABOP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABOP.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABOP);
ABOP::~ABOP() {}
// ********** End Class ABOP ***********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h__Script_SequenceTorque_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABOP, ABOP::StaticClass, TEXT("ABOP"), &Z_Registration_Info_UClass_ABOP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABOP), 2743268791U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h__Script_SequenceTorque_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h__Script_SequenceTorque_2417266193{
	TEXT("/Script/SequenceTorque"),
	Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h__Script_SequenceTorque_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngineGames_TrainBeyondTest_Sequence_Torque_Training_SequenceTorque_Source_SequenceTorque_Public_Gameplay_BOP_h__Script_SequenceTorque_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
